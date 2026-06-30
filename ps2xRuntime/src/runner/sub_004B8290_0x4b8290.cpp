#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8290
// Address: 0x4b8290 - 0x4b8380
void sub_004B8290_0x4b8290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8290_0x4b8290");
#endif

    switch (ctx->pc) {
        case 0x4b82d8u: goto label_4b82d8;
        case 0x4b82e0u: goto label_4b82e0;
        case 0x4b82f0u: goto label_4b82f0;
        case 0x4b8300u: goto label_4b8300;
        default: break;
    }

    ctx->pc = 0x4b8290u;

    // 0x4b8290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b8290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b8294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b8294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4b8298: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b8298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4b829c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b82a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b82a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b82a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4b82a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4b82a8: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x4b82a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x4b82ac: 0x9082017d  lbu         $v0, 0x17D($a0)
    ctx->pc = 0x4b82acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 381)));
    // 0x4b82b0: 0x8c850150  lw          $a1, 0x150($a0)
    ctx->pc = 0x4b82b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x4b82b4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x4b82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4b82b8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4b82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4b82bc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x4b82bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x4b82c0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4b82c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4b82c4: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x4b82c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b82c8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x4b82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x4b82cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b82ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b82d0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x4B82D0u;
    SET_GPR_U32(ctx, 31, 0x4B82D8u);
    ctx->pc = 0x4B82D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B82D0u;
            // 0x4b82d4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B82D8u; }
        if (ctx->pc != 0x4B82D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B82D8u; }
        if (ctx->pc != 0x4B82D8u) { return; }
    }
    ctx->pc = 0x4B82D8u;
label_4b82d8:
    // 0x4b82d8: 0xc04cc14  jal         func_133050
    ctx->pc = 0x4B82D8u;
    SET_GPR_U32(ctx, 31, 0x4B82E0u);
    ctx->pc = 0x4B82DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B82D8u;
            // 0x4b82dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B82E0u; }
        if (ctx->pc != 0x4B82E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B82E0u; }
        if (ctx->pc != 0x4B82E0u) { return; }
    }
    ctx->pc = 0x4B82E0u;
label_4b82e0:
    // 0x4b82e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4b82e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4b82e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b82e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b82e8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x4B82E8u;
    SET_GPR_U32(ctx, 31, 0x4B82F0u);
    ctx->pc = 0x4B82ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B82E8u;
            // 0x4b82ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B82F0u; }
        if (ctx->pc != 0x4B82F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B82F0u; }
        if (ctx->pc != 0x4B82F0u) { return; }
    }
    ctx->pc = 0x4B82F0u;
label_4b82f0:
    // 0x4b82f0: 0xc62c00dc  lwc1        $f12, 0xDC($s1)
    ctx->pc = 0x4b82f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4b82f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b82f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b82f8: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x4B82F8u;
    SET_GPR_U32(ctx, 31, 0x4B8300u);
    ctx->pc = 0x4B82FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B82F8u;
            // 0x4b82fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8300u; }
        if (ctx->pc != 0x4B8300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8300u; }
        if (ctx->pc != 0x4B8300u) { return; }
    }
    ctx->pc = 0x4B8300u;
label_4b8300:
    // 0x4b8300: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x4b8300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x4b8304: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x4b8304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
    // 0x4b8308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b8308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b830c: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x4b830cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x4b8310: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4b8310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x4b8314: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x4b8314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x4b8318: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x4b8318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b831c: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x4b831cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[1];
    // 0x4b8320: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4b8320u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b8324: 0x0  nop
    ctx->pc = 0x4b8324u;
    // NOP
    // 0x4b8328: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x4b8328u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4b832c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4b832cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4b8330: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4b8330u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b8334: 0x0  nop
    ctx->pc = 0x4b8334u;
    // NOP
    // 0x4b8338: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x4b8338u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x4b833c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4b833cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4b8340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b8340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b8344: 0x0  nop
    ctx->pc = 0x4b8344u;
    // NOP
    // 0x4b8348: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4b8348u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x4b834c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x4b834cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4b8350: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x4b8350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x4b8354: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x4b8354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x4b8358: 0xe621016c  swc1        $f1, 0x16C($s1)
    ctx->pc = 0x4b8358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    // 0x4b835c: 0xae200174  sw          $zero, 0x174($s1)
    ctx->pc = 0x4b835cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
    // 0x4b8360: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b8360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b8364: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4b8364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4b8368: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b8368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b836c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b836cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8370: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8370u;
            // 0x4b8374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8378u;
    // 0x4b8378: 0x0  nop
    ctx->pc = 0x4b8378u;
    // NOP
    // 0x4b837c: 0x0  nop
    ctx->pc = 0x4b837cu;
    // NOP
}
