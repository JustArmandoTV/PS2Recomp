#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002986C0
// Address: 0x2986c0 - 0x2989e0
void sub_002986C0_0x2986c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002986C0_0x2986c0");
#endif

    switch (ctx->pc) {
        case 0x298748u: goto label_298748;
        case 0x298760u: goto label_298760;
        case 0x298870u: goto label_298870;
        case 0x298910u: goto label_298910;
        case 0x298928u: goto label_298928;
        case 0x298970u: goto label_298970;
        case 0x29897cu: goto label_29897c;
        default: break;
    }

    ctx->pc = 0x2986c0u;

    // 0x2986c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2986c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2986c4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2986c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2986c8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2986c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2986cc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2986ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2986d0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2986d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2986d4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2986d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2986d8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2986d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2986dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2986dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2986e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2986e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2986e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2986e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2986ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2986ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2986f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2986f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2986f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2986f8: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2986f8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2986fc: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2986fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x298700: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x298700u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x298704: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x298704u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x298708: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x298708u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29870c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29870cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x298710: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x298710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x298714: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x298714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x298718: 0x0  nop
    ctx->pc = 0x298718u;
    // NOP
    // 0x29871c: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x29871cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
    // 0x298720: 0x4600bd46  mov.s       $f21, $f23
    ctx->pc = 0x298720u;
    ctx->f[21] = FPU_MOV_S(ctx->f[23]);
    // 0x298724: 0x4600bd06  mov.s       $f20, $f23
    ctx->pc = 0x298724u;
    ctx->f[20] = FPU_MOV_S(ctx->f[23]);
    // 0x298728: 0x4600be46  mov.s       $f25, $f23
    ctx->pc = 0x298728u;
    ctx->f[25] = FPU_MOV_S(ctx->f[23]);
    // 0x29872c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x29872cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x298730: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x298730u;
    {
        const bool branch_taken_0x298730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x298734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298730u;
            // 0x298734: 0x4600be06  mov.s       $f24, $f23 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298730) {
            ctx->pc = 0x2987C0u;
            goto label_2987c0;
        }
    }
    ctx->pc = 0x298738u;
    // 0x298738: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x298738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29873c: 0x27b10104  addiu       $s1, $sp, 0x104
    ctx->pc = 0x29873cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x298740: 0x27b00108  addiu       $s0, $sp, 0x108
    ctx->pc = 0x298740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x298744: 0x27b6010c  addiu       $s6, $sp, 0x10C
    ctx->pc = 0x298744u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_298748:
    // 0x298748: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x298748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x29874c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x29874cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x298750: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x298750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x298754: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x298754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x298758: 0xc0a45e8  jal         func_2917A0
    ctx->pc = 0x298758u;
    SET_GPR_U32(ctx, 31, 0x298760u);
    ctx->pc = 0x29875Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298758u;
            // 0x29875c: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298760u; }
        if (ctx->pc != 0x298760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298760u; }
        if (ctx->pc != 0x298760u) { return; }
    }
    ctx->pc = 0x298760u;
label_298760:
    // 0x298760: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x298760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x298764: 0xc7a40100  lwc1        $f4, 0x100($sp)
    ctx->pc = 0x298764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298768: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x298768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29876c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x29876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x298770: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x298770u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x298774: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x298774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298778: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x298778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29877c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x29877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x298780: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x298780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x298784: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x298784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x298788: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x298788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29878c: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x29878cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x298790: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x298790u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x298794: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x298794u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x298798: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x298798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x29879c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x29879cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2987a0: 0x4604a500  add.s       $f20, $f20, $f4
    ctx->pc = 0x2987a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x2987a4: 0x4603ad40  add.s       $f21, $f21, $f3
    ctx->pc = 0x2987a4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
    // 0x2987a8: 0x4602b580  add.s       $f22, $f22, $f2
    ctx->pc = 0x2987a8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
    // 0x2987ac: 0x4601bdc0  add.s       $f23, $f23, $f1
    ctx->pc = 0x2987acu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x2987b0: 0x4605ce40  add.s       $f25, $f25, $f5
    ctx->pc = 0x2987b0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[5]);
    // 0x2987b4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2987B4u;
    {
        const bool branch_taken_0x2987b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2987B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2987B4u;
            // 0x2987b8: 0x4600c600  add.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987b4) {
            ctx->pc = 0x298748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298748;
        }
    }
    ctx->pc = 0x2987BCu;
    // 0x2987bc: 0x0  nop
    ctx->pc = 0x2987bcu;
    // NOP
label_2987c0:
    // 0x2987c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2987c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2987c4: 0x0  nop
    ctx->pc = 0x2987c4u;
    // NOP
    // 0x2987c8: 0x4601c836  c.le.s      $f25, $f1
    ctx->pc = 0x2987c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2987cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2987CCu;
    {
        const bool branch_taken_0x2987cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2987D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2987CCu;
            // 0x2987d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987cc) {
            ctx->pc = 0x2987E0u;
            goto label_2987e0;
        }
    }
    ctx->pc = 0x2987D4u;
    // 0x2987d4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2987D4u;
    {
        const bool branch_taken_0x2987d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2987d4) {
            ctx->pc = 0x298998u;
            goto label_298998;
        }
    }
    ctx->pc = 0x2987DCu;
    // 0x2987dc: 0x0  nop
    ctx->pc = 0x2987dcu;
    // NOP
label_2987e0:
    // 0x2987e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2987e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2987e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2987e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2987e8: 0x0  nop
    ctx->pc = 0x2987e8u;
    // NOP
    // 0x2987ec: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x2987ecu;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[25];
    // 0x2987f0: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x2987f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2987f4: 0x46150542  mul.s       $f21, $f0, $f21
    ctx->pc = 0x2987f4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2987f8: 0xe6940010  swc1        $f20, 0x10($s4)
    ctx->pc = 0x2987f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x2987fc: 0x46160582  mul.s       $f22, $f0, $f22
    ctx->pc = 0x2987fcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x298800: 0xe6950014  swc1        $f21, 0x14($s4)
    ctx->pc = 0x298800u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x298804: 0x461705c2  mul.s       $f23, $f0, $f23
    ctx->pc = 0x298804u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x298808: 0xe6960018  swc1        $f22, 0x18($s4)
    ctx->pc = 0x298808u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x29880c: 0xe697001c  swc1        $f23, 0x1C($s4)
    ctx->pc = 0x29880cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x298810: 0xe6990004  swc1        $f25, 0x4($s4)
    ctx->pc = 0x298810u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x298814: 0xe6980000  swc1        $f24, 0x0($s4)
    ctx->pc = 0x298814u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x298818: 0xe6810020  swc1        $f1, 0x20($s4)
    ctx->pc = 0x298818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x29881c: 0xe6810024  swc1        $f1, 0x24($s4)
    ctx->pc = 0x29881cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x298820: 0xe6810028  swc1        $f1, 0x28($s4)
    ctx->pc = 0x298820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
    // 0x298824: 0xe681002c  swc1        $f1, 0x2C($s4)
    ctx->pc = 0x298824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
    // 0x298828: 0xe6810030  swc1        $f1, 0x30($s4)
    ctx->pc = 0x298828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x29882c: 0xe6810034  swc1        $f1, 0x34($s4)
    ctx->pc = 0x29882cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
    // 0x298830: 0xe6810038  swc1        $f1, 0x38($s4)
    ctx->pc = 0x298830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
    // 0x298834: 0xe681003c  swc1        $f1, 0x3C($s4)
    ctx->pc = 0x298834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
    // 0x298838: 0xe6810040  swc1        $f1, 0x40($s4)
    ctx->pc = 0x298838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
    // 0x29883c: 0xe6810044  swc1        $f1, 0x44($s4)
    ctx->pc = 0x29883cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
    // 0x298840: 0xe6810048  swc1        $f1, 0x48($s4)
    ctx->pc = 0x298840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x298844: 0xe681004c  swc1        $f1, 0x4C($s4)
    ctx->pc = 0x298844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
    // 0x298848: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x298848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29884c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x29884cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x298850: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x298850u;
    {
        const bool branch_taken_0x298850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x298854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298850u;
            // 0x298854: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298850) {
            ctx->pc = 0x298990u;
            goto label_298990;
        }
    }
    ctx->pc = 0x298858u;
    // 0x298858: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x298858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29885c: 0x27b700d4  addiu       $s7, $sp, 0xD4
    ctx->pc = 0x29885cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x298860: 0x27be00d8  addiu       $fp, $sp, 0xD8
    ctx->pc = 0x298860u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x298864: 0x27b200c4  addiu       $s2, $sp, 0xC4
    ctx->pc = 0x298864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x298868: 0x27b100c8  addiu       $s1, $sp, 0xC8
    ctx->pc = 0x298868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x29886c: 0x27b600cc  addiu       $s6, $sp, 0xCC
    ctx->pc = 0x29886cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_298870:
    // 0x298870: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x298870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x298874: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x298874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x298878: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x298878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29887c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x29887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298880: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x298880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x298884: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x298884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x298888: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x298888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29888c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x29888cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x298890: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x298890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298894: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x298894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x298898: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x298898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29889c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29889cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2988a0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2988a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2988a4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2988a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2988a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2988a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2988ac: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x2988acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2988b0: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x2988b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2988b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2988b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2988b8: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2988b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2988bc: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x2988bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2988c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2988c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2988c4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2988c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2988c8: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x2988c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2988cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2988ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2988d0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2988d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2988d4: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2988d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2988d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2988d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2988dc: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x2988dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2988e0: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x2988e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x2988e4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2988e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2988e8: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x2988e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2988ec: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x2988ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2988f0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2988f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2988f4: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x2988f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2988f8: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x2988f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2988fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2988fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x298900: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x298900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x298904: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x298904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x298908: 0xc0a343c  jal         func_28D0F0
    ctx->pc = 0x298908u;
    SET_GPR_U32(ctx, 31, 0x298910u);
    ctx->pc = 0x29890Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298908u;
            // 0x29890c: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D0F0u;
    if (runtime->hasFunction(0x28D0F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298910u; }
        if (ctx->pc != 0x298910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D0F0_0x28d0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298910u; }
        if (ctx->pc != 0x298910u) { return; }
    }
    ctx->pc = 0x298910u;
label_298910:
    // 0x298910: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x298910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x298914: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x298914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x298918: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x298918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29891c: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x29891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x298920: 0xc0a45e8  jal         func_2917A0
    ctx->pc = 0x298920u;
    SET_GPR_U32(ctx, 31, 0x298928u);
    ctx->pc = 0x298924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298920u;
            // 0x298924: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298928u; }
        if (ctx->pc != 0x298928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298928u; }
        if (ctx->pc != 0x298928u) { return; }
    }
    ctx->pc = 0x298928u;
label_298928:
    // 0x298928: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x298928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29892c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x29892cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x298930: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x298930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x298934: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x298934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x298938: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x298938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29893c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x29893cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x298940: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x298940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x298944: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x298944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298948: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x298948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x29894c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x29894cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x298950: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x298950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298954: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x298954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x298958: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x298958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x29895c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x29895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x298960: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x298960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x298964: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x298964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x298968: 0xc0a6690  jal         func_299A40
    ctx->pc = 0x298968u;
    SET_GPR_U32(ctx, 31, 0x298970u);
    ctx->pc = 0x29896Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298968u;
            // 0x29896c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299A40u;
    if (runtime->hasFunction(0x299A40u)) {
        auto targetFn = runtime->lookupFunction(0x299A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298970u; }
        if (ctx->pc != 0x298970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299A40_0x299a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298970u; }
        if (ctx->pc != 0x298970u) { return; }
    }
    ctx->pc = 0x298970u;
label_298970:
    // 0x298970: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x298970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x298974: 0xc0a33bc  jal         func_28CEF0
    ctx->pc = 0x298974u;
    SET_GPR_U32(ctx, 31, 0x29897Cu);
    ctx->pc = 0x298978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298974u;
            // 0x298978: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CEF0u;
    if (runtime->hasFunction(0x28CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x28CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29897Cu; }
        if (ctx->pc != 0x29897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CEF0_0x28cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29897Cu; }
        if (ctx->pc != 0x29897Cu) { return; }
    }
    ctx->pc = 0x29897Cu;
label_29897c:
    // 0x29897c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x29897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x298980: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x298980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x298984: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x298984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x298988: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x298988u;
    {
        const bool branch_taken_0x298988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298988u;
            // 0x29898c: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298988) {
            ctx->pc = 0x298870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298870;
        }
    }
    ctx->pc = 0x298990u;
label_298990:
    // 0x298990: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298994: 0x0  nop
    ctx->pc = 0x298994u;
    // NOP
label_298998:
    // 0x298998: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x298998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29899c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x29899cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2989a0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x2989a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2989a4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2989a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2989a8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2989a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2989ac: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2989acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2989b0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2989b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2989b4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2989b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2989b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2989b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2989bc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2989bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2989c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2989c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2989c4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2989c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2989c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2989c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2989cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2989ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2989d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2989d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2989d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2989d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2989d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2989D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2989DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2989D8u;
            // 0x2989dc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2989E0u;
}
