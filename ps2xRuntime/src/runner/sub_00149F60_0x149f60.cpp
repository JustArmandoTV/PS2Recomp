#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149F60
// Address: 0x149f60 - 0x14a200
void sub_00149F60_0x149f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149F60_0x149f60");
#endif

    switch (ctx->pc) {
        case 0x149fb8u: goto label_149fb8;
        case 0x149fc8u: goto label_149fc8;
        case 0x149fe4u: goto label_149fe4;
        case 0x14a018u: goto label_14a018;
        case 0x14a030u: goto label_14a030;
        case 0x14a03cu: goto label_14a03c;
        case 0x14a05cu: goto label_14a05c;
        case 0x14a094u: goto label_14a094;
        case 0x14a0b8u: goto label_14a0b8;
        case 0x14a0d8u: goto label_14a0d8;
        case 0x14a12cu: goto label_14a12c;
        case 0x14a14cu: goto label_14a14c;
        case 0x14a16cu: goto label_14a16c;
        case 0x14a18cu: goto label_14a18c;
        case 0x14a1b4u: goto label_14a1b4;
        default: break;
    }

    ctx->pc = 0x149f60u;

    // 0x149f60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x149f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x149f64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x149f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x149f68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x149f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x149f6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x149f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x149f70: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x149f70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149f78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149f80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149f84: 0x8cb00028  lw          $s0, 0x28($a1)
    ctx->pc = 0x149f84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x149f88: 0x12000091  beqz        $s0, . + 4 + (0x91 << 2)
    ctx->pc = 0x149F88u;
    {
        const bool branch_taken_0x149f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149F88u;
            // 0x149f8c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f88) {
            ctx->pc = 0x14A1D0u;
            goto label_14a1d0;
        }
    }
    ctx->pc = 0x149F90u;
    // 0x149f90: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x149F90u;
    {
        const bool branch_taken_0x149f90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f90) {
            ctx->pc = 0x149FA0u;
            goto label_149fa0;
        }
    }
    ctx->pc = 0x149F98u;
    // 0x149f98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149F98u;
    {
        const bool branch_taken_0x149f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149F98u;
            // 0x149f9c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f98) {
            ctx->pc = 0x149FACu;
            goto label_149fac;
        }
    }
    ctx->pc = 0x149FA0u;
label_149fa0:
    // 0x149fa0: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x149fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x149fa4: 0x24c61230  addiu       $a2, $a2, 0x1230
    ctx->pc = 0x149fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4656));
    // 0x149fa8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x149fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_149fac:
    // 0x149fac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x149facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fb0: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x149FB0u;
    SET_GPR_U32(ctx, 31, 0x149FB8u);
    ctx->pc = 0x149FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149FB0u;
            // 0x149fb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FB8u; }
        if (ctx->pc != 0x149FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FB8u; }
        if (ctx->pc != 0x149FB8u) { return; }
    }
    ctx->pc = 0x149FB8u;
label_149fb8:
    // 0x149fb8: 0x8e530030  lw          $s3, 0x30($s2)
    ctx->pc = 0x149fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x149fbc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x149fbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fc0: 0x1a000083  blez        $s0, . + 4 + (0x83 << 2)
    ctx->pc = 0x149FC0u;
    {
        const bool branch_taken_0x149fc0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x149FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149FC0u;
            // 0x149fc4: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fc0) {
            ctx->pc = 0x14A1D0u;
            goto label_14a1d0;
        }
    }
    ctx->pc = 0x149FC8u;
label_149fc8:
    // 0x149fc8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x149FC8u;
    {
        const bool branch_taken_0x149fc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x149fc8) {
            ctx->pc = 0x149FE8u;
            goto label_149fe8;
        }
    }
    ctx->pc = 0x149FD0u;
    // 0x149fd0: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x149fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x149fd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fd8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x149fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x149fdc: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x149FDCu;
    SET_GPR_U32(ctx, 31, 0x149FE4u);
    ctx->pc = 0x149FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149FDCu;
            // 0x149fe0: 0x2a22821  addu        $a1, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FE4u; }
        if (ctx->pc != 0x149FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FE4u; }
        if (ctx->pc != 0x149FE4u) { return; }
    }
    ctx->pc = 0x149FE4u;
label_149fe4:
    // 0x149fe4: 0x0  nop
    ctx->pc = 0x149fe4u;
    // NOP
label_149fe8:
    // 0x149fe8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x149fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149fec: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x149fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x149ff0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x149FF0u;
    {
        const bool branch_taken_0x149ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ff0) {
            ctx->pc = 0x14A040u;
            goto label_14a040;
        }
    }
    ctx->pc = 0x149FF8u;
    // 0x149ff8: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x149ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x149ffc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149FFCu;
    {
        const bool branch_taken_0x149ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ffc) {
            ctx->pc = 0x14A020u;
            goto label_14a020;
        }
    }
    ctx->pc = 0x14A004u;
    // 0x14a004: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x14a004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a008: 0xc66d0010  lwc1        $f13, 0x10($s3)
    ctx->pc = 0x14a008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14a00c: 0xc66e0014  lwc1        $f14, 0x14($s3)
    ctx->pc = 0x14a00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x14a010: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x14A010u;
    SET_GPR_U32(ctx, 31, 0x14A018u);
    ctx->pc = 0x14A014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A010u;
            // 0x14a014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (runtime->hasFunction(0x1354B0u)) {
        auto targetFn = runtime->lookupFunction(0x1354B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A018u; }
        if (ctx->pc != 0x14A018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001354B0_0x1354b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A018u; }
        if (ctx->pc != 0x14A018u) { return; }
    }
    ctx->pc = 0x14A018u;
label_14a018:
    // 0x14a018: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14A018u;
    {
        const bool branch_taken_0x14a018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a018) {
            ctx->pc = 0x14A040u;
            goto label_14a040;
        }
    }
    ctx->pc = 0x14A020u;
label_14a020:
    // 0x14a020: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14a024: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a028: 0xc04cb9c  jal         func_132E70
    ctx->pc = 0x14A028u;
    SET_GPR_U32(ctx, 31, 0x14A030u);
    ctx->pc = 0x14A02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A028u;
            // 0x14a02c: 0x2666000c  addiu       $a2, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A030u; }
        if (ctx->pc != 0x14A030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A030u; }
        if (ctx->pc != 0x14A030u) { return; }
    }
    ctx->pc = 0x14A030u;
label_14a030:
    // 0x14a030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14a030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a034: 0xc04ce78  jal         func_1339E0
    ctx->pc = 0x14A034u;
    SET_GPR_U32(ctx, 31, 0x14A03Cu);
    ctx->pc = 0x14A038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A034u;
            // 0x14a038: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1339E0u;
    if (runtime->hasFunction(0x1339E0u)) {
        auto targetFn = runtime->lookupFunction(0x1339E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A03Cu; }
        if (ctx->pc != 0x14A03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001339E0_0x1339e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A03Cu; }
        if (ctx->pc != 0x14A03Cu) { return; }
    }
    ctx->pc = 0x14A03Cu;
label_14a03c:
    // 0x14a03c: 0x0  nop
    ctx->pc = 0x14a03cu;
    // NOP
label_14a040:
    // 0x14a040: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14a040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14a044: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x14a044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x14a048: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A048u;
    {
        const bool branch_taken_0x14a048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a048) {
            ctx->pc = 0x14A068u;
            goto label_14a068;
        }
    }
    ctx->pc = 0x14A050u;
    // 0x14a050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a054: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x14A054u;
    SET_GPR_U32(ctx, 31, 0x14A05Cu);
    ctx->pc = 0x14A058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A054u;
            // 0x14a058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A05Cu; }
        if (ctx->pc != 0x14A05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A05Cu; }
        if (ctx->pc != 0x14A05Cu) { return; }
    }
    ctx->pc = 0x14A05Cu;
label_14a05c:
    // 0x14a05c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14A05Cu;
    {
        const bool branch_taken_0x14a05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a05c) {
            ctx->pc = 0x14A0D8u;
            goto label_14a0d8;
        }
    }
    ctx->pc = 0x14A064u;
    // 0x14a064: 0x0  nop
    ctx->pc = 0x14a064u;
    // NOP
label_14a068:
    // 0x14a068: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x14a068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x14a06c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a070: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14A070u;
    {
        const bool branch_taken_0x14a070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a070) {
            ctx->pc = 0x14A0D8u;
            goto label_14a0d8;
        }
    }
    ctx->pc = 0x14A078u;
    // 0x14a078: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14a078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14a07c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a080: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A080u;
    {
        const bool branch_taken_0x14a080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a080) {
            ctx->pc = 0x14A098u;
            goto label_14a098;
        }
    }
    ctx->pc = 0x14A088u;
    // 0x14a088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14a088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a08c: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x14A08Cu;
    SET_GPR_U32(ctx, 31, 0x14A094u);
    ctx->pc = 0x14A090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A08Cu;
            // 0x14a090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A094u; }
        if (ctx->pc != 0x14A094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A094u; }
        if (ctx->pc != 0x14A094u) { return; }
    }
    ctx->pc = 0x14A094u;
label_14a094:
    // 0x14a094: 0x0  nop
    ctx->pc = 0x14a094u;
    // NOP
label_14a098:
    // 0x14a098: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14a098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14a09c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x14a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x14a0a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a0a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A0A4u;
    {
        const bool branch_taken_0x14a0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a0a4) {
            ctx->pc = 0x14A0B8u;
            goto label_14a0b8;
        }
    }
    ctx->pc = 0x14A0ACu;
    // 0x14a0ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14a0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a0b0: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x14A0B0u;
    SET_GPR_U32(ctx, 31, 0x14A0B8u);
    ctx->pc = 0x14A0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0B0u;
            // 0x14a0b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0B8u; }
        if (ctx->pc != 0x14A0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0B8u; }
        if (ctx->pc != 0x14A0B8u) { return; }
    }
    ctx->pc = 0x14A0B8u;
label_14a0b8:
    // 0x14a0b8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14a0bc: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x14a0c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a0c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A0C4u;
    {
        const bool branch_taken_0x14a0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a0c4) {
            ctx->pc = 0x14A0D8u;
            goto label_14a0d8;
        }
    }
    ctx->pc = 0x14A0CCu;
    // 0x14a0cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14a0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a0d0: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x14A0D0u;
    SET_GPR_U32(ctx, 31, 0x14A0D8u);
    ctx->pc = 0x14A0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0D0u;
            // 0x14a0d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0D8u; }
        if (ctx->pc != 0x14A0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0D8u; }
        if (ctx->pc != 0x14A0D8u) { return; }
    }
    ctx->pc = 0x14A0D8u;
label_14a0d8:
    // 0x14a0d8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14a0dc: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x14a0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x14a0e0: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x14A0E0u;
    {
        const bool branch_taken_0x14a0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a0e0) {
            ctx->pc = 0x14A190u;
            goto label_14a190;
        }
    }
    ctx->pc = 0x14A0E8u;
    // 0x14a0e8: 0x30830f00  andi        $v1, $a0, 0xF00
    ctx->pc = 0x14a0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x14a0ec: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x14a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x14a0f0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14A0F0u;
    {
        const bool branch_taken_0x14a0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a0f0) {
            ctx->pc = 0x14A158u;
            goto label_14a158;
        }
    }
    ctx->pc = 0x14A0F8u;
    // 0x14a0f8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a0fc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A0FCu;
    {
        const bool branch_taken_0x14a0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a0fc) {
            ctx->pc = 0x14A138u;
            goto label_14a138;
        }
    }
    ctx->pc = 0x14A104u;
    // 0x14a104: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A104u;
    {
        const bool branch_taken_0x14a104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a104) {
            ctx->pc = 0x14A118u;
            goto label_14a118;
        }
    }
    ctx->pc = 0x14A10Cu;
    // 0x14a10c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14A10Cu;
    {
        const bool branch_taken_0x14a10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a10c) {
            ctx->pc = 0x14A178u;
            goto label_14a178;
        }
    }
    ctx->pc = 0x14A114u;
    // 0x14a114: 0x0  nop
    ctx->pc = 0x14a114u;
    // NOP
label_14a118:
    // 0x14a118: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x14a118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14a11c: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x14a11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x14a120: 0x8e670020  lw          $a3, 0x20($s3)
    ctx->pc = 0x14a120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x14a124: 0xc04d384  jal         func_134E10
    ctx->pc = 0x14A124u;
    SET_GPR_U32(ctx, 31, 0x14A12Cu);
    ctx->pc = 0x14A128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A124u;
            // 0x14a128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134E10u;
    if (runtime->hasFunction(0x134E10u)) {
        auto targetFn = runtime->lookupFunction(0x134E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A12Cu; }
        if (ctx->pc != 0x14A12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134E10_0x134e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A12Cu; }
        if (ctx->pc != 0x14A12Cu) { return; }
    }
    ctx->pc = 0x14A12Cu;
label_14a12c:
    // 0x14a12c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14A12Cu;
    {
        const bool branch_taken_0x14a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a12c) {
            ctx->pc = 0x14A190u;
            goto label_14a190;
        }
    }
    ctx->pc = 0x14A134u;
    // 0x14a134: 0x0  nop
    ctx->pc = 0x14a134u;
    // NOP
label_14a138:
    // 0x14a138: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x14a138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14a13c: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x14a13cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x14a140: 0x8e670020  lw          $a3, 0x20($s3)
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x14a144: 0xc04d3f4  jal         func_134FD0
    ctx->pc = 0x14A144u;
    SET_GPR_U32(ctx, 31, 0x14A14Cu);
    ctx->pc = 0x14A148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A144u;
            // 0x14a148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FD0u;
    if (runtime->hasFunction(0x134FD0u)) {
        auto targetFn = runtime->lookupFunction(0x134FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A14Cu; }
        if (ctx->pc != 0x14A14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134FD0_0x134fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A14Cu; }
        if (ctx->pc != 0x14A14Cu) { return; }
    }
    ctx->pc = 0x14A14Cu;
label_14a14c:
    // 0x14a14c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14A14Cu;
    {
        const bool branch_taken_0x14a14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a14c) {
            ctx->pc = 0x14A190u;
            goto label_14a190;
        }
    }
    ctx->pc = 0x14A154u;
    // 0x14a154: 0x0  nop
    ctx->pc = 0x14a154u;
    // NOP
label_14a158:
    // 0x14a158: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x14a158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14a15c: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x14a15cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x14a160: 0x8e670020  lw          $a3, 0x20($s3)
    ctx->pc = 0x14a160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x14a164: 0xc04d464  jal         func_135190
    ctx->pc = 0x14A164u;
    SET_GPR_U32(ctx, 31, 0x14A16Cu);
    ctx->pc = 0x14A168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A164u;
            // 0x14a168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135190u;
    if (runtime->hasFunction(0x135190u)) {
        auto targetFn = runtime->lookupFunction(0x135190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A16Cu; }
        if (ctx->pc != 0x14A16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135190_0x135190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A16Cu; }
        if (ctx->pc != 0x14A16Cu) { return; }
    }
    ctx->pc = 0x14A16Cu;
label_14a16c:
    // 0x14a16c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14A16Cu;
    {
        const bool branch_taken_0x14a16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a16c) {
            ctx->pc = 0x14A190u;
            goto label_14a190;
        }
    }
    ctx->pc = 0x14A174u;
    // 0x14a174: 0x0  nop
    ctx->pc = 0x14a174u;
    // NOP
label_14a178:
    // 0x14a178: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x14a178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14a17c: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x14a17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x14a180: 0x8e670020  lw          $a3, 0x20($s3)
    ctx->pc = 0x14a180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x14a184: 0xc04d384  jal         func_134E10
    ctx->pc = 0x14A184u;
    SET_GPR_U32(ctx, 31, 0x14A18Cu);
    ctx->pc = 0x14A188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A184u;
            // 0x14a188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134E10u;
    if (runtime->hasFunction(0x134E10u)) {
        auto targetFn = runtime->lookupFunction(0x134E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A18Cu; }
        if (ctx->pc != 0x14A18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134E10_0x134e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A18Cu; }
        if (ctx->pc != 0x14A18Cu) { return; }
    }
    ctx->pc = 0x14A18Cu;
label_14a18c:
    // 0x14a18c: 0x0  nop
    ctx->pc = 0x14a18cu;
    // NOP
label_14a190:
    // 0x14a190: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14a194: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x14a194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x14a198: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A198u;
    {
        const bool branch_taken_0x14a198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a198) {
            ctx->pc = 0x14A1B8u;
            goto label_14a1b8;
        }
    }
    ctx->pc = 0x14A1A0u;
    // 0x14a1a0: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x14a1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a1a4: 0xc66d0028  lwc1        $f13, 0x28($s3)
    ctx->pc = 0x14a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14a1a8: 0xc66e002c  lwc1        $f14, 0x2C($s3)
    ctx->pc = 0x14a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x14a1ac: 0xc04d5a4  jal         func_135690
    ctx->pc = 0x14A1ACu;
    SET_GPR_U32(ctx, 31, 0x14A1B4u);
    ctx->pc = 0x14A1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1ACu;
            // 0x14a1b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135690u;
    if (runtime->hasFunction(0x135690u)) {
        auto targetFn = runtime->lookupFunction(0x135690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1B4u; }
        if (ctx->pc != 0x14A1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135690_0x135690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1B4u; }
        if (ctx->pc != 0x14A1B4u) { return; }
    }
    ctx->pc = 0x14A1B4u;
label_14a1b4:
    // 0x14a1b4: 0x0  nop
    ctx->pc = 0x14a1b4u;
    // NOP
label_14a1b8:
    // 0x14a1b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14a1b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14a1bc: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x14a1bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14a1c0: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x14a1c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x14a1c4: 0x1460ff80  bnez        $v1, . + 4 + (-0x80 << 2)
    ctx->pc = 0x14A1C4u;
    {
        const bool branch_taken_0x14a1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1C4u;
            // 0x14a1c8: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1c4) {
            ctx->pc = 0x149FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149fc8;
        }
    }
    ctx->pc = 0x14A1CCu;
    // 0x14a1cc: 0x0  nop
    ctx->pc = 0x14a1ccu;
    // NOP
label_14a1d0:
    // 0x14a1d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14a1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a1d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14a1d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a1d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14a1d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a1dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14a1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a1e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a1e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a1e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a1e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14A1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1ECu;
            // 0x14a1f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A1F4u;
    // 0x14a1f4: 0x0  nop
    ctx->pc = 0x14a1f4u;
    // NOP
    // 0x14a1f8: 0x0  nop
    ctx->pc = 0x14a1f8u;
    // NOP
    // 0x14a1fc: 0x0  nop
    ctx->pc = 0x14a1fcu;
    // NOP
}
