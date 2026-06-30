#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B2200
// Address: 0x3b2200 - 0x3b2690
void sub_003B2200_0x3b2200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2200_0x3b2200");
#endif

    switch (ctx->pc) {
        case 0x3b2288u: goto label_3b2288;
        case 0x3b2328u: goto label_3b2328;
        case 0x3b2410u: goto label_3b2410;
        case 0x3b24d8u: goto label_3b24d8;
        case 0x3b2548u: goto label_3b2548;
        case 0x3b2640u: goto label_3b2640;
        default: break;
    }

    ctx->pc = 0x3b2200u;

    // 0x3b2200: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b2200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3b2204: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3b2204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2208: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3b2208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3b220c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3b220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x3b2210: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3b2210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3b2214: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3b2214u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2218: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3b2218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3b221c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3b221cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2220: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b2220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3b2224: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b2224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3b2228: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b2228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3b222c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3b2230: 0x2473000c  addiu       $s3, $v1, 0xC
    ctx->pc = 0x3b2230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x3b2234: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b2234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b2238: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3b2238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3b223c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b2240: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b2244: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x3b2244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x3b2248: 0x8c728a08  lw          $s2, -0x75F8($v1)
    ctx->pc = 0x3b2248u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3b224c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x3b224cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b2250: 0x8fb600bc  lw          $s6, 0xBC($sp)
    ctx->pc = 0x3b2250u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x3b2254: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3b2254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b2258: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3b2258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3b225c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x3b225cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x3b2260: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3b2260u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b2264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2268: 0x0  nop
    ctx->pc = 0x3b2268u;
    // NOP
    // 0x3b226c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b226cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b2270: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3b2270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3b2274: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2274u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b2278: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b227c: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x3b227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b2280: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x3b2280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x3b2284: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3b2284u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_3b2288:
    // 0x3b2288: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x3b2288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x3b228c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3b228cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3b2290: 0x102000eb  beqz        $at, . + 4 + (0xEB << 2)
    ctx->pc = 0x3B2290u;
    {
        const bool branch_taken_0x3b2290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2290u;
            // 0x3b2294: 0x26d4002c  addiu       $s4, $s6, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2290) {
            ctx->pc = 0x3B2640u;
            goto label_3b2640;
        }
    }
    ctx->pc = 0x3B2298u;
    // 0x3b2298: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3b2298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3b229c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b229cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b22a0: 0x24848010  addiu       $a0, $a0, -0x7FF0
    ctx->pc = 0x3b22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934544));
    // 0x3b22a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b22a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b22a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b22a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b22ac: 0x600008  jr          $v1
    ctx->pc = 0x3B22ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B22B8u: goto label_3b22b8;
            case 0x3B22E0u: goto label_3b22e0;
            case 0x3B2330u: goto label_3b2330;
            case 0x3B2418u: goto label_3b2418;
            case 0x3B2550u: goto label_3b2550;
            case 0x3B2640u: goto label_3b2640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3B22B4u;
    // 0x3b22b4: 0x0  nop
    ctx->pc = 0x3b22b4u;
    // NOP
label_3b22b8:
    // 0x3b22b8: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x3b22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x3b22bc: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x3b22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x3b22c0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3b22c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b22c4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3b22c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b22c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b22cc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3b22ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3b22d0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3b22d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x3b22d4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3b22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3b22d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b22dc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3b22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3b22e0:
    // 0x3b22e0: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3b22e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b22e4: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x3b22e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b22e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b22e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b22ec: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x3b22ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x3b22f0: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x3b22f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b22f4: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x3b22f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b22f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b22f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b22fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3B22FCu;
    {
        const bool branch_taken_0x3b22fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b22fc) {
            ctx->pc = 0x3B2320u;
            goto label_3b2320;
        }
    }
    ctx->pc = 0x3B2304u;
    // 0x3b2304: 0xe6810014  swc1        $f1, 0x14($s4)
    ctx->pc = 0x3b2304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x3b2308: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3b2308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3b230c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b2310: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3b2310u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x3b2314: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3b2314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3b2318: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3b2318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3b231c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3b231cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3b2320:
    // 0x3b2320: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B2320u;
    SET_GPR_U32(ctx, 31, 0x3B2328u);
    ctx->pc = 0x3B2324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2320u;
            // 0x3b2324: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2328u; }
        if (ctx->pc != 0x3B2328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2328u; }
        if (ctx->pc != 0x3B2328u) { return; }
    }
    ctx->pc = 0x3B2328u;
label_3b2328:
    // 0x3b2328: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x3B2328u;
    {
        const bool branch_taken_0x3b2328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2328) {
            ctx->pc = 0x3B2640u;
            goto label_3b2640;
        }
    }
    ctx->pc = 0x3B2330u;
label_3b2330:
    // 0x3b2330: 0x8682000e  lh          $v0, 0xE($s4)
    ctx->pc = 0x3b2330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x3b2334: 0x151c3c  dsll32      $v1, $s5, 16
    ctx->pc = 0x3b2334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 16));
    // 0x3b2338: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3b2338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3b233c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b2340: 0xa682000e  sh          $v0, 0xE($s4)
    ctx->pc = 0x3b2340u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b2344: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x3b2344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3b2348: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b2348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b234c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b234cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b2350: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b2350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b2354: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B2354u;
    {
        const bool branch_taken_0x3b2354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2354) {
            ctx->pc = 0x3B2360u;
            goto label_3b2360;
        }
    }
    ctx->pc = 0x3B235Cu;
    // 0x3b235c: 0xa683000e  sh          $v1, 0xE($s4)
    ctx->pc = 0x3b235cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 3));
label_3b2360:
    // 0x3b2360: 0x9283000c  lbu         $v1, 0xC($s4)
    ctx->pc = 0x3b2360u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3b2364: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x3b2364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3b2368: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x3b2368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x3b236c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B236Cu;
    {
        const bool branch_taken_0x3b236c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b236c) {
            ctx->pc = 0x3B2388u;
            goto label_3b2388;
        }
    }
    ctx->pc = 0x3B2374u;
    // 0x3b2374: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3b2374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3b2378: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b2378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b237c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B237Cu;
    {
        const bool branch_taken_0x3b237c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B237Cu;
            // 0x3b2380: 0xa282000c  sb          $v0, 0xC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b237c) {
            ctx->pc = 0x3B2408u;
            goto label_3b2408;
        }
    }
    ctx->pc = 0x3B2384u;
    // 0x3b2384: 0x0  nop
    ctx->pc = 0x3b2384u;
    // NOP
label_3b2388:
    // 0x3b2388: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3b2388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3b238c: 0xa282000c  sb          $v0, 0xC($s4)
    ctx->pc = 0x3b238cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b2390: 0x151c3c  dsll32      $v1, $s5, 16
    ctx->pc = 0x3b2390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 16));
    // 0x3b2394: 0x86820012  lh          $v0, 0x12($s4)
    ctx->pc = 0x3b2394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x3b2398: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3b2398u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3b239c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b23a0: 0xa6820012  sh          $v0, 0x12($s4)
    ctx->pc = 0x3b23a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b23a4: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x3b23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3b23a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b23a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b23ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b23acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b23b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b23b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b23b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B23B4u;
    {
        const bool branch_taken_0x3b23b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b23b4) {
            ctx->pc = 0x3B23C0u;
            goto label_3b23c0;
        }
    }
    ctx->pc = 0x3B23BCu;
    // 0x3b23bc: 0xa6830012  sh          $v1, 0x12($s4)
    ctx->pc = 0x3b23bcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 3));
label_3b23c0:
    // 0x3b23c0: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x3b23c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3b23c4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x3b23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3b23c8: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x3b23c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x3b23cc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B23CCu;
    {
        const bool branch_taken_0x3b23cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b23cc) {
            ctx->pc = 0x3B23E8u;
            goto label_3b23e8;
        }
    }
    ctx->pc = 0x3B23D4u;
    // 0x3b23d4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3b23d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3b23d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b23dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B23DCu;
    {
        const bool branch_taken_0x3b23dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B23E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B23DCu;
            // 0x3b23e0: 0xa2820010  sb          $v0, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b23dc) {
            ctx->pc = 0x3B2408u;
            goto label_3b2408;
        }
    }
    ctx->pc = 0x3B23E4u;
    // 0x3b23e4: 0x0  nop
    ctx->pc = 0x3b23e4u;
    // NOP
label_3b23e8:
    // 0x3b23e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3b23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3b23ec: 0xa2820010  sb          $v0, 0x10($s4)
    ctx->pc = 0x3b23ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b23f0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3b23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3b23f4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3b23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3b23f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b23fc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3b23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3b2400: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x3b2400u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x3b2404: 0x0  nop
    ctx->pc = 0x3b2404u;
    // NOP
label_3b2408:
    // 0x3b2408: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B2408u;
    SET_GPR_U32(ctx, 31, 0x3B2410u);
    ctx->pc = 0x3B240Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2408u;
            // 0x3b240c: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2410u; }
        if (ctx->pc != 0x3B2410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2410u; }
        if (ctx->pc != 0x3B2410u) { return; }
    }
    ctx->pc = 0x3B2410u;
label_3b2410:
    // 0x3b2410: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3B2410u;
    {
        const bool branch_taken_0x3b2410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2410) {
            ctx->pc = 0x3B2640u;
            goto label_3b2640;
        }
    }
    ctx->pc = 0x3B2418u;
label_3b2418:
    // 0x3b2418: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3b2418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b241c: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x3b241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2420: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b2420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b2424: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x3b2424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x3b2428: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x3b2428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b242c: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x3b242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b2430: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3b2430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2434: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x3b2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2438: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x3b2438u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3b243c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b243cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3b2440: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2444: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3B2444u;
    {
        const bool branch_taken_0x3b2444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2444) {
            ctx->pc = 0x3B2450u;
            goto label_3b2450;
        }
    }
    ctx->pc = 0x3B244Cu;
    // 0x3b244c: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x3b244cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
label_3b2450:
    // 0x3b2450: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x3b2450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b2454: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x3b2454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2458: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x3b2458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b245c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3b245cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3b2460: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2464: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x3B2464u;
    {
        const bool branch_taken_0x3b2464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2464) {
            ctx->pc = 0x3B24D0u;
            goto label_3b24d0;
        }
    }
    ctx->pc = 0x3B246Cu;
    // 0x3b246c: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x3b246cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3b2470: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b2470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3b2474: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3b2474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b2478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b247c: 0x0  nop
    ctx->pc = 0x3b247cu;
    // NOP
    // 0x3b2480: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b2480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b2484: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x3b2484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2488: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x3B2488u;
    {
        const bool branch_taken_0x3b2488 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2488u;
            // 0x3b248c: 0x641e0001  daddiu      $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2488) {
            ctx->pc = 0x3B24B8u;
            goto label_3b24b8;
        }
    }
    ctx->pc = 0x3B2490u;
    // 0x3b2490: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x3b2490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3b2494: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b2494u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b2498: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x3b2498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b249c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b249cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b24a0: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x3b24a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b24a4: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3b24a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3b24a8: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x3b24a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3b24ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B24ACu;
    {
        const bool branch_taken_0x3b24ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B24B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B24ACu;
            // 0x3b24b0: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b24ac) {
            ctx->pc = 0x3B24D0u;
            goto label_3b24d0;
        }
    }
    ctx->pc = 0x3B24B4u;
    // 0x3b24b4: 0x0  nop
    ctx->pc = 0x3b24b4u;
    // NOP
label_3b24b8:
    // 0x3b24b8: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x3b24b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b24bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b24bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b24c0: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x3b24c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b24c4: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x3b24c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3b24c8: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x3b24c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x3b24cc: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x3b24ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3b24d0:
    // 0x3b24d0: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B24D0u;
    SET_GPR_U32(ctx, 31, 0x3B24D8u);
    ctx->pc = 0x3B24D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B24D0u;
            // 0x3b24d4: 0x8e840020  lw          $a0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B24D8u; }
        if (ctx->pc != 0x3B24D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B24D8u; }
        if (ctx->pc != 0x3B24D8u) { return; }
    }
    ctx->pc = 0x3B24D8u;
label_3b24d8:
    // 0x3b24d8: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B24D8u;
    {
        const bool branch_taken_0x3b24d8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b24d8) {
            ctx->pc = 0x3B24F8u;
            goto label_3b24f8;
        }
    }
    ctx->pc = 0x3B24E0u;
    // 0x3b24e0: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x3b24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3b24e4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3b24e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b24e8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3b24e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b24ec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3b24ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3b24f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B24F0u;
    {
        const bool branch_taken_0x3b24f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B24F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B24F0u;
            // 0x3b24f4: 0xe4940014  swc1        $f20, 0x14($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b24f0) {
            ctx->pc = 0x3B2510u;
            goto label_3b2510;
        }
    }
    ctx->pc = 0x3B24F8u;
label_3b24f8:
    // 0x3b24f8: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x3b24f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3b24fc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3b24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b2500: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3b2500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3b2504: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b2504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b2508: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3b2508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x3b250c: 0x0  nop
    ctx->pc = 0x3b250cu;
    // NOP
label_3b2510:
    // 0x3b2510: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3b2510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b2514: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x3b2514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2518: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b2518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b251c: 0x0  nop
    ctx->pc = 0x3b251cu;
    // NOP
    // 0x3b2520: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b2520u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3b2524: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b2524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2528: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x3B2528u;
    {
        const bool branch_taken_0x3b2528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2528u;
            // 0x3b252c: 0xe6810008  swc1        $f1, 0x8($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2528) {
            ctx->pc = 0x3B2640u;
            goto label_3b2640;
        }
    }
    ctx->pc = 0x3B2530u;
    // 0x3b2530: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3b2530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3b2534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b2534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b2538: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3b2538u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x3b253c: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x3b253cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x3b2540: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B2540u;
    SET_GPR_U32(ctx, 31, 0x3B2548u);
    ctx->pc = 0x3B2544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2540u;
            // 0x3b2544: 0x8e840020  lw          $a0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2548u; }
        if (ctx->pc != 0x3B2548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2548u; }
        if (ctx->pc != 0x3B2548u) { return; }
    }
    ctx->pc = 0x3B2548u;
label_3b2548:
    // 0x3b2548: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3B2548u;
    {
        const bool branch_taken_0x3b2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2548) {
            ctx->pc = 0x3B2640u;
            goto label_3b2640;
        }
    }
    ctx->pc = 0x3B2550u;
label_3b2550:
    // 0x3b2550: 0x8683000e  lh          $v1, 0xE($s4)
    ctx->pc = 0x3b2550u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x3b2554: 0x15143c  dsll32      $v0, $s5, 16
    ctx->pc = 0x3b2554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 16));
    // 0x3b2558: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b2558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b255c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3b255cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b2560: 0xa682000e  sh          $v0, 0xE($s4)
    ctx->pc = 0x3b2560u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b2564: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b2564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b2568: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b2568u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b256c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B256Cu;
    {
        const bool branch_taken_0x3b256c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3b256c) {
            ctx->pc = 0x3B2578u;
            goto label_3b2578;
        }
    }
    ctx->pc = 0x3B2574u;
    // 0x3b2574: 0xa680000e  sh          $zero, 0xE($s4)
    ctx->pc = 0x3b2574u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 0));
label_3b2578:
    // 0x3b2578: 0x9283000c  lbu         $v1, 0xC($s4)
    ctx->pc = 0x3b2578u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3b257c: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x3b257cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3b2580: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2580u;
    {
        const bool branch_taken_0x3b2580 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b2580) {
            ctx->pc = 0x3B2598u;
            goto label_3b2598;
        }
    }
    ctx->pc = 0x3B2588u;
    // 0x3b2588: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3b2588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3b258c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3b258cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b2590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2590u;
    {
        const bool branch_taken_0x3b2590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2590u;
            // 0x3b2594: 0xa282000c  sb          $v0, 0xC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2590) {
            ctx->pc = 0x3B25A0u;
            goto label_3b25a0;
        }
    }
    ctx->pc = 0x3B2598u;
label_3b2598:
    // 0x3b2598: 0xa280000c  sb          $zero, 0xC($s4)
    ctx->pc = 0x3b2598u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b259c: 0x0  nop
    ctx->pc = 0x3b259cu;
    // NOP
label_3b25a0:
    // 0x3b25a0: 0x86830012  lh          $v1, 0x12($s4)
    ctx->pc = 0x3b25a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x3b25a4: 0x15143c  dsll32      $v0, $s5, 16
    ctx->pc = 0x3b25a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 16));
    // 0x3b25a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b25a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b25ac: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3b25acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b25b0: 0xa6820012  sh          $v0, 0x12($s4)
    ctx->pc = 0x3b25b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b25b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b25b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b25b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b25b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b25bc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B25BCu;
    {
        const bool branch_taken_0x3b25bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3b25bc) {
            ctx->pc = 0x3B25C8u;
            goto label_3b25c8;
        }
    }
    ctx->pc = 0x3B25C4u;
    // 0x3b25c4: 0xa6800012  sh          $zero, 0x12($s4)
    ctx->pc = 0x3b25c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 0));
label_3b25c8:
    // 0x3b25c8: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x3b25c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3b25cc: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x3b25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3b25d0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B25D0u;
    {
        const bool branch_taken_0x3b25d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b25d0) {
            ctx->pc = 0x3B25E8u;
            goto label_3b25e8;
        }
    }
    ctx->pc = 0x3B25D8u;
    // 0x3b25d8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3b25d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3b25dc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3b25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b25e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B25E0u;
    {
        const bool branch_taken_0x3b25e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B25E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B25E0u;
            // 0x3b25e4: 0xa2820010  sb          $v0, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b25e0) {
            ctx->pc = 0x3B25F0u;
            goto label_3b25f0;
        }
    }
    ctx->pc = 0x3B25E8u;
label_3b25e8:
    // 0x3b25e8: 0xa2800010  sb          $zero, 0x10($s4)
    ctx->pc = 0x3b25e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b25ec: 0x0  nop
    ctx->pc = 0x3b25ecu;
    // NOP
label_3b25f0:
    // 0x3b25f0: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3b25f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b25f4: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x3b25f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b25f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b25f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b25fc: 0x0  nop
    ctx->pc = 0x3b25fcu;
    // NOP
    // 0x3b2600: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b2600u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3b2604: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b2604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2608: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x3B2608u;
    {
        const bool branch_taken_0x3b2608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2608u;
            // 0x3b260c: 0xe6810014  swc1        $f1, 0x14($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2608) {
            ctx->pc = 0x3B2638u;
            goto label_3b2638;
        }
    }
    ctx->pc = 0x3B2610u;
    // 0x3b2610: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x3b2610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x3b2614: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3b2614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b2618: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3b2618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3b261c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b2620: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3b2620u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3b2624: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3b2624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x3b2628: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3b2628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b262c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b262cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b2630: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3b2630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3b2634: 0x0  nop
    ctx->pc = 0x3b2634u;
    // NOP
label_3b2638:
    // 0x3b2638: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B2638u;
    SET_GPR_U32(ctx, 31, 0x3B2640u);
    ctx->pc = 0x3B263Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2638u;
            // 0x3b263c: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2640u; }
        if (ctx->pc != 0x3B2640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2640u; }
        if (ctx->pc != 0x3B2640u) { return; }
    }
    ctx->pc = 0x3B2640u;
label_3b2640:
    // 0x3b2640: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x3b2640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x3b2644: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3b2644u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3b2648: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b2648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b264c: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3b264cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x3b2650: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x3b2650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b2654: 0x1460ff0c  bnez        $v1, . + 4 + (-0xF4 << 2)
    ctx->pc = 0x3B2654u;
    {
        const bool branch_taken_0x3b2654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2654u;
            // 0x3b2658: 0x26d60054  addiu       $s6, $s6, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2654) {
            ctx->pc = 0x3B2288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b2288;
        }
    }
    ctx->pc = 0x3B265Cu;
    // 0x3b265c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3b265cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b2660: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b2664: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3b2664u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b2668: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3b2668u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b266c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3b266cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b2670: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b2670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b2674: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b2674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2678: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b2678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b267c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b267cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b2680: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b2680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2684: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b2684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2688: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B268Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2688u;
            // 0x3b268c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B2690u;
}
