#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FB800
// Address: 0x3fb800 - 0x3fbae0
void sub_003FB800_0x3fb800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB800_0x3fb800");
#endif

    switch (ctx->pc) {
        case 0x3fb800u: goto label_3fb800;
        case 0x3fb804u: goto label_3fb804;
        case 0x3fb808u: goto label_3fb808;
        case 0x3fb80cu: goto label_3fb80c;
        case 0x3fb810u: goto label_3fb810;
        case 0x3fb814u: goto label_3fb814;
        case 0x3fb818u: goto label_3fb818;
        case 0x3fb81cu: goto label_3fb81c;
        case 0x3fb820u: goto label_3fb820;
        case 0x3fb824u: goto label_3fb824;
        case 0x3fb828u: goto label_3fb828;
        case 0x3fb82cu: goto label_3fb82c;
        case 0x3fb830u: goto label_3fb830;
        case 0x3fb834u: goto label_3fb834;
        case 0x3fb838u: goto label_3fb838;
        case 0x3fb83cu: goto label_3fb83c;
        case 0x3fb840u: goto label_3fb840;
        case 0x3fb844u: goto label_3fb844;
        case 0x3fb848u: goto label_3fb848;
        case 0x3fb84cu: goto label_3fb84c;
        case 0x3fb850u: goto label_3fb850;
        case 0x3fb854u: goto label_3fb854;
        case 0x3fb858u: goto label_3fb858;
        case 0x3fb85cu: goto label_3fb85c;
        case 0x3fb860u: goto label_3fb860;
        case 0x3fb864u: goto label_3fb864;
        case 0x3fb868u: goto label_3fb868;
        case 0x3fb86cu: goto label_3fb86c;
        case 0x3fb870u: goto label_3fb870;
        case 0x3fb874u: goto label_3fb874;
        case 0x3fb878u: goto label_3fb878;
        case 0x3fb87cu: goto label_3fb87c;
        case 0x3fb880u: goto label_3fb880;
        case 0x3fb884u: goto label_3fb884;
        case 0x3fb888u: goto label_3fb888;
        case 0x3fb88cu: goto label_3fb88c;
        case 0x3fb890u: goto label_3fb890;
        case 0x3fb894u: goto label_3fb894;
        case 0x3fb898u: goto label_3fb898;
        case 0x3fb89cu: goto label_3fb89c;
        case 0x3fb8a0u: goto label_3fb8a0;
        case 0x3fb8a4u: goto label_3fb8a4;
        case 0x3fb8a8u: goto label_3fb8a8;
        case 0x3fb8acu: goto label_3fb8ac;
        case 0x3fb8b0u: goto label_3fb8b0;
        case 0x3fb8b4u: goto label_3fb8b4;
        case 0x3fb8b8u: goto label_3fb8b8;
        case 0x3fb8bcu: goto label_3fb8bc;
        case 0x3fb8c0u: goto label_3fb8c0;
        case 0x3fb8c4u: goto label_3fb8c4;
        case 0x3fb8c8u: goto label_3fb8c8;
        case 0x3fb8ccu: goto label_3fb8cc;
        case 0x3fb8d0u: goto label_3fb8d0;
        case 0x3fb8d4u: goto label_3fb8d4;
        case 0x3fb8d8u: goto label_3fb8d8;
        case 0x3fb8dcu: goto label_3fb8dc;
        case 0x3fb8e0u: goto label_3fb8e0;
        case 0x3fb8e4u: goto label_3fb8e4;
        case 0x3fb8e8u: goto label_3fb8e8;
        case 0x3fb8ecu: goto label_3fb8ec;
        case 0x3fb8f0u: goto label_3fb8f0;
        case 0x3fb8f4u: goto label_3fb8f4;
        case 0x3fb8f8u: goto label_3fb8f8;
        case 0x3fb8fcu: goto label_3fb8fc;
        case 0x3fb900u: goto label_3fb900;
        case 0x3fb904u: goto label_3fb904;
        case 0x3fb908u: goto label_3fb908;
        case 0x3fb90cu: goto label_3fb90c;
        case 0x3fb910u: goto label_3fb910;
        case 0x3fb914u: goto label_3fb914;
        case 0x3fb918u: goto label_3fb918;
        case 0x3fb91cu: goto label_3fb91c;
        case 0x3fb920u: goto label_3fb920;
        case 0x3fb924u: goto label_3fb924;
        case 0x3fb928u: goto label_3fb928;
        case 0x3fb92cu: goto label_3fb92c;
        case 0x3fb930u: goto label_3fb930;
        case 0x3fb934u: goto label_3fb934;
        case 0x3fb938u: goto label_3fb938;
        case 0x3fb93cu: goto label_3fb93c;
        case 0x3fb940u: goto label_3fb940;
        case 0x3fb944u: goto label_3fb944;
        case 0x3fb948u: goto label_3fb948;
        case 0x3fb94cu: goto label_3fb94c;
        case 0x3fb950u: goto label_3fb950;
        case 0x3fb954u: goto label_3fb954;
        case 0x3fb958u: goto label_3fb958;
        case 0x3fb95cu: goto label_3fb95c;
        case 0x3fb960u: goto label_3fb960;
        case 0x3fb964u: goto label_3fb964;
        case 0x3fb968u: goto label_3fb968;
        case 0x3fb96cu: goto label_3fb96c;
        case 0x3fb970u: goto label_3fb970;
        case 0x3fb974u: goto label_3fb974;
        case 0x3fb978u: goto label_3fb978;
        case 0x3fb97cu: goto label_3fb97c;
        case 0x3fb980u: goto label_3fb980;
        case 0x3fb984u: goto label_3fb984;
        case 0x3fb988u: goto label_3fb988;
        case 0x3fb98cu: goto label_3fb98c;
        case 0x3fb990u: goto label_3fb990;
        case 0x3fb994u: goto label_3fb994;
        case 0x3fb998u: goto label_3fb998;
        case 0x3fb99cu: goto label_3fb99c;
        case 0x3fb9a0u: goto label_3fb9a0;
        case 0x3fb9a4u: goto label_3fb9a4;
        case 0x3fb9a8u: goto label_3fb9a8;
        case 0x3fb9acu: goto label_3fb9ac;
        case 0x3fb9b0u: goto label_3fb9b0;
        case 0x3fb9b4u: goto label_3fb9b4;
        case 0x3fb9b8u: goto label_3fb9b8;
        case 0x3fb9bcu: goto label_3fb9bc;
        case 0x3fb9c0u: goto label_3fb9c0;
        case 0x3fb9c4u: goto label_3fb9c4;
        case 0x3fb9c8u: goto label_3fb9c8;
        case 0x3fb9ccu: goto label_3fb9cc;
        case 0x3fb9d0u: goto label_3fb9d0;
        case 0x3fb9d4u: goto label_3fb9d4;
        case 0x3fb9d8u: goto label_3fb9d8;
        case 0x3fb9dcu: goto label_3fb9dc;
        case 0x3fb9e0u: goto label_3fb9e0;
        case 0x3fb9e4u: goto label_3fb9e4;
        case 0x3fb9e8u: goto label_3fb9e8;
        case 0x3fb9ecu: goto label_3fb9ec;
        case 0x3fb9f0u: goto label_3fb9f0;
        case 0x3fb9f4u: goto label_3fb9f4;
        case 0x3fb9f8u: goto label_3fb9f8;
        case 0x3fb9fcu: goto label_3fb9fc;
        case 0x3fba00u: goto label_3fba00;
        case 0x3fba04u: goto label_3fba04;
        case 0x3fba08u: goto label_3fba08;
        case 0x3fba0cu: goto label_3fba0c;
        case 0x3fba10u: goto label_3fba10;
        case 0x3fba14u: goto label_3fba14;
        case 0x3fba18u: goto label_3fba18;
        case 0x3fba1cu: goto label_3fba1c;
        case 0x3fba20u: goto label_3fba20;
        case 0x3fba24u: goto label_3fba24;
        case 0x3fba28u: goto label_3fba28;
        case 0x3fba2cu: goto label_3fba2c;
        case 0x3fba30u: goto label_3fba30;
        case 0x3fba34u: goto label_3fba34;
        case 0x3fba38u: goto label_3fba38;
        case 0x3fba3cu: goto label_3fba3c;
        case 0x3fba40u: goto label_3fba40;
        case 0x3fba44u: goto label_3fba44;
        case 0x3fba48u: goto label_3fba48;
        case 0x3fba4cu: goto label_3fba4c;
        case 0x3fba50u: goto label_3fba50;
        case 0x3fba54u: goto label_3fba54;
        case 0x3fba58u: goto label_3fba58;
        case 0x3fba5cu: goto label_3fba5c;
        case 0x3fba60u: goto label_3fba60;
        case 0x3fba64u: goto label_3fba64;
        case 0x3fba68u: goto label_3fba68;
        case 0x3fba6cu: goto label_3fba6c;
        case 0x3fba70u: goto label_3fba70;
        case 0x3fba74u: goto label_3fba74;
        case 0x3fba78u: goto label_3fba78;
        case 0x3fba7cu: goto label_3fba7c;
        case 0x3fba80u: goto label_3fba80;
        case 0x3fba84u: goto label_3fba84;
        case 0x3fba88u: goto label_3fba88;
        case 0x3fba8cu: goto label_3fba8c;
        case 0x3fba90u: goto label_3fba90;
        case 0x3fba94u: goto label_3fba94;
        case 0x3fba98u: goto label_3fba98;
        case 0x3fba9cu: goto label_3fba9c;
        case 0x3fbaa0u: goto label_3fbaa0;
        case 0x3fbaa4u: goto label_3fbaa4;
        case 0x3fbaa8u: goto label_3fbaa8;
        case 0x3fbaacu: goto label_3fbaac;
        case 0x3fbab0u: goto label_3fbab0;
        case 0x3fbab4u: goto label_3fbab4;
        case 0x3fbab8u: goto label_3fbab8;
        case 0x3fbabcu: goto label_3fbabc;
        case 0x3fbac0u: goto label_3fbac0;
        case 0x3fbac4u: goto label_3fbac4;
        case 0x3fbac8u: goto label_3fbac8;
        case 0x3fbaccu: goto label_3fbacc;
        case 0x3fbad0u: goto label_3fbad0;
        case 0x3fbad4u: goto label_3fbad4;
        case 0x3fbad8u: goto label_3fbad8;
        case 0x3fbadcu: goto label_3fbadc;
        default: break;
    }

    ctx->pc = 0x3fb800u;

label_3fb800:
    // 0x3fb800: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3fb800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3fb804:
    // 0x3fb804: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3fb804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3fb808:
    // 0x3fb808: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3fb808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3fb80c:
    // 0x3fb80c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fb80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3fb810:
    // 0x3fb810: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3fb810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3fb814:
    // 0x3fb814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fb814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fb818:
    // 0x3fb818: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3fb818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3fb81c:
    // 0x3fb81c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fb81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fb820:
    // 0x3fb820: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3fb820u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3fb824:
    // 0x3fb824: 0xc0892d0  jal         func_224B40
label_3fb828:
    if (ctx->pc == 0x3FB828u) {
        ctx->pc = 0x3FB828u;
            // 0x3fb828: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3FB82Cu;
        goto label_3fb82c;
    }
    ctx->pc = 0x3FB824u;
    SET_GPR_U32(ctx, 31, 0x3FB82Cu);
    ctx->pc = 0x3FB828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB824u;
            // 0x3fb828: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB82Cu; }
        if (ctx->pc != 0x3FB82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB82Cu; }
        if (ctx->pc != 0x3FB82Cu) { return; }
    }
    ctx->pc = 0x3FB82Cu;
label_3fb82c:
    // 0x3fb82c: 0xafb00054  sw          $s0, 0x54($sp)
    ctx->pc = 0x3fb82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
label_3fb830:
    // 0x3fb830: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3fb830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3fb834:
    // 0x3fb834: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3fb834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fb838:
    // 0x3fb838: 0x344acccd  ori         $t2, $v0, 0xCCCD
    ctx->pc = 0x3fb838u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3fb83c:
    // 0x3fb83c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3fb83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fb840:
    // 0x3fb840: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3fb840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3fb844:
    // 0x3fb844: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3fb844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fb848:
    // 0x3fb848: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x3fb848u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3fb84c:
    // 0x3fb84c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fb84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fb850:
    // 0x3fb850: 0x3c093e80  lui         $t1, 0x3E80
    ctx->pc = 0x3fb850u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16000 << 16));
label_3fb854:
    // 0x3fb854: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3fb854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3fb858:
    // 0x3fb858: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3fb858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fb85c:
    // 0x3fb85c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3fb85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3fb860:
    // 0x3fb860: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3fb860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_3fb864:
    // 0x3fb864: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3fb864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3fb868:
    // 0x3fb868: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x3fb868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3fb86c:
    // 0x3fb86c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x3fb86cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3fb870:
    // 0x3fb870: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3fb870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3fb874:
    // 0x3fb874: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3fb874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3fb878:
    // 0x3fb878: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3fb878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3fb87c:
    // 0x3fb87c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3fb87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fb880:
    // 0x3fb880: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3fb880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fb884:
    // 0x3fb884: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3fb884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fb888:
    // 0x3fb888: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3fb888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3fb88c:
    // 0x3fb88c: 0xafaa00e8  sw          $t2, 0xE8($sp)
    ctx->pc = 0x3fb88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 10));
label_3fb890:
    // 0x3fb890: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x3fb890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3fb894:
    // 0x3fb894: 0xafa900ec  sw          $t1, 0xEC($sp)
    ctx->pc = 0x3fb894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 9));
label_3fb898:
    // 0x3fb898: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x3fb898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3fb89c:
    // 0x3fb89c: 0xafa800fc  sw          $t0, 0xFC($sp)
    ctx->pc = 0x3fb89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 8));
label_3fb8a0:
    // 0x3fb8a0: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x3fb8a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3fb8a4:
    // 0x3fb8a4: 0xa3a70100  sb          $a3, 0x100($sp)
    ctx->pc = 0x3fb8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 7));
label_3fb8a8:
    // 0x3fb8a8: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x3fb8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_3fb8ac:
    // 0x3fb8ac: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x3fb8acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3fb8b0:
    // 0x3fb8b0: 0xc0a7a88  jal         func_29EA20
label_3fb8b4:
    if (ctx->pc == 0x3FB8B4u) {
        ctx->pc = 0x3FB8B4u;
            // 0x3fb8b4: 0xafa000e4  sw          $zero, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x3FB8B8u;
        goto label_3fb8b8;
    }
    ctx->pc = 0x3FB8B0u;
    SET_GPR_U32(ctx, 31, 0x3FB8B8u);
    ctx->pc = 0x3FB8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB8B0u;
            // 0x3fb8b4: 0xafa000e4  sw          $zero, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB8B8u; }
        if (ctx->pc != 0x3FB8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB8B8u; }
        if (ctx->pc != 0x3FB8B8u) { return; }
    }
    ctx->pc = 0x3FB8B8u;
label_3fb8b8:
    // 0x3fb8b8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3fb8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3fb8bc:
    // 0x3fb8bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fb8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb8c0:
    // 0x3fb8c0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3fb8c4:
    if (ctx->pc == 0x3FB8C4u) {
        ctx->pc = 0x3FB8C4u;
            // 0x3fb8c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3FB8C8u;
        goto label_3fb8c8;
    }
    ctx->pc = 0x3FB8C0u;
    {
        const bool branch_taken_0x3fb8c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB8C0u;
            // 0x3fb8c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb8c0) {
            ctx->pc = 0x3FB910u;
            goto label_3fb910;
        }
    }
    ctx->pc = 0x3FB8C8u;
label_3fb8c8:
    // 0x3fb8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fb8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb8cc:
    // 0x3fb8cc: 0xc088ef4  jal         func_223BD0
label_3fb8d0:
    if (ctx->pc == 0x3FB8D0u) {
        ctx->pc = 0x3FB8D0u;
            // 0x3fb8d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3FB8D4u;
        goto label_3fb8d4;
    }
    ctx->pc = 0x3FB8CCu;
    SET_GPR_U32(ctx, 31, 0x3FB8D4u);
    ctx->pc = 0x3FB8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB8CCu;
            // 0x3fb8d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB8D4u; }
        if (ctx->pc != 0x3FB8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB8D4u; }
        if (ctx->pc != 0x3FB8D4u) { return; }
    }
    ctx->pc = 0x3FB8D4u;
label_3fb8d4:
    // 0x3fb8d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fb8d8:
    // 0x3fb8d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3fb8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3fb8dc:
    // 0x3fb8dc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3fb8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3fb8e0:
    // 0x3fb8e0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3fb8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3fb8e4:
    // 0x3fb8e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3fb8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3fb8e8:
    // 0x3fb8e8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3fb8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3fb8ec:
    // 0x3fb8ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fb8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fb8f0:
    // 0x3fb8f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3fb8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3fb8f4:
    // 0x3fb8f4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3fb8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3fb8f8:
    // 0x3fb8f8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x3fb8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_3fb8fc:
    // 0x3fb8fc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x3fb8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_3fb900:
    // 0x3fb900: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fb900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fb904:
    // 0x3fb904: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3fb904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3fb908:
    // 0x3fb908: 0xc088b38  jal         func_222CE0
label_3fb90c:
    if (ctx->pc == 0x3FB90Cu) {
        ctx->pc = 0x3FB90Cu;
            // 0x3fb90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB910u;
        goto label_3fb910;
    }
    ctx->pc = 0x3FB908u;
    SET_GPR_U32(ctx, 31, 0x3FB910u);
    ctx->pc = 0x3FB90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB908u;
            // 0x3fb90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB910u; }
        if (ctx->pc != 0x3FB910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB910u; }
        if (ctx->pc != 0x3FB910u) { return; }
    }
    ctx->pc = 0x3FB910u;
label_3fb910:
    // 0x3fb910: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x3fb910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_3fb914:
    // 0x3fb914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fb914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb918:
    // 0x3fb918: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x3fb918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_3fb91c:
    // 0x3fb91c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3fb91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fb920:
    // 0x3fb920: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fb920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fb924:
    // 0x3fb924: 0xc08914c  jal         func_224530
label_3fb928:
    if (ctx->pc == 0x3FB928u) {
        ctx->pc = 0x3FB928u;
            // 0x3fb928: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB92Cu;
        goto label_3fb92c;
    }
    ctx->pc = 0x3FB924u;
    SET_GPR_U32(ctx, 31, 0x3FB92Cu);
    ctx->pc = 0x3FB928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB924u;
            // 0x3fb928: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB92Cu; }
        if (ctx->pc != 0x3FB92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB92Cu; }
        if (ctx->pc != 0x3FB92Cu) { return; }
    }
    ctx->pc = 0x3FB92Cu;
label_3fb92c:
    // 0x3fb92c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fb930:
    // 0x3fb930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fb930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb934:
    // 0x3fb934: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fb934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fb938:
    // 0x3fb938: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fb938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fb93c:
    // 0x3fb93c: 0xc08c164  jal         func_230590
label_3fb940:
    if (ctx->pc == 0x3FB940u) {
        ctx->pc = 0x3FB940u;
            // 0x3fb940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FB944u;
        goto label_3fb944;
    }
    ctx->pc = 0x3FB93Cu;
    SET_GPR_U32(ctx, 31, 0x3FB944u);
    ctx->pc = 0x3FB940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB93Cu;
            // 0x3fb940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB944u; }
        if (ctx->pc != 0x3FB944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB944u; }
        if (ctx->pc != 0x3FB944u) { return; }
    }
    ctx->pc = 0x3FB944u;
label_3fb944:
    // 0x3fb944: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x3fb944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_3fb948:
    // 0x3fb948: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fb948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fb94c:
    // 0x3fb94c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3fb94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3fb950:
    // 0x3fb950: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3fb950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3fb954:
    // 0x3fb954: 0xc0a7a88  jal         func_29EA20
label_3fb958:
    if (ctx->pc == 0x3FB958u) {
        ctx->pc = 0x3FB958u;
            // 0x3fb958: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3FB95Cu;
        goto label_3fb95c;
    }
    ctx->pc = 0x3FB954u;
    SET_GPR_U32(ctx, 31, 0x3FB95Cu);
    ctx->pc = 0x3FB958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB954u;
            // 0x3fb958: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB95Cu; }
        if (ctx->pc != 0x3FB95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB95Cu; }
        if (ctx->pc != 0x3FB95Cu) { return; }
    }
    ctx->pc = 0x3FB95Cu;
label_3fb95c:
    // 0x3fb95c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3fb95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3fb960:
    // 0x3fb960: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fb960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb964:
    // 0x3fb964: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_3fb968:
    if (ctx->pc == 0x3FB968u) {
        ctx->pc = 0x3FB968u;
            // 0x3fb968: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3FB96Cu;
        goto label_3fb96c;
    }
    ctx->pc = 0x3FB964u;
    {
        const bool branch_taken_0x3fb964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB964u;
            // 0x3fb968: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb964) {
            ctx->pc = 0x3FB988u;
            goto label_3fb988;
        }
    }
    ctx->pc = 0x3FB96Cu;
label_3fb96c:
    // 0x3fb96c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fb96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fb970:
    // 0x3fb970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fb970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb974:
    // 0x3fb974: 0xc0869d0  jal         func_21A740
label_3fb978:
    if (ctx->pc == 0x3FB978u) {
        ctx->pc = 0x3FB978u;
            // 0x3fb978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB97Cu;
        goto label_3fb97c;
    }
    ctx->pc = 0x3FB974u;
    SET_GPR_U32(ctx, 31, 0x3FB97Cu);
    ctx->pc = 0x3FB978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB974u;
            // 0x3fb978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB97Cu; }
        if (ctx->pc != 0x3FB97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB97Cu; }
        if (ctx->pc != 0x3FB97Cu) { return; }
    }
    ctx->pc = 0x3FB97Cu;
label_3fb97c:
    // 0x3fb97c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fb980:
    // 0x3fb980: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3fb980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3fb984:
    // 0x3fb984: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3fb984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3fb988:
    // 0x3fb988: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x3fb988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_3fb98c:
    // 0x3fb98c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fb990:
    // 0x3fb990: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fb990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fb994:
    // 0x3fb994: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fb994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fb998:
    // 0x3fb998: 0xc08c650  jal         func_231940
label_3fb99c:
    if (ctx->pc == 0x3FB99Cu) {
        ctx->pc = 0x3FB99Cu;
            // 0x3fb99c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB9A0u;
        goto label_3fb9a0;
    }
    ctx->pc = 0x3FB998u;
    SET_GPR_U32(ctx, 31, 0x3FB9A0u);
    ctx->pc = 0x3FB99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB998u;
            // 0x3fb99c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB9A0u; }
        if (ctx->pc != 0x3FB9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB9A0u; }
        if (ctx->pc != 0x3FB9A0u) { return; }
    }
    ctx->pc = 0x3FB9A0u;
label_3fb9a0:
    // 0x3fb9a0: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3fb9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3fb9a4:
    // 0x3fb9a4: 0x2403fdfd  addiu       $v1, $zero, -0x203
    ctx->pc = 0x3fb9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966781));
label_3fb9a8:
    // 0x3fb9a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3fb9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3fb9ac:
    // 0x3fb9ac: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x3fb9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_3fb9b0:
    // 0x3fb9b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3fb9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3fb9b4:
    // 0x3fb9b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3fb9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fb9b8:
    // 0x3fb9b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3fb9b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fb9bc:
    // 0x3fb9bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fb9bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fb9c0:
    // 0x3fb9c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3fb9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fb9c4:
    // 0x3fb9c4: 0x3e00008  jr          $ra
label_3fb9c8:
    if (ctx->pc == 0x3FB9C8u) {
        ctx->pc = 0x3FB9C8u;
            // 0x3fb9c8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3FB9CCu;
        goto label_3fb9cc;
    }
    ctx->pc = 0x3FB9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB9C4u;
            // 0x3fb9c8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FB9CCu;
label_3fb9cc:
    // 0x3fb9cc: 0x0  nop
    ctx->pc = 0x3fb9ccu;
    // NOP
label_3fb9d0:
    // 0x3fb9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3fb9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3fb9d4:
    // 0x3fb9d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3fb9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3fb9d8:
    // 0x3fb9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fb9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fb9dc:
    // 0x3fb9dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fb9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fb9e0:
    // 0x3fb9e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fb9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fb9e4:
    // 0x3fb9e4: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_3fb9e8:
    if (ctx->pc == 0x3FB9E8u) {
        ctx->pc = 0x3FB9E8u;
            // 0x3fb9e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB9ECu;
        goto label_3fb9ec;
    }
    ctx->pc = 0x3FB9E4u;
    {
        const bool branch_taken_0x3fb9e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB9E4u;
            // 0x3fb9e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb9e4) {
            ctx->pc = 0x3FBABCu;
            goto label_3fbabc;
        }
    }
    ctx->pc = 0x3FB9ECu;
label_3fb9ec:
    // 0x3fb9ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3fb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3fb9f0:
    // 0x3fb9f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3fb9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3fb9f4:
    // 0x3fb9f4: 0x2463a3d0  addiu       $v1, $v1, -0x5C30
    ctx->pc = 0x3fb9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
label_3fb9f8:
    // 0x3fb9f8: 0x2442a410  addiu       $v0, $v0, -0x5BF0
    ctx->pc = 0x3fb9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943760));
label_3fb9fc:
    // 0x3fb9fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3fb9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3fba00:
    // 0x3fba00: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3fba00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3fba04:
    // 0x3fba04: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3fba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3fba08:
    // 0x3fba08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3fba0c:
    if (ctx->pc == 0x3FBA0Cu) {
        ctx->pc = 0x3FBA0Cu;
            // 0x3fba0c: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3FBA10u;
        goto label_3fba10;
    }
    ctx->pc = 0x3FBA08u;
    {
        const bool branch_taken_0x3fba08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fba08) {
            ctx->pc = 0x3FBA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBA08u;
            // 0x3fba0c: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBA24u;
            goto label_3fba24;
        }
    }
    ctx->pc = 0x3FBA10u;
label_3fba10:
    // 0x3fba10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3fba10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fba14:
    // 0x3fba14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3fba14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3fba18:
    // 0x3fba18: 0x320f809  jalr        $t9
label_3fba1c:
    if (ctx->pc == 0x3FBA1Cu) {
        ctx->pc = 0x3FBA1Cu;
            // 0x3fba1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FBA20u;
        goto label_3fba20;
    }
    ctx->pc = 0x3FBA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FBA20u);
        ctx->pc = 0x3FBA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBA18u;
            // 0x3fba1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FBA20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FBA20u; }
            if (ctx->pc != 0x3FBA20u) { return; }
        }
        }
    }
    ctx->pc = 0x3FBA20u;
label_3fba20:
    // 0x3fba20: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3fba20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3fba24:
    // 0x3fba24: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_3fba28:
    if (ctx->pc == 0x3FBA28u) {
        ctx->pc = 0x3FBA28u;
            // 0x3fba28: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3FBA2Cu;
        goto label_3fba2c;
    }
    ctx->pc = 0x3FBA24u;
    {
        const bool branch_taken_0x3fba24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fba24) {
            ctx->pc = 0x3FBA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBA24u;
            // 0x3fba28: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBAA8u;
            goto label_3fbaa8;
        }
    }
    ctx->pc = 0x3FBA2Cu;
label_3fba2c:
    // 0x3fba2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3fba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3fba30:
    // 0x3fba30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fba34:
    // 0x3fba34: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3fba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_3fba38:
    // 0x3fba38: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3fba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_3fba3c:
    // 0x3fba3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3fba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3fba40:
    // 0x3fba40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3fba40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3fba44:
    // 0x3fba44: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x3fba44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_3fba48:
    // 0x3fba48: 0xc0aecc4  jal         func_2BB310
label_3fba4c:
    if (ctx->pc == 0x3FBA4Cu) {
        ctx->pc = 0x3FBA4Cu;
            // 0x3fba4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FBA50u;
        goto label_3fba50;
    }
    ctx->pc = 0x3FBA48u;
    SET_GPR_U32(ctx, 31, 0x3FBA50u);
    ctx->pc = 0x3FBA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBA48u;
            // 0x3fba4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBA50u; }
        if (ctx->pc != 0x3FBA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBA50u; }
        if (ctx->pc != 0x3FBA50u) { return; }
    }
    ctx->pc = 0x3FBA50u;
label_3fba50:
    // 0x3fba50: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3fba50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_3fba54:
    // 0x3fba54: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x3fba54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3fba58:
    // 0x3fba58: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3fba5c:
    if (ctx->pc == 0x3FBA5Cu) {
        ctx->pc = 0x3FBA5Cu;
            // 0x3fba5c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x3FBA60u;
        goto label_3fba60;
    }
    ctx->pc = 0x3FBA58u;
    {
        const bool branch_taken_0x3fba58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fba58) {
            ctx->pc = 0x3FBA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBA58u;
            // 0x3fba5c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBA74u;
            goto label_3fba74;
        }
    }
    ctx->pc = 0x3FBA60u;
label_3fba60:
    // 0x3fba60: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3fba60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3fba64:
    // 0x3fba64: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3fba64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3fba68:
    // 0x3fba68: 0x320f809  jalr        $t9
label_3fba6c:
    if (ctx->pc == 0x3FBA6Cu) {
        ctx->pc = 0x3FBA6Cu;
            // 0x3fba6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FBA70u;
        goto label_3fba70;
    }
    ctx->pc = 0x3FBA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FBA70u);
        ctx->pc = 0x3FBA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBA68u;
            // 0x3fba6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FBA70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FBA70u; }
            if (ctx->pc != 0x3FBA70u) { return; }
        }
        }
    }
    ctx->pc = 0x3FBA70u;
label_3fba70:
    // 0x3fba70: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3fba70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3fba74:
    // 0x3fba74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3fba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fba78:
    // 0x3fba78: 0xc0aec9c  jal         func_2BB270
label_3fba7c:
    if (ctx->pc == 0x3FBA7Cu) {
        ctx->pc = 0x3FBA7Cu;
            // 0x3fba7c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3FBA80u;
        goto label_3fba80;
    }
    ctx->pc = 0x3FBA78u;
    SET_GPR_U32(ctx, 31, 0x3FBA80u);
    ctx->pc = 0x3FBA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBA78u;
            // 0x3fba7c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBA80u; }
        if (ctx->pc != 0x3FBA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBA80u; }
        if (ctx->pc != 0x3FBA80u) { return; }
    }
    ctx->pc = 0x3FBA80u;
label_3fba80:
    // 0x3fba80: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3fba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_3fba84:
    // 0x3fba84: 0xc0aec88  jal         func_2BB220
label_3fba88:
    if (ctx->pc == 0x3FBA88u) {
        ctx->pc = 0x3FBA88u;
            // 0x3fba88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3FBA8Cu;
        goto label_3fba8c;
    }
    ctx->pc = 0x3FBA84u;
    SET_GPR_U32(ctx, 31, 0x3FBA8Cu);
    ctx->pc = 0x3FBA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBA84u;
            // 0x3fba88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBA8Cu; }
        if (ctx->pc != 0x3FBA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBA8Cu; }
        if (ctx->pc != 0x3FBA8Cu) { return; }
    }
    ctx->pc = 0x3FBA8Cu;
label_3fba8c:
    // 0x3fba8c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3fba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3fba90:
    // 0x3fba90: 0xc0aec0c  jal         func_2BB030
label_3fba94:
    if (ctx->pc == 0x3FBA94u) {
        ctx->pc = 0x3FBA94u;
            // 0x3fba94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA98u;
        goto label_3fba98;
    }
    ctx->pc = 0x3FBA90u;
    SET_GPR_U32(ctx, 31, 0x3FBA98u);
    ctx->pc = 0x3FBA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBA90u;
            // 0x3fba94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBA98u; }
        if (ctx->pc != 0x3FBA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBA98u; }
        if (ctx->pc != 0x3FBA98u) { return; }
    }
    ctx->pc = 0x3FBA98u;
label_3fba98:
    // 0x3fba98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fba98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fba9c:
    // 0x3fba9c: 0xc0aeaa8  jal         func_2BAAA0
label_3fbaa0:
    if (ctx->pc == 0x3FBAA0u) {
        ctx->pc = 0x3FBAA0u;
            // 0x3fbaa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBAA4u;
        goto label_3fbaa4;
    }
    ctx->pc = 0x3FBA9Cu;
    SET_GPR_U32(ctx, 31, 0x3FBAA4u);
    ctx->pc = 0x3FBAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBA9Cu;
            // 0x3fbaa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBAA4u; }
        if (ctx->pc != 0x3FBAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBAA4u; }
        if (ctx->pc != 0x3FBAA4u) { return; }
    }
    ctx->pc = 0x3FBAA4u;
label_3fbaa4:
    // 0x3fbaa4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3fbaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3fbaa8:
    // 0x3fbaa8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3fbaa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3fbaac:
    // 0x3fbaac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3fbab0:
    if (ctx->pc == 0x3FBAB0u) {
        ctx->pc = 0x3FBAB0u;
            // 0x3fbab0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBAB4u;
        goto label_3fbab4;
    }
    ctx->pc = 0x3FBAACu;
    {
        const bool branch_taken_0x3fbaac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3fbaac) {
            ctx->pc = 0x3FBAB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBAACu;
            // 0x3fbab0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBAC0u;
            goto label_3fbac0;
        }
    }
    ctx->pc = 0x3FBAB4u;
label_3fbab4:
    // 0x3fbab4: 0xc0400a8  jal         func_1002A0
label_3fbab8:
    if (ctx->pc == 0x3FBAB8u) {
        ctx->pc = 0x3FBAB8u;
            // 0x3fbab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBABCu;
        goto label_3fbabc;
    }
    ctx->pc = 0x3FBAB4u;
    SET_GPR_U32(ctx, 31, 0x3FBABCu);
    ctx->pc = 0x3FBAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBAB4u;
            // 0x3fbab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBABCu; }
        if (ctx->pc != 0x3FBABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBABCu; }
        if (ctx->pc != 0x3FBABCu) { return; }
    }
    ctx->pc = 0x3FBABCu;
label_3fbabc:
    // 0x3fbabc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3fbabcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fbac0:
    // 0x3fbac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3fbac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3fbac4:
    // 0x3fbac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fbac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fbac8:
    // 0x3fbac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fbac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fbacc:
    // 0x3fbacc: 0x3e00008  jr          $ra
label_3fbad0:
    if (ctx->pc == 0x3FBAD0u) {
        ctx->pc = 0x3FBAD0u;
            // 0x3fbad0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3FBAD4u;
        goto label_3fbad4;
    }
    ctx->pc = 0x3FBACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBACCu;
            // 0x3fbad0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FBAD4u;
label_3fbad4:
    // 0x3fbad4: 0x0  nop
    ctx->pc = 0x3fbad4u;
    // NOP
label_3fbad8:
    // 0x3fbad8: 0x0  nop
    ctx->pc = 0x3fbad8u;
    // NOP
label_3fbadc:
    // 0x3fbadc: 0x0  nop
    ctx->pc = 0x3fbadcu;
    // NOP
}
