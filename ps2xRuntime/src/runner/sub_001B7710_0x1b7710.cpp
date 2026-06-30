#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7710
// Address: 0x1b7710 - 0x1b7a28
void sub_001B7710_0x1b7710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7710_0x1b7710");
#endif

    switch (ctx->pc) {
        case 0x1b77c0u: goto label_1b77c0;
        case 0x1b77f8u: goto label_1b77f8;
        case 0x1b7830u: goto label_1b7830;
        default: break;
    }

    ctx->pc = 0x1b7710u;

label_1b7710:
    // 0x1b7710: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x1b7710u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b7714: 0x8cac000c  lw          $t4, 0xC($a1)
    ctx->pc = 0x1b7714u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b7718: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x1b7718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1b771c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1b771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b7720: 0x8cab0014  lw          $t3, 0x14($a1)
    ctx->pc = 0x1b7720u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b7724: 0x1846018  mult        $t4, $t4, $a0
    ctx->pc = 0x1b7724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1b7728: 0x84ad001e  lh          $t5, 0x1E($a1)
    ctx->pc = 0x1b7728u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x1b772c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x1b772cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1b7730: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x1b7730u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1b7734: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x1b7734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1b7738: 0xb1940  sll         $v1, $t3, 5
    ctx->pc = 0x1b7738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x1b773c: 0xd2940  sll         $a1, $t5, 5
    ctx->pc = 0x1b773cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x1b7740: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1b7740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1b7744: 0x1244818  mult        $t1, $t1, $a0
    ctx->pc = 0x1b7744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1b7748: 0xad2823  subu        $a1, $a1, $t5
    ctx->pc = 0x1b7748u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1b774c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b774cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b7750: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x1b7750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1b7754: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x1b7754u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1b7758: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1b7758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1b775c: 0x10c4023  subu        $t0, $t0, $t4
    ctx->pc = 0x1b775cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1b7760: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b7760u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b7764: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b7764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7768: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x1b7768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1b776c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1b776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1b7770: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b7770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b7774: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1b7774u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b7778: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b7778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b777c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1b777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1b7780: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b7780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b7784: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1b7784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1b7788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b778c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1b778cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1b7790: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x1b7790u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x1b7794: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7794u;
            // 0x1b7798: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B779Cu;
    // 0x1b779c: 0x0  nop
    ctx->pc = 0x1b779cu;
    // NOP
    // 0x1b77a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b77a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b77a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b77a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b77a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b77a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77ac: 0x24045dc0  addiu       $a0, $zero, 0x5DC0
    ctx->pc = 0x1b77acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
    // 0x1b77b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b77b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b77b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b77b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b77b8: 0xc06ddc4  jal         func_1B7710
    ctx->pc = 0x1B77B8u;
    SET_GPR_U32(ctx, 31, 0x1B77C0u);
    ctx->pc = 0x1B77BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77B8u;
            // 0x1b77bc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7710u;
    goto label_1b7710;
    ctx->pc = 0x1B77C0u;
label_1b77c0:
    // 0x1b77c0: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1b77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1b77c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b77c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b77c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b77c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b77cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b77ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b77d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B77D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B77D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77D0u;
            // 0x1b77d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B77D8u;
    // 0x1b77d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b77d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b77dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b77dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b77e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b77e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77e4: 0x24047530  addiu       $a0, $zero, 0x7530
    ctx->pc = 0x1b77e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x1b77e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b77e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b77ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b77ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b77f0: 0xc06ddc4  jal         func_1B7710
    ctx->pc = 0x1B77F0u;
    SET_GPR_U32(ctx, 31, 0x1B77F8u);
    ctx->pc = 0x1B77F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77F0u;
            // 0x1b77f4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7710u;
    goto label_1b7710;
    ctx->pc = 0x1B77F8u;
label_1b77f8:
    // 0x1b77f8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1b77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1b77fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b77fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7808: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B780Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7808u;
            // 0x1b780c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7810u;
    // 0x1b7810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7818: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b781c: 0x3404ea60  ori         $a0, $zero, 0xEA60
    ctx->pc = 0x1b781cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x1b7820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7828: 0xc06ddc4  jal         func_1B7710
    ctx->pc = 0x1B7828u;
    SET_GPR_U32(ctx, 31, 0x1B7830u);
    ctx->pc = 0x1B782Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7828u;
            // 0x1b782c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7710u;
    goto label_1b7710;
    ctx->pc = 0x1B7830u;
label_1b7830:
    // 0x1b7830: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1b7830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1b7834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b783c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b783cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7840: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7840u;
            // 0x1b7844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7848u;
    // 0x1b7848: 0x8ca8000c  lw          $t0, 0xC($a1)
    ctx->pc = 0x1b7848u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b784c: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x1b784cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b7850: 0x8cac0010  lw          $t4, 0x10($a1)
    ctx->pc = 0x1b7850u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1b7854: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b7854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b7858: 0x10b001a  div         $zero, $t0, $t3
    ctx->pc = 0x1b7858u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b785c: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x1b785cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b7860: 0x34425114  ori         $v0, $v0, 0x5114
    ctx->pc = 0x1b7860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20756);
    // 0x1b7864: 0x2409059e  addiu       $t1, $zero, 0x59E
    ctx->pc = 0x1b7864u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1438));
    // 0x1b7868: 0xc1840  sll         $v1, $t4, 1
    ctx->pc = 0x1b7868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1b786c: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B786Cu;
    {
        const bool branch_taken_0x1b786c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b786c) {
            ctx->pc = 0x1B7870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B786Cu;
            // 0x1b7870: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7874u;
            goto label_1b7874;
        }
    }
    ctx->pc = 0x1B7874u;
label_1b7874:
    // 0x1b7874: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1b7874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1b7878: 0x8cac0014  lw          $t4, 0x14($a1)
    ctx->pc = 0x1b7878u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b787c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b787cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7880: 0x6812  mflo        $t5
    ctx->pc = 0x1b7880u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x1b7884: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x1b7884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1b7888: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x1b7888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b788c: 0x8ca90018  lw          $t1, 0x18($a1)
    ctx->pc = 0x1b788cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b7890: 0x84a2001e  lh          $v0, 0x1E($a1)
    ctx->pc = 0x1b7890u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x1b7894: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x1b7894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1b7898: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b7898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b789c: 0x1896021  addu        $t4, $t4, $t1
    ctx->pc = 0x1b789cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x1b78a0: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x1b78a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b78a4: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x1b78a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1b78a8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1b78a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b78ac: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1b78acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1b78b0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b78b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b78b4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1b78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1b78b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b78b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b78bc: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1b78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b78c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b78c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b78c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b78c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b78cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b78d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b78d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b78d8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1b78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1b78dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B78DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B78E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78DCu;
            // 0x1b78e0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B78E4u;
    // 0x1b78e4: 0x0  nop
    ctx->pc = 0x1b78e4u;
    // NOP
    // 0x1b78e8: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x1b78e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b78ec: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x1b78ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b78f0: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x1b78f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b78f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b78f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b78f8: 0x12b001a  div         $zero, $t1, $t3
    ctx->pc = 0x1b78f8u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b78fc: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x1b78fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1b7900: 0x3442a574  ori         $v0, $v0, 0xA574
    ctx->pc = 0x1b7900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42356);
    // 0x1b7904: 0x24030706  addiu       $v1, $zero, 0x706
    ctx->pc = 0x1b7904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1798));
    // 0x1b7908: 0x71234818  mult1       $t1, $t1, $v1
    ctx->pc = 0x1b7908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1b790c: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x1b790cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1b7910: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B7910u;
    {
        const bool branch_taken_0x1b7910 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7910) {
            ctx->pc = 0x1B7914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7910u;
            // 0x1b7914: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7918u;
            goto label_1b7918;
        }
    }
    ctx->pc = 0x1B7918u;
label_1b7918:
    // 0x1b7918: 0x10a4023  subu        $t0, $t0, $t2
    ctx->pc = 0x1b7918u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1b791c: 0x8cac0014  lw          $t4, 0x14($a1)
    ctx->pc = 0x1b791cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b7920: 0x8caa0018  lw          $t2, 0x18($a1)
    ctx->pc = 0x1b7920u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b7924: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x1b7924u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x1b7928: 0x7012  mflo        $t6
    ctx->pc = 0x1b7928u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x1b792c: 0x1a26818  mult        $t5, $t5, $v0
    ctx->pc = 0x1b792cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1b7930: 0x84a2001e  lh          $v0, 0x1E($a1)
    ctx->pc = 0x1b7930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x1b7934: 0x10e4021  addu        $t0, $t0, $t6
    ctx->pc = 0x1b7934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1b7938: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1b7938u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1b793c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b793cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b7940: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x1b7940u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x1b7944: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b7944u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7948: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x1b7948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x1b794c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b794cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7950: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x1b7950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1b7954: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b7954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7958: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x1b7958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1b795c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b795cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7960: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1b7960u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1b7964: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b7964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b7968: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1b7968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1b796c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b796cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b7970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7974: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1b7974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1b7978: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7978u;
            // 0x1b797c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7980u;
    // 0x1b7980: 0x8ca8000c  lw          $t0, 0xC($a1)
    ctx->pc = 0x1b7980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b7984: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x1b7984u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b7988: 0x8cab0010  lw          $t3, 0x10($a1)
    ctx->pc = 0x1b7988u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1b798c: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x1b798cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x1b7990: 0x10c001a  div         $zero, $t0, $t4
    ctx->pc = 0x1b7990u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b7994: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x1b7994u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b7998: 0x35294b54  ori         $t1, $t1, 0x4B54
    ctx->pc = 0x1b7998u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)19284);
    // 0x1b799c: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1b799cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1b79a0: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x1b79a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1b79a4: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1b79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1b79a8: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x1b79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1b79ac: 0x8cab0018  lw          $t3, 0x18($a1)
    ctx->pc = 0x1b79acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b79b0: 0x24200  sll         $t0, $v0, 8
    ctx->pc = 0x1b79b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1b79b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b79b8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1b79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1b79bc: 0x84a8001e  lh          $t0, 0x1E($a1)
    ctx->pc = 0x1b79bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x1b79c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b79c4: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B79C4u;
    {
        const bool branch_taken_0x1b79c4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b79c4) {
            ctx->pc = 0x1B79C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79C4u;
            // 0x1b79c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B79CCu;
            goto label_1b79cc;
        }
    }
    ctx->pc = 0x1B79CCu;
label_1b79cc:
    // 0x1b79cc: 0x6812  mflo        $t5
    ctx->pc = 0x1b79ccu;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x1b79d0: 0x1495018  mult        $t2, $t2, $t1
    ctx->pc = 0x1b79d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1b79d4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x1b79d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1b79d8: 0x8ca90014  lw          $t1, 0x14($a1)
    ctx->pc = 0x1b79d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b79dc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b79e0: 0x82940  sll         $a1, $t0, 5
    ctx->pc = 0x1b79e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1b79e4: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1b79e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1b79e8: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1b79e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1b79ec: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1b79ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1b79f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b79f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b79f4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1b79f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1b79f8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1b79f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1b79fc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b79fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b7a00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b7a00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b7a04: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1b7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b7a08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7a0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b7a10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7a14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b7a18: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b7a1c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1b7a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1b7a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A20u;
            // 0x1b7a24: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7A28u;
}
