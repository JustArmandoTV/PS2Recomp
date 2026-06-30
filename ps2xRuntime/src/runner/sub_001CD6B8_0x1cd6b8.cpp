#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD6B8
// Address: 0x1cd6b8 - 0x1cd7a8
void sub_001CD6B8_0x1cd6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD6B8_0x1cd6b8");
#endif

    switch (ctx->pc) {
        case 0x1cd748u: goto label_1cd748;
        default: break;
    }

    ctx->pc = 0x1cd6b8u;

    // 0x1cd6b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd6bc: 0x2402ffe2  addiu       $v0, $zero, -0x1E
    ctx->pc = 0x1cd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1cd6c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cd6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cd6c4: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x1cd6c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x1cd6c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cd6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cd6cc: 0x2692a70c  addiu       $s2, $s4, -0x58F4
    ctx->pc = 0x1cd6ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944524));
    // 0x1cd6d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd6d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd6d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd6dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cd6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cd6e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cd6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cd6e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1cd6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd6e8: 0x80a30ab7  lb          $v1, 0xAB7($a1)
    ctx->pc = 0x1cd6e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2743)));
    // 0x1cd6ec: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CD6ECu;
    {
        const bool branch_taken_0x1cd6ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6ECu;
            // 0x1cd6f0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6ec) {
            ctx->pc = 0x1CD788u;
            goto label_1cd788;
        }
    }
    ctx->pc = 0x1CD6F4u;
    // 0x1cd6f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd6f8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1cd6f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd6fc: 0xa0a20ab7  sb          $v0, 0xAB7($a1)
    ctx->pc = 0x1cd6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2743), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd700: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1cd700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cd704: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cd704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd708: 0x90620ab8  lbu         $v0, 0xAB8($v1)
    ctx->pc = 0x1cd708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1cd70c: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x1cd70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
    // 0x1cd710: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD710u;
    {
        const bool branch_taken_0x1cd710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD710u;
            // 0x1cd714: 0x82300a  movz        $a2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd710) {
            ctx->pc = 0x1CD778u;
            goto label_1cd778;
        }
    }
    ctx->pc = 0x1CD718u;
    // 0x1cd718: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x1cd718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cd71c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CD71Cu;
    {
        const bool branch_taken_0x1cd71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD71Cu;
            // 0x1cd720: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd71c) {
            ctx->pc = 0x1CD77Cu;
            goto label_1cd77c;
        }
    }
    ctx->pc = 0x1CD724u;
    // 0x1cd724: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x1cd724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1cd728: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cd728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd72c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd730: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1cd730u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cd734: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd738: 0x24061f00  addiu       $a2, $zero, 0x1F00
    ctx->pc = 0x1cd738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7936));
    // 0x1cd73c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cd73cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd740: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD740u;
    SET_GPR_U32(ctx, 31, 0x1CD748u);
    ctx->pc = 0x1CD744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD740u;
            // 0x1cd744: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD748u; }
        if (ctx->pc != 0x1CD748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD748u; }
        if (ctx->pc != 0x1CD748u) { return; }
    }
    ctx->pc = 0x1CD748u;
label_1cd748:
    // 0x1cd748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd74c: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CD74Cu;
    {
        const bool branch_taken_0x1cd74c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD74Cu;
            // 0x1cd750: 0x8e83a70c  lw          $v1, -0x58F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd74c) {
            ctx->pc = 0x1CD780u;
            goto label_1cd780;
        }
    }
    ctx->pc = 0x1CD754u;
    // 0x1cd754: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1cd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd758: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cd758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd75c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1cd75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1cd760: 0xa0440acc  sb          $a0, 0xACC($v0)
    ctx->pc = 0x1cd760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2764), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd764: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cd764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd768: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cd76c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD76Cu;
    {
        const bool branch_taken_0x1cd76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD76Cu;
            // 0x1cd770: 0xa0730b8b  sb          $s3, 0xB8B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2955), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd76c) {
            ctx->pc = 0x1CD77Cu;
            goto label_1cd77c;
        }
    }
    ctx->pc = 0x1CD774u;
    // 0x1cd774: 0x0  nop
    ctx->pc = 0x1cd774u;
    // NOP
label_1cd778:
    // 0x1cd778: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1cd778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cd77c:
    // 0x1cd77c: 0x8e83a70c  lw          $v1, -0x58F4($s4)
    ctx->pc = 0x1cd77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944524)));
label_1cd780:
    // 0x1cd780: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1cd780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd784: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cd784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cd788:
    // 0x1cd788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd78c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd78cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd790: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cd790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd794: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cd794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cd798: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cd798u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd79c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cd79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cd7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7A0u;
            // 0x1cd7a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD7A8u;
}
