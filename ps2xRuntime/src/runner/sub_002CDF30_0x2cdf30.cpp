#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CDF30
// Address: 0x2cdf30 - 0x2ce100
void sub_002CDF30_0x2cdf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDF30_0x2cdf30");
#endif

    switch (ctx->pc) {
        case 0x2cdf58u: goto label_2cdf58;
        case 0x2cdf6cu: goto label_2cdf6c;
        case 0x2cdf80u: goto label_2cdf80;
        case 0x2cdf8cu: goto label_2cdf8c;
        case 0x2cdfa0u: goto label_2cdfa0;
        case 0x2cdfb0u: goto label_2cdfb0;
        case 0x2cdfc4u: goto label_2cdfc4;
        case 0x2cdfd4u: goto label_2cdfd4;
        case 0x2cdfe8u: goto label_2cdfe8;
        case 0x2ce008u: goto label_2ce008;
        case 0x2ce018u: goto label_2ce018;
        case 0x2ce02cu: goto label_2ce02c;
        case 0x2ce03cu: goto label_2ce03c;
        case 0x2ce048u: goto label_2ce048;
        case 0x2ce05cu: goto label_2ce05c;
        case 0x2ce06cu: goto label_2ce06c;
        case 0x2ce084u: goto label_2ce084;
        case 0x2ce094u: goto label_2ce094;
        case 0x2ce0b4u: goto label_2ce0b4;
        case 0x2ce0ccu: goto label_2ce0cc;
        default: break;
    }

    ctx->pc = 0x2cdf30u;

    // 0x2cdf30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cdf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cdf34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cdf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cdf38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cdf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cdf3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cdf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cdf40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cdf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cdf44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cdf44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf48: 0x8cd20004  lw          $s2, 0x4($a2)
    ctx->pc = 0x2cdf48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2cdf4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2cdf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf50: 0xc074ab8  jal         func_1D2AE0
    ctx->pc = 0x2CDF50u;
    SET_GPR_U32(ctx, 31, 0x2CDF58u);
    ctx->pc = 0x2CDF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF50u;
            // 0x2cdf54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2AE0u;
    if (runtime->hasFunction(0x1D2AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D2AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF58u; }
        if (ctx->pc != 0x2CDF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2AE0_0x1d2ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF58u; }
        if (ctx->pc != 0x2CDF58u) { return; }
    }
    ctx->pc = 0x2CDF58u;
label_2cdf58:
    // 0x2cdf58: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2cdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2cdf5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf60: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x2cdf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x2cdf64: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x2CDF64u;
    SET_GPR_U32(ctx, 31, 0x2CDF6Cu);
    ctx->pc = 0x2CDF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF64u;
            // 0x2cdf68: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF6Cu; }
        if (ctx->pc != 0x2CDF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF6Cu; }
        if (ctx->pc != 0x2CDF6Cu) { return; }
    }
    ctx->pc = 0x2CDF6Cu;
label_2cdf6c:
    // 0x2cdf6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cdf6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2cdf70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cdf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf78: 0xc074c74  jal         func_1D31D0
    ctx->pc = 0x2CDF78u;
    SET_GPR_U32(ctx, 31, 0x2CDF80u);
    ctx->pc = 0x2CDF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF78u;
            // 0x2cdf7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D31D0u;
    if (runtime->hasFunction(0x1D31D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D31D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF80u; }
        if (ctx->pc != 0x2CDF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D31D0_0x1d31d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF80u; }
        if (ctx->pc != 0x2CDF80u) { return; }
    }
    ctx->pc = 0x2CDF80u;
label_2cdf80:
    // 0x2cdf80: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x2cdf80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cdf84: 0xc074ab8  jal         func_1D2AE0
    ctx->pc = 0x2CDF84u;
    SET_GPR_U32(ctx, 31, 0x2CDF8Cu);
    ctx->pc = 0x2CDF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF84u;
            // 0x2cdf88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2AE0u;
    if (runtime->hasFunction(0x1D2AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D2AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF8Cu; }
        if (ctx->pc != 0x2CDF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2AE0_0x1d2ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF8Cu; }
        if (ctx->pc != 0x2CDF8Cu) { return; }
    }
    ctx->pc = 0x2CDF8Cu;
label_2cdf8c:
    // 0x2cdf8c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2cdf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2cdf90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf94: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x2cdf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x2cdf98: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x2CDF98u;
    SET_GPR_U32(ctx, 31, 0x2CDFA0u);
    ctx->pc = 0x2CDF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF98u;
            // 0x2cdf9c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFA0u; }
        if (ctx->pc != 0x2CDFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFA0u; }
        if (ctx->pc != 0x2CDFA0u) { return; }
    }
    ctx->pc = 0x2CDFA0u;
label_2cdfa0:
    // 0x2cdfa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfa4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cdfa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfa8: 0xc074bdc  jal         func_1D2F70
    ctx->pc = 0x2CDFA8u;
    SET_GPR_U32(ctx, 31, 0x2CDFB0u);
    ctx->pc = 0x2CDFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDFA8u;
            // 0x2cdfac: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2F70u;
    if (runtime->hasFunction(0x1D2F70u)) {
        auto targetFn = runtime->lookupFunction(0x1D2F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFB0u; }
        if (ctx->pc != 0x2CDFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2F70_0x1d2f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFB0u; }
        if (ctx->pc != 0x2CDFB0u) { return; }
    }
    ctx->pc = 0x2CDFB0u;
label_2cdfb0:
    // 0x2cdfb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cdfb4: 0x8c527378  lw          $s2, 0x7378($v0)
    ctx->pc = 0x2cdfb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x2cdfb8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2cdfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cdfbc: 0xc054508  jal         func_151420
    ctx->pc = 0x2CDFBCu;
    SET_GPR_U32(ctx, 31, 0x2CDFC4u);
    ctx->pc = 0x2CDFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDFBCu;
            // 0x2cdfc0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151420u;
    if (runtime->hasFunction(0x151420u)) {
        auto targetFn = runtime->lookupFunction(0x151420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFC4u; }
        if (ctx->pc != 0x2CDFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151420_0x151420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFC4u; }
        if (ctx->pc != 0x2CDFC4u) { return; }
    }
    ctx->pc = 0x2CDFC4u;
label_2cdfc4:
    // 0x2cdfc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cdfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfcc: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x2CDFCCu;
    SET_GPR_U32(ctx, 31, 0x2CDFD4u);
    ctx->pc = 0x2CDFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDFCCu;
            // 0x2cdfd0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFD4u; }
        if (ctx->pc != 0x2CDFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFD4u; }
        if (ctx->pc != 0x2CDFD4u) { return; }
    }
    ctx->pc = 0x2CDFD4u;
label_2cdfd4:
    // 0x2cdfd4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2cdfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2cdfd8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cdfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cdfdc: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2cdfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cdfe0: 0xc054590  jal         func_151640
    ctx->pc = 0x2CDFE0u;
    SET_GPR_U32(ctx, 31, 0x2CDFE8u);
    ctx->pc = 0x2CDFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDFE0u;
            // 0x2cdfe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (runtime->hasFunction(0x151640u)) {
        auto targetFn = runtime->lookupFunction(0x151640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFE8u; }
        if (ctx->pc != 0x2CDFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151640_0x151640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFE8u; }
        if (ctx->pc != 0x2CDFE8u) { return; }
    }
    ctx->pc = 0x2CDFE8u;
label_2cdfe8:
    // 0x2cdfe8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cdfec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cdfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cdff0: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x2cdff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x2cdff4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2cdff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2cdff8: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x2cdff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x2cdffc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2cdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ce000: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x2CE000u;
    SET_GPR_U32(ctx, 31, 0x2CE008u);
    ctx->pc = 0x2CE004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE000u;
            // 0x2ce004: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE008u; }
        if (ctx->pc != 0x2CE008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE008u; }
        if (ctx->pc != 0x2CE008u) { return; }
    }
    ctx->pc = 0x2CE008u;
label_2ce008:
    // 0x2ce008: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2ce008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2ce00c: 0x8e120014  lw          $s2, 0x14($s0)
    ctx->pc = 0x2ce00cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ce010: 0xc074ab8  jal         func_1D2AE0
    ctx->pc = 0x2CE010u;
    SET_GPR_U32(ctx, 31, 0x2CE018u);
    ctx->pc = 0x2CE014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE010u;
            // 0x2ce014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2AE0u;
    if (runtime->hasFunction(0x1D2AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D2AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE018u; }
        if (ctx->pc != 0x2CE018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2AE0_0x1d2ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE018u; }
        if (ctx->pc != 0x2CE018u) { return; }
    }
    ctx->pc = 0x2CE018u;
label_2ce018:
    // 0x2ce018: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ce018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ce01c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce020: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x2ce020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x2ce024: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x2CE024u;
    SET_GPR_U32(ctx, 31, 0x2CE02Cu);
    ctx->pc = 0x2CE028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE024u;
            // 0x2ce028: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE02Cu; }
        if (ctx->pc != 0x2CE02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE02Cu; }
        if (ctx->pc != 0x2CE02Cu) { return; }
    }
    ctx->pc = 0x2CE02Cu;
label_2ce02c:
    // 0x2ce02c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce030: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ce030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce034: 0xc074b50  jal         func_1D2D40
    ctx->pc = 0x2CE034u;
    SET_GPR_U32(ctx, 31, 0x2CE03Cu);
    ctx->pc = 0x2CE038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE034u;
            // 0x2ce038: 0x26240028  addiu       $a0, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2D40u;
    if (runtime->hasFunction(0x1D2D40u)) {
        auto targetFn = runtime->lookupFunction(0x1D2D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE03Cu; }
        if (ctx->pc != 0x2CE03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2D40_0x1d2d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE03Cu; }
        if (ctx->pc != 0x2CE03Cu) { return; }
    }
    ctx->pc = 0x2CE03Cu;
label_2ce03c:
    // 0x2ce03c: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x2ce03cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2ce040: 0xc074ab8  jal         func_1D2AE0
    ctx->pc = 0x2CE040u;
    SET_GPR_U32(ctx, 31, 0x2CE048u);
    ctx->pc = 0x2CE044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE040u;
            // 0x2ce044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2AE0u;
    if (runtime->hasFunction(0x1D2AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D2AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE048u; }
        if (ctx->pc != 0x2CE048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2AE0_0x1d2ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE048u; }
        if (ctx->pc != 0x2CE048u) { return; }
    }
    ctx->pc = 0x2CE048u;
label_2ce048:
    // 0x2ce048: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ce048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ce04c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce050: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x2ce050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x2ce054: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x2CE054u;
    SET_GPR_U32(ctx, 31, 0x2CE05Cu);
    ctx->pc = 0x2CE058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE054u;
            // 0x2ce058: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE05Cu; }
        if (ctx->pc != 0x2CE05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE05Cu; }
        if (ctx->pc != 0x2CE05Cu) { return; }
    }
    ctx->pc = 0x2CE05Cu;
label_2ce05c:
    // 0x2ce05c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce060: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ce060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce064: 0xc074ac4  jal         func_1D2B10
    ctx->pc = 0x2CE064u;
    SET_GPR_U32(ctx, 31, 0x2CE06Cu);
    ctx->pc = 0x2CE068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE064u;
            // 0x2ce068: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2B10u;
    if (runtime->hasFunction(0x1D2B10u)) {
        auto targetFn = runtime->lookupFunction(0x1D2B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE06Cu; }
        if (ctx->pc != 0x2CE06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2B10_0x1d2b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE06Cu; }
        if (ctx->pc != 0x2CE06Cu) { return; }
    }
    ctx->pc = 0x2CE06Cu;
label_2ce06c:
    // 0x2ce06c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ce06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ce070: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2ce070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ce074: 0x8c507378  lw          $s0, 0x7378($v0)
    ctx->pc = 0x2ce074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x2ce078: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2ce078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ce07c: 0xc05190c  jal         func_146430
    ctx->pc = 0x2CE07Cu;
    SET_GPR_U32(ctx, 31, 0x2CE084u);
    ctx->pc = 0x2CE080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE07Cu;
            // 0x2ce080: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE084u; }
        if (ctx->pc != 0x2CE084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146430_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE084u; }
        if (ctx->pc != 0x2CE084u) { return; }
    }
    ctx->pc = 0x2CE084u;
label_2ce084:
    // 0x2ce084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce088: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce08c: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x2CE08Cu;
    SET_GPR_U32(ctx, 31, 0x2CE094u);
    ctx->pc = 0x2CE090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE08Cu;
            // 0x2ce090: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE094u; }
        if (ctx->pc != 0x2CE094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE094u; }
        if (ctx->pc != 0x2CE094u) { return; }
    }
    ctx->pc = 0x2CE094u;
label_2ce094:
    // 0x2ce094: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2ce094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2ce098: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2ce098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ce09c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ce09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ce0a0: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x2ce0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x2ce0a4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ce0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ce0a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ce0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ce0ac: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x2CE0ACu;
    SET_GPR_U32(ctx, 31, 0x2CE0B4u);
    ctx->pc = 0x2CE0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE0ACu;
            // 0x2ce0b0: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0B4u; }
        if (ctx->pc != 0x2CE0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0B4u; }
        if (ctx->pc != 0x2CE0B4u) { return; }
    }
    ctx->pc = 0x2CE0B4u;
label_2ce0b4:
    // 0x2ce0b4: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2ce0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2ce0b8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2ce0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ce0bc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2ce0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ce0c0: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x2ce0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ce0c4: 0xc051a64  jal         func_146990
    ctx->pc = 0x2CE0C4u;
    SET_GPR_U32(ctx, 31, 0x2CE0CCu);
    ctx->pc = 0x2CE0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE0C4u;
            // 0x2ce0c8: 0x240703ff  addiu       $a3, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (runtime->hasFunction(0x146990u)) {
        auto targetFn = runtime->lookupFunction(0x146990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0CCu; }
        if (ctx->pc != 0x2CE0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146990_0x146990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0CCu; }
        if (ctx->pc != 0x2CE0CCu) { return; }
    }
    ctx->pc = 0x2CE0CCu;
label_2ce0cc:
    // 0x2ce0cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ce0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce0d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ce0d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce0d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce0d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE0DCu;
            // 0x2ce0e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE0E4u;
    // 0x2ce0e4: 0x0  nop
    ctx->pc = 0x2ce0e4u;
    // NOP
    // 0x2ce0e8: 0x0  nop
    ctx->pc = 0x2ce0e8u;
    // NOP
    // 0x2ce0ec: 0x0  nop
    ctx->pc = 0x2ce0ecu;
    // NOP
    // 0x2ce0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE0F8u;
    // 0x2ce0f8: 0x0  nop
    ctx->pc = 0x2ce0f8u;
    // NOP
    // 0x2ce0fc: 0x0  nop
    ctx->pc = 0x2ce0fcu;
    // NOP
}
