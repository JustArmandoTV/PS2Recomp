#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B02C0
// Address: 0x1b02c0 - 0x1b0360
void sub_001B02C0_0x1b02c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B02C0_0x1b02c0");
#endif

    switch (ctx->pc) {
        case 0x1b02d8u: goto label_1b02d8;
        case 0x1b0300u: goto label_1b0300;
        case 0x1b034cu: goto label_1b034c;
        default: break;
    }

    ctx->pc = 0x1b02c0u;

    // 0x1b02c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b02c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b02c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b02c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b02c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b02c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b02ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b02d0: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B02D0u;
    SET_GPR_U32(ctx, 31, 0x1B02D8u);
    ctx->pc = 0x1B02D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02D0u;
            // 0x1b02d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02D8u; }
        if (ctx->pc != 0x1B02D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02D8u; }
        if (ctx->pc != 0x1B02D8u) { return; }
    }
    ctx->pc = 0x1B02D8u;
label_1b02d8:
    // 0x1b02d8: 0x8e062030  lw          $a2, 0x2030($s0)
    ctx->pc = 0x1b02d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
    // 0x1b02dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b02dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02e0: 0x8cc20178  lw          $v0, 0x178($a2)
    ctx->pc = 0x1b02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 376)));
    // 0x1b02e4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B02E4u;
    {
        const bool branch_taken_0x1b02e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B02E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02E4u;
            // 0x1b02e8: 0x24c40180  addiu       $a0, $a2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02e4) {
            ctx->pc = 0x1B0330u;
            goto label_1b0330;
        }
    }
    ctx->pc = 0x1B02ECu;
    // 0x1b02ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b02ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02f0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1b02f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b02f4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b02f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b02f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b02f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b02fc: 0x0  nop
    ctx->pc = 0x1b02fcu;
    // NOP
label_1b0300:
    // 0x1b0300: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b0300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0304: 0x50490004  beql        $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0304u;
    {
        const bool branch_taken_0x1b0304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x1b0304) {
            ctx->pc = 0x1B0308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0304u;
            // 0x1b0308: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0318u;
            goto label_1b0318;
        }
    }
    ctx->pc = 0x1B030Cu;
    // 0x1b030c: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B030Cu;
    {
        const bool branch_taken_0x1b030c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1b030c) {
            ctx->pc = 0x1B0310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B030Cu;
            // 0x1b0310: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0328u;
            goto label_1b0328;
        }
    }
    ctx->pc = 0x1B0314u;
    // 0x1b0314: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x1b0314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1b0318:
    // 0x1b0318: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1b0318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b031c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x1b031cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x1b0320: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1b0320u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1b0324: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b0324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b0328:
    // 0x1b0328: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B0328u;
    {
        const bool branch_taken_0x1b0328 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B032Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0328u;
            // 0x1b032c: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0328) {
            ctx->pc = 0x1B0300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0300;
        }
    }
    ctx->pc = 0x1B0330u;
label_1b0330:
    // 0x1b0330: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x1b0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x1b0334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0338: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0338u;
    {
        const bool branch_taken_0x1b0338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0338u;
            // 0x1b033c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0338) {
            ctx->pc = 0x1B0344u;
            goto label_1b0344;
        }
    }
    ctx->pc = 0x1B0340u;
    // 0x1b0340: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x1b0340u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1b0344:
    // 0x1b0344: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B0344u;
    SET_GPR_U32(ctx, 31, 0x1B034Cu);
    ctx->pc = 0x1B0348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0344u;
            // 0x1b0348: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B034Cu; }
        if (ctx->pc != 0x1B034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B034Cu; }
        if (ctx->pc != 0x1B034Cu) { return; }
    }
    ctx->pc = 0x1B034Cu;
label_1b034c:
    // 0x1b034c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b034cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0350: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b0350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0354: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b0354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0358: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0358u;
            // 0x1b035c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0360u;
}
