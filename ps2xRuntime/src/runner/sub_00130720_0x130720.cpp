#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00130720
// Address: 0x130720 - 0x131020
void sub_00130720_0x130720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130720_0x130720");
#endif

    switch (ctx->pc) {
        case 0x130794u: goto label_130794;
        case 0x1307a4u: goto label_1307a4;
        case 0x1307c4u: goto label_1307c4;
        case 0x1307d0u: goto label_1307d0;
        case 0x1307dcu: goto label_1307dc;
        case 0x13087cu: goto label_13087c;
        case 0x13089cu: goto label_13089c;
        case 0x1308bcu: goto label_1308bc;
        case 0x130920u: goto label_130920;
        case 0x130940u: goto label_130940;
        case 0x130960u: goto label_130960;
        case 0x1309dcu: goto label_1309dc;
        case 0x1309fcu: goto label_1309fc;
        case 0x130a1cu: goto label_130a1c;
        case 0x130a80u: goto label_130a80;
        case 0x130aa0u: goto label_130aa0;
        case 0x130ac0u: goto label_130ac0;
        case 0x130b3cu: goto label_130b3c;
        case 0x130b5cu: goto label_130b5c;
        case 0x130b7cu: goto label_130b7c;
        case 0x130bd4u: goto label_130bd4;
        case 0x130bf4u: goto label_130bf4;
        case 0x130c14u: goto label_130c14;
        case 0x130c6cu: goto label_130c6c;
        case 0x130c8cu: goto label_130c8c;
        case 0x130cacu: goto label_130cac;
        case 0x130d04u: goto label_130d04;
        case 0x130d24u: goto label_130d24;
        case 0x130d44u: goto label_130d44;
        case 0x130da0u: goto label_130da0;
        case 0x130dacu: goto label_130dac;
        case 0x130db8u: goto label_130db8;
        case 0x130e54u: goto label_130e54;
        case 0x130e60u: goto label_130e60;
        case 0x130e6cu: goto label_130e6c;
        default: break;
    }

    ctx->pc = 0x130720u;

    // 0x130720: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x130720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x130724: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x130724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130728: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x130728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13072c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130730: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x130730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x130734: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x130734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x130738: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x130738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13073c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13073cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130740: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x130740u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x130744: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x130744u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x130748: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x130748u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x13074c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x13074cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x130750: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x130750u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x130754: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x130754u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x130758: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x130758u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x13075c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x13075cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x130760: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x130760u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x130764: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x130764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x130768: 0xc45555d4  lwc1        $f21, 0x55D4($v0)
    ctx->pc = 0x130768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13076c: 0x460066c6  mov.s       $f27, $f12
    ctx->pc = 0x13076cu;
    ctx->f[27] = FPU_MOV_S(ctx->f[12]);
    // 0x130770: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x130770u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x130774: 0x46007746  mov.s       $f29, $f14
    ctx->pc = 0x130774u;
    ctx->f[29] = FPU_MOV_S(ctx->f[14]);
    // 0x130778: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13077c: 0xc45455d0  lwc1        $f20, 0x55D0($v0)
    ctx->pc = 0x13077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130780: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x130780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130784: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x130784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130788: 0xc46e0008  lwc1        $f14, 0x8($v1)
    ctx->pc = 0x130788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13078c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x13078Cu;
    SET_GPR_U32(ctx, 31, 0x130794u);
    ctx->pc = 0x130790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13078Cu;
            // 0x130790: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130794u; }
        if (ctx->pc != 0x130794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130794u; }
        if (ctx->pc != 0x130794u) { return; }
    }
    ctx->pc = 0x130794u;
label_130794:
    // 0x130794: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x130794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x130798: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13079c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x13079Cu;
    SET_GPR_U32(ctx, 31, 0x1307A4u);
    ctx->pc = 0x1307A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13079Cu;
            // 0x1307a0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307A4u; }
        if (ctx->pc != 0x1307A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307A4u; }
        if (ctx->pc != 0x1307A4u) { return; }
    }
    ctx->pc = 0x1307A4u;
label_1307a4:
    // 0x1307a4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1307a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1307a8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1307a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1307ac: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x1307acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1307b0: 0x4602de82  mul.s       $f26, $f27, $f2
    ctx->pc = 0x1307b0u;
    ctx->f[26] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x1307b4: 0x4601c5c2  mul.s       $f23, $f24, $f1
    ctx->pc = 0x1307b4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x1307b8: 0x4600ed82  mul.s       $f22, $f29, $f0
    ctx->pc = 0x1307b8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x1307bc: 0xc047740  jal         func_11DD00
    ctx->pc = 0x1307BCu;
    SET_GPR_U32(ctx, 31, 0x1307C4u);
    ctx->pc = 0x1307C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1307BCu;
            // 0x1307c0: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307C4u; }
        if (ctx->pc != 0x1307C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307C4u; }
        if (ctx->pc != 0x1307C4u) { return; }
    }
    ctx->pc = 0x1307C4u;
label_1307c4:
    // 0x1307c4: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x1307c4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x1307c8: 0xc047740  jal         func_11DD00
    ctx->pc = 0x1307C8u;
    SET_GPR_U32(ctx, 31, 0x1307D0u);
    ctx->pc = 0x1307CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1307C8u;
            // 0x1307cc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307D0u; }
        if (ctx->pc != 0x1307D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307D0u; }
        if (ctx->pc != 0x1307D0u) { return; }
    }
    ctx->pc = 0x1307D0u;
label_1307d0:
    // 0x1307d0: 0x4600ce40  add.s       $f25, $f25, $f0
    ctx->pc = 0x1307d0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
    // 0x1307d4: 0xc047740  jal         func_11DD00
    ctx->pc = 0x1307D4u;
    SET_GPR_U32(ctx, 31, 0x1307DCu);
    ctx->pc = 0x1307D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1307D4u;
            // 0x1307d8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307DCu; }
        if (ctx->pc != 0x1307DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307DCu; }
        if (ctx->pc != 0x1307DCu) { return; }
    }
    ctx->pc = 0x1307DCu;
label_1307dc:
    // 0x1307dc: 0x46190100  add.s       $f4, $f0, $f25
    ctx->pc = 0x1307dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x1307e0: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x1307e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x1307e4: 0x46040800  add.s       $f0, $f1, $f4
    ctx->pc = 0x1307e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1307e8: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1307e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1307ec: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1307ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1307f0: 0x450201f9  bc1fl       . + 4 + (0x1F9 << 2)
    ctx->pc = 0x1307F0u;
    {
        const bool branch_taken_0x1307f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1307f0) {
            ctx->pc = 0x1307F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1307F0u;
            // 0x1307f4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x1307F8u;
    // 0x1307f8: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x1307f8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
    // 0x1307fc: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x1307fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x130800: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x130800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130804: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x130804u;
    {
        const bool branch_taken_0x130804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130804) {
            ctx->pc = 0x130808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130804u;
            // 0x130808: 0x46040801  sub.s       $f0, $f1, $f4 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130818u;
            goto label_130818;
        }
    }
    ctx->pc = 0x13080Cu;
    // 0x13080c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x130810: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x130810u;
    {
        const bool branch_taken_0x130810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130810) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130818u;
label_130818:
    // 0x130818: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x130818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13081c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x13081Cu;
    {
        const bool branch_taken_0x13081c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13081c) {
            ctx->pc = 0x130820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13081Cu;
            // 0x130820: 0x46041000  add.s       $f0, $f2, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13082Cu;
            goto label_13082c;
        }
    }
    ctx->pc = 0x130824u;
    // 0x130824: 0x36100104  ori         $s0, $s0, 0x104
    ctx->pc = 0x130824u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)260);
    // 0x130828: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x130828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_13082c:
    // 0x13082c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x13082cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130830: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x130830u;
    {
        const bool branch_taken_0x130830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130830) {
            ctx->pc = 0x130834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130830u;
            // 0x130834: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x130840u;
            goto label_130840;
        }
    }
    ctx->pc = 0x130838u;
    // 0x130838: 0x36100208  ori         $s0, $s0, 0x208
    ctx->pc = 0x130838u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)520);
    // 0x13083c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x13083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_130840:
    // 0x130840: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x130840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x130844: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x130844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13084c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x13084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130850: 0x4602df02  mul.s       $f28, $f27, $f2
    ctx->pc = 0x130850u;
    ctx->f[28] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x130854: 0x4601c642  mul.s       $f25, $f24, $f1
    ctx->pc = 0x130854u;
    ctx->f[25] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x130858: 0x1062014f  beq         $v1, $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x130858u;
    {
        const bool branch_taken_0x130858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130858u;
            // 0x13085c: 0x4600ed42  mul.s       $f21, $f29, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130858) {
            ctx->pc = 0x130D98u;
            goto label_130d98;
        }
    }
    ctx->pc = 0x130860u;
    // 0x130860: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130864: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130868: 0xc4404ee4  lwc1        $f0, 0x4EE4($v0)
    ctx->pc = 0x130868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13086c: 0xc4614ee0  lwc1        $f1, 0x4EE0($v1)
    ctx->pc = 0x13086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130870: 0x4600d01a  mula.s      $f26, $f0
    ctx->pc = 0x130870u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x130874: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130874u;
    SET_GPR_U32(ctx, 31, 0x13087Cu);
    ctx->pc = 0x130878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130874u;
            // 0x130878: 0x4601e31c  madd.s      $f12, $f28, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[28], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13087Cu; }
        if (ctx->pc != 0x13087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13087Cu; }
        if (ctx->pc != 0x13087Cu) { return; }
    }
    ctx->pc = 0x13087Cu;
label_13087c:
    // 0x13087c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130880: 0xc4414ee0  lwc1        $f1, 0x4EE0($v0)
    ctx->pc = 0x130880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130884: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x130884u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x130888: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13088c: 0xc4404ee4  lwc1        $f0, 0x4EE4($v0)
    ctx->pc = 0x13088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130890: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x130890u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x130894: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130894u;
    SET_GPR_U32(ctx, 31, 0x13089Cu);
    ctx->pc = 0x130898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130894u;
            // 0x130898: 0x4601cb1c  madd.s      $f12, $f25, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13089Cu; }
        if (ctx->pc != 0x13089Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13089Cu; }
        if (ctx->pc != 0x13089Cu) { return; }
    }
    ctx->pc = 0x13089Cu;
label_13089c:
    // 0x13089c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x13089cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1308a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1308a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1308a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1308a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1308a8: 0xc4404ee4  lwc1        $f0, 0x4EE4($v0)
    ctx->pc = 0x1308a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1308ac: 0xc4614ee0  lwc1        $f1, 0x4EE0($v1)
    ctx->pc = 0x1308acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1308b0: 0x4600b01a  mula.s      $f22, $f0
    ctx->pc = 0x1308b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1308b4: 0xc047740  jal         func_11DD00
    ctx->pc = 0x1308B4u;
    SET_GPR_U32(ctx, 31, 0x1308BCu);
    ctx->pc = 0x1308B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1308B4u;
            // 0x1308b8: 0x4601ab1c  madd.s      $f12, $f21, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1308BCu; }
        if (ctx->pc != 0x1308BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1308BCu; }
        if (ctx->pc != 0x1308BCu) { return; }
    }
    ctx->pc = 0x1308BCu;
label_1308bc:
    // 0x1308bc: 0x46140100  add.s       $f4, $f0, $f20
    ctx->pc = 0x1308bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1308c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1308c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1308c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1308c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1308c8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1308c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1308cc: 0xc4404ee4  lwc1        $f0, 0x4EE4($v0)
    ctx->pc = 0x1308ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1308d0: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1308d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1308d4: 0xc4624ee0  lwc1        $f2, 0x4EE0($v1)
    ctx->pc = 0x1308d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1308d8: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x1308d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1308dc: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1308dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1308e0: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x1308e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1308e4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1308E4u;
    {
        const bool branch_taken_0x1308e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1308e4) {
            ctx->pc = 0x1308E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1308E4u;
            // 0x1308e8: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1308F4u;
            goto label_1308f4;
        }
    }
    ctx->pc = 0x1308ECu;
    // 0x1308ec: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x1308ECu;
    {
        const bool branch_taken_0x1308ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1308F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1308ECu;
            // 0x1308f0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308ec) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x1308F4u;
label_1308f4:
    // 0x1308f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1308f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1308f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1308F8u;
    {
        const bool branch_taken_0x1308f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1308f8) {
            ctx->pc = 0x130904u;
            goto label_130904;
        }
    }
    ctx->pc = 0x130900u;
    // 0x130900: 0x36101000  ori         $s0, $s0, 0x1000
    ctx->pc = 0x130900u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4096);
label_130904:
    // 0x130904: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130908: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13090c: 0xc4404eec  lwc1        $f0, 0x4EEC($v0)
    ctx->pc = 0x13090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130910: 0xc4614ee8  lwc1        $f1, 0x4EE8($v1)
    ctx->pc = 0x130910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130914: 0x4600d01a  mula.s      $f26, $f0
    ctx->pc = 0x130914u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x130918: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130918u;
    SET_GPR_U32(ctx, 31, 0x130920u);
    ctx->pc = 0x13091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130918u;
            // 0x13091c: 0x4601e31c  madd.s      $f12, $f28, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[28], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130920u; }
        if (ctx->pc != 0x130920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130920u; }
        if (ctx->pc != 0x130920u) { return; }
    }
    ctx->pc = 0x130920u;
label_130920:
    // 0x130920: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130924: 0xc4414ee8  lwc1        $f1, 0x4EE8($v0)
    ctx->pc = 0x130924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130928: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x130928u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x13092c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130930: 0xc4404eec  lwc1        $f0, 0x4EEC($v0)
    ctx->pc = 0x130930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130934: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x130934u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x130938: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130938u;
    SET_GPR_U32(ctx, 31, 0x130940u);
    ctx->pc = 0x13093Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130938u;
            // 0x13093c: 0x4601cb1c  madd.s      $f12, $f25, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130940u; }
        if (ctx->pc != 0x130940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130940u; }
        if (ctx->pc != 0x130940u) { return; }
    }
    ctx->pc = 0x130940u;
label_130940:
    // 0x130940: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x130940u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x130944: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130948: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13094c: 0xc4404eec  lwc1        $f0, 0x4EEC($v0)
    ctx->pc = 0x13094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130950: 0xc4614ee8  lwc1        $f1, 0x4EE8($v1)
    ctx->pc = 0x130950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130954: 0x4600b01a  mula.s      $f22, $f0
    ctx->pc = 0x130954u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x130958: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130958u;
    SET_GPR_U32(ctx, 31, 0x130960u);
    ctx->pc = 0x13095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130958u;
            // 0x13095c: 0x4601ab1c  madd.s      $f12, $f21, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130960u; }
        if (ctx->pc != 0x130960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130960u; }
        if (ctx->pc != 0x130960u) { return; }
    }
    ctx->pc = 0x130960u;
label_130960:
    // 0x130960: 0x46140100  add.s       $f4, $f0, $f20
    ctx->pc = 0x130960u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x130964: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130968: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13096c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x13096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130970: 0xc4404eec  lwc1        $f0, 0x4EEC($v0)
    ctx->pc = 0x130970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130974: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x130974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130978: 0xc4624ee8  lwc1        $f2, 0x4EE8($v1)
    ctx->pc = 0x130978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13097c: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x13097cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x130980: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x130980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x130984: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x130984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130988: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x130988u;
    {
        const bool branch_taken_0x130988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130988) {
            ctx->pc = 0x13098Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130988u;
            // 0x13098c: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130998u;
            goto label_130998;
        }
    }
    ctx->pc = 0x130990u;
    // 0x130990: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x130990u;
    {
        const bool branch_taken_0x130990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130990u;
            // 0x130994: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130990) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130998u;
label_130998:
    // 0x130998: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13099c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13099Cu;
    {
        const bool branch_taken_0x13099c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13099c) {
            ctx->pc = 0x1309A8u;
            goto label_1309a8;
        }
    }
    ctx->pc = 0x1309A4u;
    // 0x1309a4: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x1309a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
label_1309a8:
    // 0x1309a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1309a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1309ac: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1309acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1309b0: 0xc4414ed0  lwc1        $f1, 0x4ED0($v0)
    ctx->pc = 0x1309b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1309b4: 0x4602dec2  mul.s       $f27, $f27, $f2
    ctx->pc = 0x1309b4u;
    ctx->f[27] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x1309b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1309b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1309bc: 0xc4404ed4  lwc1        $f0, 0x4ED4($v0)
    ctx->pc = 0x1309bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1309c0: 0x4600d01a  mula.s      $f26, $f0
    ctx->pc = 0x1309c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x1309c4: 0x4601db1c  madd.s      $f12, $f27, $f1
    ctx->pc = 0x1309c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[1]));
    // 0x1309c8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1309c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1309cc: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1309ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1309d0: 0x4601c602  mul.s       $f24, $f24, $f1
    ctx->pc = 0x1309d0u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x1309d4: 0xc047740  jal         func_11DD00
    ctx->pc = 0x1309D4u;
    SET_GPR_U32(ctx, 31, 0x1309DCu);
    ctx->pc = 0x1309D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1309D4u;
            // 0x1309d8: 0x4600ed02  mul.s       $f20, $f29, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1309DCu; }
        if (ctx->pc != 0x1309DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1309DCu; }
        if (ctx->pc != 0x1309DCu) { return; }
    }
    ctx->pc = 0x1309DCu;
label_1309dc:
    // 0x1309dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1309dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1309e0: 0xc4414ed0  lwc1        $f1, 0x4ED0($v0)
    ctx->pc = 0x1309e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1309e4: 0x46000746  mov.s       $f29, $f0
    ctx->pc = 0x1309e4u;
    ctx->f[29] = FPU_MOV_S(ctx->f[0]);
    // 0x1309e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1309e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1309ec: 0xc4404ed4  lwc1        $f0, 0x4ED4($v0)
    ctx->pc = 0x1309ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1309f0: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x1309f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x1309f4: 0xc047740  jal         func_11DD00
    ctx->pc = 0x1309F4u;
    SET_GPR_U32(ctx, 31, 0x1309FCu);
    ctx->pc = 0x1309F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1309F4u;
            // 0x1309f8: 0x4601c31c  madd.s      $f12, $f24, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1309FCu; }
        if (ctx->pc != 0x1309FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1309FCu; }
        if (ctx->pc != 0x1309FCu) { return; }
    }
    ctx->pc = 0x1309FCu;
label_1309fc:
    // 0x1309fc: 0x4600ef40  add.s       $f29, $f29, $f0
    ctx->pc = 0x1309fcu;
    ctx->f[29] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
    // 0x130a00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130a04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130a08: 0xc4404ed4  lwc1        $f0, 0x4ED4($v0)
    ctx->pc = 0x130a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130a0c: 0xc4614ed0  lwc1        $f1, 0x4ED0($v1)
    ctx->pc = 0x130a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130a10: 0x4600b01a  mula.s      $f22, $f0
    ctx->pc = 0x130a10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x130a14: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130A14u;
    SET_GPR_U32(ctx, 31, 0x130A1Cu);
    ctx->pc = 0x130A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130A14u;
            // 0x130a18: 0x4601a31c  madd.s      $f12, $f20, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A1Cu; }
        if (ctx->pc != 0x130A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A1Cu; }
        if (ctx->pc != 0x130A1Cu) { return; }
    }
    ctx->pc = 0x130A1Cu;
label_130a1c:
    // 0x130a1c: 0x461d0100  add.s       $f4, $f0, $f29
    ctx->pc = 0x130a1cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[29]);
    // 0x130a20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130a24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130a28: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x130a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130a2c: 0xc4404ed4  lwc1        $f0, 0x4ED4($v0)
    ctx->pc = 0x130a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130a30: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x130a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130a34: 0xc4624ed0  lwc1        $f2, 0x4ED0($v1)
    ctx->pc = 0x130a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130a38: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x130a38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x130a3c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x130a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x130a40: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x130a40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130a44: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x130A44u;
    {
        const bool branch_taken_0x130a44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130a44) {
            ctx->pc = 0x130A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130A44u;
            // 0x130a48: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130A54u;
            goto label_130a54;
        }
    }
    ctx->pc = 0x130A4Cu;
    // 0x130a4c: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x130A4Cu;
    {
        const bool branch_taken_0x130a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A4Cu;
            // 0x130a50: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a4c) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130A54u;
label_130a54:
    // 0x130a54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130a58: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x130A58u;
    {
        const bool branch_taken_0x130a58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130a58) {
            ctx->pc = 0x130A64u;
            goto label_130a64;
        }
    }
    ctx->pc = 0x130A60u;
    // 0x130a60: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x130a60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
label_130a64:
    // 0x130a64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130a68: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130a6c: 0xc4404edc  lwc1        $f0, 0x4EDC($v0)
    ctx->pc = 0x130a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130a70: 0xc4614ed8  lwc1        $f1, 0x4ED8($v1)
    ctx->pc = 0x130a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130a74: 0x4600d01a  mula.s      $f26, $f0
    ctx->pc = 0x130a74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x130a78: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130A78u;
    SET_GPR_U32(ctx, 31, 0x130A80u);
    ctx->pc = 0x130A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130A78u;
            // 0x130a7c: 0x4601db1c  madd.s      $f12, $f27, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A80u; }
        if (ctx->pc != 0x130A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A80u; }
        if (ctx->pc != 0x130A80u) { return; }
    }
    ctx->pc = 0x130A80u;
label_130a80:
    // 0x130a80: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130a84: 0xc4414ed8  lwc1        $f1, 0x4ED8($v0)
    ctx->pc = 0x130a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130a88: 0x46000746  mov.s       $f29, $f0
    ctx->pc = 0x130a88u;
    ctx->f[29] = FPU_MOV_S(ctx->f[0]);
    // 0x130a8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130a90: 0xc4404edc  lwc1        $f0, 0x4EDC($v0)
    ctx->pc = 0x130a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130a94: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x130a94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x130a98: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130A98u;
    SET_GPR_U32(ctx, 31, 0x130AA0u);
    ctx->pc = 0x130A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130A98u;
            // 0x130a9c: 0x4601c31c  madd.s      $f12, $f24, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AA0u; }
        if (ctx->pc != 0x130AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AA0u; }
        if (ctx->pc != 0x130AA0u) { return; }
    }
    ctx->pc = 0x130AA0u;
label_130aa0:
    // 0x130aa0: 0x4600ef40  add.s       $f29, $f29, $f0
    ctx->pc = 0x130aa0u;
    ctx->f[29] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
    // 0x130aa4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130aa8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130aac: 0xc4404edc  lwc1        $f0, 0x4EDC($v0)
    ctx->pc = 0x130aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130ab0: 0xc4614ed8  lwc1        $f1, 0x4ED8($v1)
    ctx->pc = 0x130ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130ab4: 0x4600b01a  mula.s      $f22, $f0
    ctx->pc = 0x130ab4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x130ab8: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130AB8u;
    SET_GPR_U32(ctx, 31, 0x130AC0u);
    ctx->pc = 0x130ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130AB8u;
            // 0x130abc: 0x4601a31c  madd.s      $f12, $f20, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AC0u; }
        if (ctx->pc != 0x130AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AC0u; }
        if (ctx->pc != 0x130AC0u) { return; }
    }
    ctx->pc = 0x130AC0u;
label_130ac0:
    // 0x130ac0: 0x461d0100  add.s       $f4, $f0, $f29
    ctx->pc = 0x130ac0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[29]);
    // 0x130ac4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130ac8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130acc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x130accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130ad0: 0xc4404edc  lwc1        $f0, 0x4EDC($v0)
    ctx->pc = 0x130ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130ad4: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x130ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130ad8: 0xc4624ed8  lwc1        $f2, 0x4ED8($v1)
    ctx->pc = 0x130ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130adc: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x130adcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x130ae0: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x130ae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x130ae4: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x130ae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130ae8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x130AE8u;
    {
        const bool branch_taken_0x130ae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130ae8) {
            ctx->pc = 0x130AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130AE8u;
            // 0x130aec: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130AF8u;
            goto label_130af8;
        }
    }
    ctx->pc = 0x130AF0u;
    // 0x130af0: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x130AF0u;
    {
        const bool branch_taken_0x130af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130AF0u;
            // 0x130af4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130af0) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130AF8u;
label_130af8:
    // 0x130af8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130afc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x130AFCu;
    {
        const bool branch_taken_0x130afc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130afc) {
            ctx->pc = 0x130B08u;
            goto label_130b08;
        }
    }
    ctx->pc = 0x130B04u;
    // 0x130b04: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x130b04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_130b08:
    // 0x130b08: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x130B08u;
    {
        const bool branch_taken_0x130b08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x130b08) {
            ctx->pc = 0x130B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130B08u;
            // 0x130b0c: 0x3202003e  andi        $v0, $s0, 0x3E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)62);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130B18u;
            goto label_130b18;
        }
    }
    ctx->pc = 0x130B10u;
    // 0x130b10: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x130B10u;
    {
        const bool branch_taken_0x130b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B10u;
            // 0x130b14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b10) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130B18u;
label_130b18:
    // 0x130b18: 0x5440012f  bnel        $v0, $zero, . + 4 + (0x12F << 2)
    ctx->pc = 0x130B18u;
    {
        const bool branch_taken_0x130b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130b18) {
            ctx->pc = 0x130B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130B18u;
            // 0x130b1c: 0x3202003e  andi        $v0, $s0, 0x3E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)62);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130B20u;
    // 0x130b20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130b24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130b28: 0xc4404f04  lwc1        $f0, 0x4F04($v0)
    ctx->pc = 0x130b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b2c: 0xc4614f00  lwc1        $f1, 0x4F00($v1)
    ctx->pc = 0x130b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b30: 0x4600d01a  mula.s      $f26, $f0
    ctx->pc = 0x130b30u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x130b34: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130B34u;
    SET_GPR_U32(ctx, 31, 0x130B3Cu);
    ctx->pc = 0x130B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130B34u;
            // 0x130b38: 0x4601e31c  madd.s      $f12, $f28, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[28], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B3Cu; }
        if (ctx->pc != 0x130B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B3Cu; }
        if (ctx->pc != 0x130B3Cu) { return; }
    }
    ctx->pc = 0x130B3Cu;
label_130b3c:
    // 0x130b3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130b40: 0xc4414f00  lwc1        $f1, 0x4F00($v0)
    ctx->pc = 0x130b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b44: 0x46000746  mov.s       $f29, $f0
    ctx->pc = 0x130b44u;
    ctx->f[29] = FPU_MOV_S(ctx->f[0]);
    // 0x130b48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130b4c: 0xc4404f04  lwc1        $f0, 0x4F04($v0)
    ctx->pc = 0x130b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b50: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x130b50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x130b54: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130B54u;
    SET_GPR_U32(ctx, 31, 0x130B5Cu);
    ctx->pc = 0x130B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130B54u;
            // 0x130b58: 0x4601cb1c  madd.s      $f12, $f25, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B5Cu; }
        if (ctx->pc != 0x130B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B5Cu; }
        if (ctx->pc != 0x130B5Cu) { return; }
    }
    ctx->pc = 0x130B5Cu;
label_130b5c:
    // 0x130b5c: 0x4600ef40  add.s       $f29, $f29, $f0
    ctx->pc = 0x130b5cu;
    ctx->f[29] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
    // 0x130b60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130b64: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130b68: 0xc4404f04  lwc1        $f0, 0x4F04($v0)
    ctx->pc = 0x130b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b6c: 0xc4614f00  lwc1        $f1, 0x4F00($v1)
    ctx->pc = 0x130b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b70: 0x4600b01a  mula.s      $f22, $f0
    ctx->pc = 0x130b70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x130b74: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130B74u;
    SET_GPR_U32(ctx, 31, 0x130B7Cu);
    ctx->pc = 0x130B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130B74u;
            // 0x130b78: 0x4601ab1c  madd.s      $f12, $f21, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B7Cu; }
        if (ctx->pc != 0x130B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B7Cu; }
        if (ctx->pc != 0x130B7Cu) { return; }
    }
    ctx->pc = 0x130B7Cu;
label_130b7c:
    // 0x130b7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130b80: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130b84: 0x461d0000  add.s       $f0, $f0, $f29
    ctx->pc = 0x130b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[29]);
    // 0x130b88: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x130b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130b8c: 0xc4414f04  lwc1        $f1, 0x4F04($v0)
    ctx->pc = 0x130b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b90: 0xc7a40070  lwc1        $f4, 0x70($sp)
    ctx->pc = 0x130b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x130b94: 0xc4634f00  lwc1        $f3, 0x4F00($v1)
    ctx->pc = 0x130b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130b98: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x130b98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x130b9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130b9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x130ba0: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x130ba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x130ba4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130ba8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x130BA8u;
    {
        const bool branch_taken_0x130ba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130ba8) {
            ctx->pc = 0x130BB8u;
            goto label_130bb8;
        }
    }
    ctx->pc = 0x130BB0u;
    // 0x130bb0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x130bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x130bb4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x130bb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_130bb8:
    // 0x130bb8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130bbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130bc0: 0xc4404f0c  lwc1        $f0, 0x4F0C($v0)
    ctx->pc = 0x130bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130bc4: 0xc4614f08  lwc1        $f1, 0x4F08($v1)
    ctx->pc = 0x130bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130bc8: 0x4600d01a  mula.s      $f26, $f0
    ctx->pc = 0x130bc8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x130bcc: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130BCCu;
    SET_GPR_U32(ctx, 31, 0x130BD4u);
    ctx->pc = 0x130BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130BCCu;
            // 0x130bd0: 0x4601e31c  madd.s      $f12, $f28, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[28], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BD4u; }
        if (ctx->pc != 0x130BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BD4u; }
        if (ctx->pc != 0x130BD4u) { return; }
    }
    ctx->pc = 0x130BD4u;
label_130bd4:
    // 0x130bd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130bd8: 0xc4414f08  lwc1        $f1, 0x4F08($v0)
    ctx->pc = 0x130bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130bdc: 0x46000706  mov.s       $f28, $f0
    ctx->pc = 0x130bdcu;
    ctx->f[28] = FPU_MOV_S(ctx->f[0]);
    // 0x130be0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130be4: 0xc4404f0c  lwc1        $f0, 0x4F0C($v0)
    ctx->pc = 0x130be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130be8: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x130be8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x130bec: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130BECu;
    SET_GPR_U32(ctx, 31, 0x130BF4u);
    ctx->pc = 0x130BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130BECu;
            // 0x130bf0: 0x4601cb1c  madd.s      $f12, $f25, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BF4u; }
        if (ctx->pc != 0x130BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BF4u; }
        if (ctx->pc != 0x130BF4u) { return; }
    }
    ctx->pc = 0x130BF4u;
label_130bf4:
    // 0x130bf4: 0x4600e640  add.s       $f25, $f28, $f0
    ctx->pc = 0x130bf4u;
    ctx->f[25] = FPU_ADD_S(ctx->f[28], ctx->f[0]);
    // 0x130bf8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130bfc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130c00: 0xc4404f0c  lwc1        $f0, 0x4F0C($v0)
    ctx->pc = 0x130c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130c04: 0xc4614f08  lwc1        $f1, 0x4F08($v1)
    ctx->pc = 0x130c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130c08: 0x4600b01a  mula.s      $f22, $f0
    ctx->pc = 0x130c08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x130c0c: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130C0Cu;
    SET_GPR_U32(ctx, 31, 0x130C14u);
    ctx->pc = 0x130C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130C0Cu;
            // 0x130c10: 0x4601ab1c  madd.s      $f12, $f21, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C14u; }
        if (ctx->pc != 0x130C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C14u; }
        if (ctx->pc != 0x130C14u) { return; }
    }
    ctx->pc = 0x130C14u;
label_130c14:
    // 0x130c14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130c18: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130c1c: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x130c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x130c20: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x130c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130c24: 0xc4414f0c  lwc1        $f1, 0x4F0C($v0)
    ctx->pc = 0x130c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130c28: 0xc7a40070  lwc1        $f4, 0x70($sp)
    ctx->pc = 0x130c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x130c2c: 0xc4634f08  lwc1        $f3, 0x4F08($v1)
    ctx->pc = 0x130c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130c30: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x130c30u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x130c34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130c34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x130c38: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x130c38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x130c3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130c3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130c40: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x130C40u;
    {
        const bool branch_taken_0x130c40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130c40) {
            ctx->pc = 0x130C50u;
            goto label_130c50;
        }
    }
    ctx->pc = 0x130C48u;
    // 0x130c48: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x130c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x130c4c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x130c4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_130c50:
    // 0x130c50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130c54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130c58: 0xc4404ef4  lwc1        $f0, 0x4EF4($v0)
    ctx->pc = 0x130c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130c5c: 0xc4614ef0  lwc1        $f1, 0x4EF0($v1)
    ctx->pc = 0x130c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130c60: 0x4600d01a  mula.s      $f26, $f0
    ctx->pc = 0x130c60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x130c64: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130C64u;
    SET_GPR_U32(ctx, 31, 0x130C6Cu);
    ctx->pc = 0x130C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130C64u;
            // 0x130c68: 0x4601db1c  madd.s      $f12, $f27, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C6Cu; }
        if (ctx->pc != 0x130C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C6Cu; }
        if (ctx->pc != 0x130C6Cu) { return; }
    }
    ctx->pc = 0x130C6Cu;
label_130c6c:
    // 0x130c6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130c70: 0xc4414ef0  lwc1        $f1, 0x4EF0($v0)
    ctx->pc = 0x130c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130c74: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x130c74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x130c78: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130c7c: 0xc4404ef4  lwc1        $f0, 0x4EF4($v0)
    ctx->pc = 0x130c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130c80: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x130c80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x130c84: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130C84u;
    SET_GPR_U32(ctx, 31, 0x130C8Cu);
    ctx->pc = 0x130C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130C84u;
            // 0x130c88: 0x4601c31c  madd.s      $f12, $f24, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C8Cu; }
        if (ctx->pc != 0x130C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C8Cu; }
        if (ctx->pc != 0x130C8Cu) { return; }
    }
    ctx->pc = 0x130C8Cu;
label_130c8c:
    // 0x130c8c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x130c8cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x130c90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130c94: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130c98: 0xc4404ef4  lwc1        $f0, 0x4EF4($v0)
    ctx->pc = 0x130c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130c9c: 0xc4614ef0  lwc1        $f1, 0x4EF0($v1)
    ctx->pc = 0x130c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130ca0: 0x4600b01a  mula.s      $f22, $f0
    ctx->pc = 0x130ca0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x130ca4: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130CA4u;
    SET_GPR_U32(ctx, 31, 0x130CACu);
    ctx->pc = 0x130CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130CA4u;
            // 0x130ca8: 0x4601a31c  madd.s      $f12, $f20, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130CACu; }
        if (ctx->pc != 0x130CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130CACu; }
        if (ctx->pc != 0x130CACu) { return; }
    }
    ctx->pc = 0x130CACu;
label_130cac:
    // 0x130cac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130cb0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130cb4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x130cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x130cb8: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x130cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130cbc: 0xc4414ef4  lwc1        $f1, 0x4EF4($v0)
    ctx->pc = 0x130cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130cc0: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x130cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x130cc4: 0xc4634ef0  lwc1        $f3, 0x4EF0($v1)
    ctx->pc = 0x130cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130cc8: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x130cc8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x130ccc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130cccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x130cd0: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x130cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x130cd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130cd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130cd8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x130CD8u;
    {
        const bool branch_taken_0x130cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130cd8) {
            ctx->pc = 0x130CE8u;
            goto label_130ce8;
        }
    }
    ctx->pc = 0x130CE0u;
    // 0x130ce0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x130ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x130ce4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x130ce4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_130ce8:
    // 0x130ce8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130cec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130cf0: 0xc4404efc  lwc1        $f0, 0x4EFC($v0)
    ctx->pc = 0x130cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130cf4: 0xc4614ef8  lwc1        $f1, 0x4EF8($v1)
    ctx->pc = 0x130cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130cf8: 0x4600d01a  mula.s      $f26, $f0
    ctx->pc = 0x130cf8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x130cfc: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130CFCu;
    SET_GPR_U32(ctx, 31, 0x130D04u);
    ctx->pc = 0x130D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130CFCu;
            // 0x130d00: 0x4601db1c  madd.s      $f12, $f27, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D04u; }
        if (ctx->pc != 0x130D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D04u; }
        if (ctx->pc != 0x130D04u) { return; }
    }
    ctx->pc = 0x130D04u;
label_130d04:
    // 0x130d04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130d08: 0xc4414ef8  lwc1        $f1, 0x4EF8($v0)
    ctx->pc = 0x130d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d0c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x130d0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x130d10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130d14: 0xc4404efc  lwc1        $f0, 0x4EFC($v0)
    ctx->pc = 0x130d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d18: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x130d18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x130d1c: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130D1Cu;
    SET_GPR_U32(ctx, 31, 0x130D24u);
    ctx->pc = 0x130D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130D1Cu;
            // 0x130d20: 0x4601c31c  madd.s      $f12, $f24, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D24u; }
        if (ctx->pc != 0x130D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D24u; }
        if (ctx->pc != 0x130D24u) { return; }
    }
    ctx->pc = 0x130D24u;
label_130d24:
    // 0x130d24: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x130d24u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x130d28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130d2c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130d30: 0xc4404efc  lwc1        $f0, 0x4EFC($v0)
    ctx->pc = 0x130d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d34: 0xc4614ef8  lwc1        $f1, 0x4EF8($v1)
    ctx->pc = 0x130d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d38: 0x4600b01a  mula.s      $f22, $f0
    ctx->pc = 0x130d38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x130d3c: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130D3Cu;
    SET_GPR_U32(ctx, 31, 0x130D44u);
    ctx->pc = 0x130D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130D3Cu;
            // 0x130d40: 0x4601a31c  madd.s      $f12, $f20, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D44u; }
        if (ctx->pc != 0x130D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D44u; }
        if (ctx->pc != 0x130D44u) { return; }
    }
    ctx->pc = 0x130D44u;
label_130d44:
    // 0x130d44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130d48: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130d4c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x130d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x130d50: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x130d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130d54: 0xc4414efc  lwc1        $f1, 0x4EFC($v0)
    ctx->pc = 0x130d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d58: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x130d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x130d5c: 0xc4634ef8  lwc1        $f3, 0x4EF8($v1)
    ctx->pc = 0x130d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130d60: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x130d60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x130d64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130d64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x130d68: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x130d68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x130d6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130d70: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x130D70u;
    {
        const bool branch_taken_0x130d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130d70) {
            ctx->pc = 0x130D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130D70u;
            // 0x130d74: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130D84u;
            goto label_130d84;
        }
    }
    ctx->pc = 0x130D78u;
    // 0x130d78: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x130d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x130d7c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x130d7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x130d80: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x130d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_130d84:
    // 0x130d84: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x130d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x130d88: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x130D88u;
    {
        const bool branch_taken_0x130d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130d88) {
            ctx->pc = 0x130FD4u;
            goto label_130fd4;
        }
    }
    ctx->pc = 0x130D90u;
    // 0x130d90: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x130D90u;
    {
        const bool branch_taken_0x130d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D90u;
            // 0x130d94: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d90) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130D98u;
label_130d98:
    // 0x130d98: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130D98u;
    SET_GPR_U32(ctx, 31, 0x130DA0u);
    ctx->pc = 0x130D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130D98u;
            // 0x130d9c: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DA0u; }
        if (ctx->pc != 0x130DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DA0u; }
        if (ctx->pc != 0x130DA0u) { return; }
    }
    ctx->pc = 0x130DA0u;
label_130da0:
    // 0x130da0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x130da0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x130da4: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130DA4u;
    SET_GPR_U32(ctx, 31, 0x130DACu);
    ctx->pc = 0x130DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130DA4u;
            // 0x130da8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DACu; }
        if (ctx->pc != 0x130DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DACu; }
        if (ctx->pc != 0x130DACu) { return; }
    }
    ctx->pc = 0x130DACu;
label_130dac:
    // 0x130dac: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x130dacu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x130db0: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130DB0u;
    SET_GPR_U32(ctx, 31, 0x130DB8u);
    ctx->pc = 0x130DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130DB0u;
            // 0x130db4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DB8u; }
        if (ctx->pc != 0x130DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DB8u; }
        if (ctx->pc != 0x130DB8u) { return; }
    }
    ctx->pc = 0x130DB8u;
label_130db8:
    // 0x130db8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130dbc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130dc0: 0x46140080  add.s       $f2, $f0, $f20
    ctx->pc = 0x130dc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x130dc4: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x130dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130dc8: 0xc4614ee0  lwc1        $f1, 0x4EE0($v1)
    ctx->pc = 0x130dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130dcc: 0xc4404ee4  lwc1        $f0, 0x4EE4($v0)
    ctx->pc = 0x130dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130dd0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x130dd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x130dd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x130dd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130dd8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x130dd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130ddc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x130DDCu;
    {
        const bool branch_taken_0x130ddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130ddc) {
            ctx->pc = 0x130DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130DDCu;
            // 0x130de0: 0x46001107  neg.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130DECu;
            goto label_130dec;
        }
    }
    ctx->pc = 0x130DE4u;
    // 0x130de4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x130DE4u;
    {
        const bool branch_taken_0x130de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130DE4u;
            // 0x130de8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130de4) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130DECu;
label_130dec:
    // 0x130dec: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x130decu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130df0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x130DF0u;
    {
        const bool branch_taken_0x130df0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130df0) {
            ctx->pc = 0x130DFCu;
            goto label_130dfc;
        }
    }
    ctx->pc = 0x130DF8u;
    // 0x130df8: 0x36101000  ori         $s0, $s0, 0x1000
    ctx->pc = 0x130df8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4096);
label_130dfc:
    // 0x130dfc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130e00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130e04: 0xc4614ee8  lwc1        $f1, 0x4EE8($v1)
    ctx->pc = 0x130e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130e08: 0xc4404eec  lwc1        $f0, 0x4EEC($v0)
    ctx->pc = 0x130e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130e0c: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x130e0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x130e10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x130e10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130e14: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x130e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130e18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x130E18u;
    {
        const bool branch_taken_0x130e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130e18) {
            ctx->pc = 0x130E28u;
            goto label_130e28;
        }
    }
    ctx->pc = 0x130E20u;
    // 0x130e20: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x130E20u;
    {
        const bool branch_taken_0x130e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E20u;
            // 0x130e24: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e20) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130E28u;
label_130e28:
    // 0x130e28: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x130e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130e2c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x130E2Cu;
    {
        const bool branch_taken_0x130e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130e2c) {
            ctx->pc = 0x130E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130E2Cu;
            // 0x130e30: 0xc6220004  lwc1        $f2, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x130E3Cu;
            goto label_130e3c;
        }
    }
    ctx->pc = 0x130E34u;
    // 0x130e34: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x130e34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    // 0x130e38: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x130e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_130e3c:
    // 0x130e3c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x130e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130e40: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x130e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130e44: 0x4602db02  mul.s       $f12, $f27, $f2
    ctx->pc = 0x130e44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x130e48: 0x4601c502  mul.s       $f20, $f24, $f1
    ctx->pc = 0x130e48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x130e4c: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130E4Cu;
    SET_GPR_U32(ctx, 31, 0x130E54u);
    ctx->pc = 0x130E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130E4Cu;
            // 0x130e50: 0x4600ed42  mul.s       $f21, $f29, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E54u; }
        if (ctx->pc != 0x130E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E54u; }
        if (ctx->pc != 0x130E54u) { return; }
    }
    ctx->pc = 0x130E54u;
label_130e54:
    // 0x130e54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x130e54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x130e58: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130E58u;
    SET_GPR_U32(ctx, 31, 0x130E60u);
    ctx->pc = 0x130E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130E58u;
            // 0x130e5c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E60u; }
        if (ctx->pc != 0x130E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E60u; }
        if (ctx->pc != 0x130E60u) { return; }
    }
    ctx->pc = 0x130E60u;
label_130e60:
    // 0x130e60: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x130e60u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x130e64: 0xc047740  jal         func_11DD00
    ctx->pc = 0x130E64u;
    SET_GPR_U32(ctx, 31, 0x130E6Cu);
    ctx->pc = 0x130E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130E64u;
            // 0x130e68: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E6Cu; }
        if (ctx->pc != 0x130E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E6Cu; }
        if (ctx->pc != 0x130E6Cu) { return; }
    }
    ctx->pc = 0x130E6Cu;
label_130e6c:
    // 0x130e6c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130e70: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130e74: 0x46140140  add.s       $f5, $f0, $f20
    ctx->pc = 0x130e74u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x130e78: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x130e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x130e7c: 0xc4614ed0  lwc1        $f1, 0x4ED0($v1)
    ctx->pc = 0x130e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130e80: 0xc4404ed4  lwc1        $f0, 0x4ED4($v0)
    ctx->pc = 0x130e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130e84: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x130e84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x130e88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x130e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130e8c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x130e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130e90: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x130E90u;
    {
        const bool branch_taken_0x130e90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130e90) {
            ctx->pc = 0x130E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130E90u;
            // 0x130e94: 0x460028c7  neg.s       $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130EA0u;
            goto label_130ea0;
        }
    }
    ctx->pc = 0x130E98u;
    // 0x130e98: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x130E98u;
    {
        const bool branch_taken_0x130e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E98u;
            // 0x130e9c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e98) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130EA0u;
label_130ea0:
    // 0x130ea0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x130ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130ea4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x130EA4u;
    {
        const bool branch_taken_0x130ea4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130ea4) {
            ctx->pc = 0x130EB0u;
            goto label_130eb0;
        }
    }
    ctx->pc = 0x130EACu;
    // 0x130eac: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x130eacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
label_130eb0:
    // 0x130eb0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130eb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130eb8: 0xc4614ed8  lwc1        $f1, 0x4ED8($v1)
    ctx->pc = 0x130eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130ebc: 0xc4404edc  lwc1        $f0, 0x4EDC($v0)
    ctx->pc = 0x130ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130ec0: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x130ec0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x130ec4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x130ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130ec8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x130ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130ecc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x130ECCu;
    {
        const bool branch_taken_0x130ecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130ecc) {
            ctx->pc = 0x130EDCu;
            goto label_130edc;
        }
    }
    ctx->pc = 0x130ED4u;
    // 0x130ed4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x130ED4u;
    {
        const bool branch_taken_0x130ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130ED4u;
            // 0x130ed8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ed4) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130EDCu;
label_130edc:
    // 0x130edc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x130edcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130ee0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x130EE0u;
    {
        const bool branch_taken_0x130ee0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130ee0) {
            ctx->pc = 0x130EECu;
            goto label_130eec;
        }
    }
    ctx->pc = 0x130EE8u;
    // 0x130ee8: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x130ee8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_130eec:
    // 0x130eec: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x130EECu;
    {
        const bool branch_taken_0x130eec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x130eec) {
            ctx->pc = 0x130EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130EECu;
            // 0x130ef0: 0x3202003e  andi        $v0, $s0, 0x3E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)62);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130EFCu;
            goto label_130efc;
        }
    }
    ctx->pc = 0x130EF4u;
    // 0x130ef4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x130EF4u;
    {
        const bool branch_taken_0x130ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130EF4u;
            // 0x130ef8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ef4) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130EFCu;
label_130efc:
    // 0x130efc: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x130EFCu;
    {
        const bool branch_taken_0x130efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130efc) {
            ctx->pc = 0x130FD4u;
            goto label_130fd4;
        }
    }
    ctx->pc = 0x130F04u;
    // 0x130f04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130f08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130f0c: 0xc4614ef0  lwc1        $f1, 0x4EF0($v1)
    ctx->pc = 0x130f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130f10: 0xc4404ef4  lwc1        $f0, 0x4EF4($v0)
    ctx->pc = 0x130f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130f14: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x130f14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x130f18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x130f18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130f1c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x130f1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130f20: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x130F20u;
    {
        const bool branch_taken_0x130f20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130f20) {
            ctx->pc = 0x130F30u;
            goto label_130f30;
        }
    }
    ctx->pc = 0x130F28u;
    // 0x130f28: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x130f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x130f2c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x130f2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_130f30:
    // 0x130f30: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130f34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130f38: 0xc4624ef8  lwc1        $f2, 0x4EF8($v1)
    ctx->pc = 0x130f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130f3c: 0xc4414efc  lwc1        $f1, 0x4EFC($v0)
    ctx->pc = 0x130f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130f40: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x130f40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x130f44: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x130f44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x130f48: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x130f48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x130f4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130f50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x130F50u;
    {
        const bool branch_taken_0x130f50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130f50) {
            ctx->pc = 0x130F60u;
            goto label_130f60;
        }
    }
    ctx->pc = 0x130F58u;
    // 0x130f58: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x130f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x130f5c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x130f5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_130f60:
    // 0x130f60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130f64: 0xc4414f00  lwc1        $f1, 0x4F00($v0)
    ctx->pc = 0x130f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130f68: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x130f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130f6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130f70: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x130f70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x130f74: 0xc4404f04  lwc1        $f0, 0x4F04($v0)
    ctx->pc = 0x130f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130f78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x130f78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130f7c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x130f7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130f80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x130F80u;
    {
        const bool branch_taken_0x130f80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130f80) {
            ctx->pc = 0x130F90u;
            goto label_130f90;
        }
    }
    ctx->pc = 0x130F88u;
    // 0x130f88: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x130f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x130f8c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x130f8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_130f90:
    // 0x130f90: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x130f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x130f94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x130f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x130f98: 0xc4614f08  lwc1        $f1, 0x4F08($v1)
    ctx->pc = 0x130f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130f9c: 0xc4404f0c  lwc1        $f0, 0x4F0C($v0)
    ctx->pc = 0x130f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130fa0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x130fa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x130fa4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x130fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130fa8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x130fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130fac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x130FACu;
    {
        const bool branch_taken_0x130fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130fac) {
            ctx->pc = 0x130FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130FACu;
            // 0x130fb0: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130FC0u;
            goto label_130fc0;
        }
    }
    ctx->pc = 0x130FB4u;
    // 0x130fb4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x130fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x130fb8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x130fb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x130fbc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x130fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_130fc0:
    // 0x130fc0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x130fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x130fc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130FC4u;
    {
        const bool branch_taken_0x130fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130fc4) {
            ctx->pc = 0x130FD4u;
            goto label_130fd4;
        }
    }
    ctx->pc = 0x130FCCu;
    // 0x130fcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x130FCCu;
    {
        const bool branch_taken_0x130fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130FCCu;
            // 0x130fd0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130fcc) {
            ctx->pc = 0x130FD8u;
            goto label_130fd8;
        }
    }
    ctx->pc = 0x130FD4u;
label_130fd4:
    // 0x130fd4: 0x3202003e  andi        $v0, $s0, 0x3E
    ctx->pc = 0x130fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)62);
label_130fd8:
    // 0x130fd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x130fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130fdc: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x130fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x130fe0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x130fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130fe4: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x130fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x130fe8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x130fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130fec: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x130fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x130ff0: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x130ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x130ff4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x130ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x130ff8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x130ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x130ffc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x130ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x131000: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x131000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x131004: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x131004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x131008: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x131008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13100c: 0x3e00008  jr          $ra
    ctx->pc = 0x13100Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13100Cu;
            // 0x131010: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131014u;
    // 0x131014: 0x0  nop
    ctx->pc = 0x131014u;
    // NOP
    // 0x131018: 0x0  nop
    ctx->pc = 0x131018u;
    // NOP
    // 0x13101c: 0x0  nop
    ctx->pc = 0x13101cu;
    // NOP
}
