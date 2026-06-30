#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00569D20
// Address: 0x569d20 - 0x569fb0
void sub_00569D20_0x569d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00569D20_0x569d20");
#endif

    ctx->pc = 0x569d20u;

    // 0x569d20: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x569d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x569d24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x569d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x569d28: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x569d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x569d2c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x569d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x569d30: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x569d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x569d34: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x569d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x569d38: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x569d38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x569d3c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x569d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x569d40: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x569D40u;
    {
        const bool branch_taken_0x569d40 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x569d40) {
            ctx->pc = 0x569D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569D40u;
            // 0x569d44: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569D54u;
            goto label_569d54;
        }
    }
    ctx->pc = 0x569D48u;
    // 0x569d48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x569d48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569d4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x569D4Cu;
    {
        const bool branch_taken_0x569d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569D4Cu;
            // 0x569d50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569d4c) {
            ctx->pc = 0x569D6Cu;
            goto label_569d6c;
        }
    }
    ctx->pc = 0x569D54u;
label_569d54:
    // 0x569d54: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x569d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x569d58: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x569d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x569d5c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x569d5cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569d60: 0x0  nop
    ctx->pc = 0x569d60u;
    // NOP
    // 0x569d64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x569d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x569d68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x569d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_569d6c:
    // 0x569d6c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x569d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x569d70: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x569d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x569d74: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x569D74u;
    {
        const bool branch_taken_0x569d74 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x569d74) {
            ctx->pc = 0x569D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569D74u;
            // 0x569d78: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569D88u;
            goto label_569d88;
        }
    }
    ctx->pc = 0x569D7Cu;
    // 0x569d7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x569d7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569d80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x569D80u;
    {
        const bool branch_taken_0x569d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569D80u;
            // 0x569d84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569d80) {
            ctx->pc = 0x569DA0u;
            goto label_569da0;
        }
    }
    ctx->pc = 0x569D88u;
label_569d88:
    // 0x569d88: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x569d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x569d8c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x569d8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x569d90: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x569d90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569d94: 0x0  nop
    ctx->pc = 0x569d94u;
    // NOP
    // 0x569d98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x569d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x569d9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x569d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_569da0:
    // 0x569da0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x569da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x569da4: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x569da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x569da8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x569da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x569dac: 0x34a57fc8  ori         $a1, $a1, 0x7FC8
    ctx->pc = 0x569dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32712);
    // 0x569db0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x569db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x569db4: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x569db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x569db8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x569db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x569dbc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x569dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x569dc0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x569dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x569dc4: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x569DC4u;
    {
        const bool branch_taken_0x569dc4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x569dc4) {
            ctx->pc = 0x569DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569DC4u;
            // 0x569dc8: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569DD8u;
            goto label_569dd8;
        }
    }
    ctx->pc = 0x569DCCu;
    // 0x569dcc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x569dccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569dd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x569DD0u;
    {
        const bool branch_taken_0x569dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569DD0u;
            // 0x569dd4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569dd0) {
            ctx->pc = 0x569DF0u;
            goto label_569df0;
        }
    }
    ctx->pc = 0x569DD8u;
label_569dd8:
    // 0x569dd8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x569dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x569ddc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x569ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x569de0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x569de0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569de4: 0x0  nop
    ctx->pc = 0x569de4u;
    // NOP
    // 0x569de8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x569de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x569dec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x569decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_569df0:
    // 0x569df0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x569df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x569df4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x569df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x569df8: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x569DF8u;
    {
        const bool branch_taken_0x569df8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x569df8) {
            ctx->pc = 0x569DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569DF8u;
            // 0x569dfc: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569E0Cu;
            goto label_569e0c;
        }
    }
    ctx->pc = 0x569E00u;
    // 0x569e00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x569e00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569e04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x569E04u;
    {
        const bool branch_taken_0x569e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569E04u;
            // 0x569e08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569e04) {
            ctx->pc = 0x569E24u;
            goto label_569e24;
        }
    }
    ctx->pc = 0x569E0Cu;
label_569e0c:
    // 0x569e0c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x569e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x569e10: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x569e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x569e14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x569e14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569e18: 0x0  nop
    ctx->pc = 0x569e18u;
    // NOP
    // 0x569e1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x569e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x569e20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x569e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_569e24:
    // 0x569e24: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x569e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x569e28: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x569e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x569e2c: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x569e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x569e30: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x569e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x569e34: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x569e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x569e38: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x569e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x569e3c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x569e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x569e40: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x569e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x569e44: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x569e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x569e48: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x569E48u;
    {
        const bool branch_taken_0x569e48 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x569e48) {
            ctx->pc = 0x569E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569E48u;
            // 0x569e4c: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569E5Cu;
            goto label_569e5c;
        }
    }
    ctx->pc = 0x569E50u;
    // 0x569e50: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x569e50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569e54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x569E54u;
    {
        const bool branch_taken_0x569e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569E54u;
            // 0x569e58: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569e54) {
            ctx->pc = 0x569E74u;
            goto label_569e74;
        }
    }
    ctx->pc = 0x569E5Cu;
label_569e5c:
    // 0x569e5c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x569e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x569e60: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x569e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x569e64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x569e64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569e68: 0x0  nop
    ctx->pc = 0x569e68u;
    // NOP
    // 0x569e6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x569e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x569e70: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x569e70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_569e74:
    // 0x569e74: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x569e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x569e78: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x569e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x569e7c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x569e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x569e80: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x569e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x569e84: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x569E84u;
    {
        const bool branch_taken_0x569e84 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x569e84) {
            ctx->pc = 0x569E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569E84u;
            // 0x569e88: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569E98u;
            goto label_569e98;
        }
    }
    ctx->pc = 0x569E8Cu;
    // 0x569e8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x569e8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569e90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x569E90u;
    {
        const bool branch_taken_0x569e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569E90u;
            // 0x569e94: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569e90) {
            ctx->pc = 0x569EB0u;
            goto label_569eb0;
        }
    }
    ctx->pc = 0x569E98u;
label_569e98:
    // 0x569e98: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x569e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x569e9c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x569e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x569ea0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x569ea0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569ea4: 0x0  nop
    ctx->pc = 0x569ea4u;
    // NOP
    // 0x569ea8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x569ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x569eac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x569eacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_569eb0:
    // 0x569eb0: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x569eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x569eb4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x569eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x569eb8: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x569eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
    // 0x569ebc: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x569ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x569ec0: 0xac860050  sw          $a2, 0x50($a0)
    ctx->pc = 0x569ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 6));
    // 0x569ec4: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x569ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x569ec8: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x569ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x569ecc: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x569eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x569ed0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x569ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x569ed4: 0xe4810054  swc1        $f1, 0x54($a0)
    ctx->pc = 0x569ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x569ed8: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x569ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x569edc: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x569edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x569ee0: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x569ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x569ee4: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x569ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x569ee8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x569ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x569eec: 0xe4810060  swc1        $f1, 0x60($a0)
    ctx->pc = 0x569eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x569ef0: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x569ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x569ef4: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x569ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x569ef8: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x569ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x569efc: 0xe4810068  swc1        $f1, 0x68($a0)
    ctx->pc = 0x569efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x569f00: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x569f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x569f04: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x569f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x569f08: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x569f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
    // 0x569f0c: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x569f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x569f10: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x569f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x569f14: 0xe4810074  swc1        $f1, 0x74($a0)
    ctx->pc = 0x569f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x569f18: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x569f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x569f1c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x569f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x569f20: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x569F20u;
    {
        const bool branch_taken_0x569f20 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x569f20) {
            ctx->pc = 0x569F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569F20u;
            // 0x569f24: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569F34u;
            goto label_569f34;
        }
    }
    ctx->pc = 0x569F28u;
    // 0x569f28: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x569f28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569f2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x569F2Cu;
    {
        const bool branch_taken_0x569f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569F2Cu;
            // 0x569f30: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569f2c) {
            ctx->pc = 0x569F4Cu;
            goto label_569f4c;
        }
    }
    ctx->pc = 0x569F34u;
label_569f34:
    // 0x569f34: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x569f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x569f38: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x569f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x569f3c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x569f3cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569f40: 0x0  nop
    ctx->pc = 0x569f40u;
    // NOP
    // 0x569f44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x569f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x569f48: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x569f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_569f4c:
    // 0x569f4c: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x569f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x569f50: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x569f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x569f54: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x569f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x569f58: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x569f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x569f5c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x569F5Cu;
    {
        const bool branch_taken_0x569f5c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x569f5c) {
            ctx->pc = 0x569F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569F5Cu;
            // 0x569f60: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569F70u;
            goto label_569f70;
        }
    }
    ctx->pc = 0x569F64u;
    // 0x569f64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x569f64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569f68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x569F68u;
    {
        const bool branch_taken_0x569f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569F68u;
            // 0x569f6c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569f68) {
            ctx->pc = 0x569F88u;
            goto label_569f88;
        }
    }
    ctx->pc = 0x569F70u;
label_569f70:
    // 0x569f70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x569f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x569f74: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x569f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x569f78: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x569f78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569f7c: 0x0  nop
    ctx->pc = 0x569f7cu;
    // NOP
    // 0x569f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x569f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x569f84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x569f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_569f88:
    // 0x569f88: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x569f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x569f8c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x569f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x569f90: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x569f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x569f94: 0xac83008c  sw          $v1, 0x8C($a0)
    ctx->pc = 0x569f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
    // 0x569f98: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x569f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x569f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x569F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x569FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569F9Cu;
            // 0x569fa0: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x569FA4u;
    // 0x569fa4: 0x0  nop
    ctx->pc = 0x569fa4u;
    // NOP
    // 0x569fa8: 0x0  nop
    ctx->pc = 0x569fa8u;
    // NOP
    // 0x569fac: 0x0  nop
    ctx->pc = 0x569facu;
    // NOP
}
