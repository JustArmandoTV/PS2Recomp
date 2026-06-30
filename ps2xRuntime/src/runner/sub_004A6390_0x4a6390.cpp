#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A6390
// Address: 0x4a6390 - 0x4a6580
void sub_004A6390_0x4a6390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6390_0x4a6390");
#endif

    switch (ctx->pc) {
        case 0x4a6390u: goto label_4a6390;
        case 0x4a6394u: goto label_4a6394;
        case 0x4a6398u: goto label_4a6398;
        case 0x4a639cu: goto label_4a639c;
        case 0x4a63a0u: goto label_4a63a0;
        case 0x4a63a4u: goto label_4a63a4;
        case 0x4a63a8u: goto label_4a63a8;
        case 0x4a63acu: goto label_4a63ac;
        case 0x4a63b0u: goto label_4a63b0;
        case 0x4a63b4u: goto label_4a63b4;
        case 0x4a63b8u: goto label_4a63b8;
        case 0x4a63bcu: goto label_4a63bc;
        case 0x4a63c0u: goto label_4a63c0;
        case 0x4a63c4u: goto label_4a63c4;
        case 0x4a63c8u: goto label_4a63c8;
        case 0x4a63ccu: goto label_4a63cc;
        case 0x4a63d0u: goto label_4a63d0;
        case 0x4a63d4u: goto label_4a63d4;
        case 0x4a63d8u: goto label_4a63d8;
        case 0x4a63dcu: goto label_4a63dc;
        case 0x4a63e0u: goto label_4a63e0;
        case 0x4a63e4u: goto label_4a63e4;
        case 0x4a63e8u: goto label_4a63e8;
        case 0x4a63ecu: goto label_4a63ec;
        case 0x4a63f0u: goto label_4a63f0;
        case 0x4a63f4u: goto label_4a63f4;
        case 0x4a63f8u: goto label_4a63f8;
        case 0x4a63fcu: goto label_4a63fc;
        case 0x4a6400u: goto label_4a6400;
        case 0x4a6404u: goto label_4a6404;
        case 0x4a6408u: goto label_4a6408;
        case 0x4a640cu: goto label_4a640c;
        case 0x4a6410u: goto label_4a6410;
        case 0x4a6414u: goto label_4a6414;
        case 0x4a6418u: goto label_4a6418;
        case 0x4a641cu: goto label_4a641c;
        case 0x4a6420u: goto label_4a6420;
        case 0x4a6424u: goto label_4a6424;
        case 0x4a6428u: goto label_4a6428;
        case 0x4a642cu: goto label_4a642c;
        case 0x4a6430u: goto label_4a6430;
        case 0x4a6434u: goto label_4a6434;
        case 0x4a6438u: goto label_4a6438;
        case 0x4a643cu: goto label_4a643c;
        case 0x4a6440u: goto label_4a6440;
        case 0x4a6444u: goto label_4a6444;
        case 0x4a6448u: goto label_4a6448;
        case 0x4a644cu: goto label_4a644c;
        case 0x4a6450u: goto label_4a6450;
        case 0x4a6454u: goto label_4a6454;
        case 0x4a6458u: goto label_4a6458;
        case 0x4a645cu: goto label_4a645c;
        case 0x4a6460u: goto label_4a6460;
        case 0x4a6464u: goto label_4a6464;
        case 0x4a6468u: goto label_4a6468;
        case 0x4a646cu: goto label_4a646c;
        case 0x4a6470u: goto label_4a6470;
        case 0x4a6474u: goto label_4a6474;
        case 0x4a6478u: goto label_4a6478;
        case 0x4a647cu: goto label_4a647c;
        case 0x4a6480u: goto label_4a6480;
        case 0x4a6484u: goto label_4a6484;
        case 0x4a6488u: goto label_4a6488;
        case 0x4a648cu: goto label_4a648c;
        case 0x4a6490u: goto label_4a6490;
        case 0x4a6494u: goto label_4a6494;
        case 0x4a6498u: goto label_4a6498;
        case 0x4a649cu: goto label_4a649c;
        case 0x4a64a0u: goto label_4a64a0;
        case 0x4a64a4u: goto label_4a64a4;
        case 0x4a64a8u: goto label_4a64a8;
        case 0x4a64acu: goto label_4a64ac;
        case 0x4a64b0u: goto label_4a64b0;
        case 0x4a64b4u: goto label_4a64b4;
        case 0x4a64b8u: goto label_4a64b8;
        case 0x4a64bcu: goto label_4a64bc;
        case 0x4a64c0u: goto label_4a64c0;
        case 0x4a64c4u: goto label_4a64c4;
        case 0x4a64c8u: goto label_4a64c8;
        case 0x4a64ccu: goto label_4a64cc;
        case 0x4a64d0u: goto label_4a64d0;
        case 0x4a64d4u: goto label_4a64d4;
        case 0x4a64d8u: goto label_4a64d8;
        case 0x4a64dcu: goto label_4a64dc;
        case 0x4a64e0u: goto label_4a64e0;
        case 0x4a64e4u: goto label_4a64e4;
        case 0x4a64e8u: goto label_4a64e8;
        case 0x4a64ecu: goto label_4a64ec;
        case 0x4a64f0u: goto label_4a64f0;
        case 0x4a64f4u: goto label_4a64f4;
        case 0x4a64f8u: goto label_4a64f8;
        case 0x4a64fcu: goto label_4a64fc;
        case 0x4a6500u: goto label_4a6500;
        case 0x4a6504u: goto label_4a6504;
        case 0x4a6508u: goto label_4a6508;
        case 0x4a650cu: goto label_4a650c;
        case 0x4a6510u: goto label_4a6510;
        case 0x4a6514u: goto label_4a6514;
        case 0x4a6518u: goto label_4a6518;
        case 0x4a651cu: goto label_4a651c;
        case 0x4a6520u: goto label_4a6520;
        case 0x4a6524u: goto label_4a6524;
        case 0x4a6528u: goto label_4a6528;
        case 0x4a652cu: goto label_4a652c;
        case 0x4a6530u: goto label_4a6530;
        case 0x4a6534u: goto label_4a6534;
        case 0x4a6538u: goto label_4a6538;
        case 0x4a653cu: goto label_4a653c;
        case 0x4a6540u: goto label_4a6540;
        case 0x4a6544u: goto label_4a6544;
        case 0x4a6548u: goto label_4a6548;
        case 0x4a654cu: goto label_4a654c;
        case 0x4a6550u: goto label_4a6550;
        case 0x4a6554u: goto label_4a6554;
        case 0x4a6558u: goto label_4a6558;
        case 0x4a655cu: goto label_4a655c;
        case 0x4a6560u: goto label_4a6560;
        case 0x4a6564u: goto label_4a6564;
        case 0x4a6568u: goto label_4a6568;
        case 0x4a656cu: goto label_4a656c;
        case 0x4a6570u: goto label_4a6570;
        case 0x4a6574u: goto label_4a6574;
        case 0x4a6578u: goto label_4a6578;
        case 0x4a657cu: goto label_4a657c;
        default: break;
    }

    ctx->pc = 0x4a6390u;

label_4a6390:
    // 0x4a6390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a6390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a6394:
    // 0x4a6394: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x4a6394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_4a6398:
    // 0x4a6398: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a6398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a639c:
    // 0x4a639c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a639cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a63a0:
    // 0x4a63a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a63a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a63a4:
    // 0x4a63a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a63a8:
    // 0x4a63a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a63a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a63ac:
    // 0x4a63ac: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x4a63acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_4a63b0:
    // 0x4a63b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a63b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a63b4:
    // 0x4a63b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a63b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a63b8:
    // 0x4a63b8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4a63b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4a63bc:
    // 0x4a63bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a63bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a63c0:
    // 0x4a63c0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4a63c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4a63c4:
    // 0x4a63c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a63c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a63c8:
    // 0x4a63c8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a63c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a63cc:
    // 0x4a63cc: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x4a63ccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_4a63d0:
    // 0x4a63d0: 0x46170540  add.s       $f21, $f0, $f23
    ctx->pc = 0x4a63d0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a63d4:
    // 0x4a63d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a63d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a63d8:
    // 0x4a63d8: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x4a63d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a63dc:
    // 0x4a63dc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x4a63dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_4a63e0:
    // 0x4a63e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a63e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a63e4:
    // 0x4a63e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a63e8:
    // 0x4a63e8: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a63ec:
    // 0x4a63ec: 0xc0506ac  jal         func_141AB0
label_4a63f0:
    if (ctx->pc == 0x4A63F0u) {
        ctx->pc = 0x4A63F0u;
            // 0x4a63f0: 0x46160500  add.s       $f20, $f0, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x4A63F4u;
        goto label_4a63f4;
    }
    ctx->pc = 0x4A63ECu;
    SET_GPR_U32(ctx, 31, 0x4A63F4u);
    ctx->pc = 0x4A63F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A63ECu;
            // 0x4a63f0: 0x46160500  add.s       $f20, $f0, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A63F4u; }
        if (ctx->pc != 0x4A63F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A63F4u; }
        if (ctx->pc != 0x4A63F4u) { return; }
    }
    ctx->pc = 0x4A63F4u;
label_4a63f4:
    // 0x4a63f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a63f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a63f8:
    // 0x4a63f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a63f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a63fc:
    // 0x4a63fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a63fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a6400:
    // 0x4a6400: 0x320f809  jalr        $t9
label_4a6404:
    if (ctx->pc == 0x4A6404u) {
        ctx->pc = 0x4A6404u;
            // 0x4a6404: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A6408u;
        goto label_4a6408;
    }
    ctx->pc = 0x4A6400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6408u);
        ctx->pc = 0x4A6404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6400u;
            // 0x4a6404: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6408u; }
            if (ctx->pc != 0x4A6408u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6408u;
label_4a6408:
    // 0x4a6408: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a6408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a640c:
    // 0x4a640c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6410:
    // 0x4a6410: 0x24a54f40  addiu       $a1, $a1, 0x4F40
    ctx->pc = 0x4a6410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20288));
label_4a6414:
    // 0x4a6414: 0x84444e78  lh          $a0, 0x4E78($v0)
    ctx->pc = 0x4a6414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20088)));
label_4a6418:
    // 0x4a6418: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4a6418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a641c:
    // 0x4a641c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x4a641cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_4a6420:
    // 0x4a6420: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4a6420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a6424:
    // 0x4a6424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6428:
    // 0x4a6428: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4a6428u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a642c:
    // 0x4a642c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a642cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6430:
    // 0x4a6430: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x4a6430u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a6434:
    // 0x4a6434: 0x84484e7a  lh          $t0, 0x4E7A($v0)
    ctx->pc = 0x4a6434u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20090)));
label_4a6438:
    // 0x4a6438: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a643c:
    // 0x4a643c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a6440:
    // 0x4a6440: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a6440u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6444:
    // 0x4a6444: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4a6444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a6448:
    // 0x4a6448: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x4a6448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a644c:
    // 0x4a644c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a6450:
    // 0x4a6450: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a6450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a6454:
    // 0x4a6454: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x4a6454u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_4a6458:
    // 0x4a6458: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4a6458u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4a645c:
    // 0x4a645c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a645cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a6460:
    // 0x4a6460: 0xc0bc284  jal         func_2F0A10
label_4a6464:
    if (ctx->pc == 0x4A6464u) {
        ctx->pc = 0x4A6464u;
            // 0x4a6464: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A6468u;
        goto label_4a6468;
    }
    ctx->pc = 0x4A6460u;
    SET_GPR_U32(ctx, 31, 0x4A6468u);
    ctx->pc = 0x4A6464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6460u;
            // 0x4a6464: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6468u; }
        if (ctx->pc != 0x4A6468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6468u; }
        if (ctx->pc != 0x4A6468u) { return; }
    }
    ctx->pc = 0x4A6468u;
label_4a6468:
    // 0x4a6468: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a646c:
    // 0x4a646c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a646cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a6470:
    // 0x4a6470: 0x320f809  jalr        $t9
label_4a6474:
    if (ctx->pc == 0x4A6474u) {
        ctx->pc = 0x4A6474u;
            // 0x4a6474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6478u;
        goto label_4a6478;
    }
    ctx->pc = 0x4A6470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6478u);
        ctx->pc = 0x4A6474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6470u;
            // 0x4a6474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6478u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6478u; }
            if (ctx->pc != 0x4A6478u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6478u;
label_4a6478:
    // 0x4a6478: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4a6478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4a647c:
    // 0x4a647c: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x4a647cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
label_4a6480:
    // 0x4a6480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6484:
    // 0x4a6484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a6484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6488:
    // 0x4a6488: 0x46170500  add.s       $f20, $f0, $f23
    ctx->pc = 0x4a6488u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a648c:
    // 0x4a648c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6490:
    // 0x4a6490: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4a6490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4a6494:
    // 0x4a6494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a6494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6498:
    // 0x4a6498: 0xc0506ac  jal         func_141AB0
label_4a649c:
    if (ctx->pc == 0x4A649Cu) {
        ctx->pc = 0x4A649Cu;
            // 0x4a649c: 0x46160540  add.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x4A64A0u;
        goto label_4a64a0;
    }
    ctx->pc = 0x4A6498u;
    SET_GPR_U32(ctx, 31, 0x4A64A0u);
    ctx->pc = 0x4A649Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6498u;
            // 0x4a649c: 0x46160540  add.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A64A0u; }
        if (ctx->pc != 0x4A64A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A64A0u; }
        if (ctx->pc != 0x4A64A0u) { return; }
    }
    ctx->pc = 0x4A64A0u;
label_4a64a0:
    // 0x4a64a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a64a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a64a4:
    // 0x4a64a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a64a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a64a8:
    // 0x4a64a8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a64a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a64ac:
    // 0x4a64ac: 0x320f809  jalr        $t9
label_4a64b0:
    if (ctx->pc == 0x4A64B0u) {
        ctx->pc = 0x4A64B0u;
            // 0x4a64b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A64B4u;
        goto label_4a64b4;
    }
    ctx->pc = 0x4A64ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A64B4u);
        ctx->pc = 0x4A64B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A64ACu;
            // 0x4a64b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A64B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A64B4u; }
            if (ctx->pc != 0x4A64B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4A64B4u;
label_4a64b4:
    // 0x4a64b4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4a64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4a64b8:
    // 0x4a64b8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4a64b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4a64bc:
    // 0x4a64bc: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x4a64bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_4a64c0:
    // 0x4a64c0: 0x24a5a220  addiu       $a1, $a1, -0x5DE0
    ctx->pc = 0x4a64c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943264));
label_4a64c4:
    // 0x4a64c4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4a64c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a64c8:
    // 0x4a64c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a64c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a64cc:
    // 0x4a64cc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4a64ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a64d0:
    // 0x4a64d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a64d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a64d4:
    // 0x4a64d4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4a64d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a64d8:
    // 0x4a64d8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4a64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4a64dc:
    // 0x4a64dc: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x4a64dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a64e0:
    // 0x4a64e0: 0x84432102  lh          $v1, 0x2102($v0)
    ctx->pc = 0x4a64e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_4a64e4:
    // 0x4a64e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a64e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a64e8:
    // 0x4a64e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a64ec:
    // 0x4a64ec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4a64ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a64f0:
    // 0x4a64f0: 0x0  nop
    ctx->pc = 0x4a64f0u;
    // NOP
label_4a64f4:
    // 0x4a64f4: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x4a64f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a64f8:
    // 0x4a64f8: 0x4601a380  add.s       $f14, $f20, $f1
    ctx->pc = 0x4a64f8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_4a64fc:
    // 0x4a64fc: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x4a64fcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4a6500:
    // 0x4a6500: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4a6500u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4a6504:
    // 0x4a6504: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a6504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a6508:
    // 0x4a6508: 0xc0bc284  jal         func_2F0A10
label_4a650c:
    if (ctx->pc == 0x4A650Cu) {
        ctx->pc = 0x4A650Cu;
            // 0x4a650c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4A6510u;
        goto label_4a6510;
    }
    ctx->pc = 0x4A6508u;
    SET_GPR_U32(ctx, 31, 0x4A6510u);
    ctx->pc = 0x4A650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6508u;
            // 0x4a650c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6510u; }
        if (ctx->pc != 0x4A6510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6510u; }
        if (ctx->pc != 0x4A6510u) { return; }
    }
    ctx->pc = 0x4A6510u;
label_4a6510:
    // 0x4a6510: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a6514:
    // 0x4a6514: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a6514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a6518:
    // 0x4a6518: 0x320f809  jalr        $t9
label_4a651c:
    if (ctx->pc == 0x4A651Cu) {
        ctx->pc = 0x4A651Cu;
            // 0x4a651c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6520u;
        goto label_4a6520;
    }
    ctx->pc = 0x4A6518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6520u);
        ctx->pc = 0x4A651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6518u;
            // 0x4a651c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6520u; }
            if (ctx->pc != 0x4A6520u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6520u;
label_4a6520:
    // 0x4a6520: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a6520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4a6524:
    // 0x4a6524: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a6524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a6528:
    // 0x4a6528: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4a6528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4a652c:
    // 0x4a652c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a652cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6530:
    // 0x4a6530: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4a6530u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4a6534:
    // 0x4a6534: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a6534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a6538:
    // 0x4a6538: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4a6538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4a653c:
    // 0x4a653c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4a653cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4a6540:
    // 0x4a6540: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a6540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4a6544:
    // 0x4a6544: 0xc15706c  jal         func_55C1B0
label_4a6548:
    if (ctx->pc == 0x4A6548u) {
        ctx->pc = 0x4A6548u;
            // 0x4a6548: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A654Cu;
        goto label_4a654c;
    }
    ctx->pc = 0x4A6544u;
    SET_GPR_U32(ctx, 31, 0x4A654Cu);
    ctx->pc = 0x4A6548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6544u;
            // 0x4a6548: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A654Cu; }
        if (ctx->pc != 0x4A654Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A654Cu; }
        if (ctx->pc != 0x4A654Cu) { return; }
    }
    ctx->pc = 0x4A654Cu;
label_4a654c:
    // 0x4a654c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a654cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6550:
    // 0x4a6550: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4a6550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4a6554:
    // 0x4a6554: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a6554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6558:
    // 0x4a6558: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4a6558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4a655c:
    // 0x4a655c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a655cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6560:
    // 0x4a6560: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a6560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a6564:
    // 0x4a6564: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a6564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6568:
    // 0x4a6568: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a656c:
    // 0x4a656c: 0x3e00008  jr          $ra
label_4a6570:
    if (ctx->pc == 0x4A6570u) {
        ctx->pc = 0x4A6570u;
            // 0x4a6570: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A6574u;
        goto label_4a6574;
    }
    ctx->pc = 0x4A656Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A656Cu;
            // 0x4a6570: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A6574u;
label_4a6574:
    // 0x4a6574: 0x0  nop
    ctx->pc = 0x4a6574u;
    // NOP
label_4a6578:
    // 0x4a6578: 0x0  nop
    ctx->pc = 0x4a6578u;
    // NOP
label_4a657c:
    // 0x4a657c: 0x0  nop
    ctx->pc = 0x4a657cu;
    // NOP
}
