#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B5040
// Address: 0x3b5040 - 0x3b51b0
void sub_003B5040_0x3b5040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5040_0x3b5040");
#endif

    switch (ctx->pc) {
        case 0x3b50b4u: goto label_3b50b4;
        case 0x3b50c4u: goto label_3b50c4;
        case 0x3b50fcu: goto label_3b50fc;
        case 0x3b5108u: goto label_3b5108;
        case 0x3b5150u: goto label_3b5150;
        default: break;
    }

    ctx->pc = 0x3b5040u;

    // 0x3b5040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b5044: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b5044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b5048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b5048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b504c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b5050: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b5050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b5054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b5058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b5058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b505c: 0x80820cb0  lb          $v0, 0xCB0($a0)
    ctx->pc = 0x3b505cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3248)));
    // 0x3b5060: 0x26500cd0  addiu       $s0, $s2, 0xCD0
    ctx->pc = 0x3b5060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3280));
    // 0x3b5064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b5064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b5068: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3b5068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3b506c: 0xa0820cb0  sb          $v0, 0xCB0($a0)
    ctx->pc = 0x3b506cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3248), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b5070: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3b5070u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3b5074: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3b5074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b5078: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3b5078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b507c: 0xa0820cb0  sb          $v0, 0xCB0($a0)
    ctx->pc = 0x3b507cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3248), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b5080: 0x80820cb1  lb          $v0, 0xCB1($a0)
    ctx->pc = 0x3b5080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3249)));
    // 0x3b5084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b5084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b5088: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3b5088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3b508c: 0xa0820cb1  sb          $v0, 0xCB1($a0)
    ctx->pc = 0x3b508cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3249), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b5090: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3b5090u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3b5094: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3b5094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b5098: 0x70621018  mult1       $v0, $v1, $v0
    ctx->pc = 0x3b5098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b509c: 0xa0820cb1  sb          $v0, 0xCB1($a0)
    ctx->pc = 0x3b509cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3249), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b50a0: 0x80820cb0  lb          $v0, 0xCB0($a0)
    ctx->pc = 0x3b50a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3248)));
    // 0x3b50a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3b50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3b50a8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3b50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3b50ac: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3B50ACu;
    SET_GPR_U32(ctx, 31, 0x3B50B4u);
    ctx->pc = 0x3B50B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B50ACu;
            // 0x3b50b0: 0x24440c50  addiu       $a0, $v0, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B50B4u; }
        if (ctx->pc != 0x3B50B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B50B4u; }
        if (ctx->pc != 0x3B50B4u) { return; }
    }
    ctx->pc = 0x3B50B4u;
label_3b50b4:
    // 0x3b50b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b50b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b50b8: 0x26440c30  addiu       $a0, $s2, 0xC30
    ctx->pc = 0x3b50b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3120));
    // 0x3b50bc: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3B50BCu;
    SET_GPR_U32(ctx, 31, 0x3B50C4u);
    ctx->pc = 0x3B50C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B50BCu;
            // 0x3b50c0: 0x26460c20  addiu       $a2, $s2, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B50C4u; }
        if (ctx->pc != 0x3B50C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B50C4u; }
        if (ctx->pc != 0x3B50C4u) { return; }
    }
    ctx->pc = 0x3B50C4u;
label_3b50c4:
    // 0x3b50c4: 0x92440cb2  lbu         $a0, 0xCB2($s2)
    ctx->pc = 0x3b50c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3250)));
    // 0x3b50c8: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x3b50c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b50cc: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B50CCu;
    {
        const bool branch_taken_0x3b50cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b50cc) {
            ctx->pc = 0x3B50D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B50CCu;
            // 0x3b50d0: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B515Cu;
            goto label_3b515c;
        }
    }
    ctx->pc = 0x3B50D4u;
    // 0x3b50d4: 0x82430cb1  lb          $v1, 0xCB1($s2)
    ctx->pc = 0x3b50d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3249)));
    // 0x3b50d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3b50d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b50dc: 0x82420cb0  lb          $v0, 0xCB0($s2)
    ctx->pc = 0x3b50dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3248)));
    // 0x3b50e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3b50e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3b50e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3b50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3b50e8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3b50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3b50ec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3b50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3b50f0: 0x24650c50  addiu       $a1, $v1, 0xC50
    ctx->pc = 0x3b50f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3152));
    // 0x3b50f4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3B50F4u;
    SET_GPR_U32(ctx, 31, 0x3B50FCu);
    ctx->pc = 0x3B50F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B50F4u;
            // 0x3b50f8: 0x24460c50  addiu       $a2, $v0, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B50FCu; }
        if (ctx->pc != 0x3B50FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B50FCu; }
        if (ctx->pc != 0x3B50FCu) { return; }
    }
    ctx->pc = 0x3B50FCu;
label_3b50fc:
    // 0x3b50fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3b50fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b5100: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3B5100u;
    SET_GPR_U32(ctx, 31, 0x3B5108u);
    ctx->pc = 0x3B5104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5100u;
            // 0x3b5104: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5108u; }
        if (ctx->pc != 0x3B5108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5108u; }
        if (ctx->pc != 0x3B5108u) { return; }
    }
    ctx->pc = 0x3B5108u;
label_3b5108:
    // 0x3b5108: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3b5108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b510c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3b510cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b5110: 0x0  nop
    ctx->pc = 0x3b5110u;
    // NOP
    // 0x3b5114: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3b5114u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b5118: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x3B5118u;
    {
        const bool branch_taken_0x3b5118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b5118) {
            ctx->pc = 0x3B511Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5118u;
            // 0x3b511c: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B5144u;
            goto label_3b5144;
        }
    }
    ctx->pc = 0x3B5120u;
    // 0x3b5120: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3b5120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b5124: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3b5124u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b5128: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5128u;
    {
        const bool branch_taken_0x3b5128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b5128) {
            ctx->pc = 0x3B5140u;
            goto label_3b5140;
        }
    }
    ctx->pc = 0x3B5130u;
    // 0x3b5130: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3b5130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b5134: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3b5134u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b5138: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x3B5138u;
    {
        const bool branch_taken_0x3b5138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b5138) {
            ctx->pc = 0x3B513Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5138u;
            // 0x3b513c: 0xa2400cb2  sb          $zero, 0xCB2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3250), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B5160u;
            goto label_3b5160;
        }
    }
    ctx->pc = 0x3B5140u;
label_3b5140:
    // 0x3b5140: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x3b5140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b5144:
    // 0x3b5144: 0x26440c40  addiu       $a0, $s2, 0xC40
    ctx->pc = 0x3b5144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3136));
    // 0x3b5148: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x3B5148u;
    SET_GPR_U32(ctx, 31, 0x3B5150u);
    ctx->pc = 0x3B514Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5148u;
            // 0x3b514c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5150u; }
        if (ctx->pc != 0x3B5150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5150u; }
        if (ctx->pc != 0x3B5150u) { return; }
    }
    ctx->pc = 0x3B5150u;
label_3b5150:
    // 0x3b5150: 0xa2400cb2  sb          $zero, 0xCB2($s2)
    ctx->pc = 0x3b5150u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3250), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b5154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B5154u;
    {
        const bool branch_taken_0x3b5154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5154) {
            ctx->pc = 0x3B5160u;
            goto label_3b5160;
        }
    }
    ctx->pc = 0x3B515Cu;
label_3b515c:
    // 0x3b515c: 0xa2430cb2  sb          $v1, 0xCB2($s2)
    ctx->pc = 0x3b515cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3250), (uint8_t)GPR_U32(ctx, 3));
label_3b5160:
    // 0x3b5160: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3b5160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b5164: 0xc6420ca0  lwc1        $f2, 0xCA0($s2)
    ctx->pc = 0x3b5164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b5168: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b5168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b516c: 0x0  nop
    ctx->pc = 0x3b516cu;
    // NOP
    // 0x3b5170: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3b5170u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3b5174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b5174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b5178: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3B5178u;
    {
        const bool branch_taken_0x3b5178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B517Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5178u;
            // 0x3b517c: 0xe6410ca0  swc1        $f1, 0xCA0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5178) {
            ctx->pc = 0x3B5194u;
            goto label_3b5194;
        }
    }
    ctx->pc = 0x3B5180u;
    // 0x3b5180: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3b5180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3b5184: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b5184u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b5188: 0x0  nop
    ctx->pc = 0x3b5188u;
    // NOP
    // 0x3b518c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3b518cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3b5190: 0xe6400ca0  swc1        $f0, 0xCA0($s2)
    ctx->pc = 0x3b5190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3232), bits); }
label_3b5194:
    // 0x3b5194: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b5194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b5198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b5198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b519c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b519cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b51a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b51a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b51a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B51A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B51A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B51A4u;
            // 0x3b51a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B51ACu;
    // 0x3b51ac: 0x0  nop
    ctx->pc = 0x3b51acu;
    // NOP
}
