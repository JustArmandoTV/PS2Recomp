#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136C60
// Address: 0x136c60 - 0x136e70
void sub_00136C60_0x136c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136C60_0x136c60");
#endif

    switch (ctx->pc) {
        case 0x136cb0u: goto label_136cb0;
        case 0x136d34u: goto label_136d34;
        case 0x136d44u: goto label_136d44;
        case 0x136d54u: goto label_136d54;
        case 0x136dc4u: goto label_136dc4;
        case 0x136dd4u: goto label_136dd4;
        case 0x136de4u: goto label_136de4;
        case 0x136e14u: goto label_136e14;
        case 0x136e24u: goto label_136e24;
        case 0x136e34u: goto label_136e34;
        case 0x136e48u: goto label_136e48;
        default: break;
    }

    ctx->pc = 0x136c60u;

    // 0x136c60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x136c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x136c64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c68: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136c68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x136c6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x136c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x136c70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x136c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x136c74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x136c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x136c78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x136c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c7c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x136c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x136c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x136c84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x136c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c88: 0x2ce10002  sltiu       $at, $a3, 0x2
    ctx->pc = 0x136c88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136c8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x136c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x136c90: 0x0  nop
    ctx->pc = 0x136c90u;
    // NOP
    // 0x136c94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x136c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x136c98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x136c98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x136c9c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x136C9Cu;
    {
        const bool branch_taken_0x136c9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x136CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136C9Cu;
            // 0x136ca0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c9c) {
            ctx->pc = 0x136CF0u;
            goto label_136cf0;
        }
    }
    ctx->pc = 0x136CA4u;
    // 0x136ca4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x136ca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x136ca8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x136ca8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x136cac: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x136cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_136cb0:
    // 0x136cb0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x136cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x136cb4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x136cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x136cb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x136cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x136cbc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x136cbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136cc0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x136cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x136cc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136CC4u;
    {
        const bool branch_taken_0x136cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136cc4) {
            ctx->pc = 0x136CD8u;
            goto label_136cd8;
        }
    }
    ctx->pc = 0x136CCCu;
    // 0x136ccc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136CCCu;
    {
        const bool branch_taken_0x136ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136CCCu;
            // 0x136cd0: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ccc) {
            ctx->pc = 0x136CE0u;
            goto label_136ce0;
        }
    }
    ctx->pc = 0x136CD4u;
    // 0x136cd4: 0x0  nop
    ctx->pc = 0x136cd4u;
    // NOP
label_136cd8:
    // 0x136cd8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x136cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cdc: 0x0  nop
    ctx->pc = 0x136cdcu;
    // NOP
label_136ce0:
    // 0x136ce0: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x136ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x136ce4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x136ce4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136ce8: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x136CE8u;
    {
        const bool branch_taken_0x136ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ce8) {
            ctx->pc = 0x136CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136CE8u;
            // 0x136cec: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136cb0;
        }
    }
    ctx->pc = 0x136CF0u;
label_136cf0:
    // 0x136cf0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x136cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x136cf4: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x136cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x136cf8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x136cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x136cfc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x136CFCu;
    {
        const bool branch_taken_0x136cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136CFCu;
            // 0x136d00: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cfc) {
            ctx->pc = 0x136D5Cu;
            goto label_136d5c;
        }
    }
    ctx->pc = 0x136D04u;
    // 0x136d04: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x136d04u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x136d08: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x136d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x136d0c: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x136d0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x136d10: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x136D10u;
    {
        const bool branch_taken_0x136d10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x136D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136D10u;
            // 0x136d14: 0x84a50002  lh          $a1, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d10) {
            ctx->pc = 0x136D3Cu;
            goto label_136d3c;
        }
    }
    ctx->pc = 0x136D18u;
    // 0x136d18: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x136d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x136d1c: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136D1Cu;
    {
        const bool branch_taken_0x136d1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x136d1c) {
            ctx->pc = 0x136D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136D1Cu;
            // 0x136d20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136D2Cu;
            goto label_136d2c;
        }
    }
    ctx->pc = 0x136D24u;
    // 0x136d24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x136D24u;
    {
        const bool branch_taken_0x136d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136D24u;
            // 0x136d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d24) {
            ctx->pc = 0x136D4Cu;
            goto label_136d4c;
        }
    }
    ctx->pc = 0x136D2Cu;
label_136d2c:
    // 0x136d2c: 0xc04ca64  jal         func_132990
    ctx->pc = 0x136D2Cu;
    SET_GPR_U32(ctx, 31, 0x136D34u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D34u; }
        if (ctx->pc != 0x136D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D34u; }
        if (ctx->pc != 0x136D34u) { return; }
    }
    ctx->pc = 0x136D34u;
label_136d34:
    // 0x136d34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x136D34u;
    {
        const bool branch_taken_0x136d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d34) {
            ctx->pc = 0x136D54u;
            goto label_136d54;
        }
    }
    ctx->pc = 0x136D3Cu;
label_136d3c:
    // 0x136d3c: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x136D3Cu;
    SET_GPR_U32(ctx, 31, 0x136D44u);
    ctx->pc = 0x136D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136D3Cu;
            // 0x136d40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D44u; }
        if (ctx->pc != 0x136D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D44u; }
        if (ctx->pc != 0x136D44u) { return; }
    }
    ctx->pc = 0x136D44u;
label_136d44:
    // 0x136d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136D44u;
    {
        const bool branch_taken_0x136d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d44) {
            ctx->pc = 0x136D54u;
            goto label_136d54;
        }
    }
    ctx->pc = 0x136D4Cu;
label_136d4c:
    // 0x136d4c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x136D4Cu;
    SET_GPR_U32(ctx, 31, 0x136D54u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D54u; }
        if (ctx->pc != 0x136D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D54u; }
        if (ctx->pc != 0x136D54u) { return; }
    }
    ctx->pc = 0x136D54u;
label_136d54:
    // 0x136d54: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x136D54u;
    {
        const bool branch_taken_0x136d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136D54u;
            // 0x136d58: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d54) {
            ctx->pc = 0x136E4Cu;
            goto label_136e4c;
        }
    }
    ctx->pc = 0x136D5Cu;
label_136d5c:
    // 0x136d5c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x136d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x136d60: 0x24b00008  addiu       $s0, $a1, 0x8
    ctx->pc = 0x136d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x136d64: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x136d64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x136d68: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x136d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x136d6c: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x136d6cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x136d70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x136d70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136d74: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x136d74u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x136d78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x136d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x136d7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x136d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136d80: 0x84a50002  lh          $a1, 0x2($a1)
    ctx->pc = 0x136d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x136d84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x136d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136d88: 0x0  nop
    ctx->pc = 0x136d88u;
    // NOP
    // 0x136d8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x136d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x136d90: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x136d90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x136d94: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x136d94u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x136d98: 0x0  nop
    ctx->pc = 0x136d98u;
    // NOP
    // 0x136d9c: 0x0  nop
    ctx->pc = 0x136d9cu;
    // NOP
    // 0x136da0: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x136DA0u;
    {
        const bool branch_taken_0x136da0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x136da0) {
            ctx->pc = 0x136DCCu;
            goto label_136dcc;
        }
    }
    ctx->pc = 0x136DA8u;
    // 0x136da8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x136da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x136dac: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136DACu;
    {
        const bool branch_taken_0x136dac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x136dac) {
            ctx->pc = 0x136DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136DACu;
            // 0x136db0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136DBCu;
            goto label_136dbc;
        }
    }
    ctx->pc = 0x136DB4u;
    // 0x136db4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x136DB4u;
    {
        const bool branch_taken_0x136db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136DB4u;
            // 0x136db8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136db4) {
            ctx->pc = 0x136DDCu;
            goto label_136ddc;
        }
    }
    ctx->pc = 0x136DBCu;
label_136dbc:
    // 0x136dbc: 0xc04ca64  jal         func_132990
    ctx->pc = 0x136DBCu;
    SET_GPR_U32(ctx, 31, 0x136DC4u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DC4u; }
        if (ctx->pc != 0x136DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DC4u; }
        if (ctx->pc != 0x136DC4u) { return; }
    }
    ctx->pc = 0x136DC4u;
label_136dc4:
    // 0x136dc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x136DC4u;
    {
        const bool branch_taken_0x136dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136DC4u;
            // 0x136dc8: 0x86070006  lh          $a3, 0x6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dc4) {
            ctx->pc = 0x136DE8u;
            goto label_136de8;
        }
    }
    ctx->pc = 0x136DCCu;
label_136dcc:
    // 0x136dcc: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x136DCCu;
    SET_GPR_U32(ctx, 31, 0x136DD4u);
    ctx->pc = 0x136DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136DCCu;
            // 0x136dd0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DD4u; }
        if (ctx->pc != 0x136DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DD4u; }
        if (ctx->pc != 0x136DD4u) { return; }
    }
    ctx->pc = 0x136DD4u;
label_136dd4:
    // 0x136dd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136DD4u;
    {
        const bool branch_taken_0x136dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136dd4) {
            ctx->pc = 0x136DE4u;
            goto label_136de4;
        }
    }
    ctx->pc = 0x136DDCu;
label_136ddc:
    // 0x136ddc: 0xc04ca18  jal         func_132860
    ctx->pc = 0x136DDCu;
    SET_GPR_U32(ctx, 31, 0x136DE4u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DE4u; }
        if (ctx->pc != 0x136DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DE4u; }
        if (ctx->pc != 0x136DE4u) { return; }
    }
    ctx->pc = 0x136DE4u;
label_136de4:
    // 0x136de4: 0x86070006  lh          $a3, 0x6($s0)
    ctx->pc = 0x136de4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_136de8:
    // 0x136de8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x136de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x136dec: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x136decu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x136df0: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x136DF0u;
    {
        const bool branch_taken_0x136df0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x136DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136DF0u;
            // 0x136df4: 0x86060004  lh          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136df0) {
            ctx->pc = 0x136E1Cu;
            goto label_136e1c;
        }
    }
    ctx->pc = 0x136DF8u;
    // 0x136df8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x136df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x136dfc: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136DFCu;
    {
        const bool branch_taken_0x136dfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x136dfc) {
            ctx->pc = 0x136E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136DFCu;
            // 0x136e00: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136E0Cu;
            goto label_136e0c;
        }
    }
    ctx->pc = 0x136E04u;
    // 0x136e04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x136E04u;
    {
        const bool branch_taken_0x136e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136E04u;
            // 0x136e08: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e04) {
            ctx->pc = 0x136E2Cu;
            goto label_136e2c;
        }
    }
    ctx->pc = 0x136E0Cu;
label_136e0c:
    // 0x136e0c: 0xc04ca64  jal         func_132990
    ctx->pc = 0x136E0Cu;
    SET_GPR_U32(ctx, 31, 0x136E14u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E14u; }
        if (ctx->pc != 0x136E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E14u; }
        if (ctx->pc != 0x136E14u) { return; }
    }
    ctx->pc = 0x136E14u;
label_136e14:
    // 0x136e14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x136E14u;
    {
        const bool branch_taken_0x136e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136E14u;
            // 0x136e18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e14) {
            ctx->pc = 0x136E38u;
            goto label_136e38;
        }
    }
    ctx->pc = 0x136E1Cu;
label_136e1c:
    // 0x136e1c: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x136E1Cu;
    SET_GPR_U32(ctx, 31, 0x136E24u);
    ctx->pc = 0x136E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136E1Cu;
            // 0x136e20: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E24u; }
        if (ctx->pc != 0x136E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E24u; }
        if (ctx->pc != 0x136E24u) { return; }
    }
    ctx->pc = 0x136E24u;
label_136e24:
    // 0x136e24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136E24u;
    {
        const bool branch_taken_0x136e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e24) {
            ctx->pc = 0x136E34u;
            goto label_136e34;
        }
    }
    ctx->pc = 0x136E2Cu;
label_136e2c:
    // 0x136e2c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x136E2Cu;
    SET_GPR_U32(ctx, 31, 0x136E34u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E34u; }
        if (ctx->pc != 0x136E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E34u; }
        if (ctx->pc != 0x136E34u) { return; }
    }
    ctx->pc = 0x136E34u;
label_136e34:
    // 0x136e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_136e38:
    // 0x136e38: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x136e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x136e3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x136e3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x136e40: 0xc04c8b4  jal         func_1322D0
    ctx->pc = 0x136E40u;
    SET_GPR_U32(ctx, 31, 0x136E48u);
    ctx->pc = 0x136E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136E40u;
            // 0x136e44: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1322D0u;
    if (runtime->hasFunction(0x1322D0u)) {
        auto targetFn = runtime->lookupFunction(0x1322D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E48u; }
        if (ctx->pc != 0x136E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001322D0_0x1322d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E48u; }
        if (ctx->pc != 0x136E48u) { return; }
    }
    ctx->pc = 0x136E48u;
label_136e48:
    // 0x136e48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x136e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_136e4c:
    // 0x136e4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x136e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136e50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x136e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136e54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x136e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136e58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x136e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x136E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136E5Cu;
            // 0x136e60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136E64u;
    // 0x136e64: 0x0  nop
    ctx->pc = 0x136e64u;
    // NOP
    // 0x136e68: 0x0  nop
    ctx->pc = 0x136e68u;
    // NOP
    // 0x136e6c: 0x0  nop
    ctx->pc = 0x136e6cu;
    // NOP
}
