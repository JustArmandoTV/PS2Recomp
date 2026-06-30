#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00317BB0
// Address: 0x317bb0 - 0x317d60
void sub_00317BB0_0x317bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317BB0_0x317bb0");
#endif

    switch (ctx->pc) {
        case 0x317c10u: goto label_317c10;
        case 0x317c20u: goto label_317c20;
        case 0x317c28u: goto label_317c28;
        case 0x317c78u: goto label_317c78;
        case 0x317c88u: goto label_317c88;
        default: break;
    }

    ctx->pc = 0x317bb0u;

    // 0x317bb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x317bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x317bb4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x317bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x317bb8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x317bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x317bbc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x317bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x317bc0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x317bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x317bc4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x317bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x317bc8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x317bc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317bcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x317bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x317bd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x317bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317bd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x317bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x317bd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317bdc: 0x26710c6c  addiu       $s1, $s3, 0xC6C
    ctx->pc = 0x317bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 3180));
    // 0x317be0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x317be0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x317be4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x317be4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x317be8: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x317be8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x317bec: 0x94a20c7e  lhu         $v0, 0xC7E($a1)
    ctx->pc = 0x317becu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3198)));
    // 0x317bf0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x317bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x317bf4: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x317bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x317bf8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x317bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x317bfc: 0x678021  addu        $s0, $v1, $a3
    ctx->pc = 0x317bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x317c00: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x317c00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x317c04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x317c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x317c08: 0xc0c5f94  jal         func_317E50
    ctx->pc = 0x317C08u;
    SET_GPR_U32(ctx, 31, 0x317C10u);
    ctx->pc = 0x317C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317C08u;
            // 0x317c0c: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317E50u;
    if (runtime->hasFunction(0x317E50u)) {
        auto targetFn = runtime->lookupFunction(0x317E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C10u; }
        if (ctx->pc != 0x317C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317E50_0x317e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C10u; }
        if (ctx->pc != 0x317C10u) { return; }
    }
    ctx->pc = 0x317C10u;
label_317c10:
    // 0x317c10: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x317c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c14: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x317c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x317c18: 0xc04cc90  jal         func_133240
    ctx->pc = 0x317C18u;
    SET_GPR_U32(ctx, 31, 0x317C20u);
    ctx->pc = 0x317C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317C18u;
            // 0x317c1c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C20u; }
        if (ctx->pc != 0x317C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C20u; }
        if (ctx->pc != 0x317C20u) { return; }
    }
    ctx->pc = 0x317C20u;
label_317c20:
    // 0x317c20: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x317C20u;
    SET_GPR_U32(ctx, 31, 0x317C28u);
    ctx->pc = 0x317C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317C20u;
            // 0x317c24: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C28u; }
        if (ctx->pc != 0x317C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C28u; }
        if (ctx->pc != 0x317C28u) { return; }
    }
    ctx->pc = 0x317C28u;
label_317c28:
    // 0x317c28: 0x0  nop
    ctx->pc = 0x317c28u;
    // NOP
    // 0x317c2c: 0x0  nop
    ctx->pc = 0x317c2cu;
    // NOP
    // 0x317c30: 0x46000544  c1          0x544
    ctx->pc = 0x317c30u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x317c34: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x317c34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x317c38: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x317c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x317c3c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x317c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x317c40: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x317c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x317c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x317c48: 0xc4540020  lwc1        $f20, 0x20($v0)
    ctx->pc = 0x317c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x317c4c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x317c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x317c50: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x317c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x317c54: 0x45020030  bc1fl       . + 4 + (0x30 << 2)
    ctx->pc = 0x317C54u;
    {
        const bool branch_taken_0x317c54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317c54) {
            ctx->pc = 0x317C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317C54u;
            // 0x317c58: 0xc602000c  lwc1        $f2, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x317D18u;
            goto label_317d18;
        }
    }
    ctx->pc = 0x317C5Cu;
    // 0x317c5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x317c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x317c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c64: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x317c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x317c68: 0xa7a00090  sh          $zero, 0x90($sp)
    ctx->pc = 0x317c68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x317c6c: 0xa7a00092  sh          $zero, 0x92($sp)
    ctx->pc = 0x317c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x317c70: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x317C70u;
    SET_GPR_U32(ctx, 31, 0x317C78u);
    ctx->pc = 0x317C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317C70u;
            // 0x317c74: 0xa7a00094  sh          $zero, 0x94($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C78u; }
        if (ctx->pc != 0x317C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C78u; }
        if (ctx->pc != 0x317C78u) { return; }
    }
    ctx->pc = 0x317C78u;
label_317c78:
    // 0x317c78: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x317c78u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x317c7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x317c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c80: 0xc0c6128  jal         func_3184A0
    ctx->pc = 0x317C80u;
    SET_GPR_U32(ctx, 31, 0x317C88u);
    ctx->pc = 0x317C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317C80u;
            // 0x317c84: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3184A0u;
    if (runtime->hasFunction(0x3184A0u)) {
        auto targetFn = runtime->lookupFunction(0x3184A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C88u; }
        if (ctx->pc != 0x317C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003184A0_0x3184a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C88u; }
        if (ctx->pc != 0x317C88u) { return; }
    }
    ctx->pc = 0x317C88u;
label_317c88:
    // 0x317c88: 0x8e630d78  lw          $v1, 0xD78($s3)
    ctx->pc = 0x317c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
    // 0x317c8c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x317c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x317c90: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x317C90u;
    {
        const bool branch_taken_0x317c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317c90) {
            ctx->pc = 0x317C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317C90u;
            // 0x317c94: 0xc602000c  lwc1        $f2, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x317CCCu;
            goto label_317ccc;
        }
    }
    ctx->pc = 0x317C98u;
    // 0x317c98: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x317c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x317c9c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x317c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x317ca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317ca4: 0x97a30092  lhu         $v1, 0x92($sp)
    ctx->pc = 0x317ca4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 146)));
    // 0x317ca8: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x317ca8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x317cac: 0x4601a803  div.s       $f0, $f21, $f1
    ctx->pc = 0x317cacu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[1];
    // 0x317cb0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x317cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x317cb4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x317cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x317cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x317cbc: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x317cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x317cc0: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x317cc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x317cc4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x317CC4u;
    {
        const bool branch_taken_0x317cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317CC4u;
            // 0x317cc8: 0x4601051c  madd.s      $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317cc4) {
            ctx->pc = 0x317D30u;
            goto label_317d30;
        }
    }
    ctx->pc = 0x317CCCu;
label_317ccc:
    // 0x317ccc: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x317cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x317cd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317cd4: 0x4602a883  div.s       $f2, $f21, $f2
    ctx->pc = 0x317cd4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[2] = ctx->f[21] / ctx->f[2];
    // 0x317cd8: 0x0  nop
    ctx->pc = 0x317cd8u;
    // NOP
    // 0x317cdc: 0x0  nop
    ctx->pc = 0x317cdcu;
    // NOP
    // 0x317ce0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x317ce0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x317ce4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x317CE4u;
    {
        const bool branch_taken_0x317ce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317ce4) {
            ctx->pc = 0x317CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317CE4u;
            // 0x317ce8: 0x8e620d78  lw          $v0, 0xD78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317CF4u;
            goto label_317cf4;
        }
    }
    ctx->pc = 0x317CECu;
    // 0x317cec: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x317cecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x317cf0: 0x8e620d78  lw          $v0, 0xD78($s3)
    ctx->pc = 0x317cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_317cf4:
    // 0x317cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317cf8: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x317cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x317cfc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x317cfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x317d00: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x317d00u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x317d04: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x317d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x317d08: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x317D08u;
    {
        const bool branch_taken_0x317d08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317d08) {
            ctx->pc = 0x317D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317D08u;
            // 0x317d0c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x317D34u;
            goto label_317d34;
        }
    }
    ctx->pc = 0x317D10u;
    // 0x317d10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x317D10u;
    {
        const bool branch_taken_0x317d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317D10u;
            // 0x317d14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d10) {
            ctx->pc = 0x317D30u;
            goto label_317d30;
        }
    }
    ctx->pc = 0x317D18u;
label_317d18:
    // 0x317d18: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x317d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x317d1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317d20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x317d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317d24: 0x4602a883  div.s       $f2, $f21, $f2
    ctx->pc = 0x317d24u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[2] = ctx->f[21] / ctx->f[2];
    // 0x317d28: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x317d28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x317d2c: 0x46020d1c  madd.s      $f20, $f1, $f2
    ctx->pc = 0x317d2cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_317d30:
    // 0x317d30: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x317d30u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_317d34:
    // 0x317d34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x317d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x317d38: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x317d38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x317d3c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x317d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x317d40: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x317d40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x317d44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x317d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x317d48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x317d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x317d4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x317d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317d50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x317d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317d54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317d58: 0x3e00008  jr          $ra
    ctx->pc = 0x317D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317D58u;
            // 0x317d5c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x317D60u;
}
