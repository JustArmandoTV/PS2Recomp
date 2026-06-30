#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9D50
// Address: 0x1e9d50 - 0x1ea330
void sub_001E9D50_0x1e9d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9D50_0x1e9d50");
#endif

    switch (ctx->pc) {
        case 0x1e9da8u: goto label_1e9da8;
        case 0x1e9df4u: goto label_1e9df4;
        case 0x1e9e90u: goto label_1e9e90;
        case 0x1e9eecu: goto label_1e9eec;
        case 0x1e9f80u: goto label_1e9f80;
        case 0x1e9fdcu: goto label_1e9fdc;
        case 0x1ea080u: goto label_1ea080;
        case 0x1ea0dcu: goto label_1ea0dc;
        case 0x1ea170u: goto label_1ea170;
        case 0x1ea1ccu: goto label_1ea1cc;
        case 0x1ea230u: goto label_1ea230;
        case 0x1ea258u: goto label_1ea258;
        case 0x1ea2e0u: goto label_1ea2e0;
        case 0x1ea308u: goto label_1ea308;
        default: break;
    }

    ctx->pc = 0x1e9d50u;

    // 0x1e9d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e9d54: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e9d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e9d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9d5c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e9d60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9d64: 0x2463a1f0  addiu       $v1, $v1, -0x5E10
    ctx->pc = 0x1e9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943216));
    // 0x1e9d68: 0x24428fb0  addiu       $v0, $v0, -0x7050
    ctx->pc = 0x1e9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938544));
    // 0x1e9d6c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1e9d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1e9d70: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1e9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1e9d74: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e9d78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e9d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9d7c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e9d80: 0x24638f60  addiu       $v1, $v1, -0x70A0
    ctx->pc = 0x1e9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938464));
    // 0x1e9d84: 0x24428e20  addiu       $v0, $v0, -0x71E0
    ctx->pc = 0x1e9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938144));
    // 0x1e9d88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d8c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1e9d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x1e9d90: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1e9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1e9d94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e9d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e9d98: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x1e9d98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
    // 0x1e9d9c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1e9d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e9da0: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1E9DA0u;
    SET_GPR_U32(ctx, 31, 0x1E9DA8u);
    ctx->pc = 0x1E9DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DA0u;
            // 0x1e9da4: 0xa3a70051  sb          $a3, 0x51($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DA8u; }
        if (ctx->pc != 0x1E9DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DA8u; }
        if (ctx->pc != 0x1E9DA8u) { return; }
    }
    ctx->pc = 0x1E9DA8u;
label_1e9da8:
    // 0x1e9da8: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e9dac: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e9db0: 0x2463a2a0  addiu       $v1, $v1, -0x5D60
    ctx->pc = 0x1e9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943392));
    // 0x1e9db4: 0x24428930  addiu       $v0, $v0, -0x76D0
    ctx->pc = 0x1e9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936880));
    // 0x1e9db8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1e9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1e9dbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e9dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9dc0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1e9dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1e9dc4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e9dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e9dc8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e9dcc: 0x24638630  addiu       $v1, $v1, -0x79D0
    ctx->pc = 0x1e9dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936112));
    // 0x1e9dd0: 0x244281f0  addiu       $v0, $v0, -0x7E10
    ctx->pc = 0x1e9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935024));
    // 0x1e9dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9dd8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1e9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1e9ddc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e9ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e9de0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1e9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1e9de4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e9de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e9de8: 0xa3a60031  sb          $a2, 0x31($sp)
    ctx->pc = 0x1e9de8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e9dec: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1E9DECu;
    SET_GPR_U32(ctx, 31, 0x1E9DF4u);
    ctx->pc = 0x1E9DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DECu;
            // 0x1e9df0: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DF4u; }
        if (ctx->pc != 0x1E9DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DF4u; }
        if (ctx->pc != 0x1E9DF4u) { return; }
    }
    ctx->pc = 0x1E9DF4u;
label_1e9df4:
    // 0x1e9df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DFCu;
            // 0x1e9e00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9E04u;
    // 0x1e9e04: 0x0  nop
    ctx->pc = 0x1e9e04u;
    // NOP
    // 0x1e9e08: 0x0  nop
    ctx->pc = 0x1e9e08u;
    // NOP
    // 0x1e9e0c: 0x0  nop
    ctx->pc = 0x1e9e0cu;
    // NOP
    // 0x1e9e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e9e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9e20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e24: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E9E24u;
    {
        const bool branch_taken_0x1e9e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E24u;
            // 0x1e9e28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e24) {
            ctx->pc = 0x1E9EECu;
            goto label_1e9eec;
        }
    }
    ctx->pc = 0x1E9E2Cu;
    // 0x1e9e2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e9e30: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x1e9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x1e9e34: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E9E34u;
    {
        const bool branch_taken_0x1e9e34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E34u;
            // 0x1e9e38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e34) {
            ctx->pc = 0x1E9EC4u;
            goto label_1e9ec4;
        }
    }
    ctx->pc = 0x1E9E3Cu;
    // 0x1e9e3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e9e40: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1e9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1e9e44: 0x2463dc90  addiu       $v1, $v1, -0x2370
    ctx->pc = 0x1e9e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958224));
    // 0x1e9e48: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E9E48u;
    {
        const bool branch_taken_0x1e9e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E48u;
            // 0x1e9e4c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e48) {
            ctx->pc = 0x1E9E90u;
            goto label_1e9e90;
        }
    }
    ctx->pc = 0x1E9E50u;
    // 0x1e9e50: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E9E50u;
    {
        const bool branch_taken_0x1e9e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e50) {
            ctx->pc = 0x1E9E90u;
            goto label_1e9e90;
        }
    }
    ctx->pc = 0x1E9E58u;
    // 0x1e9e58: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e9e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e9e5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1e9e60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e9e64: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E9E64u;
    {
        const bool branch_taken_0x1e9e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e64) {
            ctx->pc = 0x1E9E90u;
            goto label_1e9e90;
        }
    }
    ctx->pc = 0x1E9E6Cu;
    // 0x1e9e6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e9e70: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e9e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e9e74: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e9e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e9e78: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e9e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e9e7c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e9e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e9e80: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1e9e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1e9e84: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e9e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1e9e88: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E9E88u;
    SET_GPR_U32(ctx, 31, 0x1E9E90u);
    ctx->pc = 0x1E9E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E88u;
            // 0x1e9e8c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E90u; }
        if (ctx->pc != 0x1E9E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E90u; }
        if (ctx->pc != 0x1E9E90u) { return; }
    }
    ctx->pc = 0x1E9E90u;
label_1e9e90:
    // 0x1e9e90: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9E90u;
    {
        const bool branch_taken_0x1e9e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e90) {
            ctx->pc = 0x1E9E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E90u;
            // 0x1e9e94: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9EC8u;
            goto label_1e9ec8;
        }
    }
    ctx->pc = 0x1E9E98u;
    // 0x1e9e98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e9e9c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1e9ea0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9EA0u;
    {
        const bool branch_taken_0x1e9ea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EA0u;
            // 0x1e9ea4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ea0) {
            ctx->pc = 0x1E9EC4u;
            goto label_1e9ec4;
        }
    }
    ctx->pc = 0x1E9EA8u;
    // 0x1e9ea8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e9eac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e9eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1e9eb0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9EB0u;
    {
        const bool branch_taken_0x1e9eb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EB0u;
            // 0x1e9eb4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9eb0) {
            ctx->pc = 0x1E9EC4u;
            goto label_1e9ec4;
        }
    }
    ctx->pc = 0x1E9EB8u;
    // 0x1e9eb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e9ebc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1e9ec0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e9ec4:
    // 0x1e9ec4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e9ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e9ec8:
    // 0x1e9ec8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e9ec8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e9ecc: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9ECCu;
    {
        const bool branch_taken_0x1e9ecc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e9ecc) {
            ctx->pc = 0x1E9ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9ECCu;
            // 0x1e9ed0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9EF0u;
            goto label_1e9ef0;
        }
    }
    ctx->pc = 0x1E9ED4u;
    // 0x1e9ed4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e9ed8: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1e9ed8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e9edc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e9edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e9ee0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ee4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E9EE4u;
    SET_GPR_U32(ctx, 31, 0x1E9EECu);
    ctx->pc = 0x1E9EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EE4u;
            // 0x1e9ee8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EECu; }
        if (ctx->pc != 0x1E9EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EECu; }
        if (ctx->pc != 0x1E9EECu) { return; }
    }
    ctx->pc = 0x1E9EECu;
label_1e9eec:
    // 0x1e9eec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e9eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ef0:
    // 0x1e9ef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9efc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EFCu;
            // 0x1e9f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9F04u;
    // 0x1e9f04: 0x0  nop
    ctx->pc = 0x1e9f04u;
    // NOP
    // 0x1e9f08: 0x0  nop
    ctx->pc = 0x1e9f08u;
    // NOP
    // 0x1e9f0c: 0x0  nop
    ctx->pc = 0x1e9f0cu;
    // NOP
    // 0x1e9f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e9f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f24: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1E9F24u;
    {
        const bool branch_taken_0x1e9f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F24u;
            // 0x1e9f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f24) {
            ctx->pc = 0x1E9FDCu;
            goto label_1e9fdc;
        }
    }
    ctx->pc = 0x1E9F2Cu;
    // 0x1e9f2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e9f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e9f30: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1e9f34: 0x2463dc90  addiu       $v1, $v1, -0x2370
    ctx->pc = 0x1e9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958224));
    // 0x1e9f38: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E9F38u;
    {
        const bool branch_taken_0x1e9f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F38u;
            // 0x1e9f3c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f38) {
            ctx->pc = 0x1E9F80u;
            goto label_1e9f80;
        }
    }
    ctx->pc = 0x1E9F40u;
    // 0x1e9f40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E9F40u;
    {
        const bool branch_taken_0x1e9f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f40) {
            ctx->pc = 0x1E9F80u;
            goto label_1e9f80;
        }
    }
    ctx->pc = 0x1E9F48u;
    // 0x1e9f48: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e9f4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1e9f50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e9f54: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E9F54u;
    {
        const bool branch_taken_0x1e9f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f54) {
            ctx->pc = 0x1E9F80u;
            goto label_1e9f80;
        }
    }
    ctx->pc = 0x1E9F5Cu;
    // 0x1e9f5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e9f60: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e9f64: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e9f68: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e9f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e9f6c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e9f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e9f70: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1e9f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1e9f74: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e9f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1e9f78: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E9F78u;
    SET_GPR_U32(ctx, 31, 0x1E9F80u);
    ctx->pc = 0x1E9F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F78u;
            // 0x1e9f7c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F80u; }
        if (ctx->pc != 0x1E9F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F80u; }
        if (ctx->pc != 0x1E9F80u) { return; }
    }
    ctx->pc = 0x1E9F80u;
label_1e9f80:
    // 0x1e9f80: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9F80u;
    {
        const bool branch_taken_0x1e9f80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f80) {
            ctx->pc = 0x1E9F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F80u;
            // 0x1e9f84: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9FB8u;
            goto label_1e9fb8;
        }
    }
    ctx->pc = 0x1E9F88u;
    // 0x1e9f88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e9f8c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1e9f90: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9F90u;
    {
        const bool branch_taken_0x1e9f90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F90u;
            // 0x1e9f94: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f90) {
            ctx->pc = 0x1E9FB4u;
            goto label_1e9fb4;
        }
    }
    ctx->pc = 0x1E9F98u;
    // 0x1e9f98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e9f9c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1e9fa0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9FA0u;
    {
        const bool branch_taken_0x1e9fa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9FA0u;
            // 0x1e9fa4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9fa0) {
            ctx->pc = 0x1E9FB4u;
            goto label_1e9fb4;
        }
    }
    ctx->pc = 0x1E9FA8u;
    // 0x1e9fa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e9fac: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e9facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1e9fb0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e9fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e9fb4:
    // 0x1e9fb4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e9fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e9fb8:
    // 0x1e9fb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e9fb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e9fbc: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9FBCu;
    {
        const bool branch_taken_0x1e9fbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e9fbc) {
            ctx->pc = 0x1E9FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9FBCu;
            // 0x1e9fc0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9FE0u;
            goto label_1e9fe0;
        }
    }
    ctx->pc = 0x1E9FC4u;
    // 0x1e9fc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e9fc8: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1e9fc8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e9fcc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e9fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e9fd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fd4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E9FD4u;
    SET_GPR_U32(ctx, 31, 0x1E9FDCu);
    ctx->pc = 0x1E9FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9FD4u;
            // 0x1e9fd8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FDCu; }
        if (ctx->pc != 0x1E9FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FDCu; }
        if (ctx->pc != 0x1E9FDCu) { return; }
    }
    ctx->pc = 0x1E9FDCu;
label_1e9fdc:
    // 0x1e9fdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e9fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fe0:
    // 0x1e9fe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9FECu;
            // 0x1e9ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9FF4u;
    // 0x1e9ff4: 0x0  nop
    ctx->pc = 0x1e9ff4u;
    // NOP
    // 0x1e9ff8: 0x0  nop
    ctx->pc = 0x1e9ff8u;
    // NOP
    // 0x1e9ffc: 0x0  nop
    ctx->pc = 0x1e9ffcu;
    // NOP
    // 0x1ea000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ea004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ea008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea00c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ea010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea014: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1EA014u;
    {
        const bool branch_taken_0x1ea014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA014u;
            // 0x1ea018: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea014) {
            ctx->pc = 0x1EA0DCu;
            goto label_1ea0dc;
        }
    }
    ctx->pc = 0x1EA01Cu;
    // 0x1ea01c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ea01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ea020: 0x2442d7c0  addiu       $v0, $v0, -0x2840
    ctx->pc = 0x1ea020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
    // 0x1ea024: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EA024u;
    {
        const bool branch_taken_0x1ea024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA024u;
            // 0x1ea028: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea024) {
            ctx->pc = 0x1EA0B4u;
            goto label_1ea0b4;
        }
    }
    ctx->pc = 0x1EA02Cu;
    // 0x1ea02c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ea02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ea030: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1ea030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1ea034: 0x2463d6c0  addiu       $v1, $v1, -0x2940
    ctx->pc = 0x1ea034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956736));
    // 0x1ea038: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA038u;
    {
        const bool branch_taken_0x1ea038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA038u;
            // 0x1ea03c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea038) {
            ctx->pc = 0x1EA080u;
            goto label_1ea080;
        }
    }
    ctx->pc = 0x1EA040u;
    // 0x1ea040: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EA040u;
    {
        const bool branch_taken_0x1ea040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea040) {
            ctx->pc = 0x1EA080u;
            goto label_1ea080;
        }
    }
    ctx->pc = 0x1EA048u;
    // 0x1ea048: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1ea048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1ea04c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ea04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ea050: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ea050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea054: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA054u;
    {
        const bool branch_taken_0x1ea054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea054) {
            ctx->pc = 0x1EA080u;
            goto label_1ea080;
        }
    }
    ctx->pc = 0x1EA05Cu;
    // 0x1ea05c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ea05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ea060: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1ea060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1ea064: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ea064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1ea068: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1ea068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ea06c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1ea06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ea070: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1ea070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1ea074: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1ea074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1ea078: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1EA078u;
    SET_GPR_U32(ctx, 31, 0x1EA080u);
    ctx->pc = 0x1EA07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA078u;
            // 0x1ea07c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA080u; }
        if (ctx->pc != 0x1EA080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA080u; }
        if (ctx->pc != 0x1EA080u) { return; }
    }
    ctx->pc = 0x1EA080u;
label_1ea080:
    // 0x1ea080: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1EA080u;
    {
        const bool branch_taken_0x1ea080 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea080) {
            ctx->pc = 0x1EA084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA080u;
            // 0x1ea084: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA0B8u;
            goto label_1ea0b8;
        }
    }
    ctx->pc = 0x1EA088u;
    // 0x1ea088: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ea088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ea08c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1ea08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1ea090: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA090u;
    {
        const bool branch_taken_0x1ea090 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA090u;
            // 0x1ea094: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea090) {
            ctx->pc = 0x1EA0B4u;
            goto label_1ea0b4;
        }
    }
    ctx->pc = 0x1EA098u;
    // 0x1ea098: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ea098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ea09c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1ea09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1ea0a0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA0A0u;
    {
        const bool branch_taken_0x1ea0a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0A0u;
            // 0x1ea0a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0a0) {
            ctx->pc = 0x1EA0B4u;
            goto label_1ea0b4;
        }
    }
    ctx->pc = 0x1EA0A8u;
    // 0x1ea0a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ea0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ea0ac: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1ea0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1ea0b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ea0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ea0b4:
    // 0x1ea0b4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1ea0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1ea0b8:
    // 0x1ea0b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ea0b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ea0bc: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA0BCu;
    {
        const bool branch_taken_0x1ea0bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ea0bc) {
            ctx->pc = 0x1EA0C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0BCu;
            // 0x1ea0c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA0E0u;
            goto label_1ea0e0;
        }
    }
    ctx->pc = 0x1EA0C4u;
    // 0x1ea0c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ea0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ea0c8: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1ea0c8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ea0cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ea0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1ea0d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ea0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0d4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1EA0D4u;
    SET_GPR_U32(ctx, 31, 0x1EA0DCu);
    ctx->pc = 0x1EA0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0D4u;
            // 0x1ea0d8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0DCu; }
        if (ctx->pc != 0x1EA0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0DCu; }
        if (ctx->pc != 0x1EA0DCu) { return; }
    }
    ctx->pc = 0x1EA0DCu;
label_1ea0dc:
    // 0x1ea0dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ea0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0e0:
    // 0x1ea0e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ea0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea0e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0ECu;
            // 0x1ea0f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA0F4u;
    // 0x1ea0f4: 0x0  nop
    ctx->pc = 0x1ea0f4u;
    // NOP
    // 0x1ea0f8: 0x0  nop
    ctx->pc = 0x1ea0f8u;
    // NOP
    // 0x1ea0fc: 0x0  nop
    ctx->pc = 0x1ea0fcu;
    // NOP
    // 0x1ea100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ea104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ea108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea10c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea110: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ea110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea114: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1EA114u;
    {
        const bool branch_taken_0x1ea114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA114u;
            // 0x1ea118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea114) {
            ctx->pc = 0x1EA1CCu;
            goto label_1ea1cc;
        }
    }
    ctx->pc = 0x1EA11Cu;
    // 0x1ea11c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ea11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ea120: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1ea120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1ea124: 0x2463d6c0  addiu       $v1, $v1, -0x2940
    ctx->pc = 0x1ea124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956736));
    // 0x1ea128: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA128u;
    {
        const bool branch_taken_0x1ea128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA128u;
            // 0x1ea12c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea128) {
            ctx->pc = 0x1EA170u;
            goto label_1ea170;
        }
    }
    ctx->pc = 0x1EA130u;
    // 0x1ea130: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EA130u;
    {
        const bool branch_taken_0x1ea130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea130) {
            ctx->pc = 0x1EA170u;
            goto label_1ea170;
        }
    }
    ctx->pc = 0x1EA138u;
    // 0x1ea138: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1ea138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1ea13c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ea13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ea140: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ea140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea144: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA144u;
    {
        const bool branch_taken_0x1ea144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea144) {
            ctx->pc = 0x1EA170u;
            goto label_1ea170;
        }
    }
    ctx->pc = 0x1EA14Cu;
    // 0x1ea14c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ea14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ea150: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1ea150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1ea154: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ea154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1ea158: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1ea158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ea15c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1ea15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ea160: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1ea160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1ea164: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1ea164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1ea168: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1EA168u;
    SET_GPR_U32(ctx, 31, 0x1EA170u);
    ctx->pc = 0x1EA16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA168u;
            // 0x1ea16c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA170u; }
        if (ctx->pc != 0x1EA170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA170u; }
        if (ctx->pc != 0x1EA170u) { return; }
    }
    ctx->pc = 0x1EA170u;
label_1ea170:
    // 0x1ea170: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1EA170u;
    {
        const bool branch_taken_0x1ea170 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea170) {
            ctx->pc = 0x1EA174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA170u;
            // 0x1ea174: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA1A8u;
            goto label_1ea1a8;
        }
    }
    ctx->pc = 0x1EA178u;
    // 0x1ea178: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ea178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ea17c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1ea17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1ea180: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA180u;
    {
        const bool branch_taken_0x1ea180 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA180u;
            // 0x1ea184: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea180) {
            ctx->pc = 0x1EA1A4u;
            goto label_1ea1a4;
        }
    }
    ctx->pc = 0x1EA188u;
    // 0x1ea188: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ea188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ea18c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1ea18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1ea190: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA190u;
    {
        const bool branch_taken_0x1ea190 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA190u;
            // 0x1ea194: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea190) {
            ctx->pc = 0x1EA1A4u;
            goto label_1ea1a4;
        }
    }
    ctx->pc = 0x1EA198u;
    // 0x1ea198: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ea198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ea19c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1ea19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1ea1a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ea1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ea1a4:
    // 0x1ea1a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1ea1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1ea1a8:
    // 0x1ea1a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ea1a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ea1ac: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA1ACu;
    {
        const bool branch_taken_0x1ea1ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ea1ac) {
            ctx->pc = 0x1EA1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1ACu;
            // 0x1ea1b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA1D0u;
            goto label_1ea1d0;
        }
    }
    ctx->pc = 0x1EA1B4u;
    // 0x1ea1b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ea1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ea1b8: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1ea1b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ea1bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ea1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1ea1c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ea1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1c4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1EA1C4u;
    SET_GPR_U32(ctx, 31, 0x1EA1CCu);
    ctx->pc = 0x1EA1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1C4u;
            // 0x1ea1c8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1CCu; }
        if (ctx->pc != 0x1EA1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1CCu; }
        if (ctx->pc != 0x1EA1CCu) { return; }
    }
    ctx->pc = 0x1EA1CCu;
label_1ea1cc:
    // 0x1ea1cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ea1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ea1d0:
    // 0x1ea1d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ea1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea1d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea1d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1DCu;
            // 0x1ea1e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA1E4u;
    // 0x1ea1e4: 0x0  nop
    ctx->pc = 0x1ea1e4u;
    // NOP
    // 0x1ea1e8: 0x0  nop
    ctx->pc = 0x1ea1e8u;
    // NOP
    // 0x1ea1ec: 0x0  nop
    ctx->pc = 0x1ea1ecu;
    // NOP
    // 0x1ea1f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ea1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ea1f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ea1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ea1f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ea1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ea1fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ea200: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ea200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ea204: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ea204u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ea20c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ea20cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea214: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ea214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea21c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ea21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea220: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ea220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1ea224: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1ea224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ea228: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x1EA228u;
    SET_GPR_U32(ctx, 31, 0x1EA230u);
    ctx->pc = 0x1EA22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA228u;
            // 0x1ea22c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA230u; }
        if (ctx->pc != 0x1EA230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA230u; }
        if (ctx->pc != 0x1EA230u) { return; }
    }
    ctx->pc = 0x1EA230u;
label_1ea230:
    // 0x1ea230: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1ea230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ea234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ea234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea238: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EA238u;
    {
        const bool branch_taken_0x1ea238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA238u;
            // 0x1ea23c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea238) {
            ctx->pc = 0x1EA270u;
            goto label_1ea270;
        }
    }
    ctx->pc = 0x1EA240u;
    // 0x1ea240: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ea240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea244: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ea244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea248: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ea248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea24c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ea24cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea250: 0xc07a728  jal         func_1E9CA0
    ctx->pc = 0x1EA250u;
    SET_GPR_U32(ctx, 31, 0x1EA258u);
    ctx->pc = 0x1EA254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA250u;
            // 0x1ea254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9CA0u;
    if (runtime->hasFunction(0x1E9CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA258u; }
        if (ctx->pc != 0x1EA258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9CA0_0x1e9ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA258u; }
        if (ctx->pc != 0x1EA258u) { return; }
    }
    ctx->pc = 0x1EA258u;
label_1ea258:
    // 0x1ea258: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ea258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ea25c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ea25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ea260: 0x2463d7c0  addiu       $v1, $v1, -0x2840
    ctx->pc = 0x1ea260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956992));
    // 0x1ea264: 0x2442d780  addiu       $v0, $v0, -0x2880
    ctx->pc = 0x1ea264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956928));
    // 0x1ea268: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ea268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ea26c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ea26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ea270:
    // 0x1ea270: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ea270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea274: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ea274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea278: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ea278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea27c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ea27cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea28c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA28Cu;
            // 0x1ea290: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA294u;
    // 0x1ea294: 0x0  nop
    ctx->pc = 0x1ea294u;
    // NOP
    // 0x1ea298: 0x0  nop
    ctx->pc = 0x1ea298u;
    // NOP
    // 0x1ea29c: 0x0  nop
    ctx->pc = 0x1ea29cu;
    // NOP
    // 0x1ea2a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ea2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ea2a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ea2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ea2a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ea2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ea2ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ea2b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ea2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ea2b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ea2b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ea2b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea2c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ea2c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea2c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ea2c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ea2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1ea2d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ea2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2d4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1ea2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ea2d8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x1EA2D8u;
    SET_GPR_U32(ctx, 31, 0x1EA2E0u);
    ctx->pc = 0x1EA2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2D8u;
            // 0x1ea2dc: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2E0u; }
        if (ctx->pc != 0x1EA2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2E0u; }
        if (ctx->pc != 0x1EA2E0u) { return; }
    }
    ctx->pc = 0x1EA2E0u;
label_1ea2e0:
    // 0x1ea2e0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1ea2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ea2e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ea2e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2e8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA2E8u;
    {
        const bool branch_taken_0x1ea2e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2E8u;
            // 0x1ea2ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2e8) {
            ctx->pc = 0x1EA308u;
            goto label_1ea308;
        }
    }
    ctx->pc = 0x1EA2F0u;
    // 0x1ea2f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ea2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ea2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ea2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2fc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1ea2fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea300: 0xc07a728  jal         func_1E9CA0
    ctx->pc = 0x1EA300u;
    SET_GPR_U32(ctx, 31, 0x1EA308u);
    ctx->pc = 0x1EA304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA300u;
            // 0x1ea304: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9CA0u;
    if (runtime->hasFunction(0x1E9CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA308u; }
        if (ctx->pc != 0x1EA308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9CA0_0x1e9ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA308u; }
        if (ctx->pc != 0x1EA308u) { return; }
    }
    ctx->pc = 0x1EA308u;
label_1ea308:
    // 0x1ea308: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1ea308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea30c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ea30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea310: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ea310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ea314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea31c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea324: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA324u;
            // 0x1ea328: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA32Cu;
    // 0x1ea32c: 0x0  nop
    ctx->pc = 0x1ea32cu;
    // NOP
}
