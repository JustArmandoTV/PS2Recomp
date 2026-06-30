#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B30A0
// Address: 0x4b30a0 - 0x4b31e0
void sub_004B30A0_0x4b30a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B30A0_0x4b30a0");
#endif

    switch (ctx->pc) {
        case 0x4b30bcu: goto label_4b30bc;
        case 0x4b30dcu: goto label_4b30dc;
        case 0x4b3110u: goto label_4b3110;
        case 0x4b3170u: goto label_4b3170;
        case 0x4b317cu: goto label_4b317c;
        case 0x4b3188u: goto label_4b3188;
        case 0x4b3194u: goto label_4b3194;
        case 0x4b31a0u: goto label_4b31a0;
        case 0x4b31acu: goto label_4b31ac;
        case 0x4b31c4u: goto label_4b31c4;
        default: break;
    }

    ctx->pc = 0x4b30a0u;

    // 0x4b30a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b30a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b30a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4b30a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4b30a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b30a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b30ac: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4b30acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4b30b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b30b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b30b4: 0xc12ccb0  jal         func_4B32C0
    ctx->pc = 0x4B30B4u;
    SET_GPR_U32(ctx, 31, 0x4B30BCu);
    ctx->pc = 0x4B30B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B30B4u;
            // 0x4b30b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B32C0u;
    if (runtime->hasFunction(0x4B32C0u)) {
        auto targetFn = runtime->lookupFunction(0x4B32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B30BCu; }
        if (ctx->pc != 0x4B30BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B32C0_0x4b32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B30BCu; }
        if (ctx->pc != 0x4B30BCu) { return; }
    }
    ctx->pc = 0x4B30BCu;
label_4b30bc:
    // 0x4b30bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b30c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b30c4: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x4b30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x4b30c8: 0x24420838  addiu       $v0, $v0, 0x838
    ctx->pc = 0x4b30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2104));
    // 0x4b30cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b30ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b30d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b30d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b30d4: 0xc12ccac  jal         func_4B32B0
    ctx->pc = 0x4B30D4u;
    SET_GPR_U32(ctx, 31, 0x4B30DCu);
    ctx->pc = 0x4B30D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B30D4u;
            // 0x4b30d8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B32B0u;
    if (runtime->hasFunction(0x4B32B0u)) {
        auto targetFn = runtime->lookupFunction(0x4B32B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B30DCu; }
        if (ctx->pc != 0x4B30DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B32B0_0x4b32b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B30DCu; }
        if (ctx->pc != 0x4B30DCu) { return; }
    }
    ctx->pc = 0x4B30DCu;
label_4b30dc:
    // 0x4b30dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4b30dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4b30e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b30e4: 0x244206b0  addiu       $v0, $v0, 0x6B0
    ctx->pc = 0x4b30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
    // 0x4b30e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b30e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b30ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b30f0: 0x244206e8  addiu       $v0, $v0, 0x6E8
    ctx->pc = 0x4b30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1768));
    // 0x4b30f4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4b30f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4b30f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b30f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b30fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b30fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b3100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3104: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3104u;
            // 0x4b3108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B310Cu;
    // 0x4b310c: 0x0  nop
    ctx->pc = 0x4b310cu;
    // NOP
label_4b3110:
    // 0x4b3110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b3110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b3114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b3114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b3118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b3118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b311c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b311cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b3120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b3120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3124: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4B3124u;
    {
        const bool branch_taken_0x4b3124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3124u;
            // 0x4b3128: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3124) {
            ctx->pc = 0x4B31C4u;
            goto label_4b31c4;
        }
    }
    ctx->pc = 0x4B312Cu;
    // 0x4b312c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b312cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b3130: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b3130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b3134: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x4b3134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x4b3138: 0x24420838  addiu       $v0, $v0, 0x838
    ctx->pc = 0x4b3138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2104));
    // 0x4b313c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b313cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b3140: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B3140u;
    {
        const bool branch_taken_0x4b3140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3140u;
            // 0x4b3144: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3140) {
            ctx->pc = 0x4B31ACu;
            goto label_4b31ac;
        }
    }
    ctx->pc = 0x4B3148u;
    // 0x4b3148: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b3148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b314c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b3150: 0x246307b0  addiu       $v1, $v1, 0x7B0
    ctx->pc = 0x4b3150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1968));
    // 0x4b3154: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b3154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x4b3158: 0x244207e8  addiu       $v0, $v0, 0x7E8
    ctx->pc = 0x4b3158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x4b315c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b315cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b3160: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4b3160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4b3164: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4b3164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4b3168: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4B3168u;
    SET_GPR_U32(ctx, 31, 0x4B3170u);
    ctx->pc = 0x4B316Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3168u;
            // 0x4b316c: 0x24a52d10  addiu       $a1, $a1, 0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3170u; }
        if (ctx->pc != 0x4B3170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3170u; }
        if (ctx->pc != 0x4B3170u) { return; }
    }
    ctx->pc = 0x4B3170u;
label_4b3170:
    // 0x4b3170: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4b3170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4b3174: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x4B3174u;
    SET_GPR_U32(ctx, 31, 0x4B317Cu);
    ctx->pc = 0x4B3178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3174u;
            // 0x4b3178: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B317Cu; }
        if (ctx->pc != 0x4B317Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B317Cu; }
        if (ctx->pc != 0x4B317Cu) { return; }
    }
    ctx->pc = 0x4B317Cu;
label_4b317c:
    // 0x4b317c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4b317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4b3180: 0xc12cc90  jal         func_4B3240
    ctx->pc = 0x4B3180u;
    SET_GPR_U32(ctx, 31, 0x4B3188u);
    ctx->pc = 0x4B3184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3180u;
            // 0x4b3184: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B3240u;
    if (runtime->hasFunction(0x4B3240u)) {
        auto targetFn = runtime->lookupFunction(0x4B3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3188u; }
        if (ctx->pc != 0x4B3188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B3240_0x4b3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3188u; }
        if (ctx->pc != 0x4B3188u) { return; }
    }
    ctx->pc = 0x4B3188u;
label_4b3188:
    // 0x4b3188: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4b3188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4b318c: 0xc12cc90  jal         func_4B3240
    ctx->pc = 0x4B318Cu;
    SET_GPR_U32(ctx, 31, 0x4B3194u);
    ctx->pc = 0x4B3190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B318Cu;
            // 0x4b3190: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B3240u;
    if (runtime->hasFunction(0x4B3240u)) {
        auto targetFn = runtime->lookupFunction(0x4B3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3194u; }
        if (ctx->pc != 0x4B3194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B3240_0x4b3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3194u; }
        if (ctx->pc != 0x4B3194u) { return; }
    }
    ctx->pc = 0x4B3194u;
label_4b3194:
    // 0x4b3194: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4b3194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4b3198: 0xc12cc78  jal         func_4B31E0
    ctx->pc = 0x4B3198u;
    SET_GPR_U32(ctx, 31, 0x4B31A0u);
    ctx->pc = 0x4B319Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3198u;
            // 0x4b319c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B31E0u;
    if (runtime->hasFunction(0x4B31E0u)) {
        auto targetFn = runtime->lookupFunction(0x4B31E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B31A0u; }
        if (ctx->pc != 0x4B31A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B31E0_0x4b31e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B31A0u; }
        if (ctx->pc != 0x4B31A0u) { return; }
    }
    ctx->pc = 0x4B31A0u;
label_4b31a0:
    // 0x4b31a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b31a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b31a4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4B31A4u;
    SET_GPR_U32(ctx, 31, 0x4B31ACu);
    ctx->pc = 0x4B31A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B31A4u;
            // 0x4b31a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B31ACu; }
        if (ctx->pc != 0x4B31ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B31ACu; }
        if (ctx->pc != 0x4B31ACu) { return; }
    }
    ctx->pc = 0x4B31ACu;
label_4b31ac:
    // 0x4b31ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4b31acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4b31b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b31b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4b31b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B31B4u;
    {
        const bool branch_taken_0x4b31b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b31b4) {
            ctx->pc = 0x4B31B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B31B4u;
            // 0x4b31b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B31C8u;
            goto label_4b31c8;
        }
    }
    ctx->pc = 0x4B31BCu;
    // 0x4b31bc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B31BCu;
    SET_GPR_U32(ctx, 31, 0x4B31C4u);
    ctx->pc = 0x4B31C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B31BCu;
            // 0x4b31c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B31C4u; }
        if (ctx->pc != 0x4B31C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B31C4u; }
        if (ctx->pc != 0x4B31C4u) { return; }
    }
    ctx->pc = 0x4B31C4u;
label_4b31c4:
    // 0x4b31c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b31c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b31c8:
    // 0x4b31c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b31c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b31cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b31ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b31d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b31d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b31d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B31D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B31D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B31D4u;
            // 0x4b31d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B31DCu;
    // 0x4b31dc: 0x0  nop
    ctx->pc = 0x4b31dcu;
    // NOP
}
