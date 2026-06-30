#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048FAE0
// Address: 0x48fae0 - 0x48fd50
void sub_0048FAE0_0x48fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FAE0_0x48fae0");
#endif

    switch (ctx->pc) {
        case 0x48fb34u: goto label_48fb34;
        case 0x48fbe8u: goto label_48fbe8;
        case 0x48fc68u: goto label_48fc68;
        case 0x48fc7cu: goto label_48fc7c;
        case 0x48fca0u: goto label_48fca0;
        case 0x48fd20u: goto label_48fd20;
        case 0x48fd34u: goto label_48fd34;
        default: break;
    }

    ctx->pc = 0x48fae0u;

    // 0x48fae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48fae4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48fae8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48faec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x48faecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48faf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48faf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48faf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48faf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48faf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48fafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48fb00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48fb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fb04: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x48fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x48fb08: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x48fb08u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48fb0c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x48fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x48fb10: 0x8cb00050  lw          $s0, 0x50($a1)
    ctx->pc = 0x48fb10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x48fb14: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x48fb14u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48fb18: 0xa4860020  sh          $a2, 0x20($a0)
    ctx->pc = 0x48fb18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x48fb1c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x48fb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x48fb20: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x48fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x48fb24: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x48fb24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x48fb28: 0xa0860022  sb          $a2, 0x22($a0)
    ctx->pc = 0x48fb28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 6));
    // 0x48fb2c: 0x94870020  lhu         $a3, 0x20($a0)
    ctx->pc = 0x48fb2cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x48fb30: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x48fb30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48fb34:
    // 0x48fb34: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x48fb34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x48fb38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x48fb38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x48fb3c: 0x127202b  sltu        $a0, $t1, $a3
    ctx->pc = 0x48fb3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x48fb40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x48fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x48fb44: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x48fb44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x48fb48: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48FB48u;
    {
        const bool branch_taken_0x48fb48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x48fb48) {
            ctx->pc = 0x48FB34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48fb34;
        }
    }
    ctx->pc = 0x48FB50u;
    // 0x48fb50: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x48fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x48fb54: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x48fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x48fb58: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x48FB58u;
    {
        const bool branch_taken_0x48fb58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fb58) {
            ctx->pc = 0x48FB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48FB58u;
            // 0x48fb5c: 0x8ca40044  lw          $a0, 0x44($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48FBA8u;
            goto label_48fba8;
        }
    }
    ctx->pc = 0x48FB60u;
    // 0x48fb60: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x48fb60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48fb64: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x48fb64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x48fb68: 0x3102ff00  andi        $v0, $t0, 0xFF00
    ctx->pc = 0x48fb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x48fb6c: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x48fb6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x48fb70: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x48fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x48fb74: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x48fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x48fb78: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x48fb78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x48fb7c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x48fb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x48fb80: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x48fb80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x48fb84: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x48fb84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x48fb88: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x48fb88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x48fb8c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x48fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x48fb90: 0x1071024  and         $v0, $t0, $a3
    ctx->pc = 0x48fb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x48fb94: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x48fb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x48fb98: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x48fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x48fb9c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x48fb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x48fba0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48fba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x48fba4: 0x8ca40044  lw          $a0, 0x44($a1)
    ctx->pc = 0x48fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_48fba8:
    // 0x48fba8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x48FBA8u;
    {
        const bool branch_taken_0x48fba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fba8) {
            ctx->pc = 0x48FBACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48FBA8u;
            // 0x48fbac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48FBBCu;
            goto label_48fbbc;
        }
    }
    ctx->pc = 0x48FBB0u;
    // 0x48fbb0: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x48fbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48fbb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48FBB4u;
    {
        const bool branch_taken_0x48fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FBB4u;
            // 0x48fbb8: 0x8c880000  lw          $t0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fbb4) {
            ctx->pc = 0x48FBC0u;
            goto label_48fbc0;
        }
    }
    ctx->pc = 0x48FBBCu;
label_48fbbc:
    // 0x48fbbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48fbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48fbc0:
    // 0x48fbc0: 0x92240022  lbu         $a0, 0x22($s1)
    ctx->pc = 0x48fbc0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x48fbc4: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x48FBC4u;
    {
        const bool branch_taken_0x48fbc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fbc4) {
            ctx->pc = 0x48FC84u;
            goto label_48fc84;
        }
    }
    ctx->pc = 0x48FBCCu;
    // 0x48fbcc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x48fbccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48fbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48fbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fbd4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x48fbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x48fbd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48fbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fbdc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x48fbdcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48fbe0: 0x0  nop
    ctx->pc = 0x48fbe0u;
    // NOP
    // 0x48fbe4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x48fbe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_48fbe8:
    // 0x48fbe8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x48fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x48fbec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x48fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x48fbf0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x48fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x48fbf4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x48fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x48fbf8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x48fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x48fbfc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x48fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x48fc00: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x48fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x48fc04: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x48fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x48fc08: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x48fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x48fc0c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x48fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x48fc10: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x48fc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fc14: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x48fc14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x48fc18: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x48fc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x48fc1c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x48fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x48fc20: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x48fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x48fc24: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x48fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x48fc28: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x48fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x48fc2c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x48fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fc30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48fc30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x48fc34: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x48fc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x48fc38: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x48fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x48fc3c: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x48fc3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x48fc40: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x48FC40u;
    {
        const bool branch_taken_0x48fc40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x48FC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FC40u;
            // 0x48fc44: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fc40) {
            ctx->pc = 0x48FBE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48fbe8;
        }
    }
    ctx->pc = 0x48FC48u;
    // 0x48fc48: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x48fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48fc4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48fc50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x48fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x48fc54: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x48fc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48fc58: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48fc5c: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x48fc5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48fc60: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x48FC60u;
    SET_GPR_U32(ctx, 31, 0x48FC68u);
    ctx->pc = 0x48FC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FC60u;
            // 0x48fc64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FC68u; }
        if (ctx->pc != 0x48FC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FC68u; }
        if (ctx->pc != 0x48FC68u) { return; }
    }
    ctx->pc = 0x48FC68u;
label_48fc68:
    // 0x48fc68: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x48fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x48fc6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48fc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fc70: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x48fc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x48fc74: 0xc04a508  jal         func_129420
    ctx->pc = 0x48FC74u;
    SET_GPR_U32(ctx, 31, 0x48FC7Cu);
    ctx->pc = 0x48FC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FC74u;
            // 0x48fc78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FC7Cu; }
        if (ctx->pc != 0x48FC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FC7Cu; }
        if (ctx->pc != 0x48FC7Cu) { return; }
    }
    ctx->pc = 0x48FC7Cu;
label_48fc7c:
    // 0x48fc7c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x48FC7Cu;
    {
        const bool branch_taken_0x48fc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FC7Cu;
            // 0x48fc80: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fc7c) {
            ctx->pc = 0x48FD38u;
            goto label_48fd38;
        }
    }
    ctx->pc = 0x48FC84u;
label_48fc84:
    // 0x48fc84: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x48fc84u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48fc88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48fc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fc8c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x48fc8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x48fc90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48fc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fc94: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x48fc94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48fc98: 0x0  nop
    ctx->pc = 0x48fc98u;
    // NOP
    // 0x48fc9c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x48fc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_48fca0:
    // 0x48fca0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x48fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x48fca4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x48fca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x48fca8: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x48fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x48fcac: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x48fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x48fcb0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x48fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x48fcb4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x48fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x48fcb8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x48fcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x48fcbc: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x48fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x48fcc0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x48fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x48fcc4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x48fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x48fcc8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x48fcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fccc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x48fcccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x48fcd0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x48fcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x48fcd4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x48fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x48fcd8: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x48fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x48fcdc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x48fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x48fce0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x48fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x48fce4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x48fce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48fce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x48fcec: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x48fcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x48fcf0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x48fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x48fcf4: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x48fcf4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x48fcf8: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x48FCF8u;
    {
        const bool branch_taken_0x48fcf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x48FCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FCF8u;
            // 0x48fcfc: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fcf8) {
            ctx->pc = 0x48FCA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48fca0;
        }
    }
    ctx->pc = 0x48FD00u;
    // 0x48fd00: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x48fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x48fd04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48fd08: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x48fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x48fd0c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x48fd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48fd10: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48fd14: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x48fd14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48fd18: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x48FD18u;
    SET_GPR_U32(ctx, 31, 0x48FD20u);
    ctx->pc = 0x48FD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FD18u;
            // 0x48fd1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FD20u; }
        if (ctx->pc != 0x48FD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FD20u; }
        if (ctx->pc != 0x48FD20u) { return; }
    }
    ctx->pc = 0x48FD20u;
label_48fd20:
    // 0x48fd20: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x48fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x48fd24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48fd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fd28: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x48fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x48fd2c: 0xc04a508  jal         func_129420
    ctx->pc = 0x48FD2Cu;
    SET_GPR_U32(ctx, 31, 0x48FD34u);
    ctx->pc = 0x48FD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FD2Cu;
            // 0x48fd30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FD34u; }
        if (ctx->pc != 0x48FD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FD34u; }
        if (ctx->pc != 0x48FD34u) { return; }
    }
    ctx->pc = 0x48FD34u;
label_48fd34:
    // 0x48fd34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48fd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48fd38:
    // 0x48fd38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48fd38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fd3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48fd3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fd40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48fd40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fd44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48fd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fd48: 0x3e00008  jr          $ra
    ctx->pc = 0x48FD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48FD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FD48u;
            // 0x48fd4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48FD50u;
}
