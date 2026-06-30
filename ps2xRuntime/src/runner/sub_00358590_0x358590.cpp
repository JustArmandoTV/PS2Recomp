#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358590
// Address: 0x358590 - 0x358660
void sub_00358590_0x358590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358590_0x358590");
#endif

    switch (ctx->pc) {
        case 0x3585c0u: goto label_3585c0;
        case 0x35861cu: goto label_35861c;
        case 0x358628u: goto label_358628;
        case 0x358640u: goto label_358640;
        default: break;
    }

    ctx->pc = 0x358590u;

    // 0x358590: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x358590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x358594: 0x3e00008  jr          $ra
    ctx->pc = 0x358594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358594u;
            // 0x358598: 0x8c420d88  lw          $v0, 0xD88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3464)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35859Cu;
    // 0x35859c: 0x0  nop
    ctx->pc = 0x35859cu;
    // NOP
    // 0x3585a0: 0x80b26d8  j           func_2C9B60
    ctx->pc = 0x3585A0u;
    ctx->pc = 0x3585A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3585A0u;
            // 0x3585a4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9B60u;
    {
        auto targetFn = runtime->lookupFunction(0x2C9B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3585A8u;
    // 0x3585a8: 0x0  nop
    ctx->pc = 0x3585a8u;
    // NOP
    // 0x3585ac: 0x0  nop
    ctx->pc = 0x3585acu;
    // NOP
    // 0x3585b0: 0x80d5c70  j           func_3571C0
    ctx->pc = 0x3585B0u;
    ctx->pc = 0x3585B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3585B0u;
            // 0x3585b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3571C0u;
    {
        auto targetFn = runtime->lookupFunction(0x3571C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3585B8u;
    // 0x3585b8: 0x0  nop
    ctx->pc = 0x3585b8u;
    // NOP
    // 0x3585bc: 0x0  nop
    ctx->pc = 0x3585bcu;
    // NOP
label_3585c0:
    // 0x3585c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3585c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3585c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3585c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3585c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3585c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3585cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3585ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3585d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3585d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585d4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3585D4u;
    {
        const bool branch_taken_0x3585d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3585D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3585D4u;
            // 0x3585d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585d4) {
            ctx->pc = 0x358640u;
            goto label_358640;
        }
    }
    ctx->pc = 0x3585DCu;
    // 0x3585dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3585dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3585e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3585e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3585e4: 0x24636160  addiu       $v1, $v1, 0x6160
    ctx->pc = 0x3585e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24928));
    // 0x3585e8: 0x24426198  addiu       $v0, $v0, 0x6198
    ctx->pc = 0x3585e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24984));
    // 0x3585ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3585ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3585f0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x3585F0u;
    {
        const bool branch_taken_0x3585f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3585F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3585F0u;
            // 0x3585f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585f0) {
            ctx->pc = 0x358628u;
            goto label_358628;
        }
    }
    ctx->pc = 0x3585F8u;
    // 0x3585f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3585f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3585fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3585fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x358600: 0x24636210  addiu       $v1, $v1, 0x6210
    ctx->pc = 0x358600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25104));
    // 0x358604: 0x24426248  addiu       $v0, $v0, 0x6248
    ctx->pc = 0x358604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25160));
    // 0x358608: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x358608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x35860c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x35860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x358610: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x358610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x358614: 0xc0aed1c  jal         func_2BB470
    ctx->pc = 0x358614u;
    SET_GPR_U32(ctx, 31, 0x35861Cu);
    ctx->pc = 0x358618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358614u;
            // 0x358618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35861Cu; }
        if (ctx->pc != 0x35861Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35861Cu; }
        if (ctx->pc != 0x35861Cu) { return; }
    }
    ctx->pc = 0x35861Cu;
label_35861c:
    // 0x35861c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35861cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358620: 0xc0d6198  jal         func_358660
    ctx->pc = 0x358620u;
    SET_GPR_U32(ctx, 31, 0x358628u);
    ctx->pc = 0x358624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358620u;
            // 0x358624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358660u;
    if (runtime->hasFunction(0x358660u)) {
        auto targetFn = runtime->lookupFunction(0x358660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358628u; }
        if (ctx->pc != 0x358628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358660_0x358660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358628u; }
        if (ctx->pc != 0x358628u) { return; }
    }
    ctx->pc = 0x358628u;
label_358628:
    // 0x358628: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x358628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x35862c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35862cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x358630: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x358630u;
    {
        const bool branch_taken_0x358630 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x358630) {
            ctx->pc = 0x358634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358630u;
            // 0x358634: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358644u;
            goto label_358644;
        }
    }
    ctx->pc = 0x358638u;
    // 0x358638: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x358638u;
    SET_GPR_U32(ctx, 31, 0x358640u);
    ctx->pc = 0x35863Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358638u;
            // 0x35863c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358640u; }
        if (ctx->pc != 0x358640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358640u; }
        if (ctx->pc != 0x358640u) { return; }
    }
    ctx->pc = 0x358640u;
label_358640:
    // 0x358640: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x358640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358644:
    // 0x358644: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x358644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35864c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35864cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358650: 0x3e00008  jr          $ra
    ctx->pc = 0x358650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358650u;
            // 0x358654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358658u;
    // 0x358658: 0x0  nop
    ctx->pc = 0x358658u;
    // NOP
    // 0x35865c: 0x0  nop
    ctx->pc = 0x35865cu;
    // NOP
}
