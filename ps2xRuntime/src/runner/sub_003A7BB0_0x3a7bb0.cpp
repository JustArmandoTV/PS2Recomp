#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A7BB0
// Address: 0x3a7bb0 - 0x3a7d70
void sub_003A7BB0_0x3a7bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7BB0_0x3a7bb0");
#endif

    switch (ctx->pc) {
        case 0x3a7bc0u: goto label_3a7bc0;
        case 0x3a7c08u: goto label_3a7c08;
        default: break;
    }

    ctx->pc = 0x3a7bb0u;

    // 0x3a7bb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a7bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7BB4u;
            // 0x3a7bb8: 0x8c420d70  lw          $v0, 0xD70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A7BBCu;
    // 0x3a7bbc: 0x0  nop
    ctx->pc = 0x3a7bbcu;
    // NOP
label_3a7bc0:
    // 0x3a7bc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a7bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a7bc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a7bc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a7bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3a7bcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a7bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a7bd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a7bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a7bd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a7bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a7bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a7bdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a7bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a7be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a7be4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3a7be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7be8: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x3a7be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3a7bec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3a7becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a7bf0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a7bf4: 0x8c710074  lw          $s1, 0x74($v1)
    ctx->pc = 0x3a7bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x3a7bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7bfc: 0x8c500064  lw          $s0, 0x64($v0)
    ctx->pc = 0x3a7bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x3a7c00: 0xc075094  jal         func_1D4250
    ctx->pc = 0x3A7C00u;
    SET_GPR_U32(ctx, 31, 0x3A7C08u);
    ctx->pc = 0x3A7C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7C00u;
            // 0x3a7c04: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7C08u; }
        if (ctx->pc != 0x3A7C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7C08u; }
        if (ctx->pc != 0x3A7C08u) { return; }
    }
    ctx->pc = 0x3A7C08u;
label_3a7c08:
    // 0x3a7c08: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3a7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a7c0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a7c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a7c10: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7C10u;
    {
        const bool branch_taken_0x3a7c10 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3a7c10) {
            ctx->pc = 0x3A7C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7C10u;
            // 0x3a7c14: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A7C24u;
            goto label_3a7c24;
        }
    }
    ctx->pc = 0x3A7C18u;
    // 0x3a7c18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7c1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7C1Cu;
    {
        const bool branch_taken_0x3a7c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7C1Cu;
            // 0x3a7c20: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7c1c) {
            ctx->pc = 0x3A7C3Cu;
            goto label_3a7c3c;
        }
    }
    ctx->pc = 0x3A7C24u;
label_3a7c24:
    // 0x3a7c24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3a7c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3a7c28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a7c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a7c2c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a7c2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7c30: 0x0  nop
    ctx->pc = 0x3a7c30u;
    // NOP
    // 0x3a7c34: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3a7c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a7c38: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3a7c38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3a7c3c:
    // 0x3a7c3c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3a7c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3a7c40: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3a7c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3a7c44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a7c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a7c48: 0x0  nop
    ctx->pc = 0x3a7c48u;
    // NOP
    // 0x3a7c4c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x3a7c4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a7c50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a7c54: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3a7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7c58: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a7c58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a7c5c: 0x0  nop
    ctx->pc = 0x3a7c5cu;
    // NOP
    // 0x3a7c60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3a7c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a7c64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a7c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a7c68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7c68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a7c6c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a7c6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a7c70: 0x0  nop
    ctx->pc = 0x3a7c70u;
    // NOP
    // 0x3a7c74: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x3a7c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3a7c78: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3a7c78u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3a7c7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a7c80: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x3a7c80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a7c84: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3a7c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3a7c88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a7c8c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7C8Cu;
    {
        const bool branch_taken_0x3a7c8c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3a7c8c) {
            ctx->pc = 0x3A7C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7C8Cu;
            // 0x3a7c90: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A7CA0u;
            goto label_3a7ca0;
        }
    }
    ctx->pc = 0x3A7C94u;
    // 0x3a7c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7c98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7C98u;
    {
        const bool branch_taken_0x3a7c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7C98u;
            // 0x3a7c9c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7c98) {
            ctx->pc = 0x3A7CB8u;
            goto label_3a7cb8;
        }
    }
    ctx->pc = 0x3A7CA0u;
label_3a7ca0:
    // 0x3a7ca0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3a7ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3a7ca4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a7ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a7ca8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a7ca8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7cac: 0x0  nop
    ctx->pc = 0x3a7cacu;
    // NOP
    // 0x3a7cb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3a7cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a7cb4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3a7cb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3a7cb8:
    // 0x3a7cb8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3a7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3a7cbc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3a7cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3a7cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7cc4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3a7cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a7cc8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3a7cc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a7ccc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a7cd0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x3a7cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a7cd4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a7cd4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7cd8: 0x0  nop
    ctx->pc = 0x3a7cd8u;
    // NOP
    // 0x3a7cdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3a7cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a7ce0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a7ce0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a7ce4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a7ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a7ce8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7ce8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a7cec: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3a7cecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3a7cf0: 0x0  nop
    ctx->pc = 0x3a7cf0u;
    // NOP
    // 0x3a7cf4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x3a7cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3a7cf8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3a7cf8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3a7cfc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a7d00: 0xa6440002  sh          $a0, 0x2($s2)
    ctx->pc = 0x3a7d00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a7d04: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x3a7d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
    // 0x3a7d08: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x3a7d08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x3a7d0c: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A7D0Cu;
    {
        const bool branch_taken_0x3a7d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7d0c) {
            ctx->pc = 0x3A7D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7D0Cu;
            // 0x3a7d10: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A7D58u;
            goto label_3a7d58;
        }
    }
    ctx->pc = 0x3A7D14u;
    // 0x3a7d14: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3a7d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3a7d18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a7d1c: 0x8c840110  lw          $a0, 0x110($a0)
    ctx->pc = 0x3a7d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x3a7d20: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A7D20u;
    {
        const bool branch_taken_0x3a7d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a7d20) {
            ctx->pc = 0x3A7D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7D20u;
            // 0x3a7d24: 0x86430002  lh          $v1, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A7D4Cu;
            goto label_3a7d4c;
        }
    }
    ctx->pc = 0x3A7D28u;
    // 0x3a7d28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a7d2c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A7D2Cu;
    {
        const bool branch_taken_0x3a7d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a7d2c) {
            ctx->pc = 0x3A7D48u;
            goto label_3a7d48;
        }
    }
    ctx->pc = 0x3A7D34u;
    // 0x3a7d34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7d38: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7D38u;
    {
        const bool branch_taken_0x3a7d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a7d38) {
            ctx->pc = 0x3A7D48u;
            goto label_3a7d48;
        }
    }
    ctx->pc = 0x3A7D40u;
    // 0x3a7d40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7D40u;
    {
        const bool branch_taken_0x3a7d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7d40) {
            ctx->pc = 0x3A7D54u;
            goto label_3a7d54;
        }
    }
    ctx->pc = 0x3A7D48u;
label_3a7d48:
    // 0x3a7d48: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x3a7d48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_3a7d4c:
    // 0x3a7d4c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3a7d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3a7d50: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x3a7d50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_3a7d54:
    // 0x3a7d54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a7d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a7d58:
    // 0x3a7d58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a7d58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a7d5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a7d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7d60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a7d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a7d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7d68: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7D68u;
            // 0x3a7d6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A7D70u;
}
