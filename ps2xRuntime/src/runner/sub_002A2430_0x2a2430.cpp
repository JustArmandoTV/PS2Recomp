#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2430
// Address: 0x2a2430 - 0x2a2860
void sub_002A2430_0x2a2430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2430_0x2a2430");
#endif

    switch (ctx->pc) {
        case 0x2a248cu: goto label_2a248c;
        case 0x2a2838u: goto label_2a2838;
        default: break;
    }

    ctx->pc = 0x2a2430u;

    // 0x2a2430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a2430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a2434: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2a2434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2a2438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a243c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a243cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a2440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a2444: 0x24420d90  addiu       $v0, $v0, 0xD90
    ctx->pc = 0x2a2444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3472));
    // 0x2a2448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a244c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2a244cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2a2450: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2a2450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a2454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a2454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2458: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2a2458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a245c: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x2a245cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a2460: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a2460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2464: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x2a2464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2a2468: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a246c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a246cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a2470: 0x2484eb10  addiu       $a0, $a0, -0x14F0
    ctx->pc = 0x2a2470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961936));
    // 0x2a2474: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a2474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a2478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a247c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2a247cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2480: 0x113c3c  dsll32      $a3, $s1, 16
    ctx->pc = 0x2a2480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2a2484: 0xc040d76  jal         func_1035D8
    ctx->pc = 0x2A2484u;
    SET_GPR_U32(ctx, 31, 0x2A248Cu);
    ctx->pc = 0x2A2488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2484u;
            // 0x2a2488: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035D8u;
    if (runtime->hasFunction(0x1035D8u)) {
        auto targetFn = runtime->lookupFunction(0x1035D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A248Cu; }
        if (ctx->pc != 0x2A248Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001035D8_0x1035d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A248Cu; }
        if (ctx->pc != 0x2A248Cu) { return; }
    }
    ctx->pc = 0x2A248Cu;
label_2a248c:
    // 0x2a248c: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x2a248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2a2490: 0x3c0344a0  lui         $v1, 0x44A0
    ctx->pc = 0x2a2490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17568 << 16));
    // 0x2a2494: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2a2494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2a2498: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a2498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a249c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2a249cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2a24a0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2a24a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2a24a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a24a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a24a8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2a24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a24ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a24acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a24b0: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x2a24b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x2a24b4: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x2a24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x2a24b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a24bc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2a24bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a24c0: 0x93a9003c  lbu         $t1, 0x3C($sp)
    ctx->pc = 0x2a24c0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2a24c4: 0x93a8003d  lbu         $t0, 0x3D($sp)
    ctx->pc = 0x2a24c4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
    // 0x2a24c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a24cc: 0x93a7003e  lbu         $a3, 0x3E($sp)
    ctx->pc = 0x2a24ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x2a24d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a24d4: 0x93a6003f  lbu         $a2, 0x3F($sp)
    ctx->pc = 0x2a24d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x2a24d8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2a24d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2a24dc: 0xa209003c  sb          $t1, 0x3C($s0)
    ctx->pc = 0x2a24dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a24e0: 0xa208003d  sb          $t0, 0x3D($s0)
    ctx->pc = 0x2a24e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a24e4: 0xa207003e  sb          $a3, 0x3E($s0)
    ctx->pc = 0x2a24e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 7));
    // 0x2a24e8: 0xa206003f  sb          $a2, 0x3F($s0)
    ctx->pc = 0x2a24e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a24ec: 0x9207003e  lbu         $a3, 0x3E($s0)
    ctx->pc = 0x2a24ecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x2a24f0: 0x9206003d  lbu         $a2, 0x3D($s0)
    ctx->pc = 0x2a24f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
    // 0x2a24f4: 0x9208003f  lbu         $t0, 0x3F($s0)
    ctx->pc = 0x2a24f4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 63)));
    // 0x2a24f8: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x2a24f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x2a24fc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a24fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a2500: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2a2500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2a2504: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2a2504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a2508: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x2a2508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a250c: 0xfc65ec90  sd          $a1, -0x1370($v1)
    ctx->pc = 0x2a250cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294962320), GPR_U64(ctx, 5));
    // 0x2a2510: 0xfc45ee00  sd          $a1, -0x1200($v0)
    ctx->pc = 0x2a2510u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294962688), GPR_U64(ctx, 5));
    // 0x2a2514: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2a2514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2a2518: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2a2518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a251c: 0x14440036  bne         $v0, $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2A251Cu;
    {
        const bool branch_taken_0x2a251c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a251c) {
            ctx->pc = 0x2A25F8u;
            goto label_2a25f8;
        }
    }
    ctx->pc = 0x2A2524u;
    // 0x2a2524: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a2524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a2528: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a252c: 0x9447eb70  lhu         $a3, -0x1490($v0)
    ctx->pc = 0x2a252cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x2a2530: 0x300801ff  andi        $t0, $zero, 0x1FF
    ctx->pc = 0x2a2530u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)511);
    // 0x2a2534: 0x9466ebf0  lhu         $a2, -0x1410($v1)
    ctx->pc = 0x2a2534u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962160)));
    // 0x2a2538: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a2538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a253c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a253cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a2540: 0x64090050  daddiu      $t1, $zero, 0x50
    ctx->pc = 0x2a2540u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)80);
    // 0x2a2544: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x2a2544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x2a2548: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x2a2548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2a254c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a254cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2550: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2a2550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2a2554: 0x9463ece0  lhu         $v1, -0x1320($v1)
    ctx->pc = 0x2a2554u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962400)));
    // 0x2a2558: 0xa4a7eb70  sh          $a3, -0x1490($a1)
    ctx->pc = 0x2a2558u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294962032), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a255c: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x2a255cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2a2560: 0x640700a0  daddiu      $a3, $zero, 0xA0
    ctx->pc = 0x2a2560u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)160);
    // 0x2a2564: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x2a2564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x2a2568: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a2568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a256c: 0xa485ebf0  sh          $a1, -0x1410($a0)
    ctx->pc = 0x2a256cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294962160), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a2570: 0x692025  or          $a0, $v1, $t1
    ctx->pc = 0x2a2570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x2a2574: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a2574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a2578: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a257c: 0xa464ece0  sh          $a0, -0x1320($v1)
    ctx->pc = 0x2a257cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294962400), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a2580: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2584: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a2588: 0x9468ed60  lhu         $t0, -0x12A0($v1)
    ctx->pc = 0x2a2588u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962528)));
    // 0x2a258c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a258cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2590: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x2a2590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a2594: 0x9466eb80  lhu         $a2, -0x1480($v1)
    ctx->pc = 0x2a2594u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962048)));
    // 0x2a2598: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2a2598u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2a259c: 0xa488ed60  sh          $t0, -0x12A0($a0)
    ctx->pc = 0x2a259cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294962528), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a25a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a25a4: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x2a25a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2a25a8: 0x9463ec00  lhu         $v1, -0x1400($v1)
    ctx->pc = 0x2a25a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962176)));
    // 0x2a25ac: 0x873025  or          $a2, $a0, $a3
    ctx->pc = 0x2a25acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x2a25b0: 0xa4a6eb80  sh          $a2, -0x1480($a1)
    ctx->pc = 0x2a25b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294962048), (uint16_t)GPR_U32(ctx, 6));
    // 0x2a25b4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a25b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a25b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a25b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a25bc: 0x672825  or          $a1, $v1, $a3
    ctx->pc = 0x2a25bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2a25c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a25c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a25c4: 0xa485ec00  sh          $a1, -0x1400($a0)
    ctx->pc = 0x2a25c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294962176), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a25c8: 0x9466ecf0  lhu         $a2, -0x1310($v1)
    ctx->pc = 0x2a25c8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962416)));
    // 0x2a25cc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a25ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a25d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a25d4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2a25d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2a25d8: 0x9465ed70  lhu         $a1, -0x1290($v1)
    ctx->pc = 0x2a25d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962544)));
    // 0x2a25dc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2a25dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2a25e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a25e4: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x2a25e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a25e8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2a25e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2a25ec: 0xa485ecf0  sh          $a1, -0x1310($a0)
    ctx->pc = 0x2a25ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294962416), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a25f0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2A25F0u;
    {
        const bool branch_taken_0x2a25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A25F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A25F0u;
            // 0x2a25f4: 0xa462ed70  sh          $v0, -0x1290($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294962544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25f0) {
            ctx->pc = 0x2A26C8u;
            goto label_2a26c8;
        }
    }
    ctx->pc = 0x2A25F8u;
label_2a25f8:
    // 0x2a25f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a25fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2600: 0x9447eb70  lhu         $a3, -0x1490($v0)
    ctx->pc = 0x2a2600u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x2a2604: 0x300801ff  andi        $t0, $zero, 0x1FF
    ctx->pc = 0x2a2604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)511);
    // 0x2a2608: 0x9466ebf0  lhu         $a2, -0x1410($v1)
    ctx->pc = 0x2a2608u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962160)));
    // 0x2a260c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a260cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a2610: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a2614: 0x64090046  daddiu      $t1, $zero, 0x46
    ctx->pc = 0x2a2614u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)70);
    // 0x2a2618: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x2a2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x2a261c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x2a261cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2a2620: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2624: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2a2624u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2a2628: 0x9463ece0  lhu         $v1, -0x1320($v1)
    ctx->pc = 0x2a2628u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962400)));
    // 0x2a262c: 0xa4a7eb70  sh          $a3, -0x1490($a1)
    ctx->pc = 0x2a262cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294962032), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a2630: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x2a2630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2a2634: 0x6407008c  daddiu      $a3, $zero, 0x8C
    ctx->pc = 0x2a2634u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)140);
    // 0x2a2638: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x2a2638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x2a263c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a263cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2640: 0xa485ebf0  sh          $a1, -0x1410($a0)
    ctx->pc = 0x2a2640u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294962160), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a2644: 0x692025  or          $a0, $v1, $t1
    ctx->pc = 0x2a2644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x2a2648: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a2648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a264c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a264cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2650: 0xa464ece0  sh          $a0, -0x1320($v1)
    ctx->pc = 0x2a2650u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294962400), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a2654: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2658: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a265c: 0x9468ed60  lhu         $t0, -0x12A0($v1)
    ctx->pc = 0x2a265cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962528)));
    // 0x2a2660: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2664: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x2a2664u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a2668: 0x9466eb80  lhu         $a2, -0x1480($v1)
    ctx->pc = 0x2a2668u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962048)));
    // 0x2a266c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2a266cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2a2670: 0xa488ed60  sh          $t0, -0x12A0($a0)
    ctx->pc = 0x2a2670u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294962528), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a2674: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2678: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x2a2678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2a267c: 0x9463ec00  lhu         $v1, -0x1400($v1)
    ctx->pc = 0x2a267cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962176)));
    // 0x2a2680: 0x873025  or          $a2, $a0, $a3
    ctx->pc = 0x2a2680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x2a2684: 0xa4a6eb80  sh          $a2, -0x1480($a1)
    ctx->pc = 0x2a2684u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294962048), (uint16_t)GPR_U32(ctx, 6));
    // 0x2a2688: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a268c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a268cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2690: 0x672825  or          $a1, $v1, $a3
    ctx->pc = 0x2a2690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2a2694: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2698: 0xa485ec00  sh          $a1, -0x1400($a0)
    ctx->pc = 0x2a2698u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294962176), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a269c: 0x9466ecf0  lhu         $a2, -0x1310($v1)
    ctx->pc = 0x2a269cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962416)));
    // 0x2a26a0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a26a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a26a8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2a26a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2a26ac: 0x9465ed70  lhu         $a1, -0x1290($v1)
    ctx->pc = 0x2a26acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962544)));
    // 0x2a26b0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2a26b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2a26b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a26b8: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x2a26b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a26bc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2a26bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2a26c0: 0xa485ecf0  sh          $a1, -0x1310($a0)
    ctx->pc = 0x2a26c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294962416), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a26c4: 0xa462ed70  sh          $v0, -0x1290($v1)
    ctx->pc = 0x2a26c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294962544), (uint16_t)GPR_U32(ctx, 2));
label_2a26c8:
    // 0x2a26c8: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x2a26c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2a26cc: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x2A26CCu;
    {
        const bool branch_taken_0x2a26cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a26cc) {
            ctx->pc = 0x2A26D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A26CCu;
            // 0x2a26d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2830u;
            goto label_2a2830;
        }
    }
    ctx->pc = 0x2A26D4u;
    // 0x2a26d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a26d8: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2a26d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x2a26dc: 0x9447eb28  lhu         $a3, -0x14D8($v0)
    ctx->pc = 0x2a26dcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961960)));
    // 0x2a26e0: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x2a26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2a26e4: 0x34282000  ori         $t0, $at, 0x2000
    ctx->pc = 0x2a26e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
    // 0x2a26e8: 0x64090138  daddiu      $t1, $zero, 0x138
    ctx->pc = 0x2a26e8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)312);
    // 0x2a26ec: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a26ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a26f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a26f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a26f8: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2a26f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2a26fc: 0x9446eb50  lhu         $a2, -0x14B0($v0)
    ctx->pc = 0x2a26fcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962000)));
    // 0x2a2700: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x2a2700u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x2a2704: 0xa4a7eb28  sh          $a3, -0x14D8($a1)
    ctx->pc = 0x2a2704u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294961960), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a2708: 0x240affe7  addiu       $t2, $zero, -0x19
    ctx->pc = 0x2a2708u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2a270c: 0x3c01001b  lui         $at, 0x1B
    ctx->pc = 0x2a270cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)27 << 16));
    // 0x2a2710: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x2a2710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2a2714: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a2714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a2718: 0x8c46eb28  lw          $a2, -0x14D8($v0)
    ctx->pc = 0x2a2718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961960)));
    // 0x2a271c: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x2a271cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x2a2720: 0xa485eb50  sh          $a1, -0x14B0($a0)
    ctx->pc = 0x2a2720u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294962000), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a2724: 0x64090080  daddiu      $t1, $zero, 0x80
    ctx->pc = 0x2a2724u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x2a2728: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a272c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a272cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a2730: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x2a2730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x2a2734: 0x34420fff  ori         $v0, $v0, 0xFFF
    ctx->pc = 0x2a2734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4095);
    // 0x2a2738: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2a2738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2a273c: 0xc83825  or          $a3, $a2, $t0
    ctx->pc = 0x2a273cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2a2740: 0x8c86eb50  lw          $a2, -0x14B0($a0)
    ctx->pc = 0x2a2740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962000)));
    // 0x2a2744: 0xaca7eb28  sw          $a3, -0x14D8($a1)
    ctx->pc = 0x2a2744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961960), GPR_U32(ctx, 7));
    // 0x2a2748: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a2748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a274c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a274cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a2750: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2a2750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2a2754: 0x9484eb2a  lhu         $a0, -0x14D6($a0)
    ctx->pc = 0x2a2754u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294961962)));
    // 0x2a2758: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x2a2758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2a275c: 0xaca6eb50  sw          $a2, -0x14B0($a1)
    ctx->pc = 0x2a275cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294962000), GPR_U32(ctx, 6));
    // 0x2a2760: 0x2408f87f  addiu       $t0, $zero, -0x781
    ctx->pc = 0x2a2760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965375));
    // 0x2a2764: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a2764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a2768: 0x883024  and         $a2, $a0, $t0
    ctx->pc = 0x2a2768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x2a276c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a276cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a2770: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x2a2770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x2a2774: 0x9487eb52  lhu         $a3, -0x14AE($a0)
    ctx->pc = 0x2a2774u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294962002)));
    // 0x2a2778: 0xa4a6eb2a  sh          $a2, -0x14D6($a1)
    ctx->pc = 0x2a2778u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294961962), (uint16_t)GPR_U32(ctx, 6));
    // 0x2a277c: 0x30060003  andi        $a2, $zero, 0x3
    ctx->pc = 0x2a277cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x2a2780: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a2780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a2784: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a2788: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x2a2788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x2a278c: 0x9084eb2b  lbu         $a0, -0x14D5($a0)
    ctx->pc = 0x2a278cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961963)));
    // 0x2a2790: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x2a2790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x2a2794: 0xa4a7eb52  sh          $a3, -0x14AE($a1)
    ctx->pc = 0x2a2794u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294962002), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a2798: 0x658c0  sll         $t3, $a2, 3
    ctx->pc = 0x2a2798u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2a279c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a279cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a27a0: 0x640804ff  daddiu      $t0, $zero, 0x4FF
    ctx->pc = 0x2a27a0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1279);
    // 0x2a27a4: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x2a27a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x2a27a8: 0x8b3025  or          $a2, $a0, $t3
    ctx->pc = 0x2a27a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x2a27ac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a27acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a27b0: 0xa0a6eb2b  sb          $a2, -0x14D5($a1)
    ctx->pc = 0x2a27b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294961963), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a27b4: 0x9089eb53  lbu         $t1, -0x14AD($a0)
    ctx->pc = 0x2a27b4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294962003)));
    // 0x2a27b8: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x2a27b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x2a27bc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2a27bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2a27c0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a27c4: 0x12a4824  and         $t1, $t1, $t2
    ctx->pc = 0x2a27c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x2a27c8: 0x9487eb2c  lhu         $a3, -0x14D4($a0)
    ctx->pc = 0x2a27c8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294961964)));
    // 0x2a27cc: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x2a27ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x2a27d0: 0xa0c9eb53  sb          $t1, -0x14AD($a2)
    ctx->pc = 0x2a27d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294962003), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a27d4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a27d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a27d8: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2a27d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2a27dc: 0x9484eb54  lhu         $a0, -0x14AC($a0)
    ctx->pc = 0x2a27dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294962004)));
    // 0x2a27e0: 0xe83025  or          $a2, $a3, $t0
    ctx->pc = 0x2a27e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2a27e4: 0xa4a6eb2c  sh          $a2, -0x14D4($a1)
    ctx->pc = 0x2a27e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294961964), (uint16_t)GPR_U32(ctx, 6));
    // 0x2a27e8: 0x3427f000  ori         $a3, $at, 0xF000
    ctx->pc = 0x2a27e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61440);
    // 0x2a27ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2a27ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a27f0: 0x682025  or          $a0, $v1, $t0
    ctx->pc = 0x2a27f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2a27f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a27f8: 0xa464eb54  sh          $a0, -0x14AC($v1)
    ctx->pc = 0x2a27f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294962004), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a27fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a27fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2800: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a2804: 0x8c66eb2c  lw          $a2, -0x14D4($v1)
    ctx->pc = 0x2a2804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961964)));
    // 0x2a2808: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a280c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2a280cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2a2810: 0x8c65eb54  lw          $a1, -0x14AC($v1)
    ctx->pc = 0x2a2810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962004)));
    // 0x2a2814: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2a2814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a2818: 0xac86eb2c  sw          $a2, -0x14D4($a0)
    ctx->pc = 0x2a2818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961964), GPR_U32(ctx, 6));
    // 0x2a281c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2a281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2a2820: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a2824: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2a2824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2a2828: 0xac62eb54  sw          $v0, -0x14AC($v1)
    ctx->pc = 0x2a2828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962004), GPR_U32(ctx, 2));
    // 0x2a282c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a282cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2830:
    // 0x2a2830: 0xc040bda  jal         func_102F68
    ctx->pc = 0x2A2830u;
    SET_GPR_U32(ctx, 31, 0x2A2838u);
    ctx->pc = 0x102F68u;
    if (runtime->hasFunction(0x102F68u)) {
        auto targetFn = runtime->lookupFunction(0x102F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2838u; }
        if (ctx->pc != 0x2A2838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102F68_0x102f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2838u; }
        if (ctx->pc != 0x2A2838u) { return; }
    }
    ctx->pc = 0x2A2838u;
label_2a2838:
    // 0x2a2838: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2a2838u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a283c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2a283cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2a2840: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x2a2840u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a284c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a284cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2850: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2850u;
            // 0x2a2854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2858u;
    // 0x2a2858: 0x0  nop
    ctx->pc = 0x2a2858u;
    // NOP
    // 0x2a285c: 0x0  nop
    ctx->pc = 0x2a285cu;
    // NOP
}
