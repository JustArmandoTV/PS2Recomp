#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137150
// Address: 0x137150 - 0x137360
void sub_00137150_0x137150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137150_0x137150");
#endif

    switch (ctx->pc) {
        case 0x1371a0u: goto label_1371a0;
        case 0x137224u: goto label_137224;
        case 0x137234u: goto label_137234;
        case 0x137244u: goto label_137244;
        case 0x1372b4u: goto label_1372b4;
        case 0x1372c4u: goto label_1372c4;
        case 0x1372d4u: goto label_1372d4;
        case 0x137304u: goto label_137304;
        case 0x137314u: goto label_137314;
        case 0x137324u: goto label_137324;
        case 0x137338u: goto label_137338;
        default: break;
    }

    ctx->pc = 0x137150u;

    // 0x137150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x137150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x137154: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x137154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137158: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x137158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13715c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x137160: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x137160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x137164: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x137164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x137168: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x137168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13716c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13716cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137174: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x137174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137178: 0x2ce10002  sltiu       $at, $a3, 0x2
    ctx->pc = 0x137178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13717c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13717cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x137180: 0x0  nop
    ctx->pc = 0x137180u;
    // NOP
    // 0x137184: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x137184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x137188: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x137188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13718c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x13718Cu;
    {
        const bool branch_taken_0x13718c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x137190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13718Cu;
            // 0x137190: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13718c) {
            ctx->pc = 0x1371E0u;
            goto label_1371e0;
        }
    }
    ctx->pc = 0x137194u;
    // 0x137194: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x137194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x137198: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x137198u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x13719c: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x13719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1371a0:
    // 0x1371a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1371a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1371a4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1371a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1371a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1371a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1371ac: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1371acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1371b0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1371b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1371b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1371B4u;
    {
        const bool branch_taken_0x1371b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1371b4) {
            ctx->pc = 0x1371C8u;
            goto label_1371c8;
        }
    }
    ctx->pc = 0x1371BCu;
    // 0x1371bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1371BCu;
    {
        const bool branch_taken_0x1371bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1371BCu;
            // 0x1371c0: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371bc) {
            ctx->pc = 0x1371D0u;
            goto label_1371d0;
        }
    }
    ctx->pc = 0x1371C4u;
    // 0x1371c4: 0x0  nop
    ctx->pc = 0x1371c4u;
    // NOP
label_1371c8:
    // 0x1371c8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1371c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371cc: 0x0  nop
    ctx->pc = 0x1371ccu;
    // NOP
label_1371d0:
    // 0x1371d0: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x1371d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1371d4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1371d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1371d8: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1371D8u;
    {
        const bool branch_taken_0x1371d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1371d8) {
            ctx->pc = 0x1371DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1371D8u;
            // 0x1371dc: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1371A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1371a0;
        }
    }
    ctx->pc = 0x1371E0u;
label_1371e0:
    // 0x1371e0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1371e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1371e4: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1371e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1371e8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x1371e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1371ec: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1371ECu;
    {
        const bool branch_taken_0x1371ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1371F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1371ECu;
            // 0x1371f0: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371ec) {
            ctx->pc = 0x13724Cu;
            goto label_13724c;
        }
    }
    ctx->pc = 0x1371F4u;
    // 0x1371f4: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x1371f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1371f8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1371f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1371fc: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x1371fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x137200: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137200u;
    {
        const bool branch_taken_0x137200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x137204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137200u;
            // 0x137204: 0x84a50002  lh          $a1, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137200) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137208u;
    // 0x137208: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13720c: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13720Cu;
    {
        const bool branch_taken_0x13720c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x13720c) {
            ctx->pc = 0x137210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13720Cu;
            // 0x137210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13721Cu;
            goto label_13721c;
        }
    }
    ctx->pc = 0x137214u;
    // 0x137214: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137214u;
    {
        const bool branch_taken_0x137214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137214u;
            // 0x137218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137214) {
            ctx->pc = 0x13723Cu;
            goto label_13723c;
        }
    }
    ctx->pc = 0x13721Cu;
label_13721c:
    // 0x13721c: 0xc04ca64  jal         func_132990
    ctx->pc = 0x13721Cu;
    SET_GPR_U32(ctx, 31, 0x137224u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137224u; }
        if (ctx->pc != 0x137224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137224u; }
        if (ctx->pc != 0x137224u) { return; }
    }
    ctx->pc = 0x137224u;
label_137224:
    // 0x137224: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x137224u;
    {
        const bool branch_taken_0x137224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137224) {
            ctx->pc = 0x137244u;
            goto label_137244;
        }
    }
    ctx->pc = 0x13722Cu;
label_13722c:
    // 0x13722c: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x13722Cu;
    SET_GPR_U32(ctx, 31, 0x137234u);
    ctx->pc = 0x137230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13722Cu;
            // 0x137230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137234u; }
        if (ctx->pc != 0x137234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137234u; }
        if (ctx->pc != 0x137234u) { return; }
    }
    ctx->pc = 0x137234u;
label_137234:
    // 0x137234: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137234u;
    {
        const bool branch_taken_0x137234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137234) {
            ctx->pc = 0x137244u;
            goto label_137244;
        }
    }
    ctx->pc = 0x13723Cu;
label_13723c:
    // 0x13723c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x13723Cu;
    SET_GPR_U32(ctx, 31, 0x137244u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137244u; }
        if (ctx->pc != 0x137244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137244u; }
        if (ctx->pc != 0x137244u) { return; }
    }
    ctx->pc = 0x137244u;
label_137244:
    // 0x137244: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x137244u;
    {
        const bool branch_taken_0x137244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137244u;
            // 0x137248: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137244) {
            ctx->pc = 0x13733Cu;
            goto label_13733c;
        }
    }
    ctx->pc = 0x13724Cu;
label_13724c:
    // 0x13724c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x13724cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137250: 0x24b00008  addiu       $s0, $a1, 0x8
    ctx->pc = 0x137250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x137254: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x137254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x137258: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x137258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x13725c: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x13725cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x137260: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x137260u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137264: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x137264u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x137268: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x137268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13726c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13726cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137270: 0x84a50002  lh          $a1, 0x2($a1)
    ctx->pc = 0x137270u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x137274: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137278: 0x0  nop
    ctx->pc = 0x137278u;
    // NOP
    // 0x13727c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13727cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x137280: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x137280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x137284: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x137284u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x137288: 0x0  nop
    ctx->pc = 0x137288u;
    // NOP
    // 0x13728c: 0x0  nop
    ctx->pc = 0x13728cu;
    // NOP
    // 0x137290: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137290u;
    {
        const bool branch_taken_0x137290 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x137290) {
            ctx->pc = 0x1372BCu;
            goto label_1372bc;
        }
    }
    ctx->pc = 0x137298u;
    // 0x137298: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13729c: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13729Cu;
    {
        const bool branch_taken_0x13729c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x13729c) {
            ctx->pc = 0x1372A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13729Cu;
            // 0x1372a0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1372ACu;
            goto label_1372ac;
        }
    }
    ctx->pc = 0x1372A4u;
    // 0x1372a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1372A4u;
    {
        const bool branch_taken_0x1372a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1372A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1372A4u;
            // 0x1372a8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372a4) {
            ctx->pc = 0x1372CCu;
            goto label_1372cc;
        }
    }
    ctx->pc = 0x1372ACu;
label_1372ac:
    // 0x1372ac: 0xc04ca64  jal         func_132990
    ctx->pc = 0x1372ACu;
    SET_GPR_U32(ctx, 31, 0x1372B4u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372B4u; }
        if (ctx->pc != 0x1372B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372B4u; }
        if (ctx->pc != 0x1372B4u) { return; }
    }
    ctx->pc = 0x1372B4u;
label_1372b4:
    // 0x1372b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1372B4u;
    {
        const bool branch_taken_0x1372b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1372B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1372B4u;
            // 0x1372b8: 0x86070006  lh          $a3, 0x6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372b4) {
            ctx->pc = 0x1372D8u;
            goto label_1372d8;
        }
    }
    ctx->pc = 0x1372BCu;
label_1372bc:
    // 0x1372bc: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x1372BCu;
    SET_GPR_U32(ctx, 31, 0x1372C4u);
    ctx->pc = 0x1372C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1372BCu;
            // 0x1372c0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372C4u; }
        if (ctx->pc != 0x1372C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372C4u; }
        if (ctx->pc != 0x1372C4u) { return; }
    }
    ctx->pc = 0x1372C4u;
label_1372c4:
    // 0x1372c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1372C4u;
    {
        const bool branch_taken_0x1372c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1372c4) {
            ctx->pc = 0x1372D4u;
            goto label_1372d4;
        }
    }
    ctx->pc = 0x1372CCu;
label_1372cc:
    // 0x1372cc: 0xc04ca18  jal         func_132860
    ctx->pc = 0x1372CCu;
    SET_GPR_U32(ctx, 31, 0x1372D4u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372D4u; }
        if (ctx->pc != 0x1372D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372D4u; }
        if (ctx->pc != 0x1372D4u) { return; }
    }
    ctx->pc = 0x1372D4u;
label_1372d4:
    // 0x1372d4: 0x86070006  lh          $a3, 0x6($s0)
    ctx->pc = 0x1372d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_1372d8:
    // 0x1372d8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1372d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1372dc: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x1372dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1372e0: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1372E0u;
    {
        const bool branch_taken_0x1372e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1372E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1372E0u;
            // 0x1372e4: 0x86060004  lh          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372e0) {
            ctx->pc = 0x13730Cu;
            goto label_13730c;
        }
    }
    ctx->pc = 0x1372E8u;
    // 0x1372e8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1372e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1372ec: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1372ECu;
    {
        const bool branch_taken_0x1372ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1372ec) {
            ctx->pc = 0x1372F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1372ECu;
            // 0x1372f0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1372FCu;
            goto label_1372fc;
        }
    }
    ctx->pc = 0x1372F4u;
    // 0x1372f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1372F4u;
    {
        const bool branch_taken_0x1372f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1372F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1372F4u;
            // 0x1372f8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372f4) {
            ctx->pc = 0x13731Cu;
            goto label_13731c;
        }
    }
    ctx->pc = 0x1372FCu;
label_1372fc:
    // 0x1372fc: 0xc04ca64  jal         func_132990
    ctx->pc = 0x1372FCu;
    SET_GPR_U32(ctx, 31, 0x137304u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137304u; }
        if (ctx->pc != 0x137304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137304u; }
        if (ctx->pc != 0x137304u) { return; }
    }
    ctx->pc = 0x137304u;
label_137304:
    // 0x137304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x137304u;
    {
        const bool branch_taken_0x137304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137304u;
            // 0x137308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137304) {
            ctx->pc = 0x137328u;
            goto label_137328;
        }
    }
    ctx->pc = 0x13730Cu;
label_13730c:
    // 0x13730c: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x13730Cu;
    SET_GPR_U32(ctx, 31, 0x137314u);
    ctx->pc = 0x137310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13730Cu;
            // 0x137310: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137314u; }
        if (ctx->pc != 0x137314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137314u; }
        if (ctx->pc != 0x137314u) { return; }
    }
    ctx->pc = 0x137314u;
label_137314:
    // 0x137314: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137314u;
    {
        const bool branch_taken_0x137314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137314) {
            ctx->pc = 0x137324u;
            goto label_137324;
        }
    }
    ctx->pc = 0x13731Cu;
label_13731c:
    // 0x13731c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x13731Cu;
    SET_GPR_U32(ctx, 31, 0x137324u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137324u; }
        if (ctx->pc != 0x137324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137324u; }
        if (ctx->pc != 0x137324u) { return; }
    }
    ctx->pc = 0x137324u;
label_137324:
    // 0x137324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x137324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_137328:
    // 0x137328: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x137328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13732c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13732cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x137330: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x137330u;
    SET_GPR_U32(ctx, 31, 0x137338u);
    ctx->pc = 0x137334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137330u;
            // 0x137334: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137338u; }
        if (ctx->pc != 0x137338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137338u; }
        if (ctx->pc != 0x137338u) { return; }
    }
    ctx->pc = 0x137338u;
label_137338:
    // 0x137338: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x137338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13733c:
    // 0x13733c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137340: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x137340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137344: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x137344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13734c: 0x3e00008  jr          $ra
    ctx->pc = 0x13734Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13734Cu;
            // 0x137350: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137354u;
    // 0x137354: 0x0  nop
    ctx->pc = 0x137354u;
    // NOP
    // 0x137358: 0x0  nop
    ctx->pc = 0x137358u;
    // NOP
    // 0x13735c: 0x0  nop
    ctx->pc = 0x13735cu;
    // NOP
}
