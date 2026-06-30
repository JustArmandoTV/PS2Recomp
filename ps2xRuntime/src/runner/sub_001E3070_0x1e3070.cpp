#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3070
// Address: 0x1e3070 - 0x1e3140
void sub_001E3070_0x1e3070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3070_0x1e3070");
#endif

    switch (ctx->pc) {
        case 0x1e30a8u: goto label_1e30a8;
        case 0x1e312cu: goto label_1e312c;
        default: break;
    }

    ctx->pc = 0x1e3070u;

    // 0x1e3070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e307c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e307cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3080: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E3080u;
    {
        const bool branch_taken_0x1e3080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3080) {
            ctx->pc = 0x1E3084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3080u;
            // 0x1e3084: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E30ACu;
            goto label_1e30ac;
        }
    }
    ctx->pc = 0x1E3088u;
    // 0x1e3088: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e3088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e308c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e308cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e3090: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1e3090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x1e3094: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e3094u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e3098: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3098u;
    {
        const bool branch_taken_0x1e3098 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E309Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3098u;
            // 0x1e309c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3098) {
            ctx->pc = 0x1E30A8u;
            goto label_1e30a8;
        }
    }
    ctx->pc = 0x1E30A0u;
    // 0x1e30a0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1E30A0u;
    SET_GPR_U32(ctx, 31, 0x1E30A8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30A8u; }
        if (ctx->pc != 0x1E30A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30A8u; }
        if (ctx->pc != 0x1E30A8u) { return; }
    }
    ctx->pc = 0x1E30A8u;
label_1e30a8:
    // 0x1e30a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e30a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e30ac:
    // 0x1e30ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e30acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e30b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e30b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e30b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E30B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E30B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30B4u;
            // 0x1e30b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E30BCu;
    // 0x1e30bc: 0x0  nop
    ctx->pc = 0x1e30bcu;
    // NOP
    // 0x1e30c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e30c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e30c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e30c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e30c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e30c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e30cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e30ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30d0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E30D0u;
    {
        const bool branch_taken_0x1e30d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e30d0) {
            ctx->pc = 0x1E30D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30D0u;
            // 0x1e30d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3130u;
            goto label_1e3130;
        }
    }
    ctx->pc = 0x1E30D8u;
    // 0x1e30d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e30dc: 0x2442d370  addiu       $v0, $v0, -0x2C90
    ctx->pc = 0x1e30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955888));
    // 0x1e30e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E30E0u;
    {
        const bool branch_taken_0x1e30e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30E0u;
            // 0x1e30e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30e0) {
            ctx->pc = 0x1E3104u;
            goto label_1e3104;
        }
    }
    ctx->pc = 0x1E30E8u;
    // 0x1e30e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e30ec: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1e30f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E30F0u;
    {
        const bool branch_taken_0x1e30f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30F0u;
            // 0x1e30f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30f0) {
            ctx->pc = 0x1E3104u;
            goto label_1e3104;
        }
    }
    ctx->pc = 0x1E30F8u;
    // 0x1e30f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e30fc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1e3100: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e3100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e3104:
    // 0x1e3104: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e3104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e3108: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e3108u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e310c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E310Cu;
    {
        const bool branch_taken_0x1e310c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e310c) {
            ctx->pc = 0x1E312Cu;
            goto label_1e312c;
        }
    }
    ctx->pc = 0x1E3114u;
    // 0x1e3114: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e3114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e3118: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1e3118u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e311c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e311cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e3120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3124: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E3124u;
    SET_GPR_U32(ctx, 31, 0x1E312Cu);
    ctx->pc = 0x1E3128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3124u;
            // 0x1e3128: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E312Cu; }
        if (ctx->pc != 0x1E312Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E312Cu; }
        if (ctx->pc != 0x1E312Cu) { return; }
    }
    ctx->pc = 0x1E312Cu;
label_1e312c:
    // 0x1e312c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e312cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3130:
    // 0x1e3130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3138: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3138u;
            // 0x1e313c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3140u;
}
