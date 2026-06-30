#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B2280
// Address: 0x4b2280 - 0x4b2550
void sub_004B2280_0x4b2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2280_0x4b2280");
#endif

    switch (ctx->pc) {
        case 0x4b2364u: goto label_4b2364;
        case 0x4b23d0u: goto label_4b23d0;
        case 0x4b23ecu: goto label_4b23ec;
        case 0x4b2408u: goto label_4b2408;
        case 0x4b2418u: goto label_4b2418;
        case 0x4b2454u: goto label_4b2454;
        case 0x4b24c0u: goto label_4b24c0;
        case 0x4b24dcu: goto label_4b24dc;
        case 0x4b24f8u: goto label_4b24f8;
        case 0x4b2508u: goto label_4b2508;
        case 0x4b2518u: goto label_4b2518;
        case 0x4b2528u: goto label_4b2528;
        case 0x4b253cu: goto label_4b253c;
        default: break;
    }

    ctx->pc = 0x4b2280u;

    // 0x4b2280: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4b2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4b2284: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4b2284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x4b2288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b2288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b228c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b228cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b2290: 0xc46140c0  lwc1        $f1, 0x40C0($v1)
    ctx->pc = 0x4b2290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2294: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b2294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2298: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x4b2298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x4b229c: 0xc4a040c4  lwc1        $f0, 0x40C4($a1)
    ctx->pc = 0x4b229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b22a0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4b22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x4b22a4: 0xc46240c8  lwc1        $f2, 0x40C8($v1)
    ctx->pc = 0x4b22a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b22a8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x4b22a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x4b22ac: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x4b22acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4b22b0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4b22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x4b22b4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x4b22b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4b22b8: 0xc46040d0  lwc1        $f0, 0x40D0($v1)
    ctx->pc = 0x4b22b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b22bc: 0xc4a140cc  lwc1        $f1, 0x40CC($a1)
    ctx->pc = 0x4b22bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b22c0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x4b22c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4b22c4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4b22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x4b22c8: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x4b22c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x4b22cc: 0xc46140d4  lwc1        $f1, 0x40D4($v1)
    ctx->pc = 0x4b22ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b22d0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x4b22d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x4b22d4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4b22d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x4b22d8: 0xc46040d8  lwc1        $f0, 0x40D8($v1)
    ctx->pc = 0x4b22d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b22dc: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x4b22dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x4b22e0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4b22e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4b22e4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4b22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b22e8: 0x8c84055c  lw          $a0, 0x55C($a0)
    ctx->pc = 0x4b22e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1372)));
    // 0x4b22ec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4b22ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b22f0: 0x5083005b  beql        $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x4B22F0u;
    {
        const bool branch_taken_0x4b22f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b22f0) {
            ctx->pc = 0x4B22F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B22F0u;
            // 0x4b22f4: 0x8cc70004  lw          $a3, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2460u;
            goto label_4b2460;
        }
    }
    ctx->pc = 0x4B22F8u;
    // 0x4b22f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4b22f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4b22fc: 0x50830049  beql        $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x4B22FCu;
    {
        const bool branch_taken_0x4b22fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b22fc) {
            ctx->pc = 0x4B2300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B22FCu;
            // 0x4b2300: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2424u;
            goto label_4b2424;
        }
    }
    ctx->pc = 0x4B2304u;
    // 0x4b2304: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4b2304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b2308: 0x50830019  beql        $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x4B2308u;
    {
        const bool branch_taken_0x4b2308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b2308) {
            ctx->pc = 0x4B230Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2308u;
            // 0x4b230c: 0x8cc70004  lw          $a3, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2370u;
            goto label_4b2370;
        }
    }
    ctx->pc = 0x4B2310u;
    // 0x4b2310: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b2310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b2314: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B2314u;
    {
        const bool branch_taken_0x4b2314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b2314) {
            ctx->pc = 0x4B2318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2314u;
            // 0x4b2318: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2334u;
            goto label_4b2334;
        }
    }
    ctx->pc = 0x4B231Cu;
    // 0x4b231c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b231cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b2320: 0x50830087  beql        $a0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x4B2320u;
    {
        const bool branch_taken_0x4b2320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b2320) {
            ctx->pc = 0x4B2324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2320u;
            // 0x4b2324: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2540u;
            goto label_4b2540;
        }
    }
    ctx->pc = 0x4B2328u;
    // 0x4b2328: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x4B2328u;
    {
        const bool branch_taken_0x4b2328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B232Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2328u;
            // 0x4b232c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2328) {
            ctx->pc = 0x4B250Cu;
            goto label_4b250c;
        }
    }
    ctx->pc = 0x4B2330u;
    // 0x4b2330: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4b2330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4b2334:
    // 0x4b2334: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b2334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4b2338: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4b2338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b233c: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x4b233cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x4b2340: 0x24460018  addiu       $a2, $v0, 0x18
    ctx->pc = 0x4b2340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4b2344: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4b2344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4b2348: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4b2348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b234c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x4b234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4b2350: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4b2350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2354: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x4b2354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4b2358: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x4b2358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b235c: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x4B235Cu;
    SET_GPR_U32(ctx, 31, 0x4B2364u);
    ctx->pc = 0x4B2360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B235Cu;
            // 0x4b2360: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2364u; }
        if (ctx->pc != 0x4B2364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2364u; }
        if (ctx->pc != 0x4B2364u) { return; }
    }
    ctx->pc = 0x4B2364u;
label_4b2364:
    // 0x4b2364: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x4B2364u;
    {
        const bool branch_taken_0x4b2364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2364) {
            ctx->pc = 0x4B2508u;
            goto label_4b2508;
        }
    }
    ctx->pc = 0x4B236Cu;
    // 0x4b236c: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x4b236cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4b2370:
    // 0x4b2370: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b2370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b2374: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x4b2374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2378: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4b2378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4b237c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x4b237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2380: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x4b2380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4b2384: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x4b2384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2388: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x4b2388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4b238c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x4b238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2390: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x4b2390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x4b2394: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x4b2394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4b2398: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4B2398u;
    {
        const bool branch_taken_0x4b2398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b2398) {
            ctx->pc = 0x4B239Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2398u;
            // 0x4b239c: 0x8ce50028  lw          $a1, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B23F8u;
            goto label_4b23f8;
        }
    }
    ctx->pc = 0x4B23A0u;
    // 0x4b23a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b23a4: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B23A4u;
    {
        const bool branch_taken_0x4b23a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b23a4) {
            ctx->pc = 0x4B23A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B23A4u;
            // 0x4b23a8: 0x8ce50028  lw          $a1, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B23DCu;
            goto label_4b23dc;
        }
    }
    ctx->pc = 0x4B23ACu;
    // 0x4b23ac: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B23ACu;
    {
        const bool branch_taken_0x4b23ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b23ac) {
            ctx->pc = 0x4B23B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B23ACu;
            // 0x4b23b0: 0x8ce50028  lw          $a1, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B23C0u;
            goto label_4b23c0;
        }
    }
    ctx->pc = 0x4B23B4u;
    // 0x4b23b4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4B23B4u;
    {
        const bool branch_taken_0x4b23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B23B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B23B4u;
            // 0x4b23b8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b23b4) {
            ctx->pc = 0x4B240Cu;
            goto label_4b240c;
        }
    }
    ctx->pc = 0x4B23BCu;
    // 0x4b23bc: 0x8ce50028  lw          $a1, 0x28($a3)
    ctx->pc = 0x4b23bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_4b23c0:
    // 0x4b23c0: 0x8ce6002c  lw          $a2, 0x2C($a3)
    ctx->pc = 0x4b23c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x4b23c4: 0x8ce70030  lw          $a3, 0x30($a3)
    ctx->pc = 0x4b23c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x4b23c8: 0xc04f308  jal         func_13CC20
    ctx->pc = 0x4B23C8u;
    SET_GPR_U32(ctx, 31, 0x4B23D0u);
    ctx->pc = 0x4B23CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B23C8u;
            // 0x4b23cc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B23D0u; }
        if (ctx->pc != 0x4B23D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B23D0u; }
        if (ctx->pc != 0x4B23D0u) { return; }
    }
    ctx->pc = 0x4B23D0u;
label_4b23d0:
    // 0x4b23d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B23D0u;
    {
        const bool branch_taken_0x4b23d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b23d0) {
            ctx->pc = 0x4B2408u;
            goto label_4b2408;
        }
    }
    ctx->pc = 0x4B23D8u;
    // 0x4b23d8: 0x8ce50028  lw          $a1, 0x28($a3)
    ctx->pc = 0x4b23d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_4b23dc:
    // 0x4b23dc: 0x8ce6002c  lw          $a2, 0x2C($a3)
    ctx->pc = 0x4b23dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x4b23e0: 0x8ce70030  lw          $a3, 0x30($a3)
    ctx->pc = 0x4b23e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x4b23e4: 0xc04f344  jal         func_13CD10
    ctx->pc = 0x4B23E4u;
    SET_GPR_U32(ctx, 31, 0x4B23ECu);
    ctx->pc = 0x4B23E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B23E4u;
            // 0x4b23e8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CD10u;
    if (runtime->hasFunction(0x13CD10u)) {
        auto targetFn = runtime->lookupFunction(0x13CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B23ECu; }
        if (ctx->pc != 0x4B23ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD10_0x13cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B23ECu; }
        if (ctx->pc != 0x4B23ECu) { return; }
    }
    ctx->pc = 0x4B23ECu;
label_4b23ec:
    // 0x4b23ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B23ECu;
    {
        const bool branch_taken_0x4b23ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b23ec) {
            ctx->pc = 0x4B2408u;
            goto label_4b2408;
        }
    }
    ctx->pc = 0x4B23F4u;
    // 0x4b23f4: 0x8ce50028  lw          $a1, 0x28($a3)
    ctx->pc = 0x4b23f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_4b23f8:
    // 0x4b23f8: 0x8ce6002c  lw          $a2, 0x2C($a3)
    ctx->pc = 0x4b23f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x4b23fc: 0x8ce70030  lw          $a3, 0x30($a3)
    ctx->pc = 0x4b23fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x4b2400: 0xc04f380  jal         func_13CE00
    ctx->pc = 0x4B2400u;
    SET_GPR_U32(ctx, 31, 0x4B2408u);
    ctx->pc = 0x4B2404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2400u;
            // 0x4b2404: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2408u; }
        if (ctx->pc != 0x4B2408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2408u; }
        if (ctx->pc != 0x4B2408u) { return; }
    }
    ctx->pc = 0x4B2408u;
label_4b2408:
    // 0x4b2408: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b2408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4b240c:
    // 0x4b240c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4b240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4b2410: 0xc04cbbc  jal         func_132EF0
    ctx->pc = 0x4B2410u;
    SET_GPR_U32(ctx, 31, 0x4B2418u);
    ctx->pc = 0x4B2414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2410u;
            // 0x4b2414: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2418u; }
        if (ctx->pc != 0x4B2418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2418u; }
        if (ctx->pc != 0x4B2418u) { return; }
    }
    ctx->pc = 0x4B2418u;
label_4b2418:
    // 0x4b2418: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x4B2418u;
    {
        const bool branch_taken_0x4b2418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2418) {
            ctx->pc = 0x4B2508u;
            goto label_4b2508;
        }
    }
    ctx->pc = 0x4B2420u;
    // 0x4b2420: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4b2420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4b2424:
    // 0x4b2424: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b2424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4b2428: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4b2428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b242c: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x4b242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x4b2430: 0x24460018  addiu       $a2, $v0, 0x18
    ctx->pc = 0x4b2430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4b2434: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4b2434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4b2438: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4b2438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b243c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x4b243cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4b2440: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4b2440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2444: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x4b2444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4b2448: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x4b2448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b244c: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x4B244Cu;
    SET_GPR_U32(ctx, 31, 0x4B2454u);
    ctx->pc = 0x4B2450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B244Cu;
            // 0x4b2450: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2454u; }
        if (ctx->pc != 0x4B2454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2454u; }
        if (ctx->pc != 0x4B2454u) { return; }
    }
    ctx->pc = 0x4B2454u;
label_4b2454:
    // 0x4b2454: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x4B2454u;
    {
        const bool branch_taken_0x4b2454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2454) {
            ctx->pc = 0x4B2508u;
            goto label_4b2508;
        }
    }
    ctx->pc = 0x4B245Cu;
    // 0x4b245c: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x4b245cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4b2460:
    // 0x4b2460: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b2460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b2464: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x4b2464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2468: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4b2468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4b246c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x4b246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2470: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x4b2470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4b2474: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x4b2474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2478: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x4b2478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4b247c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x4b247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2480: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x4b2480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x4b2484: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x4b2484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4b2488: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4B2488u;
    {
        const bool branch_taken_0x4b2488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b2488) {
            ctx->pc = 0x4B248Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2488u;
            // 0x4b248c: 0x8ce50028  lw          $a1, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B24E8u;
            goto label_4b24e8;
        }
    }
    ctx->pc = 0x4B2490u;
    // 0x4b2490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b2490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b2494: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B2494u;
    {
        const bool branch_taken_0x4b2494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b2494) {
            ctx->pc = 0x4B2498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2494u;
            // 0x4b2498: 0x8ce50028  lw          $a1, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B24CCu;
            goto label_4b24cc;
        }
    }
    ctx->pc = 0x4B249Cu;
    // 0x4b249c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B249Cu;
    {
        const bool branch_taken_0x4b249c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b249c) {
            ctx->pc = 0x4B24A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B249Cu;
            // 0x4b24a0: 0x8ce50028  lw          $a1, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B24B0u;
            goto label_4b24b0;
        }
    }
    ctx->pc = 0x4B24A4u;
    // 0x4b24a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4B24A4u;
    {
        const bool branch_taken_0x4b24a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B24A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B24A4u;
            // 0x4b24a8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b24a4) {
            ctx->pc = 0x4B24FCu;
            goto label_4b24fc;
        }
    }
    ctx->pc = 0x4B24ACu;
    // 0x4b24ac: 0x8ce50028  lw          $a1, 0x28($a3)
    ctx->pc = 0x4b24acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_4b24b0:
    // 0x4b24b0: 0x8ce6002c  lw          $a2, 0x2C($a3)
    ctx->pc = 0x4b24b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x4b24b4: 0x8ce70030  lw          $a3, 0x30($a3)
    ctx->pc = 0x4b24b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x4b24b8: 0xc04f308  jal         func_13CC20
    ctx->pc = 0x4B24B8u;
    SET_GPR_U32(ctx, 31, 0x4B24C0u);
    ctx->pc = 0x4B24BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B24B8u;
            // 0x4b24bc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B24C0u; }
        if (ctx->pc != 0x4B24C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B24C0u; }
        if (ctx->pc != 0x4B24C0u) { return; }
    }
    ctx->pc = 0x4B24C0u;
label_4b24c0:
    // 0x4b24c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B24C0u;
    {
        const bool branch_taken_0x4b24c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b24c0) {
            ctx->pc = 0x4B24F8u;
            goto label_4b24f8;
        }
    }
    ctx->pc = 0x4B24C8u;
    // 0x4b24c8: 0x8ce50028  lw          $a1, 0x28($a3)
    ctx->pc = 0x4b24c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_4b24cc:
    // 0x4b24cc: 0x8ce6002c  lw          $a2, 0x2C($a3)
    ctx->pc = 0x4b24ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x4b24d0: 0x8ce70030  lw          $a3, 0x30($a3)
    ctx->pc = 0x4b24d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x4b24d4: 0xc04f344  jal         func_13CD10
    ctx->pc = 0x4B24D4u;
    SET_GPR_U32(ctx, 31, 0x4B24DCu);
    ctx->pc = 0x4B24D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B24D4u;
            // 0x4b24d8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CD10u;
    if (runtime->hasFunction(0x13CD10u)) {
        auto targetFn = runtime->lookupFunction(0x13CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B24DCu; }
        if (ctx->pc != 0x4B24DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD10_0x13cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B24DCu; }
        if (ctx->pc != 0x4B24DCu) { return; }
    }
    ctx->pc = 0x4B24DCu;
label_4b24dc:
    // 0x4b24dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B24DCu;
    {
        const bool branch_taken_0x4b24dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b24dc) {
            ctx->pc = 0x4B24F8u;
            goto label_4b24f8;
        }
    }
    ctx->pc = 0x4B24E4u;
    // 0x4b24e4: 0x8ce50028  lw          $a1, 0x28($a3)
    ctx->pc = 0x4b24e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_4b24e8:
    // 0x4b24e8: 0x8ce6002c  lw          $a2, 0x2C($a3)
    ctx->pc = 0x4b24e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x4b24ec: 0x8ce70030  lw          $a3, 0x30($a3)
    ctx->pc = 0x4b24ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x4b24f0: 0xc04f380  jal         func_13CE00
    ctx->pc = 0x4B24F0u;
    SET_GPR_U32(ctx, 31, 0x4B24F8u);
    ctx->pc = 0x4B24F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B24F0u;
            // 0x4b24f4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B24F8u; }
        if (ctx->pc != 0x4B24F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B24F8u; }
        if (ctx->pc != 0x4B24F8u) { return; }
    }
    ctx->pc = 0x4B24F8u;
label_4b24f8:
    // 0x4b24f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4b24fc:
    // 0x4b24fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4b24fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4b2500: 0xc04cbbc  jal         func_132EF0
    ctx->pc = 0x4B2500u;
    SET_GPR_U32(ctx, 31, 0x4B2508u);
    ctx->pc = 0x4B2504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2500u;
            // 0x4b2504: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2508u; }
        if (ctx->pc != 0x4B2508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2508u; }
        if (ctx->pc != 0x4B2508u) { return; }
    }
    ctx->pc = 0x4B2508u;
label_4b2508:
    // 0x4b2508: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4b2508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4b250c:
    // 0x4b250c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4b250cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4b2510: 0xc04e94c  jal         func_13A530
    ctx->pc = 0x4B2510u;
    SET_GPR_U32(ctx, 31, 0x4B2518u);
    ctx->pc = 0x4B2514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2510u;
            // 0x4b2514: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A530u;
    if (runtime->hasFunction(0x13A530u)) {
        auto targetFn = runtime->lookupFunction(0x13A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2518u; }
        if (ctx->pc != 0x4B2518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A530_0x13a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2518u; }
        if (ctx->pc != 0x4B2518u) { return; }
    }
    ctx->pc = 0x4B2518u;
label_4b2518:
    // 0x4b2518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b2518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b251c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4b251cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4b2520: 0xc04e9a8  jal         func_13A6A0
    ctx->pc = 0x4B2520u;
    SET_GPR_U32(ctx, 31, 0x4B2528u);
    ctx->pc = 0x4B2524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2520u;
            // 0x4b2524: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2528u; }
        if (ctx->pc != 0x4B2528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2528u; }
        if (ctx->pc != 0x4B2528u) { return; }
    }
    ctx->pc = 0x4B2528u;
label_4b2528:
    // 0x4b2528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b2528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b252c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4b252cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4b2530: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4b2530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b2534: 0xc04ecc0  jal         func_13B300
    ctx->pc = 0x4B2534u;
    SET_GPR_U32(ctx, 31, 0x4B253Cu);
    ctx->pc = 0x4B2538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2534u;
            // 0x4b2538: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B300u;
    if (runtime->hasFunction(0x13B300u)) {
        auto targetFn = runtime->lookupFunction(0x13B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B253Cu; }
        if (ctx->pc != 0x4B253Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B300_0x13b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B253Cu; }
        if (ctx->pc != 0x4B253Cu) { return; }
    }
    ctx->pc = 0x4B253Cu;
label_4b253c:
    // 0x4b253c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b253cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2540:
    // 0x4b2540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b2540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2544: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2544u;
            // 0x4b2548: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B254Cu;
    // 0x4b254c: 0x0  nop
    ctx->pc = 0x4b254cu;
    // NOP
}
