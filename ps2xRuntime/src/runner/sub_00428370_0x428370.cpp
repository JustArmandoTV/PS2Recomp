#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00428370
// Address: 0x428370 - 0x428860
void sub_00428370_0x428370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428370_0x428370");
#endif

    switch (ctx->pc) {
        case 0x42841cu: goto label_42841c;
        case 0x428464u: goto label_428464;
        case 0x428484u: goto label_428484;
        case 0x4284b4u: goto label_4284b4;
        case 0x4284d4u: goto label_4284d4;
        case 0x4284e0u: goto label_4284e0;
        case 0x4284f8u: goto label_4284f8;
        case 0x428504u: goto label_428504;
        case 0x428524u: goto label_428524;
        case 0x428530u: goto label_428530;
        case 0x4285d0u: goto label_4285d0;
        case 0x4285ecu: goto label_4285ec;
        case 0x4285fcu: goto label_4285fc;
        case 0x428608u: goto label_428608;
        case 0x428638u: goto label_428638;
        case 0x428674u: goto label_428674;
        case 0x428684u: goto label_428684;
        case 0x428690u: goto label_428690;
        case 0x4286a8u: goto label_4286a8;
        case 0x4286b4u: goto label_4286b4;
        case 0x4286d4u: goto label_4286d4;
        case 0x4286e0u: goto label_4286e0;
        case 0x428768u: goto label_428768;
        case 0x42877cu: goto label_42877c;
        case 0x428790u: goto label_428790;
        default: break;
    }

    ctx->pc = 0x428370u;

    // 0x428370: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x428370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x428374: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x428374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x428378: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x428378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x42837c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x42837cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x428380: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x428380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x428384: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x428384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
    // 0x428388: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x428388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x42838c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x42838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x428390: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x428390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x428394: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x428394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x428398: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x428398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x42839c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x42839cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4283a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4283a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4283a4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4283a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4283a8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4283a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4283ac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4283acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4283b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4283b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4283b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4283b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4283b8: 0x8c860170  lw          $a2, 0x170($a0)
    ctx->pc = 0x4283b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x4283bc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4283bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x4283c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4283c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4283c4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x4283c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4283c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4283c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4283cc: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x4283ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4283d0: 0xc4790018  lwc1        $f25, 0x18($v1)
    ctx->pc = 0x4283d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4283d4: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x4283d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
    // 0x4283d8: 0x5464000c  bnel        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x4283D8u;
    {
        const bool branch_taken_0x4283d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4283d8) {
            ctx->pc = 0x4283DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4283D8u;
            // 0x4283dc: 0x961100a2  lhu         $s1, 0xA2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42840Cu;
            goto label_42840c;
        }
    }
    ctx->pc = 0x4283E0u;
    // 0x4283e0: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x4283e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4283e4: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x4283e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4283e8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4283E8u;
    {
        const bool branch_taken_0x4283e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4283e8) {
            ctx->pc = 0x428408u;
            goto label_428408;
        }
    }
    ctx->pc = 0x4283F0u;
    // 0x4283f0: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x4283f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x4283f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x4283F4u;
    {
        const bool branch_taken_0x4283f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4283f4) {
            ctx->pc = 0x428408u;
            goto label_428408;
        }
    }
    ctx->pc = 0x4283FCu;
    // 0x4283fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4283fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x428400: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x428400u;
    {
        const bool branch_taken_0x428400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428400u;
            // 0x428404: 0xae030160  sw          $v1, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428400) {
            ctx->pc = 0x428818u;
            goto label_428818;
        }
    }
    ctx->pc = 0x428408u;
label_428408:
    // 0x428408: 0x961100a2  lhu         $s1, 0xA2($s0)
    ctx->pc = 0x428408u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
label_42840c:
    // 0x42840c: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x42840cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x428410: 0x264502d0  addiu       $a1, $s2, 0x2D0
    ctx->pc = 0x428410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
    // 0x428414: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x428414u;
    SET_GPR_U32(ctx, 31, 0x42841Cu);
    ctx->pc = 0x428418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428414u;
            // 0x428418: 0x26130050  addiu       $s3, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42841Cu; }
        if (ctx->pc != 0x42841Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42841Cu; }
        if (ctx->pc != 0x42841Cu) { return; }
    }
    ctx->pc = 0x42841Cu;
label_42841c:
    // 0x42841c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x42841cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x428420: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x428420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x428424: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x428424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x428428: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x428428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x42842c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x42842cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x428430: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x428430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x428434: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x428434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x428438: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x428438u;
    {
        const bool branch_taken_0x428438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x42843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428438u;
            // 0x42843c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x428438) {
            ctx->pc = 0x428478u;
            goto label_428478;
        }
    }
    ctx->pc = 0x428440u;
    // 0x428440: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x428440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x428444: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x428444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x428448: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x428448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x42844c: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x42844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
    // 0x428450: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x428450u;
    {
        const bool branch_taken_0x428450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x428450) {
            ctx->pc = 0x428454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x428450u;
            // 0x428454: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42847Cu;
            goto label_42847c;
        }
    }
    ctx->pc = 0x428458u;
    // 0x428458: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x428458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x42845c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x42845Cu;
    SET_GPR_U32(ctx, 31, 0x428464u);
    ctx->pc = 0x428460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42845Cu;
            // 0x428460: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428464u; }
        if (ctx->pc != 0x428464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428464u; }
        if (ctx->pc != 0x428464u) { return; }
    }
    ctx->pc = 0x428464u;
label_428464:
    // 0x428464: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x428464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x428468: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x428468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x42846c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x42846cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x428470: 0x0  nop
    ctx->pc = 0x428470u;
    // NOP
    // 0x428474: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x428474u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_428478:
    // 0x428478: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x428478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42847c:
    // 0x42847c: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x42847Cu;
    SET_GPR_U32(ctx, 31, 0x428484u);
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428484u; }
        if (ctx->pc != 0x428484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428484u; }
        if (ctx->pc != 0x428484u) { return; }
    }
    ctx->pc = 0x428484u;
label_428484:
    // 0x428484: 0x96630050  lhu         $v1, 0x50($s3)
    ctx->pc = 0x428484u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x428488: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x428488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x42848c: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x42848Cu;
    {
        const bool branch_taken_0x42848c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x42848c) {
            ctx->pc = 0x428490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42848Cu;
            // 0x428490: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4284D8u;
            goto label_4284d8;
        }
    }
    ctx->pc = 0x428494u;
    // 0x428494: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x428494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x428498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x428498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42849c: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x42849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x4284a0: 0xc6740044  lwc1        $f20, 0x44($s3)
    ctx->pc = 0x4284a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4284a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4284a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4284a8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x4284a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4284ac: 0xc0b89e4  jal         func_2E2790
    ctx->pc = 0x4284ACu;
    SET_GPR_U32(ctx, 31, 0x4284B4u);
    ctx->pc = 0x4284B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4284ACu;
            // 0x4284b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4284B4u; }
        if (ctx->pc != 0x4284B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4284B4u; }
        if (ctx->pc != 0x4284B4u) { return; }
    }
    ctx->pc = 0x4284B4u;
label_4284b4:
    // 0x4284b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4284b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4284b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4284b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4284bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4284bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4284c0: 0x0  nop
    ctx->pc = 0x4284c0u;
    // NOP
    // 0x4284c4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4284c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x4284c8: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x4284c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4284cc: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x4284CCu;
    SET_GPR_U32(ctx, 31, 0x4284D4u);
    ctx->pc = 0x4284D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4284CCu;
            // 0x4284d0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4284D4u; }
        if (ctx->pc != 0x4284D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4284D4u; }
        if (ctx->pc != 0x4284D4u) { return; }
    }
    ctx->pc = 0x4284D4u;
label_4284d4:
    // 0x4284d4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4284d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4284d8:
    // 0x4284d8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4284D8u;
    SET_GPR_U32(ctx, 31, 0x4284E0u);
    ctx->pc = 0x4284DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4284D8u;
            // 0x4284dc: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4284E0u; }
        if (ctx->pc != 0x4284E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4284E0u; }
        if (ctx->pc != 0x4284E0u) { return; }
    }
    ctx->pc = 0x4284E0u;
label_4284e0:
    // 0x4284e0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4284e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x4284e4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4284e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x4284e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4284e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4284ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4284ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4284f0: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x4284F0u;
    SET_GPR_U32(ctx, 31, 0x4284F8u);
    ctx->pc = 0x4284F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4284F0u;
            // 0x4284f4: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4284F8u; }
        if (ctx->pc != 0x4284F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4284F8u; }
        if (ctx->pc != 0x4284F8u) { return; }
    }
    ctx->pc = 0x4284F8u;
label_4284f8:
    // 0x4284f8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4284f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4284fc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4284FCu;
    SET_GPR_U32(ctx, 31, 0x428504u);
    ctx->pc = 0x428500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4284FCu;
            // 0x428500: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428504u; }
        if (ctx->pc != 0x428504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428504u; }
        if (ctx->pc != 0x428504u) { return; }
    }
    ctx->pc = 0x428504u;
label_428504:
    // 0x428504: 0x96620052  lhu         $v0, 0x52($s3)
    ctx->pc = 0x428504u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
    // 0x428508: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x428508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x42850c: 0x50620039  beql        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x42850Cu;
    {
        const bool branch_taken_0x42850c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x42850c) {
            ctx->pc = 0x428510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42850Cu;
            // 0x428510: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4285F4u;
            goto label_4285f4;
        }
    }
    ctx->pc = 0x428514u;
    // 0x428514: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x428514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x428518: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x428518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42851c: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x42851Cu;
    SET_GPR_U32(ctx, 31, 0x428524u);
    ctx->pc = 0x428520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42851Cu;
            // 0x428520: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428524u; }
        if (ctx->pc != 0x428524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428524u; }
        if (ctx->pc != 0x428524u) { return; }
    }
    ctx->pc = 0x428524u;
label_428524:
    // 0x428524: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x428524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x428528: 0xc04cc44  jal         func_133110
    ctx->pc = 0x428528u;
    SET_GPR_U32(ctx, 31, 0x428530u);
    ctx->pc = 0x42852Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428528u;
            // 0x42852c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428530u; }
        if (ctx->pc != 0x428530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428530u; }
        if (ctx->pc != 0x428530u) { return; }
    }
    ctx->pc = 0x428530u;
label_428530:
    // 0x428530: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x428530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x428534: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x428534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x428538: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x428538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42853c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x42853cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x428540: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x428540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428544: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x428544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x428548: 0xc7a400fc  lwc1        $f4, 0xFC($sp)
    ctx->pc = 0x428548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x42854c: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x42854cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x428550: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x428550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x428554: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x428554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x428558: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x428558u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x42855c: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x42855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x428560: 0xc443ca50  lwc1        $f3, -0x35B0($v0)
    ctx->pc = 0x428560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x428564: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x428564u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x428568: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x428568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x42856c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x42856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x428570: 0xc442ca54  lwc1        $f2, -0x35AC($v0)
    ctx->pc = 0x428570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x428574: 0xe7a40124  swc1        $f4, 0x124($sp)
    ctx->pc = 0x428574u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x428578: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x428578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x42857c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x42857cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x428580: 0xc441ca58  lwc1        $f1, -0x35A8($v0)
    ctx->pc = 0x428580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x428584: 0xe7a40128  swc1        $f4, 0x128($sp)
    ctx->pc = 0x428584u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x428588: 0xc664000c  lwc1        $f4, 0xC($s3)
    ctx->pc = 0x428588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x42858c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x42858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x428590: 0xc440ca5c  lwc1        $f0, -0x35A4($v0)
    ctx->pc = 0x428590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428594: 0xe7a4012c  swc1        $f4, 0x12C($sp)
    ctx->pc = 0x428594u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x428598: 0xc6640010  lwc1        $f4, 0x10($s3)
    ctx->pc = 0x428598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x42859c: 0xe7a40130  swc1        $f4, 0x130($sp)
    ctx->pc = 0x42859cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x4285a0: 0xc6640014  lwc1        $f4, 0x14($s3)
    ctx->pc = 0x4285a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4285a4: 0xe7a40134  swc1        $f4, 0x134($sp)
    ctx->pc = 0x4285a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x4285a8: 0xc6640018  lwc1        $f4, 0x18($s3)
    ctx->pc = 0x4285a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4285ac: 0xe7a40138  swc1        $f4, 0x138($sp)
    ctx->pc = 0x4285acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x4285b0: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x4285b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x4285b4: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x4285b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x4285b8: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x4285b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x4285bc: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x4285bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x4285c0: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x4285c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x4285c4: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x4285c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x4285c8: 0xc04c994  jal         func_132650
    ctx->pc = 0x4285C8u;
    SET_GPR_U32(ctx, 31, 0x4285D0u);
    ctx->pc = 0x4285CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4285C8u;
            // 0x4285cc: 0xe7a0014c  swc1        $f0, 0x14C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4285D0u; }
        if (ctx->pc != 0x4285D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4285D0u; }
        if (ctx->pc != 0x4285D0u) { return; }
    }
    ctx->pc = 0x4285D0u;
label_4285d0:
    // 0x4285d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4285d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x4285d4: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x4285d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x4285d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4285d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4285dc: 0x26050130  addiu       $a1, $s0, 0x130
    ctx->pc = 0x4285dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x4285e0: 0x46190302  mul.s       $f12, $f0, $f25
    ctx->pc = 0x4285e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x4285e4: 0xc0c6250  jal         func_318940
    ctx->pc = 0x4285E4u;
    SET_GPR_U32(ctx, 31, 0x4285ECu);
    ctx->pc = 0x4285E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4285E4u;
            // 0x4285e8: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4285ECu; }
        if (ctx->pc != 0x4285ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4285ECu; }
        if (ctx->pc != 0x4285ECu) { return; }
    }
    ctx->pc = 0x4285ECu;
label_4285ec:
    // 0x4285ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4285ECu;
    {
        const bool branch_taken_0x4285ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4285F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4285ECu;
            // 0x4285f0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4285ec) {
            ctx->pc = 0x428600u;
            goto label_428600;
        }
    }
    ctx->pc = 0x4285F4u;
label_4285f4:
    // 0x4285f4: 0xc0c6278  jal         func_3189E0
    ctx->pc = 0x4285F4u;
    SET_GPR_U32(ctx, 31, 0x4285FCu);
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4285FCu; }
        if (ctx->pc != 0x4285FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4285FCu; }
        if (ctx->pc != 0x4285FCu) { return; }
    }
    ctx->pc = 0x4285FCu;
label_4285fc:
    // 0x4285fc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4285fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_428600:
    // 0x428600: 0xc04c720  jal         func_131C80
    ctx->pc = 0x428600u;
    SET_GPR_U32(ctx, 31, 0x428608u);
    ctx->pc = 0x428604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428600u;
            // 0x428604: 0x26050130  addiu       $a1, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428608u; }
        if (ctx->pc != 0x428608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428608u; }
        if (ctx->pc != 0x428608u) { return; }
    }
    ctx->pc = 0x428608u;
label_428608:
    // 0x428608: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x428608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42860c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x42860cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428610: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x428610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x428614: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x428614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x428618: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x428618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x42861c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x42861Cu;
    {
        const bool branch_taken_0x42861c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x428620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42861Cu;
            // 0x428620: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42861c) {
            ctx->pc = 0x428628u;
            goto label_428628;
        }
    }
    ctx->pc = 0x428624u;
    // 0x428624: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x428624u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_428628:
    // 0x428628: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x428628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x42862c: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x42862cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x428630: 0xc04a508  jal         func_129420
    ctx->pc = 0x428630u;
    SET_GPR_U32(ctx, 31, 0x428638u);
    ctx->pc = 0x428634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428630u;
            // 0x428634: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428638u; }
        if (ctx->pc != 0x428638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428638u; }
        if (ctx->pc != 0x428638u) { return; }
    }
    ctx->pc = 0x428638u;
label_428638:
    // 0x428638: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x428638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x42863c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x42863cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428640: 0xc458ca50  lwc1        $f24, -0x35B0($v0)
    ctx->pc = 0x428640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x428644: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x428644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428648: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x428648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42864c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x42864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x428650: 0xc457ca54  lwc1        $f23, -0x35AC($v0)
    ctx->pc = 0x428650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x428654: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x428654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x428658: 0xc456ca58  lwc1        $f22, -0x35A8($v0)
    ctx->pc = 0x428658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x42865c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x42865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x428660: 0xc455ca5c  lwc1        $f21, -0x35A4($v0)
    ctx->pc = 0x428660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x428664: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x428664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x428668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x428668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x42866c: 0x0  nop
    ctx->pc = 0x42866cu;
    // NOP
    // 0x428670: 0x46190502  mul.s       $f20, $f0, $f25
    ctx->pc = 0x428670u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_428674:
    // 0x428674: 0x3c02c1b0  lui         $v0, 0xC1B0
    ctx->pc = 0x428674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49584 << 16));
    // 0x428678: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x428678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x42867c: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x42867Cu;
    SET_GPR_U32(ctx, 31, 0x428684u);
    ctx->pc = 0x428680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42867Cu;
            // 0x428680: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428684u; }
        if (ctx->pc != 0x428684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428684u; }
        if (ctx->pc != 0x428684u) { return; }
    }
    ctx->pc = 0x428684u;
label_428684:
    // 0x428684: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x428684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x428688: 0xc04cc04  jal         func_133010
    ctx->pc = 0x428688u;
    SET_GPR_U32(ctx, 31, 0x428690u);
    ctx->pc = 0x42868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428688u;
            // 0x42868c: 0x260501b0  addiu       $a1, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428690u; }
        if (ctx->pc != 0x428690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428690u; }
        if (ctx->pc != 0x428690u) { return; }
    }
    ctx->pc = 0x428690u;
label_428690:
    // 0x428690: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x428690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x428694: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x428694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x428698: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x428698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x42869c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x42869cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4286a0: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x4286A0u;
    SET_GPR_U32(ctx, 31, 0x4286A8u);
    ctx->pc = 0x4286A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4286A0u;
            // 0x4286a4: 0x26060180  addiu       $a2, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4286A8u; }
        if (ctx->pc != 0x4286A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4286A8u; }
        if (ctx->pc != 0x4286A8u) { return; }
    }
    ctx->pc = 0x4286A8u;
label_4286a8:
    // 0x4286a8: 0x266401e0  addiu       $a0, $s3, 0x1E0
    ctx->pc = 0x4286a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
    // 0x4286ac: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4286ACu;
    SET_GPR_U32(ctx, 31, 0x4286B4u);
    ctx->pc = 0x4286B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4286ACu;
            // 0x4286b0: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4286B4u; }
        if (ctx->pc != 0x4286B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4286B4u; }
        if (ctx->pc != 0x4286B4u) { return; }
    }
    ctx->pc = 0x4286B4u;
label_4286b4:
    // 0x4286b4: 0x8e430420  lw          $v1, 0x420($s2)
    ctx->pc = 0x4286b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1056)));
    // 0x4286b8: 0x960201d2  lhu         $v0, 0x1D2($s0)
    ctx->pc = 0x4286b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 466)));
    // 0x4286bc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4286BCu;
    {
        const bool branch_taken_0x4286bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4286bc) {
            ctx->pc = 0x428788u;
            goto label_428788;
        }
    }
    ctx->pc = 0x4286C4u;
    // 0x4286c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4286c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4286c8: 0x26050180  addiu       $a1, $s0, 0x180
    ctx->pc = 0x4286c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x4286cc: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x4286CCu;
    SET_GPR_U32(ctx, 31, 0x4286D4u);
    ctx->pc = 0x4286D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4286CCu;
            // 0x4286d0: 0x26060190  addiu       $a2, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4286D4u; }
        if (ctx->pc != 0x4286D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4286D4u; }
        if (ctx->pc != 0x4286D4u) { return; }
    }
    ctx->pc = 0x4286D4u;
label_4286d4:
    // 0x4286d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4286d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4286d8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x4286D8u;
    SET_GPR_U32(ctx, 31, 0x4286E0u);
    ctx->pc = 0x4286DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4286D8u;
            // 0x4286dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4286E0u; }
        if (ctx->pc != 0x4286E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4286E0u; }
        if (ctx->pc != 0x4286E0u) { return; }
    }
    ctx->pc = 0x4286E0u;
label_4286e0:
    // 0x4286e0: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x4286e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4286e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4286e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4286e8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x4286e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4286ec: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x4286ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4286f0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x4286f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4286f4: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x4286f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x4286f8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x4286f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x4286fc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x4286fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x428700: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x428700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428704: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x428704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x428708: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x428708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42870c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x42870cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x428710: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x428710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428714: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x428714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x428718: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x428718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42871c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x42871cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x428720: 0xc600018c  lwc1        $f0, 0x18C($s0)
    ctx->pc = 0x428720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428724: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x428724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x428728: 0xc6000190  lwc1        $f0, 0x190($s0)
    ctx->pc = 0x428728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42872c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x42872cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x428730: 0xc6000194  lwc1        $f0, 0x194($s0)
    ctx->pc = 0x428730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428734: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x428734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x428738: 0xc6000198  lwc1        $f0, 0x198($s0)
    ctx->pc = 0x428738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42873c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x42873cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x428740: 0xc600019c  lwc1        $f0, 0x19C($s0)
    ctx->pc = 0x428740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428744: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x428744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x428748: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x428748u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x42874c: 0xe7b700e4  swc1        $f23, 0xE4($sp)
    ctx->pc = 0x42874cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x428750: 0xe7b600e8  swc1        $f22, 0xE8($sp)
    ctx->pc = 0x428750u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x428754: 0xe7b500ec  swc1        $f21, 0xEC($sp)
    ctx->pc = 0x428754u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x428758: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x428758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x42875c: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x42875cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x428760: 0xc04c994  jal         func_132650
    ctx->pc = 0x428760u;
    SET_GPR_U32(ctx, 31, 0x428768u);
    ctx->pc = 0x428764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428760u;
            // 0x428764: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428768u; }
        if (ctx->pc != 0x428768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428768u; }
        if (ctx->pc != 0x428768u) { return; }
    }
    ctx->pc = 0x428768u;
label_428768:
    // 0x428768: 0x26240270  addiu       $a0, $s1, 0x270
    ctx->pc = 0x428768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    // 0x42876c: 0x26250290  addiu       $a1, $s1, 0x290
    ctx->pc = 0x42876cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x428770: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x428770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x428774: 0xc0c6250  jal         func_318940
    ctx->pc = 0x428774u;
    SET_GPR_U32(ctx, 31, 0x42877Cu);
    ctx->pc = 0x428778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428774u;
            // 0x428778: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42877Cu; }
        if (ctx->pc != 0x42877Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42877Cu; }
        if (ctx->pc != 0x42877Cu) { return; }
    }
    ctx->pc = 0x42877Cu;
label_42877c:
    // 0x42877c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x42877Cu;
    {
        const bool branch_taken_0x42877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42877c) {
            ctx->pc = 0x428790u;
            goto label_428790;
        }
    }
    ctx->pc = 0x428784u;
    // 0x428784: 0x0  nop
    ctx->pc = 0x428784u;
    // NOP
label_428788:
    // 0x428788: 0xc0c6278  jal         func_3189E0
    ctx->pc = 0x428788u;
    SET_GPR_U32(ctx, 31, 0x428790u);
    ctx->pc = 0x42878Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428788u;
            // 0x42878c: 0x26240270  addiu       $a0, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428790u; }
        if (ctx->pc != 0x428790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428790u; }
        if (ctx->pc != 0x428790u) { return; }
    }
    ctx->pc = 0x428790u;
label_428790:
    // 0x428790: 0x960301d2  lhu         $v1, 0x1D2($s0)
    ctx->pc = 0x428790u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 466)));
    // 0x428794: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x428794u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x428798: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x428798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x42879c: 0x263100b0  addiu       $s1, $s1, 0xB0
    ctx->pc = 0x42879cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x4287a0: 0xae430420  sw          $v1, 0x420($s2)
    ctx->pc = 0x4287a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 3));
    // 0x4287a4: 0x2b4182a  slt         $v1, $s5, $s4
    ctx->pc = 0x4287a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x4287a8: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x4287A8u;
    {
        const bool branch_taken_0x4287a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4287ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4287A8u;
            // 0x4287ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4287a8) {
            ctx->pc = 0x428674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_428674;
        }
    }
    ctx->pc = 0x4287B0u;
    // 0x4287b0: 0xc6000168  lwc1        $f0, 0x168($s0)
    ctx->pc = 0x4287b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4287b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4287b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4287b8: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x4287b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x4287bc: 0xe6000168  swc1        $f0, 0x168($s0)
    ctx->pc = 0x4287bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    // 0x4287c0: 0x8c636ec8  lw          $v1, 0x6EC8($v1)
    ctx->pc = 0x4287c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28360)));
    // 0x4287c4: 0xc6000168  lwc1        $f0, 0x168($s0)
    ctx->pc = 0x4287c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4287c8: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x4287c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x4287cc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4287ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4287d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4287d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4287d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4287D4u;
    {
        const bool branch_taken_0x4287d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4287D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4287D4u;
            // 0x4287d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4287d4) {
            ctx->pc = 0x4287E0u;
            goto label_4287e0;
        }
    }
    ctx->pc = 0x4287DCu;
    // 0x4287dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4287dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4287e0:
    // 0x4287e0: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4287E0u;
    {
        const bool branch_taken_0x4287e0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x4287e0) {
            ctx->pc = 0x4287E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4287E0u;
            // 0x4287e4: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4287F4u;
            goto label_4287f4;
        }
    }
    ctx->pc = 0x4287E8u;
    // 0x4287e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4287e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4287ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4287ECu;
    {
        const bool branch_taken_0x4287ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4287F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4287ECu;
            // 0x4287f0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4287ec) {
            ctx->pc = 0x42880Cu;
            goto label_42880c;
        }
    }
    ctx->pc = 0x4287F4u;
label_4287f4:
    // 0x4287f4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4287f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4287f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4287f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4287fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4287fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x428800: 0x0  nop
    ctx->pc = 0x428800u;
    // NOP
    // 0x428804: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x428804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x428808: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x428808u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_42880c:
    // 0x42880c: 0xc6000168  lwc1        $f0, 0x168($s0)
    ctx->pc = 0x42880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428810: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x428810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x428814: 0xe6000168  swc1        $f0, 0x168($s0)
    ctx->pc = 0x428814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
label_428818:
    // 0x428818: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x428818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x42881c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x42881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x428820: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x428820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x428824: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x428824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x428828: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x428828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x42882c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x42882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x428830: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x428830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x428834: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x428834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x428838: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x428838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42883c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x42883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x428840: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x428840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x428844: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x428844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x428848: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x428848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42884c: 0x3e00008  jr          $ra
    ctx->pc = 0x42884Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42884Cu;
            // 0x428850: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428854u;
    // 0x428854: 0x0  nop
    ctx->pc = 0x428854u;
    // NOP
    // 0x428858: 0x0  nop
    ctx->pc = 0x428858u;
    // NOP
    // 0x42885c: 0x0  nop
    ctx->pc = 0x42885cu;
    // NOP
}
