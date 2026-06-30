#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052F8D0
// Address: 0x52f8d0 - 0x52fb70
void sub_0052F8D0_0x52f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052F8D0_0x52f8d0");
#endif

    switch (ctx->pc) {
        case 0x52f8d0u: goto label_52f8d0;
        case 0x52f8d4u: goto label_52f8d4;
        case 0x52f8d8u: goto label_52f8d8;
        case 0x52f8dcu: goto label_52f8dc;
        case 0x52f8e0u: goto label_52f8e0;
        case 0x52f8e4u: goto label_52f8e4;
        case 0x52f8e8u: goto label_52f8e8;
        case 0x52f8ecu: goto label_52f8ec;
        case 0x52f8f0u: goto label_52f8f0;
        case 0x52f8f4u: goto label_52f8f4;
        case 0x52f8f8u: goto label_52f8f8;
        case 0x52f8fcu: goto label_52f8fc;
        case 0x52f900u: goto label_52f900;
        case 0x52f904u: goto label_52f904;
        case 0x52f908u: goto label_52f908;
        case 0x52f90cu: goto label_52f90c;
        case 0x52f910u: goto label_52f910;
        case 0x52f914u: goto label_52f914;
        case 0x52f918u: goto label_52f918;
        case 0x52f91cu: goto label_52f91c;
        case 0x52f920u: goto label_52f920;
        case 0x52f924u: goto label_52f924;
        case 0x52f928u: goto label_52f928;
        case 0x52f92cu: goto label_52f92c;
        case 0x52f930u: goto label_52f930;
        case 0x52f934u: goto label_52f934;
        case 0x52f938u: goto label_52f938;
        case 0x52f93cu: goto label_52f93c;
        case 0x52f940u: goto label_52f940;
        case 0x52f944u: goto label_52f944;
        case 0x52f948u: goto label_52f948;
        case 0x52f94cu: goto label_52f94c;
        case 0x52f950u: goto label_52f950;
        case 0x52f954u: goto label_52f954;
        case 0x52f958u: goto label_52f958;
        case 0x52f95cu: goto label_52f95c;
        case 0x52f960u: goto label_52f960;
        case 0x52f964u: goto label_52f964;
        case 0x52f968u: goto label_52f968;
        case 0x52f96cu: goto label_52f96c;
        case 0x52f970u: goto label_52f970;
        case 0x52f974u: goto label_52f974;
        case 0x52f978u: goto label_52f978;
        case 0x52f97cu: goto label_52f97c;
        case 0x52f980u: goto label_52f980;
        case 0x52f984u: goto label_52f984;
        case 0x52f988u: goto label_52f988;
        case 0x52f98cu: goto label_52f98c;
        case 0x52f990u: goto label_52f990;
        case 0x52f994u: goto label_52f994;
        case 0x52f998u: goto label_52f998;
        case 0x52f99cu: goto label_52f99c;
        case 0x52f9a0u: goto label_52f9a0;
        case 0x52f9a4u: goto label_52f9a4;
        case 0x52f9a8u: goto label_52f9a8;
        case 0x52f9acu: goto label_52f9ac;
        case 0x52f9b0u: goto label_52f9b0;
        case 0x52f9b4u: goto label_52f9b4;
        case 0x52f9b8u: goto label_52f9b8;
        case 0x52f9bcu: goto label_52f9bc;
        case 0x52f9c0u: goto label_52f9c0;
        case 0x52f9c4u: goto label_52f9c4;
        case 0x52f9c8u: goto label_52f9c8;
        case 0x52f9ccu: goto label_52f9cc;
        case 0x52f9d0u: goto label_52f9d0;
        case 0x52f9d4u: goto label_52f9d4;
        case 0x52f9d8u: goto label_52f9d8;
        case 0x52f9dcu: goto label_52f9dc;
        case 0x52f9e0u: goto label_52f9e0;
        case 0x52f9e4u: goto label_52f9e4;
        case 0x52f9e8u: goto label_52f9e8;
        case 0x52f9ecu: goto label_52f9ec;
        case 0x52f9f0u: goto label_52f9f0;
        case 0x52f9f4u: goto label_52f9f4;
        case 0x52f9f8u: goto label_52f9f8;
        case 0x52f9fcu: goto label_52f9fc;
        case 0x52fa00u: goto label_52fa00;
        case 0x52fa04u: goto label_52fa04;
        case 0x52fa08u: goto label_52fa08;
        case 0x52fa0cu: goto label_52fa0c;
        case 0x52fa10u: goto label_52fa10;
        case 0x52fa14u: goto label_52fa14;
        case 0x52fa18u: goto label_52fa18;
        case 0x52fa1cu: goto label_52fa1c;
        case 0x52fa20u: goto label_52fa20;
        case 0x52fa24u: goto label_52fa24;
        case 0x52fa28u: goto label_52fa28;
        case 0x52fa2cu: goto label_52fa2c;
        case 0x52fa30u: goto label_52fa30;
        case 0x52fa34u: goto label_52fa34;
        case 0x52fa38u: goto label_52fa38;
        case 0x52fa3cu: goto label_52fa3c;
        case 0x52fa40u: goto label_52fa40;
        case 0x52fa44u: goto label_52fa44;
        case 0x52fa48u: goto label_52fa48;
        case 0x52fa4cu: goto label_52fa4c;
        case 0x52fa50u: goto label_52fa50;
        case 0x52fa54u: goto label_52fa54;
        case 0x52fa58u: goto label_52fa58;
        case 0x52fa5cu: goto label_52fa5c;
        case 0x52fa60u: goto label_52fa60;
        case 0x52fa64u: goto label_52fa64;
        case 0x52fa68u: goto label_52fa68;
        case 0x52fa6cu: goto label_52fa6c;
        case 0x52fa70u: goto label_52fa70;
        case 0x52fa74u: goto label_52fa74;
        case 0x52fa78u: goto label_52fa78;
        case 0x52fa7cu: goto label_52fa7c;
        case 0x52fa80u: goto label_52fa80;
        case 0x52fa84u: goto label_52fa84;
        case 0x52fa88u: goto label_52fa88;
        case 0x52fa8cu: goto label_52fa8c;
        case 0x52fa90u: goto label_52fa90;
        case 0x52fa94u: goto label_52fa94;
        case 0x52fa98u: goto label_52fa98;
        case 0x52fa9cu: goto label_52fa9c;
        case 0x52faa0u: goto label_52faa0;
        case 0x52faa4u: goto label_52faa4;
        case 0x52faa8u: goto label_52faa8;
        case 0x52faacu: goto label_52faac;
        case 0x52fab0u: goto label_52fab0;
        case 0x52fab4u: goto label_52fab4;
        case 0x52fab8u: goto label_52fab8;
        case 0x52fabcu: goto label_52fabc;
        case 0x52fac0u: goto label_52fac0;
        case 0x52fac4u: goto label_52fac4;
        case 0x52fac8u: goto label_52fac8;
        case 0x52faccu: goto label_52facc;
        case 0x52fad0u: goto label_52fad0;
        case 0x52fad4u: goto label_52fad4;
        case 0x52fad8u: goto label_52fad8;
        case 0x52fadcu: goto label_52fadc;
        case 0x52fae0u: goto label_52fae0;
        case 0x52fae4u: goto label_52fae4;
        case 0x52fae8u: goto label_52fae8;
        case 0x52faecu: goto label_52faec;
        case 0x52faf0u: goto label_52faf0;
        case 0x52faf4u: goto label_52faf4;
        case 0x52faf8u: goto label_52faf8;
        case 0x52fafcu: goto label_52fafc;
        case 0x52fb00u: goto label_52fb00;
        case 0x52fb04u: goto label_52fb04;
        case 0x52fb08u: goto label_52fb08;
        case 0x52fb0cu: goto label_52fb0c;
        case 0x52fb10u: goto label_52fb10;
        case 0x52fb14u: goto label_52fb14;
        case 0x52fb18u: goto label_52fb18;
        case 0x52fb1cu: goto label_52fb1c;
        case 0x52fb20u: goto label_52fb20;
        case 0x52fb24u: goto label_52fb24;
        case 0x52fb28u: goto label_52fb28;
        case 0x52fb2cu: goto label_52fb2c;
        case 0x52fb30u: goto label_52fb30;
        case 0x52fb34u: goto label_52fb34;
        case 0x52fb38u: goto label_52fb38;
        case 0x52fb3cu: goto label_52fb3c;
        case 0x52fb40u: goto label_52fb40;
        case 0x52fb44u: goto label_52fb44;
        case 0x52fb48u: goto label_52fb48;
        case 0x52fb4cu: goto label_52fb4c;
        case 0x52fb50u: goto label_52fb50;
        case 0x52fb54u: goto label_52fb54;
        case 0x52fb58u: goto label_52fb58;
        case 0x52fb5cu: goto label_52fb5c;
        case 0x52fb60u: goto label_52fb60;
        case 0x52fb64u: goto label_52fb64;
        case 0x52fb68u: goto label_52fb68;
        case 0x52fb6cu: goto label_52fb6c;
        default: break;
    }

    ctx->pc = 0x52f8d0u;

label_52f8d0:
    // 0x52f8d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x52f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_52f8d4:
    // 0x52f8d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52f8d8:
    // 0x52f8d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x52f8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52f8dc:
    // 0x52f8dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x52f8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_52f8e0:
    // 0x52f8e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x52f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_52f8e4:
    // 0x52f8e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x52f8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_52f8e8:
    // 0x52f8e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x52f8e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_52f8ec:
    // 0x52f8ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52f8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52f8f0:
    // 0x52f8f0: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x52f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_52f8f4:
    // 0x52f8f4: 0x5083007b  beql        $a0, $v1, . + 4 + (0x7B << 2)
label_52f8f8:
    if (ctx->pc == 0x52F8F8u) {
        ctx->pc = 0x52F8F8u;
            // 0x52f8f8: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x52F8FCu;
        goto label_52f8fc;
    }
    ctx->pc = 0x52F8F4u;
    {
        const bool branch_taken_0x52f8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x52f8f4) {
            ctx->pc = 0x52F8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52F8F4u;
            // 0x52f8f8: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FAE4u;
            goto label_52fae4;
        }
    }
    ctx->pc = 0x52F8FCu;
label_52f8fc:
    // 0x52f8fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52f900:
    // 0x52f900: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_52f904:
    if (ctx->pc == 0x52F904u) {
        ctx->pc = 0x52F904u;
            // 0x52f904: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x52F908u;
        goto label_52f908;
    }
    ctx->pc = 0x52F900u;
    {
        const bool branch_taken_0x52f900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x52f900) {
            ctx->pc = 0x52F904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52F900u;
            // 0x52f904: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x52F918u;
            goto label_52f918;
        }
    }
    ctx->pc = 0x52F908u;
label_52f908:
    // 0x52f908: 0x50800092  beql        $a0, $zero, . + 4 + (0x92 << 2)
label_52f90c:
    if (ctx->pc == 0x52F90Cu) {
        ctx->pc = 0x52F90Cu;
            // 0x52f90c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x52F910u;
        goto label_52f910;
    }
    ctx->pc = 0x52F908u;
    {
        const bool branch_taken_0x52f908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52f908) {
            ctx->pc = 0x52F90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52F908u;
            // 0x52f90c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FB54u;
            goto label_52fb54;
        }
    }
    ctx->pc = 0x52F910u;
label_52f910:
    // 0x52f910: 0x1000008f  b           . + 4 + (0x8F << 2)
label_52f914:
    if (ctx->pc == 0x52F914u) {
        ctx->pc = 0x52F918u;
        goto label_52f918;
    }
    ctx->pc = 0x52F910u;
    {
        const bool branch_taken_0x52f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52f910) {
            ctx->pc = 0x52FB50u;
            goto label_52fb50;
        }
    }
    ctx->pc = 0x52F918u;
label_52f918:
    // 0x52f918: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x52f918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_52f91c:
    // 0x52f91c: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x52f91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52f920:
    // 0x52f920: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x52f920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_52f924:
    // 0x52f924: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x52f924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_52f928:
    // 0x52f928: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x52f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52f92c:
    // 0x52f92c: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x52f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52f930:
    // 0x52f930: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x52f930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_52f934:
    // 0x52f934: 0xc0b6e68  jal         func_2DB9A0
label_52f938:
    if (ctx->pc == 0x52F938u) {
        ctx->pc = 0x52F938u;
            // 0x52f938: 0xe600006c  swc1        $f0, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->pc = 0x52F93Cu;
        goto label_52f93c;
    }
    ctx->pc = 0x52F934u;
    SET_GPR_U32(ctx, 31, 0x52F93Cu);
    ctx->pc = 0x52F938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F934u;
            // 0x52f938: 0xe600006c  swc1        $f0, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F93Cu; }
        if (ctx->pc != 0x52F93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F93Cu; }
        if (ctx->pc != 0x52F93Cu) { return; }
    }
    ctx->pc = 0x52F93Cu;
label_52f93c:
    // 0x52f93c: 0xc0b6e68  jal         func_2DB9A0
label_52f940:
    if (ctx->pc == 0x52F940u) {
        ctx->pc = 0x52F940u;
            // 0x52f940: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52F944u;
        goto label_52f944;
    }
    ctx->pc = 0x52F93Cu;
    SET_GPR_U32(ctx, 31, 0x52F944u);
    ctx->pc = 0x52F940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F93Cu;
            // 0x52f940: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F944u; }
        if (ctx->pc != 0x52F944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F944u; }
        if (ctx->pc != 0x52F944u) { return; }
    }
    ctx->pc = 0x52F944u;
label_52f944:
    // 0x52f944: 0x3c023daa  lui         $v0, 0x3DAA
    ctx->pc = 0x52f944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
label_52f948:
    // 0x52f948: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x52f948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_52f94c:
    // 0x52f94c: 0x3444aaab  ori         $a0, $v0, 0xAAAB
    ctx->pc = 0x52f94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_52f950:
    // 0x52f950: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x52f950u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_52f954:
    // 0x52f954: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x52f954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_52f958:
    // 0x52f958: 0xc6040060  lwc1        $f4, 0x60($s0)
    ctx->pc = 0x52f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_52f95c:
    // 0x52f95c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x52f95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_52f960:
    // 0x52f960: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x52f960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_52f964:
    // 0x52f964: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x52f964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_52f968:
    // 0x52f968: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x52f968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_52f96c:
    // 0x52f96c: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x52f96cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[5];
label_52f970:
    // 0x52f970: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x52f970u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_52f974:
    // 0x52f974: 0x46031502  mul.s       $f20, $f2, $f3
    ctx->pc = 0x52f974u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_52f978:
    // 0x52f978: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x52f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52f97c:
    // 0x52f97c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x52f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52f980:
    // 0x52f980: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x52f980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_52f984:
    // 0x52f984: 0x46140341  sub.s       $f13, $f0, $f20
    ctx->pc = 0x52f984u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_52f988:
    // 0x52f988: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x52f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52f98c:
    // 0x52f98c: 0x46140b01  sub.s       $f12, $f1, $f20
    ctx->pc = 0x52f98cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_52f990:
    // 0x52f990: 0xc0b6e3c  jal         func_2DB8F0
label_52f994:
    if (ctx->pc == 0x52F994u) {
        ctx->pc = 0x52F994u;
            // 0x52f994: 0x46140381  sub.s       $f14, $f0, $f20 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x52F998u;
        goto label_52f998;
    }
    ctx->pc = 0x52F990u;
    SET_GPR_U32(ctx, 31, 0x52F998u);
    ctx->pc = 0x52F994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F990u;
            // 0x52f994: 0x46140381  sub.s       $f14, $f0, $f20 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F998u; }
        if (ctx->pc != 0x52F998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F998u; }
        if (ctx->pc != 0x52F998u) { return; }
    }
    ctx->pc = 0x52F998u;
label_52f998:
    // 0x52f998: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x52f998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52f99c:
    // 0x52f99c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x52f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_52f9a0:
    // 0x52f9a0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x52f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52f9a4:
    // 0x52f9a4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x52f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52f9a8:
    // 0x52f9a8: 0x46141300  add.s       $f12, $f2, $f20
    ctx->pc = 0x52f9a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_52f9ac:
    // 0x52f9ac: 0x46140b40  add.s       $f13, $f1, $f20
    ctx->pc = 0x52f9acu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_52f9b0:
    // 0x52f9b0: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x52f9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_52f9b4:
    // 0x52f9b4: 0xc0b6e3c  jal         func_2DB8F0
label_52f9b8:
    if (ctx->pc == 0x52F9B8u) {
        ctx->pc = 0x52F9B8u;
            // 0x52f9b8: 0x46140380  add.s       $f14, $f0, $f20 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x52F9BCu;
        goto label_52f9bc;
    }
    ctx->pc = 0x52F9B4u;
    SET_GPR_U32(ctx, 31, 0x52F9BCu);
    ctx->pc = 0x52F9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F9B4u;
            // 0x52f9b8: 0x46140380  add.s       $f14, $f0, $f20 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9BCu; }
        if (ctx->pc != 0x52F9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9BCu; }
        if (ctx->pc != 0x52F9BCu) { return; }
    }
    ctx->pc = 0x52F9BCu;
label_52f9bc:
    // 0x52f9bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x52f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_52f9c0:
    // 0x52f9c0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x52f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_52f9c4:
    // 0x52f9c4: 0xc14bf50  jal         func_52FD40
label_52f9c8:
    if (ctx->pc == 0x52F9C8u) {
        ctx->pc = 0x52F9C8u;
            // 0x52f9c8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52F9CCu;
        goto label_52f9cc;
    }
    ctx->pc = 0x52F9C4u;
    SET_GPR_U32(ctx, 31, 0x52F9CCu);
    ctx->pc = 0x52F9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F9C4u;
            // 0x52f9c8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52FD40u;
    if (runtime->hasFunction(0x52FD40u)) {
        auto targetFn = runtime->lookupFunction(0x52FD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9CCu; }
        if (ctx->pc != 0x52F9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052FD40_0x52fd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9CCu; }
        if (ctx->pc != 0x52F9CCu) { return; }
    }
    ctx->pc = 0x52F9CCu;
label_52f9cc:
    // 0x52f9cc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x52f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_52f9d0:
    // 0x52f9d0: 0xc08a9b4  jal         func_22A6D0
label_52f9d4:
    if (ctx->pc == 0x52F9D4u) {
        ctx->pc = 0x52F9D4u;
            // 0x52f9d4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x52F9D8u;
        goto label_52f9d8;
    }
    ctx->pc = 0x52F9D0u;
    SET_GPR_U32(ctx, 31, 0x52F9D8u);
    ctx->pc = 0x52F9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F9D0u;
            // 0x52f9d4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6D0u;
    if (runtime->hasFunction(0x22A6D0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9D8u; }
        if (ctx->pc != 0x52F9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A6D0_0x22a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9D8u; }
        if (ctx->pc != 0x52F9D8u) { return; }
    }
    ctx->pc = 0x52F9D8u;
label_52f9d8:
    // 0x52f9d8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x52f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_52f9dc:
    // 0x52f9dc: 0xc14bf4c  jal         func_52FD30
label_52f9e0:
    if (ctx->pc == 0x52F9E0u) {
        ctx->pc = 0x52F9E0u;
            // 0x52f9e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52F9E4u;
        goto label_52f9e4;
    }
    ctx->pc = 0x52F9DCu;
    SET_GPR_U32(ctx, 31, 0x52F9E4u);
    ctx->pc = 0x52F9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F9DCu;
            // 0x52f9e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52FD30u;
    if (runtime->hasFunction(0x52FD30u)) {
        auto targetFn = runtime->lookupFunction(0x52FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9E4u; }
        if (ctx->pc != 0x52F9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052FD30_0x52fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9E4u; }
        if (ctx->pc != 0x52F9E4u) { return; }
    }
    ctx->pc = 0x52F9E4u;
label_52f9e4:
    // 0x52f9e4: 0xc14bf8c  jal         func_52FE30
label_52f9e8:
    if (ctx->pc == 0x52F9E8u) {
        ctx->pc = 0x52F9E8u;
            // 0x52f9e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52F9ECu;
        goto label_52f9ec;
    }
    ctx->pc = 0x52F9E4u;
    SET_GPR_U32(ctx, 31, 0x52F9ECu);
    ctx->pc = 0x52F9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F9E4u;
            // 0x52f9e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52FE30u;
    if (runtime->hasFunction(0x52FE30u)) {
        auto targetFn = runtime->lookupFunction(0x52FE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9ECu; }
        if (ctx->pc != 0x52F9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052FE30_0x52fe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9ECu; }
        if (ctx->pc != 0x52F9ECu) { return; }
    }
    ctx->pc = 0x52F9ECu;
label_52f9ec:
    // 0x52f9ec: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
label_52f9f0:
    if (ctx->pc == 0x52F9F0u) {
        ctx->pc = 0x52F9F4u;
        goto label_52f9f4;
    }
    ctx->pc = 0x52F9ECu;
    {
        const bool branch_taken_0x52f9ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52f9ec) {
            ctx->pc = 0x52FA88u;
            goto label_52fa88;
        }
    }
    ctx->pc = 0x52F9F4u;
label_52f9f4:
    // 0x52f9f4: 0xc0b6dcc  jal         func_2DB730
label_52f9f8:
    if (ctx->pc == 0x52F9F8u) {
        ctx->pc = 0x52F9FCu;
        goto label_52f9fc;
    }
    ctx->pc = 0x52F9F4u;
    SET_GPR_U32(ctx, 31, 0x52F9FCu);
    ctx->pc = 0x2DB730u;
    if (runtime->hasFunction(0x2DB730u)) {
        auto targetFn = runtime->lookupFunction(0x2DB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9FCu; }
        if (ctx->pc != 0x52F9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB730_0x2db730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F9FCu; }
        if (ctx->pc != 0x52F9FCu) { return; }
    }
    ctx->pc = 0x52F9FCu;
label_52f9fc:
    // 0x52f9fc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x52f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_52fa00:
    // 0x52fa00: 0xc14bf4c  jal         func_52FD30
label_52fa04:
    if (ctx->pc == 0x52FA04u) {
        ctx->pc = 0x52FA04u;
            // 0x52fa04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FA08u;
        goto label_52fa08;
    }
    ctx->pc = 0x52FA00u;
    SET_GPR_U32(ctx, 31, 0x52FA08u);
    ctx->pc = 0x52FA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FA00u;
            // 0x52fa04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52FD30u;
    if (runtime->hasFunction(0x52FD30u)) {
        auto targetFn = runtime->lookupFunction(0x52FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA08u; }
        if (ctx->pc != 0x52FA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052FD30_0x52fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA08u; }
        if (ctx->pc != 0x52FA08u) { return; }
    }
    ctx->pc = 0x52FA08u;
label_52fa08:
    // 0x52fa08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x52fa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52fa0c:
    // 0x52fa0c: 0xc14bf88  jal         func_52FE20
label_52fa10:
    if (ctx->pc == 0x52FA10u) {
        ctx->pc = 0x52FA10u;
            // 0x52fa10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FA14u;
        goto label_52fa14;
    }
    ctx->pc = 0x52FA0Cu;
    SET_GPR_U32(ctx, 31, 0x52FA14u);
    ctx->pc = 0x52FA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FA0Cu;
            // 0x52fa10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52FE20u;
    if (runtime->hasFunction(0x52FE20u)) {
        auto targetFn = runtime->lookupFunction(0x52FE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA14u; }
        if (ctx->pc != 0x52FA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052FE20_0x52fe20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA14u; }
        if (ctx->pc != 0x52FA14u) { return; }
    }
    ctx->pc = 0x52FA14u;
label_52fa14:
    // 0x52fa14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x52fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52fa18:
    // 0x52fa18: 0xc0b6dc0  jal         func_2DB700
label_52fa1c:
    if (ctx->pc == 0x52FA1Cu) {
        ctx->pc = 0x52FA1Cu;
            // 0x52fa1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FA20u;
        goto label_52fa20;
    }
    ctx->pc = 0x52FA18u;
    SET_GPR_U32(ctx, 31, 0x52FA20u);
    ctx->pc = 0x52FA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FA18u;
            // 0x52fa1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB700u;
    if (runtime->hasFunction(0x2DB700u)) {
        auto targetFn = runtime->lookupFunction(0x2DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA20u; }
        if (ctx->pc != 0x52FA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB700_0x2db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA20u; }
        if (ctx->pc != 0x52FA20u) { return; }
    }
    ctx->pc = 0x52FA20u;
label_52fa20:
    // 0x52fa20: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x52fa20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52fa24:
    // 0x52fa24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x52fa24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52fa28:
    // 0x52fa28: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x52fa28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_52fa2c:
    // 0x52fa2c: 0x320f809  jalr        $t9
label_52fa30:
    if (ctx->pc == 0x52FA30u) {
        ctx->pc = 0x52FA30u;
            // 0x52fa30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FA34u;
        goto label_52fa34;
    }
    ctx->pc = 0x52FA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52FA34u);
        ctx->pc = 0x52FA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FA2Cu;
            // 0x52fa30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52FA34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52FA34u; }
            if (ctx->pc != 0x52FA34u) { return; }
        }
        }
    }
    ctx->pc = 0x52FA34u;
label_52fa34:
    // 0x52fa34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52fa38:
    // 0x52fa38: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_52fa3c:
    if (ctx->pc == 0x52FA3Cu) {
        ctx->pc = 0x52FA40u;
        goto label_52fa40;
    }
    ctx->pc = 0x52FA38u;
    {
        const bool branch_taken_0x52fa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x52fa38) {
            ctx->pc = 0x52FA58u;
            goto label_52fa58;
        }
    }
    ctx->pc = 0x52FA40u;
label_52fa40:
    // 0x52fa40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x52fa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52fa44:
    // 0x52fa44: 0xc14bf1c  jal         func_52FC70
label_52fa48:
    if (ctx->pc == 0x52FA48u) {
        ctx->pc = 0x52FA48u;
            // 0x52fa48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FA4Cu;
        goto label_52fa4c;
    }
    ctx->pc = 0x52FA44u;
    SET_GPR_U32(ctx, 31, 0x52FA4Cu);
    ctx->pc = 0x52FA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FA44u;
            // 0x52fa48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52FC70u;
    if (runtime->hasFunction(0x52FC70u)) {
        auto targetFn = runtime->lookupFunction(0x52FC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA4Cu; }
        if (ctx->pc != 0x52FA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052FC70_0x52fc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA4Cu; }
        if (ctx->pc != 0x52FA4Cu) { return; }
    }
    ctx->pc = 0x52FA4Cu;
label_52fa4c:
    // 0x52fa4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_52fa50:
    if (ctx->pc == 0x52FA50u) {
        ctx->pc = 0x52FA54u;
        goto label_52fa54;
    }
    ctx->pc = 0x52FA4Cu;
    {
        const bool branch_taken_0x52fa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fa4c) {
            ctx->pc = 0x52FA68u;
            goto label_52fa68;
        }
    }
    ctx->pc = 0x52FA54u;
label_52fa54:
    // 0x52fa54: 0x0  nop
    ctx->pc = 0x52fa54u;
    // NOP
label_52fa58:
    // 0x52fa58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x52fa58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52fa5c:
    // 0x52fa5c: 0xc14bedc  jal         func_52FB70
label_52fa60:
    if (ctx->pc == 0x52FA60u) {
        ctx->pc = 0x52FA60u;
            // 0x52fa60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FA64u;
        goto label_52fa64;
    }
    ctx->pc = 0x52FA5Cu;
    SET_GPR_U32(ctx, 31, 0x52FA64u);
    ctx->pc = 0x52FA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FA5Cu;
            // 0x52fa60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52FB70u;
    if (runtime->hasFunction(0x52FB70u)) {
        auto targetFn = runtime->lookupFunction(0x52FB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA64u; }
        if (ctx->pc != 0x52FA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052FB70_0x52fb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA64u; }
        if (ctx->pc != 0x52FA64u) { return; }
    }
    ctx->pc = 0x52FA64u;
label_52fa64:
    // 0x52fa64: 0x0  nop
    ctx->pc = 0x52fa64u;
    // NOP
label_52fa68:
    // 0x52fa68: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x52fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_52fa6c:
    // 0x52fa6c: 0xc14bf4c  jal         func_52FD30
label_52fa70:
    if (ctx->pc == 0x52FA70u) {
        ctx->pc = 0x52FA70u;
            // 0x52fa70: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x52FA74u;
        goto label_52fa74;
    }
    ctx->pc = 0x52FA6Cu;
    SET_GPR_U32(ctx, 31, 0x52FA74u);
    ctx->pc = 0x52FA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FA6Cu;
            // 0x52fa70: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52FD30u;
    if (runtime->hasFunction(0x52FD30u)) {
        auto targetFn = runtime->lookupFunction(0x52FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA74u; }
        if (ctx->pc != 0x52FA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052FD30_0x52fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA74u; }
        if (ctx->pc != 0x52FA74u) { return; }
    }
    ctx->pc = 0x52FA74u;
label_52fa74:
    // 0x52fa74: 0xc14bf8c  jal         func_52FE30
label_52fa78:
    if (ctx->pc == 0x52FA78u) {
        ctx->pc = 0x52FA78u;
            // 0x52fa78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FA7Cu;
        goto label_52fa7c;
    }
    ctx->pc = 0x52FA74u;
    SET_GPR_U32(ctx, 31, 0x52FA7Cu);
    ctx->pc = 0x52FA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FA74u;
            // 0x52fa78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52FE30u;
    if (runtime->hasFunction(0x52FE30u)) {
        auto targetFn = runtime->lookupFunction(0x52FE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA7Cu; }
        if (ctx->pc != 0x52FA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052FE30_0x52fe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FA7Cu; }
        if (ctx->pc != 0x52FA7Cu) { return; }
    }
    ctx->pc = 0x52FA7Cu;
label_52fa7c:
    // 0x52fa7c: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x52fa7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_52fa80:
    // 0x52fa80: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_52fa84:
    if (ctx->pc == 0x52FA84u) {
        ctx->pc = 0x52FA88u;
        goto label_52fa88;
    }
    ctx->pc = 0x52FA80u;
    {
        const bool branch_taken_0x52fa80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x52fa80) {
            ctx->pc = 0x52F9F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52f9f4;
        }
    }
    ctx->pc = 0x52FA88u;
label_52fa88:
    // 0x52fa88: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x52fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_52fa8c:
    // 0x52fa8c: 0x8c64ab08  lw          $a0, -0x54F8($v1)
    ctx->pc = 0x52fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945544)));
label_52fa90:
    // 0x52fa90: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x52fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fa94:
    // 0x52fa94: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x52fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_52fa98:
    // 0x52fa98: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x52fa98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_52fa9c:
    // 0x52fa9c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x52fa9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_52faa0:
    // 0x52faa0: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x52faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_52faa4:
    // 0x52faa4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x52faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52faa8:
    // 0x52faa8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x52faa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_52faac:
    // 0x52faac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x52faacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52fab0:
    // 0x52fab0: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_52fab4:
    if (ctx->pc == 0x52FAB4u) {
        ctx->pc = 0x52FAB8u;
        goto label_52fab8;
    }
    ctx->pc = 0x52FAB0u;
    {
        const bool branch_taken_0x52fab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x52fab0) {
            ctx->pc = 0x52FB50u;
            goto label_52fb50;
        }
    }
    ctx->pc = 0x52FAB8u;
label_52fab8:
    // 0x52fab8: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x52fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_52fabc:
    // 0x52fabc: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_52fac0:
    if (ctx->pc == 0x52FAC0u) {
        ctx->pc = 0x52FAC0u;
            // 0x52fac0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x52FAC4u;
        goto label_52fac4;
    }
    ctx->pc = 0x52FABCu;
    {
        const bool branch_taken_0x52fabc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fabc) {
            ctx->pc = 0x52FAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52FABCu;
            // 0x52fac0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FADCu;
            goto label_52fadc;
        }
    }
    ctx->pc = 0x52FAC4u;
label_52fac4:
    // 0x52fac4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52fac8:
    // 0x52fac8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52facc:
    // 0x52facc: 0xc08c8fc  jal         func_2323F0
label_52fad0:
    if (ctx->pc == 0x52FAD0u) {
        ctx->pc = 0x52FAD0u;
            // 0x52fad0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x52FAD4u;
        goto label_52fad4;
    }
    ctx->pc = 0x52FACCu;
    SET_GPR_U32(ctx, 31, 0x52FAD4u);
    ctx->pc = 0x52FAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FACCu;
            // 0x52fad0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FAD4u; }
        if (ctx->pc != 0x52FAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FAD4u; }
        if (ctx->pc != 0x52FAD4u) { return; }
    }
    ctx->pc = 0x52FAD4u;
label_52fad4:
    // 0x52fad4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x52fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_52fad8:
    // 0x52fad8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52fadc:
    // 0x52fadc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_52fae0:
    if (ctx->pc == 0x52FAE0u) {
        ctx->pc = 0x52FAE0u;
            // 0x52fae0: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x52FAE4u;
        goto label_52fae4;
    }
    ctx->pc = 0x52FADCu;
    {
        const bool branch_taken_0x52fadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52FAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FADCu;
            // 0x52fae0: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52fadc) {
            ctx->pc = 0x52FB50u;
            goto label_52fb50;
        }
    }
    ctx->pc = 0x52FAE4u;
label_52fae4:
    // 0x52fae4: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x52fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_52fae8:
    // 0x52fae8: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x52fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52faec:
    // 0x52faec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x52faecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_52faf0:
    // 0x52faf0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x52faf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_52faf4:
    // 0x52faf4: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x52faf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52faf8:
    // 0x52faf8: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x52faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fafc:
    // 0x52fafc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x52fafcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_52fb00:
    // 0x52fb00: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x52fb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_52fb04:
    // 0x52fb04: 0x8c63ab08  lw          $v1, -0x54F8($v1)
    ctx->pc = 0x52fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945544)));
label_52fb08:
    // 0x52fb08: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x52fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fb0c:
    // 0x52fb0c: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x52fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_52fb10:
    // 0x52fb10: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x52fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52fb14:
    // 0x52fb14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x52fb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52fb18:
    // 0x52fb18: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_52fb1c:
    if (ctx->pc == 0x52FB1Cu) {
        ctx->pc = 0x52FB20u;
        goto label_52fb20;
    }
    ctx->pc = 0x52FB18u;
    {
        const bool branch_taken_0x52fb18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x52fb18) {
            ctx->pc = 0x52FB50u;
            goto label_52fb50;
        }
    }
    ctx->pc = 0x52FB20u;
label_52fb20:
    // 0x52fb20: 0xe601006c  swc1        $f1, 0x6C($s0)
    ctx->pc = 0x52fb20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_52fb24:
    // 0x52fb24: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x52fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_52fb28:
    // 0x52fb28: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x52fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_52fb2c:
    // 0x52fb2c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x52fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_52fb30:
    // 0x52fb30: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x52fb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_52fb34:
    // 0x52fb34: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_52fb38:
    if (ctx->pc == 0x52FB38u) {
        ctx->pc = 0x52FB3Cu;
        goto label_52fb3c;
    }
    ctx->pc = 0x52FB34u;
    {
        const bool branch_taken_0x52fb34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fb34) {
            ctx->pc = 0x52FB50u;
            goto label_52fb50;
        }
    }
    ctx->pc = 0x52FB3Cu;
label_52fb3c:
    // 0x52fb3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52fb40:
    // 0x52fb40: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52fb44:
    // 0x52fb44: 0xc08c8fc  jal         func_2323F0
label_52fb48:
    if (ctx->pc == 0x52FB48u) {
        ctx->pc = 0x52FB48u;
            // 0x52fb48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x52FB4Cu;
        goto label_52fb4c;
    }
    ctx->pc = 0x52FB44u;
    SET_GPR_U32(ctx, 31, 0x52FB4Cu);
    ctx->pc = 0x52FB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FB44u;
            // 0x52fb48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FB4Cu; }
        if (ctx->pc != 0x52FB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FB4Cu; }
        if (ctx->pc != 0x52FB4Cu) { return; }
    }
    ctx->pc = 0x52FB4Cu;
label_52fb4c:
    // 0x52fb4c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x52fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_52fb50:
    // 0x52fb50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x52fb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52fb54:
    // 0x52fb54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x52fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_52fb58:
    // 0x52fb58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x52fb58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52fb5c:
    // 0x52fb5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x52fb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52fb60:
    // 0x52fb60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x52fb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52fb64:
    // 0x52fb64: 0x3e00008  jr          $ra
label_52fb68:
    if (ctx->pc == 0x52FB68u) {
        ctx->pc = 0x52FB68u;
            // 0x52fb68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x52FB6Cu;
        goto label_52fb6c;
    }
    ctx->pc = 0x52FB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52FB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FB64u;
            // 0x52fb68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52FB6Cu;
label_52fb6c:
    // 0x52fb6c: 0x0  nop
    ctx->pc = 0x52fb6cu;
    // NOP
}
