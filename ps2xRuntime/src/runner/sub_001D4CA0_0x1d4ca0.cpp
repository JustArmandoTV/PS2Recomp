#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4CA0
// Address: 0x1d4ca0 - 0x1d4da0
void sub_001D4CA0_0x1d4ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4CA0_0x1d4ca0");
#endif

    switch (ctx->pc) {
        case 0x1d4cc4u: goto label_1d4cc4;
        case 0x1d4cd0u: goto label_1d4cd0;
        case 0x1d4ce0u: goto label_1d4ce0;
        case 0x1d4cf4u: goto label_1d4cf4;
        case 0x1d4d04u: goto label_1d4d04;
        case 0x1d4d10u: goto label_1d4d10;
        default: break;
    }

    ctx->pc = 0x1d4ca0u;

    // 0x1d4ca0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d4ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d4ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d4ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d4ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d4cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cb8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d4cbc: 0xc04c774  jal         func_131DD0
    ctx->pc = 0x1D4CBCu;
    SET_GPR_U32(ctx, 31, 0x1D4CC4u);
    ctx->pc = 0x1D4CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CBCu;
            // 0x1d4cc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131DD0u;
    if (runtime->hasFunction(0x131DD0u)) {
        auto targetFn = runtime->lookupFunction(0x131DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CC4u; }
        if (ctx->pc != 0x1D4CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131DD0_0x131dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CC4u; }
        if (ctx->pc != 0x1D4CC4u) { return; }
    }
    ctx->pc = 0x1D4CC4u;
label_1d4cc4:
    // 0x1d4cc4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d4cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d4cc8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x1D4CC8u;
    SET_GPR_U32(ctx, 31, 0x1D4CD0u);
    ctx->pc = 0x1D4CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CC8u;
            // 0x1d4ccc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CD0u; }
        if (ctx->pc != 0x1D4CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CD0u; }
        if (ctx->pc != 0x1D4CD0u) { return; }
    }
    ctx->pc = 0x1D4CD0u;
label_1d4cd0:
    // 0x1d4cd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d4cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cd4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d4cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d4cd8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1D4CD8u;
    SET_GPR_U32(ctx, 31, 0x1D4CE0u);
    ctx->pc = 0x1D4CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CD8u;
            // 0x1d4cdc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CE0u; }
        if (ctx->pc != 0x1D4CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CE0u; }
        if (ctx->pc != 0x1D4CE0u) { return; }
    }
    ctx->pc = 0x1D4CE0u;
label_1d4ce0:
    // 0x1d4ce0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1d4ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1d4ce4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d4ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d4ce8: 0x24a5c550  addiu       $a1, $a1, -0x3AB0
    ctx->pc = 0x1d4ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
    // 0x1d4cec: 0xc0bc684  jal         func_2F1A10
    ctx->pc = 0x1D4CECu;
    SET_GPR_U32(ctx, 31, 0x1D4CF4u);
    ctx->pc = 0x1D4CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CECu;
            // 0x1d4cf0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A10u;
    if (runtime->hasFunction(0x2F1A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CF4u; }
        if (ctx->pc != 0x1D4CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1A10_0x2f1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CF4u; }
        if (ctx->pc != 0x1D4CF4u) { return; }
    }
    ctx->pc = 0x1D4CF4u;
label_1d4cf4:
    // 0x1d4cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d4cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cfc: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x1D4CFCu;
    SET_GPR_U32(ctx, 31, 0x1D4D04u);
    ctx->pc = 0x1D4D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CFCu;
            // 0x1d4d00: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D04u; }
        if (ctx->pc != 0x1D4D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D04u; }
        if (ctx->pc != 0x1D4D04u) { return; }
    }
    ctx->pc = 0x1D4D04u;
label_1d4d04:
    // 0x1d4d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d08: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x1D4D08u;
    SET_GPR_U32(ctx, 31, 0x1D4D10u);
    ctx->pc = 0x1D4D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D08u;
            // 0x1d4d0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D10u; }
        if (ctx->pc != 0x1D4D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D10u; }
        if (ctx->pc != 0x1D4D10u) { return; }
    }
    ctx->pc = 0x1D4D10u;
label_1d4d10:
    // 0x1d4d10: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d4d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4d14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4d18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4d1c: 0x0  nop
    ctx->pc = 0x1d4d1cu;
    // NOP
    // 0x1d4d20: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d4d20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4d24: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4D24u;
    {
        const bool branch_taken_0x1d4d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4d24) {
            ctx->pc = 0x1D4D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D24u;
            // 0x1d4d28: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D3Cu;
            goto label_1d4d3c;
        }
    }
    ctx->pc = 0x1D4D2Cu;
    // 0x1d4d2c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d4d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1d4d30: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1d4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1d4d34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4D34u;
    {
        const bool branch_taken_0x1d4d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D34u;
            // 0x1d4d38: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d34) {
            ctx->pc = 0x1D4D8Cu;
            goto label_1d4d8c;
        }
    }
    ctx->pc = 0x1D4D3Cu;
label_1d4d3c:
    // 0x1d4d3c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d4d3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4d40: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4D40u;
    {
        const bool branch_taken_0x1d4d40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4d40) {
            ctx->pc = 0x1D4D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D40u;
            // 0x1d4d44: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D58u;
            goto label_1d4d58;
        }
    }
    ctx->pc = 0x1D4D48u;
    // 0x1d4d48: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d4d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1d4d4c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1d4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1d4d50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D4D50u;
    {
        const bool branch_taken_0x1d4d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D50u;
            // 0x1d4d54: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d50) {
            ctx->pc = 0x1D4D8Cu;
            goto label_1d4d8c;
        }
    }
    ctx->pc = 0x1D4D58u;
label_1d4d58:
    // 0x1d4d58: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d4d58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4d5c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4D5Cu;
    {
        const bool branch_taken_0x1d4d5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4d5c) {
            ctx->pc = 0x1D4D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D5Cu;
            // 0x1d4d60: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D74u;
            goto label_1d4d74;
        }
    }
    ctx->pc = 0x1D4D64u;
    // 0x1d4d64: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d4d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1d4d68: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1d4d6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4D6Cu;
    {
        const bool branch_taken_0x1d4d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D6Cu;
            // 0x1d4d70: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d6c) {
            ctx->pc = 0x1D4D8Cu;
            goto label_1d4d8c;
        }
    }
    ctx->pc = 0x1D4D74u;
label_1d4d74:
    // 0x1d4d74: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d4d74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4d78: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4D78u;
    {
        const bool branch_taken_0x1d4d78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4d78) {
            ctx->pc = 0x1D4D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D78u;
            // 0x1d4d7c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D90u;
            goto label_1d4d90;
        }
    }
    ctx->pc = 0x1D4D80u;
    // 0x1d4d80: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1d4d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1d4d84: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d4d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1d4d88: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d4d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1d4d8c:
    // 0x1d4d8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d4d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4d90:
    // 0x1d4d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D98u;
            // 0x1d4d9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4DA0u;
}
