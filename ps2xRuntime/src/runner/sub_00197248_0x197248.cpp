#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197248
// Address: 0x197248 - 0x1973c0
void sub_00197248_0x197248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197248_0x197248");
#endif

    switch (ctx->pc) {
        case 0x19727cu: goto label_19727c;
        case 0x197284u: goto label_197284;
        case 0x1972a4u: goto label_1972a4;
        case 0x1972c0u: goto label_1972c0;
        case 0x1972dcu: goto label_1972dc;
        case 0x1972f0u: goto label_1972f0;
        case 0x19730cu: goto label_19730c;
        case 0x197324u: goto label_197324;
        case 0x197364u: goto label_197364;
        case 0x197370u: goto label_197370;
        case 0x197388u: goto label_197388;
        default: break;
    }

    ctx->pc = 0x197248u;

    // 0x197248: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x197248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19724c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x197250: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x197250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197254: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x197254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x197258: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x197258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x19725c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x197260: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197264: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x197264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x197268: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x197268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x19726c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x19726cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x197270: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x197270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x197274: 0xc065be6  jal         func_196F98
    ctx->pc = 0x197274u;
    SET_GPR_U32(ctx, 31, 0x19727Cu);
    ctx->pc = 0x197278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197274u;
            // 0x197278: 0x2655000a  addiu       $s5, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196F98u;
    if (runtime->hasFunction(0x196F98u)) {
        auto targetFn = runtime->lookupFunction(0x196F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19727Cu; }
        if (ctx->pc != 0x19727Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196F98_0x196f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19727Cu; }
        if (ctx->pc != 0x19727Cu) { return; }
    }
    ctx->pc = 0x19727Cu;
label_19727c:
    // 0x19727c: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x19727Cu;
    SET_GPR_U32(ctx, 31, 0x197284u);
    ctx->pc = 0x197280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19727Cu;
            // 0x197280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197284u; }
        if (ctx->pc != 0x197284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197284u; }
        if (ctx->pc != 0x197284u) { return; }
    }
    ctx->pc = 0x197284u;
label_197284:
    // 0x197284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197288: 0x27b40002  addiu       $s4, $sp, 0x2
    ctx->pc = 0x197288u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x19728c: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x19728cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x197290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197294: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x197294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197298: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x197298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19729c: 0xc065bf6  jal         func_196FD8
    ctx->pc = 0x19729Cu;
    SET_GPR_U32(ctx, 31, 0x1972A4u);
    ctx->pc = 0x1972A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19729Cu;
            // 0x1972a0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196FD8u;
    if (runtime->hasFunction(0x196FD8u)) {
        auto targetFn = runtime->lookupFunction(0x196FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972A4u; }
        if (ctx->pc != 0x1972A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196FD8_0x196fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972A4u; }
        if (ctx->pc != 0x1972A4u) { return; }
    }
    ctx->pc = 0x1972A4u;
label_1972a4:
    // 0x1972a4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1972a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972a8: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x1972a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1972ac: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x1972acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1972b0: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x1972b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1972b4: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x1972b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1972b8: 0xa6430008  sh          $v1, 0x8($s2)
    ctx->pc = 0x1972b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1972bc: 0xa6440004  sh          $a0, 0x4($s2)
    ctx->pc = 0x1972bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
label_1972c0:
    // 0x1972c0: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1972c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1972c4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1972c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1972c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1972c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1972ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1972d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972d4: 0xc065c80  jal         func_197200
    ctx->pc = 0x1972D4u;
    SET_GPR_U32(ctx, 31, 0x1972DCu);
    ctx->pc = 0x1972D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1972D4u;
            // 0x1972d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197200u;
    if (runtime->hasFunction(0x197200u)) {
        auto targetFn = runtime->lookupFunction(0x197200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972DCu; }
        if (ctx->pc != 0x1972DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197200_0x197200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972DCu; }
        if (ctx->pc != 0x1972DCu) { return; }
    }
    ctx->pc = 0x1972DCu;
label_1972dc:
    // 0x1972dc: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x1972dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1972e0: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1972E0u;
    {
        const bool branch_taken_0x1972e0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1972E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1972E0u;
            // 0x1972e4: 0xa6440004  sh          $a0, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972e0) {
            ctx->pc = 0x1972C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1972c0;
        }
    }
    ctx->pc = 0x1972E8u;
    // 0x1972e8: 0x26b00040  addiu       $s0, $s5, 0x40
    ctx->pc = 0x1972e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1972ec: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1972ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1972f0:
    // 0x1972f0: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1972f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1972f4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1972f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1972f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1972f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1972fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197300: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x197300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197304: 0xc065c80  jal         func_197200
    ctx->pc = 0x197304u;
    SET_GPR_U32(ctx, 31, 0x19730Cu);
    ctx->pc = 0x197308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197304u;
            // 0x197308: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197200u;
    if (runtime->hasFunction(0x197200u)) {
        auto targetFn = runtime->lookupFunction(0x197200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19730Cu; }
        if (ctx->pc != 0x19730Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197200_0x197200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19730Cu; }
        if (ctx->pc != 0x19730Cu) { return; }
    }
    ctx->pc = 0x19730Cu;
label_19730c:
    // 0x19730c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x19730cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197310: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x197310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197314: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x197314u;
    {
        const bool branch_taken_0x197314 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x197318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197314u;
            // 0x197318: 0xa6440004  sh          $a0, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197314) {
            ctx->pc = 0x1972F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1972f0;
        }
    }
    ctx->pc = 0x19731Cu;
    // 0x19731c: 0xc065bee  jal         func_196FB8
    ctx->pc = 0x19731Cu;
    SET_GPR_U32(ctx, 31, 0x197324u);
    ctx->pc = 0x196FB8u;
    if (runtime->hasFunction(0x196FB8u)) {
        auto targetFn = runtime->lookupFunction(0x196FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197324u; }
        if (ctx->pc != 0x197324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196FB8_0x196fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197324u; }
        if (ctx->pc != 0x197324u) { return; }
    }
    ctx->pc = 0x197324u;
label_197324:
    // 0x197324: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x197324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197328: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x197328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19732c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19732cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197330: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x197330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197334: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x197334u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197338: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x197338u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19733c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19733cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197340: 0x3e00008  jr          $ra
    ctx->pc = 0x197340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197340u;
            // 0x197344: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197348u;
    // 0x197348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19734c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x197354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x197358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19735c: 0xc065d04  jal         func_197410
    ctx->pc = 0x19735Cu;
    SET_GPR_U32(ctx, 31, 0x197364u);
    ctx->pc = 0x197360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19735Cu;
            // 0x197360: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197364u; }
        if (ctx->pc != 0x197364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197410_0x197410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197364u; }
        if (ctx->pc != 0x197364u) { return; }
    }
    ctx->pc = 0x197364u;
label_197364:
    // 0x197364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197368: 0xc065d3e  jal         func_1974F8
    ctx->pc = 0x197368u;
    SET_GPR_U32(ctx, 31, 0x197370u);
    ctx->pc = 0x19736Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197368u;
            // 0x19736c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974F8u;
    if (runtime->hasFunction(0x1974F8u)) {
        auto targetFn = runtime->lookupFunction(0x1974F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197370u; }
        if (ctx->pc != 0x197370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001974F8_0x1974f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197370u; }
        if (ctx->pc != 0x197370u) { return; }
    }
    ctx->pc = 0x197370u;
label_197370:
    // 0x197370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197378: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197378u;
    {
        const bool branch_taken_0x197378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197378u;
            // 0x19737c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197378) {
            ctx->pc = 0x19738Cu;
            goto label_19738c;
        }
    }
    ctx->pc = 0x197380u;
    // 0x197380: 0xc065d04  jal         func_197410
    ctx->pc = 0x197380u;
    SET_GPR_U32(ctx, 31, 0x197388u);
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197388u; }
        if (ctx->pc != 0x197388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197410_0x197410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197388u; }
        if (ctx->pc != 0x197388u) { return; }
    }
    ctx->pc = 0x197388u;
label_197388:
    // 0x197388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19738c:
    // 0x19738c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19738cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x197390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19739c: 0x8065cea  j           func_1973A8
    ctx->pc = 0x19739Cu;
    ctx->pc = 0x1973A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19739Cu;
            // 0x1973a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1973A8u;
    goto label_1973a8;
    ctx->pc = 0x1973A4u;
    // 0x1973a4: 0x0  nop
    ctx->pc = 0x1973a4u;
    // NOP
label_1973a8:
    // 0x1973a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1973a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1973ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1973acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1973b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1973b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1973b4: 0x8065cf0  j           func_1973C0
    ctx->pc = 0x1973B4u;
    ctx->pc = 0x1973B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1973B4u;
            // 0x1973b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1973C0u;
    if (runtime->hasFunction(0x1973C0u)) {
        auto targetFn = runtime->lookupFunction(0x1973C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001973C0_0x1973c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1973BCu;
    // 0x1973bc: 0x0  nop
    ctx->pc = 0x1973bcu;
    // NOP
}
