#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00145450
// Address: 0x145450 - 0x145870
void sub_00145450_0x145450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145450_0x145450");
#endif

    switch (ctx->pc) {
        case 0x1454ccu: goto label_1454cc;
        case 0x1454f0u: goto label_1454f0;
        case 0x145668u: goto label_145668;
        case 0x145674u: goto label_145674;
        case 0x14567cu: goto label_14567c;
        case 0x1456a0u: goto label_1456a0;
        case 0x1456b8u: goto label_1456b8;
        case 0x1456dcu: goto label_1456dc;
        case 0x1456ecu: goto label_1456ec;
        case 0x1456fcu: goto label_1456fc;
        case 0x145708u: goto label_145708;
        case 0x14571cu: goto label_14571c;
        case 0x145738u: goto label_145738;
        case 0x145754u: goto label_145754;
        case 0x145778u: goto label_145778;
        case 0x145784u: goto label_145784;
        case 0x1457a8u: goto label_1457a8;
        case 0x1457b8u: goto label_1457b8;
        case 0x1457c8u: goto label_1457c8;
        case 0x1457d4u: goto label_1457d4;
        case 0x14580cu: goto label_14580c;
        case 0x145828u: goto label_145828;
        case 0x145834u: goto label_145834;
        default: break;
    }

    ctx->pc = 0x145450u;

label_145450:
    // 0x145450: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x145450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x145454: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x145454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x145458: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x145458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14545c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x145460: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x145460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x145464: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x145464u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145468: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x145468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14546c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x145470: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x145470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x145474: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x145474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145478: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x145478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14547c: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x14547cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x145480: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x145480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x145484: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x145484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x145488: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14548c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x14548cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x145490: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x145490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x145494: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x145494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x145498: 0x8f8382e4  lw          $v1, -0x7D1C($gp)
    ctx->pc = 0x145498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x14549c: 0x3445e000  ori         $a1, $v0, 0xE000
    ctx->pc = 0x14549cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x1454a0: 0x669821  addu        $s3, $v1, $a2
    ctx->pc = 0x1454a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1454a4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1454a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1454a8: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1454a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1454ac: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1454ACu;
    {
        const bool branch_taken_0x1454ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1454B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1454ACu;
            // 0x1454b0: 0xafa400d0  sw          $a0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454ac) {
            ctx->pc = 0x1454F8u;
            goto label_1454f8;
        }
    }
    ctx->pc = 0x1454B4u;
    // 0x1454b4: 0x86650006  lh          $a1, 0x6($s3)
    ctx->pc = 0x1454b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1454b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1454b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1454bc: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1454BCu;
    {
        const bool branch_taken_0x1454bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1454bc) {
            ctx->pc = 0x1454C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1454BCu;
            // 0x1454c0: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1454D0u;
            goto label_1454d0;
        }
    }
    ctx->pc = 0x1454C4u;
    // 0x1454c4: 0xc051514  jal         func_145450
    ctx->pc = 0x1454C4u;
    SET_GPR_U32(ctx, 31, 0x1454CCu);
    ctx->pc = 0x145450u;
    goto label_145450;
    ctx->pc = 0x1454CCu;
label_1454cc:
    // 0x1454cc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1454ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1454d0:
    // 0x1454d0: 0xc78c82ec  lwc1        $f12, -0x7D14($gp)
    ctx->pc = 0x1454d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1454d4: 0x8f8682e0  lw          $a2, -0x7D20($gp)
    ctx->pc = 0x1454d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x1454d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1454d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1454dc: 0x8f8982e8  lw          $t1, -0x7D18($gp)
    ctx->pc = 0x1454dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x1454e0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1454e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1454e4: 0x8f8a82d0  lw          $t2, -0x7D30($gp)
    ctx->pc = 0x1454e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x1454e8: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x1454E8u;
    SET_GPR_U32(ctx, 31, 0x1454F0u);
    ctx->pc = 0x1454ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1454E8u;
            // 0x1454ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454F0u; }
        if (ctx->pc != 0x1454F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454F0u; }
        if (ctx->pc != 0x1454F0u) { return; }
    }
    ctx->pc = 0x1454F0u;
label_1454f0:
    // 0x1454f0: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x1454F0u;
    {
        const bool branch_taken_0x1454f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1454F0u;
            // 0x1454f4: 0xaf8282d0  sw          $v0, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454f0) {
            ctx->pc = 0x145834u;
            goto label_145834;
        }
    }
    ctx->pc = 0x1454F8u;
label_1454f8:
    // 0x1454f8: 0x30c42000  andi        $a0, $a2, 0x2000
    ctx->pc = 0x1454f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x1454fc: 0x50800021  beql        $a0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1454FCu;
    {
        const bool branch_taken_0x1454fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1454fc) {
            ctx->pc = 0x145500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1454FCu;
            // 0x145500: 0x30c44000  andi        $a0, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x145584u;
            goto label_145584;
        }
    }
    ctx->pc = 0x145504u;
    // 0x145504: 0x86670006  lh          $a3, 0x6($s3)
    ctx->pc = 0x145504u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x145508: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x145508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14550c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x14550cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x145510: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x145510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145514: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x145514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x145518: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x145518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x14551c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14551cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x145520: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x145520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x145524: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x145524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145528: 0x30a44000  andi        $a0, $a1, 0x4000
    ctx->pc = 0x145528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x14552c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14552Cu;
    {
        const bool branch_taken_0x14552c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x145530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14552Cu;
            // 0x145530: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14552c) {
            ctx->pc = 0x14554Cu;
            goto label_14554c;
        }
    }
    ctx->pc = 0x145534u;
    // 0x145534: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x145534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x145538: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x145538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14553c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x14553cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145540: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x145540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145544: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x145544u;
    {
        const bool branch_taken_0x145544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145544u;
            // 0x145548: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145544) {
            ctx->pc = 0x14565Cu;
            goto label_14565c;
        }
    }
    ctx->pc = 0x14554Cu;
label_14554c:
    // 0x14554c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x14554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x145550: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x145550u;
    {
        const bool branch_taken_0x145550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145550) {
            ctx->pc = 0x145554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145550u;
            // 0x145554: 0x8f8582e0  lw          $a1, -0x7D20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145660u;
            goto label_145660;
        }
    }
    ctx->pc = 0x145558u;
    // 0x145558: 0x84d10006  lh          $s1, 0x6($a2)
    ctx->pc = 0x145558u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x14555c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x14555cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145560: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x145560u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145564: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x145564u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145568: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x145568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x14556c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x145570: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x145570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x145574: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x145574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145578: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x145578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x14557c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x14557Cu;
    {
        const bool branch_taken_0x14557c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14557Cu;
            // 0x145580: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14557c) {
            ctx->pc = 0x14565Cu;
            goto label_14565c;
        }
    }
    ctx->pc = 0x145584u;
label_145584:
    // 0x145584: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x145584u;
    {
        const bool branch_taken_0x145584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x145584) {
            ctx->pc = 0x145588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145584u;
            // 0x145588: 0x30c48000  andi        $a0, $a2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1455C0u;
            goto label_1455c0;
        }
    }
    ctx->pc = 0x14558Cu;
    // 0x14558c: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x14558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x145590: 0x86700008  lh          $s0, 0x8($s3)
    ctx->pc = 0x145590u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x145594: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x145594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x145598: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x145598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14559c: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x14559cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1455a0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1455a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1455a4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1455a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455a8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1455a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1455ac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1455acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1455b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1455b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1455b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1455b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1455b8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1455B8u;
    {
        const bool branch_taken_0x1455b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1455BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1455B8u;
            // 0x1455bc: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455b8) {
            ctx->pc = 0x14565Cu;
            goto label_14565c;
        }
    }
    ctx->pc = 0x1455C0u;
label_1455c0:
    // 0x1455c0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1455C0u;
    {
        const bool branch_taken_0x1455c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1455c0) {
            ctx->pc = 0x1455C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1455C0u;
            // 0x1455c4: 0xc21024  and         $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145610u;
            goto label_145610;
        }
    }
    ctx->pc = 0x1455C8u;
    // 0x1455c8: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1455cc: 0x867e0008  lh          $fp, 0x8($s3)
    ctx->pc = 0x1455ccu;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1455d0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1455d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1455d4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1455d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455d8: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x1455d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1455dc: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1455dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1455e0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1455e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455e4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1455e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1455e8: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1455ec: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1455ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1455f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1455f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1455f4: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1455f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1455f8: 0x86d00008  lh          $s0, 0x8($s6)
    ctx->pc = 0x1455f8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1455fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1455fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x145600: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x145600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x145604: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x145604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x145608: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x145608u;
    {
        const bool branch_taken_0x145608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145608u;
            // 0x14560c: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145608) {
            ctx->pc = 0x14565Cu;
            goto label_14565c;
        }
    }
    ctx->pc = 0x145610u;
label_145610:
    // 0x145610: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x145610u;
    {
        const bool branch_taken_0x145610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145610) {
            ctx->pc = 0x14565Cu;
            goto label_14565c;
        }
    }
    ctx->pc = 0x145618u;
    // 0x145618: 0x86700008  lh          $s0, 0x8($s3)
    ctx->pc = 0x145618u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14561c: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x14561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x145620: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x145620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x145624: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x145624u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145628: 0x86710006  lh          $s1, 0x6($s3)
    ctx->pc = 0x145628u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x14562c: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x14562cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145630: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x145630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x145634: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x145634u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145638: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x145638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14563c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x14563cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x145640: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x145640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x145644: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x145644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x145648: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x145648u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14564c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14564cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x145650: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x145650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145654: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x145654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x145658: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x145658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_14565c:
    // 0x14565c: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x14565cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
label_145660:
    // 0x145660: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x145660u;
    SET_GPR_U32(ctx, 31, 0x145668u);
    ctx->pc = 0x145664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145660u;
            // 0x145664: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145668u; }
        if (ctx->pc != 0x145668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145668u; }
        if (ctx->pc != 0x145668u) { return; }
    }
    ctx->pc = 0x145668u;
label_145668:
    // 0x145668: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x145668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14566c: 0xc051514  jal         func_145450
    ctx->pc = 0x14566Cu;
    SET_GPR_U32(ctx, 31, 0x145674u);
    ctx->pc = 0x145670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14566Cu;
            // 0x145670: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145450u;
    goto label_145450;
    ctx->pc = 0x145674u;
label_145674:
    // 0x145674: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x145674u;
    SET_GPR_U32(ctx, 31, 0x14567Cu);
    ctx->pc = 0x145678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145674u;
            // 0x145678: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14567Cu; }
        if (ctx->pc != 0x14567Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14567Cu; }
        if (ctx->pc != 0x14567Cu) { return; }
    }
    ctx->pc = 0x14567Cu;
label_14567c:
    // 0x14567c: 0x8f8982e8  lw          $t1, -0x7D18($gp)
    ctx->pc = 0x14567cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x145680: 0xc78c82ec  lwc1        $f12, -0x7D14($gp)
    ctx->pc = 0x145680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145684: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x145684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x145688: 0x8f8a82d0  lw          $t2, -0x7D30($gp)
    ctx->pc = 0x145688u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x14568c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14568cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145694: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x145694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145698: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x145698u;
    SET_GPR_U32(ctx, 31, 0x1456A0u);
    ctx->pc = 0x14569Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145698u;
            // 0x14569c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456A0u; }
        if (ctx->pc != 0x1456A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456A0u; }
        if (ctx->pc != 0x1456A0u) { return; }
    }
    ctx->pc = 0x1456A0u;
label_1456a0:
    // 0x1456a0: 0xaf8282d0  sw          $v0, -0x7D30($gp)
    ctx->pc = 0x1456a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 2));
    // 0x1456a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1456a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1456a8: 0x16e20025  bne         $s7, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1456A8u;
    {
        const bool branch_taken_0x1456a8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1456ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1456A8u;
            // 0x1456ac: 0xc6540084  lwc1        $f20, 0x84($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1456a8) {
            ctx->pc = 0x145740u;
            goto label_145740;
        }
    }
    ctx->pc = 0x1456B0u;
    // 0x1456b0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x1456B0u;
    SET_GPR_U32(ctx, 31, 0x1456B8u);
    ctx->pc = 0x1456B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1456B0u;
            // 0x1456b4: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456B8u; }
        if (ctx->pc != 0x1456B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456B8u; }
        if (ctx->pc != 0x1456B8u) { return; }
    }
    ctx->pc = 0x1456B8u;
label_1456b8:
    // 0x1456b8: 0x8f8982e8  lw          $t1, -0x7D18($gp)
    ctx->pc = 0x1456b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x1456bc: 0xc78c82ec  lwc1        $f12, -0x7D14($gp)
    ctx->pc = 0x1456bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1456c0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1456c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1456c4: 0x8f8a82d0  lw          $t2, -0x7D30($gp)
    ctx->pc = 0x1456c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x1456c8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1456c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1456ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1456d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456d4: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x1456D4u;
    SET_GPR_U32(ctx, 31, 0x1456DCu);
    ctx->pc = 0x1456D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1456D4u;
            // 0x1456d8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456DCu; }
        if (ctx->pc != 0x1456DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456DCu; }
        if (ctx->pc != 0x1456DCu) { return; }
    }
    ctx->pc = 0x1456DCu;
label_1456dc:
    // 0x1456dc: 0xaf8282d0  sw          $v0, -0x7D30($gp)
    ctx->pc = 0x1456dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 2));
    // 0x1456e0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1456e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1456e4: 0xc04cce4  jal         func_133390
    ctx->pc = 0x1456E4u;
    SET_GPR_U32(ctx, 31, 0x1456ECu);
    ctx->pc = 0x1456E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1456E4u;
            // 0x1456e8: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456ECu; }
        if (ctx->pc != 0x1456ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456ECu; }
        if (ctx->pc != 0x1456ECu) { return; }
    }
    ctx->pc = 0x1456ECu;
label_1456ec:
    // 0x1456ec: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x1456ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x1456f0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1456f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1456f4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1456F4u;
    SET_GPR_U32(ctx, 31, 0x1456FCu);
    ctx->pc = 0x1456F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1456F4u;
            // 0x1456f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456FCu; }
        if (ctx->pc != 0x1456FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456FCu; }
        if (ctx->pc != 0x1456FCu) { return; }
    }
    ctx->pc = 0x1456FCu;
label_1456fc:
    // 0x1456fc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1456fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x145700: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x145700u;
    SET_GPR_U32(ctx, 31, 0x145708u);
    ctx->pc = 0x145704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145700u;
            // 0x145704: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145708u; }
        if (ctx->pc != 0x145708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145708u; }
        if (ctx->pc != 0x145708u) { return; }
    }
    ctx->pc = 0x145708u;
label_145708:
    // 0x145708: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x145708u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14570c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x14570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x145710: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x145710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x145714: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x145714u;
    SET_GPR_U32(ctx, 31, 0x14571Cu);
    ctx->pc = 0x145718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145714u;
            // 0x145718: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (runtime->hasFunction(0x14ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x14ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14571Cu; }
        if (ctx->pc != 0x14571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ABD0_0x14abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14571Cu; }
        if (ctx->pc != 0x14571Cu) { return; }
    }
    ctx->pc = 0x14571Cu;
label_14571c:
    // 0x14571c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x145720: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x145720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x145724: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x145724u;
    {
        const bool branch_taken_0x145724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145724) {
            ctx->pc = 0x145728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145724u;
            // 0x145728: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14582Cu;
            goto label_14582c;
        }
    }
    ctx->pc = 0x14572Cu;
    // 0x14572c: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x14572cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x145730: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x145730u;
    SET_GPR_U32(ctx, 31, 0x145738u);
    ctx->pc = 0x145734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145730u;
            // 0x145734: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145738u; }
        if (ctx->pc != 0x145738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145738u; }
        if (ctx->pc != 0x145738u) { return; }
    }
    ctx->pc = 0x145738u;
label_145738:
    // 0x145738: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x145738u;
    {
        const bool branch_taken_0x145738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145738) {
            ctx->pc = 0x145828u;
            goto label_145828;
        }
    }
    ctx->pc = 0x145740u;
label_145740:
    // 0x145740: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x145740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145744: 0x16e20038  bne         $s7, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x145744u;
    {
        const bool branch_taken_0x145744 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x145744) {
            ctx->pc = 0x145828u;
            goto label_145828;
        }
    }
    ctx->pc = 0x14574Cu;
    // 0x14574c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x14574Cu;
    SET_GPR_U32(ctx, 31, 0x145754u);
    ctx->pc = 0x145750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14574Cu;
            // 0x145750: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145754u; }
        if (ctx->pc != 0x145754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145754u; }
        if (ctx->pc != 0x145754u) { return; }
    }
    ctx->pc = 0x145754u;
label_145754:
    // 0x145754: 0x8f8982e8  lw          $t1, -0x7D18($gp)
    ctx->pc = 0x145754u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x145758: 0xc78c82ec  lwc1        $f12, -0x7D14($gp)
    ctx->pc = 0x145758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14575c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x145760: 0x8f8a82d0  lw          $t2, -0x7D30($gp)
    ctx->pc = 0x145760u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x145764: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x145764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14576c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14576cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145770: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x145770u;
    SET_GPR_U32(ctx, 31, 0x145778u);
    ctx->pc = 0x145774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145770u;
            // 0x145774: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145778u; }
        if (ctx->pc != 0x145778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145778u; }
        if (ctx->pc != 0x145778u) { return; }
    }
    ctx->pc = 0x145778u;
label_145778:
    // 0x145778: 0xaf8282d0  sw          $v0, -0x7D30($gp)
    ctx->pc = 0x145778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 2));
    // 0x14577c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x14577Cu;
    SET_GPR_U32(ctx, 31, 0x145784u);
    ctx->pc = 0x145780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14577Cu;
            // 0x145780: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145784u; }
        if (ctx->pc != 0x145784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145784u; }
        if (ctx->pc != 0x145784u) { return; }
    }
    ctx->pc = 0x145784u;
label_145784:
    // 0x145784: 0x8f8982e8  lw          $t1, -0x7D18($gp)
    ctx->pc = 0x145784u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x145788: 0xc78c82ec  lwc1        $f12, -0x7D14($gp)
    ctx->pc = 0x145788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14578c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x14578cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x145790: 0x8f8a82d0  lw          $t2, -0x7D30($gp)
    ctx->pc = 0x145790u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x145794: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x145794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14579c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14579cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457a0: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x1457A0u;
    SET_GPR_U32(ctx, 31, 0x1457A8u);
    ctx->pc = 0x1457A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457A0u;
            // 0x1457a4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457A8u; }
        if (ctx->pc != 0x1457A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457A8u; }
        if (ctx->pc != 0x1457A8u) { return; }
    }
    ctx->pc = 0x1457A8u;
label_1457a8:
    // 0x1457a8: 0xaf8282d0  sw          $v0, -0x7D30($gp)
    ctx->pc = 0x1457a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 2));
    // 0x1457ac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1457acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1457b0: 0xc04cce4  jal         func_133390
    ctx->pc = 0x1457B0u;
    SET_GPR_U32(ctx, 31, 0x1457B8u);
    ctx->pc = 0x1457B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457B0u;
            // 0x1457b4: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457B8u; }
        if (ctx->pc != 0x1457B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457B8u; }
        if (ctx->pc != 0x1457B8u) { return; }
    }
    ctx->pc = 0x1457B8u;
label_1457b8:
    // 0x1457b8: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x1457b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x1457bc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1457bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1457c0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1457C0u;
    SET_GPR_U32(ctx, 31, 0x1457C8u);
    ctx->pc = 0x1457C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457C0u;
            // 0x1457c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457C8u; }
        if (ctx->pc != 0x1457C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457C8u; }
        if (ctx->pc != 0x1457C8u) { return; }
    }
    ctx->pc = 0x1457C8u;
label_1457c8:
    // 0x1457c8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1457c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1457cc: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x1457CCu;
    SET_GPR_U32(ctx, 31, 0x1457D4u);
    ctx->pc = 0x1457D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457CCu;
            // 0x1457d0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457D4u; }
        if (ctx->pc != 0x1457D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457D4u; }
        if (ctx->pc != 0x1457D4u) { return; }
    }
    ctx->pc = 0x1457D4u;
label_1457d4:
    // 0x1457d4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1457d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1457d8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1457d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1457dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1457dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1457e0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1457E0u;
    {
        const bool branch_taken_0x1457e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1457e0) {
            ctx->pc = 0x1457E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1457E0u;
            // 0x1457e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1457ECu;
            goto label_1457ec;
        }
    }
    ctx->pc = 0x1457E8u;
    // 0x1457e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1457e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1457ec:
    // 0x1457ec: 0xc6cd0084  lwc1        $f13, 0x84($s6)
    ctx->pc = 0x1457ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1457f0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1457f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1457f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1457f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1457f8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1457f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1457fc: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x1457fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x145800: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x145800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x145804: 0xc052b4c  jal         func_14AD30
    ctx->pc = 0x145804u;
    SET_GPR_U32(ctx, 31, 0x14580Cu);
    ctx->pc = 0x145808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145804u;
            // 0x145808: 0x27a80170  addiu       $t0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD30u;
    if (runtime->hasFunction(0x14AD30u)) {
        auto targetFn = runtime->lookupFunction(0x14AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14580Cu; }
        if (ctx->pc != 0x14580Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD30_0x14ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14580Cu; }
        if (ctx->pc != 0x14580Cu) { return; }
    }
    ctx->pc = 0x14580Cu;
label_14580c:
    // 0x14580c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x145810: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x145810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x145814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145814u;
    {
        const bool branch_taken_0x145814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145814) {
            ctx->pc = 0x145828u;
            goto label_145828;
        }
    }
    ctx->pc = 0x14581Cu;
    // 0x14581c: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x14581cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x145820: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x145820u;
    SET_GPR_U32(ctx, 31, 0x145828u);
    ctx->pc = 0x145824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145820u;
            // 0x145824: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145828u; }
        if (ctx->pc != 0x145828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145828u; }
        if (ctx->pc != 0x145828u) { return; }
    }
    ctx->pc = 0x145828u;
label_145828:
    // 0x145828: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x145828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_14582c:
    // 0x14582c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x14582Cu;
    SET_GPR_U32(ctx, 31, 0x145834u);
    ctx->pc = 0x145830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14582Cu;
            // 0x145830: 0x8fa500c0  lw          $a1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145834u; }
        if (ctx->pc != 0x145834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145834u; }
        if (ctx->pc != 0x145834u) { return; }
    }
    ctx->pc = 0x145834u;
label_145834:
    // 0x145834: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x145834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x145838: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x145838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14583c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x14583cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x145840: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x145840u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x145844: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x145844u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x145848: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x145848u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14584c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14584cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145850: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x145850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145854: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x145854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145858: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x145858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14585c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14585cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145860: 0x3e00008  jr          $ra
    ctx->pc = 0x145860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145860u;
            // 0x145864: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145868u;
    // 0x145868: 0x0  nop
    ctx->pc = 0x145868u;
    // NOP
    // 0x14586c: 0x0  nop
    ctx->pc = 0x14586cu;
    // NOP
}
