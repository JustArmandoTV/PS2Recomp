#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F3D0
// Address: 0x17f3d0 - 0x17f468
void sub_0017F3D0_0x17f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F3D0_0x17f3d0");
#endif

    switch (ctx->pc) {
        case 0x17f3f4u: goto label_17f3f4;
        case 0x17f400u: goto label_17f400;
        case 0x17f408u: goto label_17f408;
        case 0x17f420u: goto label_17f420;
        case 0x17f434u: goto label_17f434;
        default: break;
    }

    ctx->pc = 0x17f3d0u;

    // 0x17f3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f3d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f3d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17f3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f3e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17f3e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f3e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f3ec: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17F3ECu;
    SET_GPR_U32(ctx, 31, 0x17F3F4u);
    ctx->pc = 0x17F3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3ECu;
            // 0x17f3f0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3F4u; }
        if (ctx->pc != 0x17F3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3F4u; }
        if (ctx->pc != 0x17F3F4u) { return; }
    }
    ctx->pc = 0x17F3F4u;
label_17f3f4:
    // 0x17f3f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3f8: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17F3F8u;
    SET_GPR_U32(ctx, 31, 0x17F400u);
    ctx->pc = 0x17F3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3F8u;
            // 0x17f3fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F400u; }
        if (ctx->pc != 0x17F400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F400u; }
        if (ctx->pc != 0x17F400u) { return; }
    }
    ctx->pc = 0x17F400u;
label_17f400:
    // 0x17f400: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F400u;
    {
        const bool branch_taken_0x17f400 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x17f400) {
            ctx->pc = 0x17F410u;
            goto label_17f410;
        }
    }
    ctx->pc = 0x17F408u;
label_17f408:
    // 0x17f408: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17F408u;
    {
        const bool branch_taken_0x17f408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F408u;
            // 0x17f40c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f408) {
            ctx->pc = 0x17F448u;
            goto label_17f448;
        }
    }
    ctx->pc = 0x17F410u;
label_17f410:
    // 0x17f410: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x17F410u;
    {
        const bool branch_taken_0x17f410 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x17F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F410u;
            // 0x17f414: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f410) {
            ctx->pc = 0x17F444u;
            goto label_17f444;
        }
    }
    ctx->pc = 0x17F418u;
    // 0x17f418: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x17f41c: 0x0  nop
    ctx->pc = 0x17f41cu;
    // NOP
label_17f420:
    // 0x17f420: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x17f424: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x17f424u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f428: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17f428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17f42c: 0xc05fcde  jal         func_17F378
    ctx->pc = 0x17F42Cu;
    SET_GPR_U32(ctx, 31, 0x17F434u);
    ctx->pc = 0x17F430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F42Cu;
            // 0x17f430: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F378u;
    if (runtime->hasFunction(0x17F378u)) {
        auto targetFn = runtime->lookupFunction(0x17F378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F434u; }
        if (ctx->pc != 0x17F434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F378_0x17f378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F434u; }
        if (ctx->pc != 0x17F434u) { return; }
    }
    ctx->pc = 0x17F434u;
label_17f434:
    // 0x17f434: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17F434u;
    {
        const bool branch_taken_0x17f434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F434u;
            // 0x17f438: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f434) {
            ctx->pc = 0x17F408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f408;
        }
    }
    ctx->pc = 0x17F43Cu;
    // 0x17f43c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17F43Cu;
    {
        const bool branch_taken_0x17f43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F43Cu;
            // 0x17f440: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f43c) {
            ctx->pc = 0x17F420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f420;
        }
    }
    ctx->pc = 0x17F444u;
label_17f444:
    // 0x17f444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17f444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f448:
    // 0x17f448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f44c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f44cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f450: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f454: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17f454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f458: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f45c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F45Cu;
            // 0x17f460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F464u;
    // 0x17f464: 0x0  nop
    ctx->pc = 0x17f464u;
    // NOP
}
