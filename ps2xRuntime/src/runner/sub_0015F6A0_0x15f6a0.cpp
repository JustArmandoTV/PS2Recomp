#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F6A0
// Address: 0x15f6a0 - 0x15fae0
void sub_0015F6A0_0x15f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F6A0_0x15f6a0");
#endif

    switch (ctx->pc) {
        case 0x15f6a0u: goto label_15f6a0;
        case 0x15f6a4u: goto label_15f6a4;
        case 0x15f6a8u: goto label_15f6a8;
        case 0x15f6acu: goto label_15f6ac;
        case 0x15f6b0u: goto label_15f6b0;
        case 0x15f6b4u: goto label_15f6b4;
        case 0x15f6b8u: goto label_15f6b8;
        case 0x15f6bcu: goto label_15f6bc;
        case 0x15f6c0u: goto label_15f6c0;
        case 0x15f6c4u: goto label_15f6c4;
        case 0x15f6c8u: goto label_15f6c8;
        case 0x15f6ccu: goto label_15f6cc;
        case 0x15f6d0u: goto label_15f6d0;
        case 0x15f6d4u: goto label_15f6d4;
        case 0x15f6d8u: goto label_15f6d8;
        case 0x15f6dcu: goto label_15f6dc;
        case 0x15f6e0u: goto label_15f6e0;
        case 0x15f6e4u: goto label_15f6e4;
        case 0x15f6e8u: goto label_15f6e8;
        case 0x15f6ecu: goto label_15f6ec;
        case 0x15f6f0u: goto label_15f6f0;
        case 0x15f6f4u: goto label_15f6f4;
        case 0x15f6f8u: goto label_15f6f8;
        case 0x15f6fcu: goto label_15f6fc;
        case 0x15f700u: goto label_15f700;
        case 0x15f704u: goto label_15f704;
        case 0x15f708u: goto label_15f708;
        case 0x15f70cu: goto label_15f70c;
        case 0x15f710u: goto label_15f710;
        case 0x15f714u: goto label_15f714;
        case 0x15f718u: goto label_15f718;
        case 0x15f71cu: goto label_15f71c;
        case 0x15f720u: goto label_15f720;
        case 0x15f724u: goto label_15f724;
        case 0x15f728u: goto label_15f728;
        case 0x15f72cu: goto label_15f72c;
        case 0x15f730u: goto label_15f730;
        case 0x15f734u: goto label_15f734;
        case 0x15f738u: goto label_15f738;
        case 0x15f73cu: goto label_15f73c;
        case 0x15f740u: goto label_15f740;
        case 0x15f744u: goto label_15f744;
        case 0x15f748u: goto label_15f748;
        case 0x15f74cu: goto label_15f74c;
        case 0x15f750u: goto label_15f750;
        case 0x15f754u: goto label_15f754;
        case 0x15f758u: goto label_15f758;
        case 0x15f75cu: goto label_15f75c;
        case 0x15f760u: goto label_15f760;
        case 0x15f764u: goto label_15f764;
        case 0x15f768u: goto label_15f768;
        case 0x15f76cu: goto label_15f76c;
        case 0x15f770u: goto label_15f770;
        case 0x15f774u: goto label_15f774;
        case 0x15f778u: goto label_15f778;
        case 0x15f77cu: goto label_15f77c;
        case 0x15f780u: goto label_15f780;
        case 0x15f784u: goto label_15f784;
        case 0x15f788u: goto label_15f788;
        case 0x15f78cu: goto label_15f78c;
        case 0x15f790u: goto label_15f790;
        case 0x15f794u: goto label_15f794;
        case 0x15f798u: goto label_15f798;
        case 0x15f79cu: goto label_15f79c;
        case 0x15f7a0u: goto label_15f7a0;
        case 0x15f7a4u: goto label_15f7a4;
        case 0x15f7a8u: goto label_15f7a8;
        case 0x15f7acu: goto label_15f7ac;
        case 0x15f7b0u: goto label_15f7b0;
        case 0x15f7b4u: goto label_15f7b4;
        case 0x15f7b8u: goto label_15f7b8;
        case 0x15f7bcu: goto label_15f7bc;
        case 0x15f7c0u: goto label_15f7c0;
        case 0x15f7c4u: goto label_15f7c4;
        case 0x15f7c8u: goto label_15f7c8;
        case 0x15f7ccu: goto label_15f7cc;
        case 0x15f7d0u: goto label_15f7d0;
        case 0x15f7d4u: goto label_15f7d4;
        case 0x15f7d8u: goto label_15f7d8;
        case 0x15f7dcu: goto label_15f7dc;
        case 0x15f7e0u: goto label_15f7e0;
        case 0x15f7e4u: goto label_15f7e4;
        case 0x15f7e8u: goto label_15f7e8;
        case 0x15f7ecu: goto label_15f7ec;
        case 0x15f7f0u: goto label_15f7f0;
        case 0x15f7f4u: goto label_15f7f4;
        case 0x15f7f8u: goto label_15f7f8;
        case 0x15f7fcu: goto label_15f7fc;
        case 0x15f800u: goto label_15f800;
        case 0x15f804u: goto label_15f804;
        case 0x15f808u: goto label_15f808;
        case 0x15f80cu: goto label_15f80c;
        case 0x15f810u: goto label_15f810;
        case 0x15f814u: goto label_15f814;
        case 0x15f818u: goto label_15f818;
        case 0x15f81cu: goto label_15f81c;
        case 0x15f820u: goto label_15f820;
        case 0x15f824u: goto label_15f824;
        case 0x15f828u: goto label_15f828;
        case 0x15f82cu: goto label_15f82c;
        case 0x15f830u: goto label_15f830;
        case 0x15f834u: goto label_15f834;
        case 0x15f838u: goto label_15f838;
        case 0x15f83cu: goto label_15f83c;
        case 0x15f840u: goto label_15f840;
        case 0x15f844u: goto label_15f844;
        case 0x15f848u: goto label_15f848;
        case 0x15f84cu: goto label_15f84c;
        case 0x15f850u: goto label_15f850;
        case 0x15f854u: goto label_15f854;
        case 0x15f858u: goto label_15f858;
        case 0x15f85cu: goto label_15f85c;
        case 0x15f860u: goto label_15f860;
        case 0x15f864u: goto label_15f864;
        case 0x15f868u: goto label_15f868;
        case 0x15f86cu: goto label_15f86c;
        case 0x15f870u: goto label_15f870;
        case 0x15f874u: goto label_15f874;
        case 0x15f878u: goto label_15f878;
        case 0x15f87cu: goto label_15f87c;
        case 0x15f880u: goto label_15f880;
        case 0x15f884u: goto label_15f884;
        case 0x15f888u: goto label_15f888;
        case 0x15f88cu: goto label_15f88c;
        case 0x15f890u: goto label_15f890;
        case 0x15f894u: goto label_15f894;
        case 0x15f898u: goto label_15f898;
        case 0x15f89cu: goto label_15f89c;
        case 0x15f8a0u: goto label_15f8a0;
        case 0x15f8a4u: goto label_15f8a4;
        case 0x15f8a8u: goto label_15f8a8;
        case 0x15f8acu: goto label_15f8ac;
        case 0x15f8b0u: goto label_15f8b0;
        case 0x15f8b4u: goto label_15f8b4;
        case 0x15f8b8u: goto label_15f8b8;
        case 0x15f8bcu: goto label_15f8bc;
        case 0x15f8c0u: goto label_15f8c0;
        case 0x15f8c4u: goto label_15f8c4;
        case 0x15f8c8u: goto label_15f8c8;
        case 0x15f8ccu: goto label_15f8cc;
        case 0x15f8d0u: goto label_15f8d0;
        case 0x15f8d4u: goto label_15f8d4;
        case 0x15f8d8u: goto label_15f8d8;
        case 0x15f8dcu: goto label_15f8dc;
        case 0x15f8e0u: goto label_15f8e0;
        case 0x15f8e4u: goto label_15f8e4;
        case 0x15f8e8u: goto label_15f8e8;
        case 0x15f8ecu: goto label_15f8ec;
        case 0x15f8f0u: goto label_15f8f0;
        case 0x15f8f4u: goto label_15f8f4;
        case 0x15f8f8u: goto label_15f8f8;
        case 0x15f8fcu: goto label_15f8fc;
        case 0x15f900u: goto label_15f900;
        case 0x15f904u: goto label_15f904;
        case 0x15f908u: goto label_15f908;
        case 0x15f90cu: goto label_15f90c;
        case 0x15f910u: goto label_15f910;
        case 0x15f914u: goto label_15f914;
        case 0x15f918u: goto label_15f918;
        case 0x15f91cu: goto label_15f91c;
        case 0x15f920u: goto label_15f920;
        case 0x15f924u: goto label_15f924;
        case 0x15f928u: goto label_15f928;
        case 0x15f92cu: goto label_15f92c;
        case 0x15f930u: goto label_15f930;
        case 0x15f934u: goto label_15f934;
        case 0x15f938u: goto label_15f938;
        case 0x15f93cu: goto label_15f93c;
        case 0x15f940u: goto label_15f940;
        case 0x15f944u: goto label_15f944;
        case 0x15f948u: goto label_15f948;
        case 0x15f94cu: goto label_15f94c;
        case 0x15f950u: goto label_15f950;
        case 0x15f954u: goto label_15f954;
        case 0x15f958u: goto label_15f958;
        case 0x15f95cu: goto label_15f95c;
        case 0x15f960u: goto label_15f960;
        case 0x15f964u: goto label_15f964;
        case 0x15f968u: goto label_15f968;
        case 0x15f96cu: goto label_15f96c;
        case 0x15f970u: goto label_15f970;
        case 0x15f974u: goto label_15f974;
        case 0x15f978u: goto label_15f978;
        case 0x15f97cu: goto label_15f97c;
        case 0x15f980u: goto label_15f980;
        case 0x15f984u: goto label_15f984;
        case 0x15f988u: goto label_15f988;
        case 0x15f98cu: goto label_15f98c;
        case 0x15f990u: goto label_15f990;
        case 0x15f994u: goto label_15f994;
        case 0x15f998u: goto label_15f998;
        case 0x15f99cu: goto label_15f99c;
        case 0x15f9a0u: goto label_15f9a0;
        case 0x15f9a4u: goto label_15f9a4;
        case 0x15f9a8u: goto label_15f9a8;
        case 0x15f9acu: goto label_15f9ac;
        case 0x15f9b0u: goto label_15f9b0;
        case 0x15f9b4u: goto label_15f9b4;
        case 0x15f9b8u: goto label_15f9b8;
        case 0x15f9bcu: goto label_15f9bc;
        case 0x15f9c0u: goto label_15f9c0;
        case 0x15f9c4u: goto label_15f9c4;
        case 0x15f9c8u: goto label_15f9c8;
        case 0x15f9ccu: goto label_15f9cc;
        case 0x15f9d0u: goto label_15f9d0;
        case 0x15f9d4u: goto label_15f9d4;
        case 0x15f9d8u: goto label_15f9d8;
        case 0x15f9dcu: goto label_15f9dc;
        case 0x15f9e0u: goto label_15f9e0;
        case 0x15f9e4u: goto label_15f9e4;
        case 0x15f9e8u: goto label_15f9e8;
        case 0x15f9ecu: goto label_15f9ec;
        case 0x15f9f0u: goto label_15f9f0;
        case 0x15f9f4u: goto label_15f9f4;
        case 0x15f9f8u: goto label_15f9f8;
        case 0x15f9fcu: goto label_15f9fc;
        case 0x15fa00u: goto label_15fa00;
        case 0x15fa04u: goto label_15fa04;
        case 0x15fa08u: goto label_15fa08;
        case 0x15fa0cu: goto label_15fa0c;
        case 0x15fa10u: goto label_15fa10;
        case 0x15fa14u: goto label_15fa14;
        case 0x15fa18u: goto label_15fa18;
        case 0x15fa1cu: goto label_15fa1c;
        case 0x15fa20u: goto label_15fa20;
        case 0x15fa24u: goto label_15fa24;
        case 0x15fa28u: goto label_15fa28;
        case 0x15fa2cu: goto label_15fa2c;
        case 0x15fa30u: goto label_15fa30;
        case 0x15fa34u: goto label_15fa34;
        case 0x15fa38u: goto label_15fa38;
        case 0x15fa3cu: goto label_15fa3c;
        case 0x15fa40u: goto label_15fa40;
        case 0x15fa44u: goto label_15fa44;
        case 0x15fa48u: goto label_15fa48;
        case 0x15fa4cu: goto label_15fa4c;
        case 0x15fa50u: goto label_15fa50;
        case 0x15fa54u: goto label_15fa54;
        case 0x15fa58u: goto label_15fa58;
        case 0x15fa5cu: goto label_15fa5c;
        case 0x15fa60u: goto label_15fa60;
        case 0x15fa64u: goto label_15fa64;
        case 0x15fa68u: goto label_15fa68;
        case 0x15fa6cu: goto label_15fa6c;
        case 0x15fa70u: goto label_15fa70;
        case 0x15fa74u: goto label_15fa74;
        case 0x15fa78u: goto label_15fa78;
        case 0x15fa7cu: goto label_15fa7c;
        case 0x15fa80u: goto label_15fa80;
        case 0x15fa84u: goto label_15fa84;
        case 0x15fa88u: goto label_15fa88;
        case 0x15fa8cu: goto label_15fa8c;
        case 0x15fa90u: goto label_15fa90;
        case 0x15fa94u: goto label_15fa94;
        case 0x15fa98u: goto label_15fa98;
        case 0x15fa9cu: goto label_15fa9c;
        case 0x15faa0u: goto label_15faa0;
        case 0x15faa4u: goto label_15faa4;
        case 0x15faa8u: goto label_15faa8;
        case 0x15faacu: goto label_15faac;
        case 0x15fab0u: goto label_15fab0;
        case 0x15fab4u: goto label_15fab4;
        case 0x15fab8u: goto label_15fab8;
        case 0x15fabcu: goto label_15fabc;
        case 0x15fac0u: goto label_15fac0;
        case 0x15fac4u: goto label_15fac4;
        case 0x15fac8u: goto label_15fac8;
        case 0x15faccu: goto label_15facc;
        case 0x15fad0u: goto label_15fad0;
        case 0x15fad4u: goto label_15fad4;
        case 0x15fad8u: goto label_15fad8;
        case 0x15fadcu: goto label_15fadc;
        default: break;
    }

    ctx->pc = 0x15f6a0u;

label_15f6a0:
    // 0x15f6a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15f6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_15f6a4:
    // 0x15f6a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15f6a8:
    // 0x15f6a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15f6ac:
    // 0x15f6ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15f6b0:
    // 0x15f6b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15f6b4:
    // 0x15f6b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15f6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f6b8:
    // 0x15f6b8: 0x12200100  beqz        $s1, . + 4 + (0x100 << 2)
label_15f6bc:
    if (ctx->pc == 0x15F6BCu) {
        ctx->pc = 0x15F6BCu;
            // 0x15f6bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F6C0u;
        goto label_15f6c0;
    }
    ctx->pc = 0x15F6B8u;
    {
        const bool branch_taken_0x15f6b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6B8u;
            // 0x15f6bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6b8) {
            ctx->pc = 0x15FABCu;
            goto label_15fabc;
        }
    }
    ctx->pc = 0x15F6C0u;
label_15f6c0:
    // 0x15f6c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x15f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_15f6c4:
    // 0x15f6c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x15f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_15f6c8:
    // 0x15f6c8: 0x2463cc80  addiu       $v1, $v1, -0x3380
    ctx->pc = 0x15f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954112));
label_15f6cc:
    // 0x15f6cc: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x15f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_15f6d0:
    // 0x15f6d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x15f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_15f6d4:
    // 0x15f6d4: 0xc057b2c  jal         func_15ECB0
label_15f6d8:
    if (ctx->pc == 0x15F6D8u) {
        ctx->pc = 0x15F6D8u;
            // 0x15f6d8: 0xac40d128  sw          $zero, -0x2ED8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955304), GPR_U32(ctx, 0));
        ctx->pc = 0x15F6DCu;
        goto label_15f6dc;
    }
    ctx->pc = 0x15F6D4u;
    SET_GPR_U32(ctx, 31, 0x15F6DCu);
    ctx->pc = 0x15F6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6D4u;
            // 0x15f6d8: 0xac40d128  sw          $zero, -0x2ED8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECB0u;
    if (runtime->hasFunction(0x15ECB0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6DCu; }
        if (ctx->pc != 0x15F6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECB0_0x15ecb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6DCu; }
        if (ctx->pc != 0x15F6DCu) { return; }
    }
    ctx->pc = 0x15F6DCu;
label_15f6dc:
    // 0x15f6dc: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_15f6e0:
    if (ctx->pc == 0x15F6E0u) {
        ctx->pc = 0x15F6E0u;
            // 0x15f6e0: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->pc = 0x15F6E4u;
        goto label_15f6e4;
    }
    ctx->pc = 0x15F6DCu;
    {
        const bool branch_taken_0x15f6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f6dc) {
            ctx->pc = 0x15F6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6DCu;
            // 0x15f6e0: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F73Cu;
            goto label_15f73c;
        }
    }
    ctx->pc = 0x15F6E4u;
label_15f6e4:
    // 0x15f6e4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x15f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_15f6e8:
    // 0x15f6e8: 0xc057b28  jal         func_15ECA0
label_15f6ec:
    if (ctx->pc == 0x15F6ECu) {
        ctx->pc = 0x15F6ECu;
            // 0x15f6ec: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->pc = 0x15F6F0u;
        goto label_15f6f0;
    }
    ctx->pc = 0x15F6E8u;
    SET_GPR_U32(ctx, 31, 0x15F6F0u);
    ctx->pc = 0x15F6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6E8u;
            // 0x15f6ec: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECA0u;
    if (runtime->hasFunction(0x15ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6F0u; }
        if (ctx->pc != 0x15F6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECA0_0x15eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6F0u; }
        if (ctx->pc != 0x15F6F0u) { return; }
    }
    ctx->pc = 0x15F6F0u;
label_15f6f0:
    // 0x15f6f0: 0xc057b24  jal         func_15EC90
label_15f6f4:
    if (ctx->pc == 0x15F6F4u) {
        ctx->pc = 0x15F6F4u;
            // 0x15f6f4: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->pc = 0x15F6F8u;
        goto label_15f6f8;
    }
    ctx->pc = 0x15F6F0u;
    SET_GPR_U32(ctx, 31, 0x15F6F8u);
    ctx->pc = 0x15F6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6F0u;
            // 0x15f6f4: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EC90u;
    if (runtime->hasFunction(0x15EC90u)) {
        auto targetFn = runtime->lookupFunction(0x15EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6F8u; }
        if (ctx->pc != 0x15F6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EC90_0x15ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6F8u; }
        if (ctx->pc != 0x15F6F8u) { return; }
    }
    ctx->pc = 0x15F6F8u;
label_15f6f8:
    // 0x15f6f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15f6fc:
    // 0x15f6fc: 0xc057ac0  jal         func_15EB00
label_15f700:
    if (ctx->pc == 0x15F700u) {
        ctx->pc = 0x15F700u;
            // 0x15f700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F704u;
        goto label_15f704;
    }
    ctx->pc = 0x15F6FCu;
    SET_GPR_U32(ctx, 31, 0x15F704u);
    ctx->pc = 0x15F700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6FCu;
            // 0x15f700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EB00u;
    if (runtime->hasFunction(0x15EB00u)) {
        auto targetFn = runtime->lookupFunction(0x15EB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F704u; }
        if (ctx->pc != 0x15F704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EB00_0x15eb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F704u; }
        if (ctx->pc != 0x15F704u) { return; }
    }
    ctx->pc = 0x15F704u;
label_15f704:
    // 0x15f704: 0xc057ab8  jal         func_15EAE0
label_15f708:
    if (ctx->pc == 0x15F708u) {
        ctx->pc = 0x15F708u;
            // 0x15f708: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->pc = 0x15F70Cu;
        goto label_15f70c;
    }
    ctx->pc = 0x15F704u;
    SET_GPR_U32(ctx, 31, 0x15F70Cu);
    ctx->pc = 0x15F708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F704u;
            // 0x15f708: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAE0u;
    if (runtime->hasFunction(0x15EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F70Cu; }
        if (ctx->pc != 0x15F70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAE0_0x15eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F70Cu; }
        if (ctx->pc != 0x15F70Cu) { return; }
    }
    ctx->pc = 0x15F70Cu;
label_15f70c:
    // 0x15f70c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f70cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f710:
    // 0x15f710: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15f714:
    // 0x15f714: 0xc057ab4  jal         func_15EAD0
label_15f718:
    if (ctx->pc == 0x15F718u) {
        ctx->pc = 0x15F718u;
            // 0x15f718: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->pc = 0x15F71Cu;
        goto label_15f71c;
    }
    ctx->pc = 0x15F714u;
    SET_GPR_U32(ctx, 31, 0x15F71Cu);
    ctx->pc = 0x15F718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F714u;
            // 0x15f718: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F71Cu; }
        if (ctx->pc != 0x15F71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F71Cu; }
        if (ctx->pc != 0x15F71Cu) { return; }
    }
    ctx->pc = 0x15F71Cu;
label_15f71c:
    // 0x15f71c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f720:
    // 0x15f720: 0xc057aac  jal         func_15EAB0
label_15f724:
    if (ctx->pc == 0x15F724u) {
        ctx->pc = 0x15F724u;
            // 0x15f724: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x15F728u;
        goto label_15f728;
    }
    ctx->pc = 0x15F720u;
    SET_GPR_U32(ctx, 31, 0x15F728u);
    ctx->pc = 0x15F724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F720u;
            // 0x15f724: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F728u; }
        if (ctx->pc != 0x15F728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F728u; }
        if (ctx->pc != 0x15F728u) { return; }
    }
    ctx->pc = 0x15F728u;
label_15f728:
    // 0x15f728: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15f72c:
    if (ctx->pc == 0x15F72Cu) {
        ctx->pc = 0x15F730u;
        goto label_15f730;
    }
    ctx->pc = 0x15F728u;
    {
        const bool branch_taken_0x15f728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f728) {
            ctx->pc = 0x15F6F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f6f0;
        }
    }
    ctx->pc = 0x15F730u;
label_15f730:
    // 0x15f730: 0xc057a9c  jal         func_15EA70
label_15f734:
    if (ctx->pc == 0x15F734u) {
        ctx->pc = 0x15F734u;
            // 0x15f734: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->pc = 0x15F738u;
        goto label_15f738;
    }
    ctx->pc = 0x15F730u;
    SET_GPR_U32(ctx, 31, 0x15F738u);
    ctx->pc = 0x15F734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F730u;
            // 0x15f734: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EA70u;
    if (runtime->hasFunction(0x15EA70u)) {
        auto targetFn = runtime->lookupFunction(0x15EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F738u; }
        if (ctx->pc != 0x15F738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EA70_0x15ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F738u; }
        if (ctx->pc != 0x15F738u) { return; }
    }
    ctx->pc = 0x15F738u;
label_15f738:
    // 0x15f738: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x15f738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
label_15f73c:
    // 0x15f73c: 0xc057b2c  jal         func_15ECB0
label_15f740:
    if (ctx->pc == 0x15F740u) {
        ctx->pc = 0x15F744u;
        goto label_15f744;
    }
    ctx->pc = 0x15F73Cu;
    SET_GPR_U32(ctx, 31, 0x15F744u);
    ctx->pc = 0x15ECB0u;
    if (runtime->hasFunction(0x15ECB0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F744u; }
        if (ctx->pc != 0x15F744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECB0_0x15ecb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F744u; }
        if (ctx->pc != 0x15F744u) { return; }
    }
    ctx->pc = 0x15F744u;
label_15f744:
    // 0x15f744: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_15f748:
    if (ctx->pc == 0x15F748u) {
        ctx->pc = 0x15F748u;
            // 0x15f748: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x15F74Cu;
        goto label_15f74c;
    }
    ctx->pc = 0x15F744u;
    {
        const bool branch_taken_0x15f744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f744) {
            ctx->pc = 0x15F748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F744u;
            // 0x15f748: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F7B8u;
            goto label_15f7b8;
        }
    }
    ctx->pc = 0x15F74Cu;
label_15f74c:
    // 0x15f74c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x15f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_15f750:
    // 0x15f750: 0xc057b28  jal         func_15ECA0
label_15f754:
    if (ctx->pc == 0x15F754u) {
        ctx->pc = 0x15F754u;
            // 0x15f754: 0x26250108  addiu       $a1, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->pc = 0x15F758u;
        goto label_15f758;
    }
    ctx->pc = 0x15F750u;
    SET_GPR_U32(ctx, 31, 0x15F758u);
    ctx->pc = 0x15F754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F750u;
            // 0x15f754: 0x26250108  addiu       $a1, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECA0u;
    if (runtime->hasFunction(0x15ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F758u; }
        if (ctx->pc != 0x15F758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECA0_0x15eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F758u; }
        if (ctx->pc != 0x15F758u) { return; }
    }
    ctx->pc = 0x15F758u;
label_15f758:
    // 0x15f758: 0xc057b24  jal         func_15EC90
label_15f75c:
    if (ctx->pc == 0x15F75Cu) {
        ctx->pc = 0x15F75Cu;
            // 0x15f75c: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x15F760u;
        goto label_15f760;
    }
    ctx->pc = 0x15F758u;
    SET_GPR_U32(ctx, 31, 0x15F760u);
    ctx->pc = 0x15F75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F758u;
            // 0x15f75c: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EC90u;
    if (runtime->hasFunction(0x15EC90u)) {
        auto targetFn = runtime->lookupFunction(0x15EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F760u; }
        if (ctx->pc != 0x15F760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EC90_0x15ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F760u; }
        if (ctx->pc != 0x15F760u) { return; }
    }
    ctx->pc = 0x15F760u;
label_15f760:
    // 0x15f760: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15f760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15f764:
    // 0x15f764: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_15f768:
    if (ctx->pc == 0x15F768u) {
        ctx->pc = 0x15F76Cu;
        goto label_15f76c;
    }
    ctx->pc = 0x15F764u;
    {
        const bool branch_taken_0x15f764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f764) {
            ctx->pc = 0x15F780u;
            goto label_15f780;
        }
    }
    ctx->pc = 0x15F76Cu;
label_15f76c:
    // 0x15f76c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15f76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f770:
    // 0x15f770: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x15f770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_15f774:
    // 0x15f774: 0x320f809  jalr        $t9
label_15f778:
    if (ctx->pc == 0x15F778u) {
        ctx->pc = 0x15F778u;
            // 0x15f778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15F77Cu;
        goto label_15f77c;
    }
    ctx->pc = 0x15F774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F77Cu);
        ctx->pc = 0x15F778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F774u;
            // 0x15f778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15F77Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F77Cu; }
            if (ctx->pc != 0x15F77Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15F77Cu;
label_15f77c:
    // 0x15f77c: 0x0  nop
    ctx->pc = 0x15f77cu;
    // NOP
label_15f780:
    // 0x15f780: 0xc057ab8  jal         func_15EAE0
label_15f784:
    if (ctx->pc == 0x15F784u) {
        ctx->pc = 0x15F784u;
            // 0x15f784: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x15F788u;
        goto label_15f788;
    }
    ctx->pc = 0x15F780u;
    SET_GPR_U32(ctx, 31, 0x15F788u);
    ctx->pc = 0x15F784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F780u;
            // 0x15f784: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAE0u;
    if (runtime->hasFunction(0x15EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F788u; }
        if (ctx->pc != 0x15F788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAE0_0x15eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F788u; }
        if (ctx->pc != 0x15F788u) { return; }
    }
    ctx->pc = 0x15F788u;
label_15f788:
    // 0x15f788: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f78c:
    // 0x15f78c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x15f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_15f790:
    // 0x15f790: 0xc057ab4  jal         func_15EAD0
label_15f794:
    if (ctx->pc == 0x15F794u) {
        ctx->pc = 0x15F794u;
            // 0x15f794: 0x26250108  addiu       $a1, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->pc = 0x15F798u;
        goto label_15f798;
    }
    ctx->pc = 0x15F790u;
    SET_GPR_U32(ctx, 31, 0x15F798u);
    ctx->pc = 0x15F794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F790u;
            // 0x15f794: 0x26250108  addiu       $a1, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F798u; }
        if (ctx->pc != 0x15F798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F798u; }
        if (ctx->pc != 0x15F798u) { return; }
    }
    ctx->pc = 0x15F798u;
label_15f798:
    // 0x15f798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f79c:
    // 0x15f79c: 0xc057aac  jal         func_15EAB0
label_15f7a0:
    if (ctx->pc == 0x15F7A0u) {
        ctx->pc = 0x15F7A0u;
            // 0x15f7a0: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->pc = 0x15F7A4u;
        goto label_15f7a4;
    }
    ctx->pc = 0x15F79Cu;
    SET_GPR_U32(ctx, 31, 0x15F7A4u);
    ctx->pc = 0x15F7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F79Cu;
            // 0x15f7a0: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7A4u; }
        if (ctx->pc != 0x15F7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7A4u; }
        if (ctx->pc != 0x15F7A4u) { return; }
    }
    ctx->pc = 0x15F7A4u;
label_15f7a4:
    // 0x15f7a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_15f7a8:
    if (ctx->pc == 0x15F7A8u) {
        ctx->pc = 0x15F7ACu;
        goto label_15f7ac;
    }
    ctx->pc = 0x15F7A4u;
    {
        const bool branch_taken_0x15f7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f7a4) {
            ctx->pc = 0x15F758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f758;
        }
    }
    ctx->pc = 0x15F7ACu;
label_15f7ac:
    // 0x15f7ac: 0xc057a9c  jal         func_15EA70
label_15f7b0:
    if (ctx->pc == 0x15F7B0u) {
        ctx->pc = 0x15F7B0u;
            // 0x15f7b0: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->pc = 0x15F7B4u;
        goto label_15f7b4;
    }
    ctx->pc = 0x15F7ACu;
    SET_GPR_U32(ctx, 31, 0x15F7B4u);
    ctx->pc = 0x15F7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7ACu;
            // 0x15f7b0: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EA70u;
    if (runtime->hasFunction(0x15EA70u)) {
        auto targetFn = runtime->lookupFunction(0x15EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7B4u; }
        if (ctx->pc != 0x15F7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EA70_0x15ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7B4u; }
        if (ctx->pc != 0x15F7B4u) { return; }
    }
    ctx->pc = 0x15F7B4u;
label_15f7b4:
    // 0x15f7b4: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x15f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_15f7b8:
    // 0x15f7b8: 0xc057a64  jal         func_15E990
label_15f7bc:
    if (ctx->pc == 0x15F7BCu) {
        ctx->pc = 0x15F7C0u;
        goto label_15f7c0;
    }
    ctx->pc = 0x15F7B8u;
    SET_GPR_U32(ctx, 31, 0x15F7C0u);
    ctx->pc = 0x15E990u;
    if (runtime->hasFunction(0x15E990u)) {
        auto targetFn = runtime->lookupFunction(0x15E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7C0u; }
        if (ctx->pc != 0x15F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E990_0x15e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7C0u; }
        if (ctx->pc != 0x15F7C0u) { return; }
    }
    ctx->pc = 0x15F7C0u;
label_15f7c0:
    // 0x15f7c0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_15f7c4:
    if (ctx->pc == 0x15F7C4u) {
        ctx->pc = 0x15F7C4u;
            // 0x15f7c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x15F7C8u;
        goto label_15f7c8;
    }
    ctx->pc = 0x15F7C0u;
    {
        const bool branch_taken_0x15f7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f7c0) {
            ctx->pc = 0x15F7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7C0u;
            // 0x15f7c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F820u;
            goto label_15f820;
        }
    }
    ctx->pc = 0x15F7C8u;
label_15f7c8:
    // 0x15f7c8: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x15f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_15f7cc:
    // 0x15f7cc: 0xc057a60  jal         func_15E980
label_15f7d0:
    if (ctx->pc == 0x15F7D0u) {
        ctx->pc = 0x15F7D0u;
            // 0x15f7d0: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x15F7D4u;
        goto label_15f7d4;
    }
    ctx->pc = 0x15F7CCu;
    SET_GPR_U32(ctx, 31, 0x15F7D4u);
    ctx->pc = 0x15F7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7CCu;
            // 0x15f7d0: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E980u;
    if (runtime->hasFunction(0x15E980u)) {
        auto targetFn = runtime->lookupFunction(0x15E980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7D4u; }
        if (ctx->pc != 0x15F7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E980_0x15e980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7D4u; }
        if (ctx->pc != 0x15F7D4u) { return; }
    }
    ctx->pc = 0x15F7D4u;
label_15f7d4:
    // 0x15f7d4: 0xc057a54  jal         func_15E950
label_15f7d8:
    if (ctx->pc == 0x15F7D8u) {
        ctx->pc = 0x15F7D8u;
            // 0x15f7d8: 0x27a40054  addiu       $a0, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->pc = 0x15F7DCu;
        goto label_15f7dc;
    }
    ctx->pc = 0x15F7D4u;
    SET_GPR_U32(ctx, 31, 0x15F7DCu);
    ctx->pc = 0x15F7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7D4u;
            // 0x15f7d8: 0x27a40054  addiu       $a0, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E950u;
    if (runtime->hasFunction(0x15E950u)) {
        auto targetFn = runtime->lookupFunction(0x15E950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7DCu; }
        if (ctx->pc != 0x15F7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E950_0x15e950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7DCu; }
        if (ctx->pc != 0x15F7DCu) { return; }
    }
    ctx->pc = 0x15F7DCu;
label_15f7dc:
    // 0x15f7dc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f7e0:
    // 0x15f7e0: 0xc057a34  jal         func_15E8D0
label_15f7e4:
    if (ctx->pc == 0x15F7E4u) {
        ctx->pc = 0x15F7E4u;
            // 0x15f7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F7E8u;
        goto label_15f7e8;
    }
    ctx->pc = 0x15F7E0u;
    SET_GPR_U32(ctx, 31, 0x15F7E8u);
    ctx->pc = 0x15F7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7E0u;
            // 0x15f7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E8D0u;
    if (runtime->hasFunction(0x15E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x15E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7E8u; }
        if (ctx->pc != 0x15F7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E8D0_0x15e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7E8u; }
        if (ctx->pc != 0x15F7E8u) { return; }
    }
    ctx->pc = 0x15F7E8u;
label_15f7e8:
    // 0x15f7e8: 0xc057a28  jal         func_15E8A0
label_15f7ec:
    if (ctx->pc == 0x15F7ECu) {
        ctx->pc = 0x15F7ECu;
            // 0x15f7ec: 0x27a40054  addiu       $a0, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->pc = 0x15F7F0u;
        goto label_15f7f0;
    }
    ctx->pc = 0x15F7E8u;
    SET_GPR_U32(ctx, 31, 0x15F7F0u);
    ctx->pc = 0x15F7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7E8u;
            // 0x15f7ec: 0x27a40054  addiu       $a0, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E8A0u;
    if (runtime->hasFunction(0x15E8A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7F0u; }
        if (ctx->pc != 0x15F7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E8A0_0x15e8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7F0u; }
        if (ctx->pc != 0x15F7F0u) { return; }
    }
    ctx->pc = 0x15F7F0u;
label_15f7f0:
    // 0x15f7f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f7f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f7f4:
    // 0x15f7f4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x15f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_15f7f8:
    // 0x15f7f8: 0xc057a24  jal         func_15E890
label_15f7fc:
    if (ctx->pc == 0x15F7FCu) {
        ctx->pc = 0x15F7FCu;
            // 0x15f7fc: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x15F800u;
        goto label_15f800;
    }
    ctx->pc = 0x15F7F8u;
    SET_GPR_U32(ctx, 31, 0x15F800u);
    ctx->pc = 0x15F7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7F8u;
            // 0x15f7fc: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E890u;
    if (runtime->hasFunction(0x15E890u)) {
        auto targetFn = runtime->lookupFunction(0x15E890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F800u; }
        if (ctx->pc != 0x15F800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E890_0x15e890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F800u; }
        if (ctx->pc != 0x15F800u) { return; }
    }
    ctx->pc = 0x15F800u;
label_15f800:
    // 0x15f800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f804:
    // 0x15f804: 0xc057a1c  jal         func_15E870
label_15f808:
    if (ctx->pc == 0x15F808u) {
        ctx->pc = 0x15F808u;
            // 0x15f808: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x15F80Cu;
        goto label_15f80c;
    }
    ctx->pc = 0x15F804u;
    SET_GPR_U32(ctx, 31, 0x15F80Cu);
    ctx->pc = 0x15F808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F804u;
            // 0x15f808: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E870u;
    if (runtime->hasFunction(0x15E870u)) {
        auto targetFn = runtime->lookupFunction(0x15E870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F80Cu; }
        if (ctx->pc != 0x15F80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E870_0x15e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F80Cu; }
        if (ctx->pc != 0x15F80Cu) { return; }
    }
    ctx->pc = 0x15F80Cu;
label_15f80c:
    // 0x15f80c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15f810:
    if (ctx->pc == 0x15F810u) {
        ctx->pc = 0x15F814u;
        goto label_15f814;
    }
    ctx->pc = 0x15F80Cu;
    {
        const bool branch_taken_0x15f80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f80c) {
            ctx->pc = 0x15F7D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f7d4;
        }
    }
    ctx->pc = 0x15F814u;
label_15f814:
    // 0x15f814: 0xc057a18  jal         func_15E860
label_15f818:
    if (ctx->pc == 0x15F818u) {
        ctx->pc = 0x15F818u;
            // 0x15f818: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x15F81Cu;
        goto label_15f81c;
    }
    ctx->pc = 0x15F814u;
    SET_GPR_U32(ctx, 31, 0x15F81Cu);
    ctx->pc = 0x15F818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F814u;
            // 0x15f818: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E860u;
    if (runtime->hasFunction(0x15E860u)) {
        auto targetFn = runtime->lookupFunction(0x15E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F81Cu; }
        if (ctx->pc != 0x15F81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E860_0x15e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F81Cu; }
        if (ctx->pc != 0x15F81Cu) { return; }
    }
    ctx->pc = 0x15F81Cu;
label_15f81c:
    // 0x15f81c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15f820:
    // 0x15f820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f824:
    // 0x15f824: 0xc0578d4  jal         func_15E350
label_15f828:
    if (ctx->pc == 0x15F828u) {
        ctx->pc = 0x15F828u;
            // 0x15f828: 0xa2220124  sb          $v0, 0x124($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 292), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x15F82Cu;
        goto label_15f82c;
    }
    ctx->pc = 0x15F824u;
    SET_GPR_U32(ctx, 31, 0x15F82Cu);
    ctx->pc = 0x15F828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F824u;
            // 0x15f828: 0xa2220124  sb          $v0, 0x124($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 292), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E350u;
    if (runtime->hasFunction(0x15E350u)) {
        auto targetFn = runtime->lookupFunction(0x15E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F82Cu; }
        if (ctx->pc != 0x15F82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E350_0x15e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F82Cu; }
        if (ctx->pc != 0x15F82Cu) { return; }
    }
    ctx->pc = 0x15F82Cu;
label_15f82c:
    // 0x15f82c: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x15f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_15f830:
    // 0x15f830: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
label_15f834:
    if (ctx->pc == 0x15F834u) {
        ctx->pc = 0x15F834u;
            // 0x15f834: 0x8e250098  lw          $a1, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->pc = 0x15F838u;
        goto label_15f838;
    }
    ctx->pc = 0x15F830u;
    {
        const bool branch_taken_0x15f830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f830) {
            ctx->pc = 0x15F834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F830u;
            // 0x15f834: 0x8e250098  lw          $a1, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F8FCu;
            goto label_15f8fc;
        }
    }
    ctx->pc = 0x15F838u;
label_15f838:
    // 0x15f838: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x15f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_15f83c:
    // 0x15f83c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x15f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_15f840:
    // 0x15f840: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x15f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_15f844:
    // 0x15f844: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_15f848:
    // 0x15f848: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15f848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_15f84c:
    // 0x15f84c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_15f850:
    if (ctx->pc == 0x15F850u) {
        ctx->pc = 0x15F854u;
        goto label_15f854;
    }
    ctx->pc = 0x15F84Cu;
    {
        const bool branch_taken_0x15f84c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f84c) {
            ctx->pc = 0x15F890u;
            goto label_15f890;
        }
    }
    ctx->pc = 0x15F854u;
label_15f854:
    // 0x15f854: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_15f858:
    if (ctx->pc == 0x15F858u) {
        ctx->pc = 0x15F85Cu;
        goto label_15f85c;
    }
    ctx->pc = 0x15F854u;
    {
        const bool branch_taken_0x15f854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f854) {
            ctx->pc = 0x15F890u;
            goto label_15f890;
        }
    }
    ctx->pc = 0x15F85Cu;
label_15f85c:
    // 0x15f85c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_15f860:
    if (ctx->pc == 0x15F860u) {
        ctx->pc = 0x15F864u;
        goto label_15f864;
    }
    ctx->pc = 0x15F85Cu;
    {
        const bool branch_taken_0x15f85c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f85c) {
            ctx->pc = 0x15F890u;
            goto label_15f890;
        }
    }
    ctx->pc = 0x15F864u;
label_15f864:
    // 0x15f864: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_15f868:
    if (ctx->pc == 0x15F868u) {
        ctx->pc = 0x15F86Cu;
        goto label_15f86c;
    }
    ctx->pc = 0x15F864u;
    {
        const bool branch_taken_0x15f864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f864) {
            ctx->pc = 0x15F890u;
            goto label_15f890;
        }
    }
    ctx->pc = 0x15F86Cu;
label_15f86c:
    // 0x15f86c: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x15f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_15f870:
    // 0x15f870: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x15f870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_15f874:
    // 0x15f874: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x15f874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_15f878:
    // 0x15f878: 0x27a60094  addiu       $a2, $sp, 0x94
    ctx->pc = 0x15f878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_15f87c:
    // 0x15f87c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x15f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_15f880:
    // 0x15f880: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15f884:
    // 0x15f884: 0xc05827c  jal         func_1609F0
label_15f888:
    if (ctx->pc == 0x15F888u) {
        ctx->pc = 0x15F888u;
            // 0x15f888: 0xafa20094  sw          $v0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
        ctx->pc = 0x15F88Cu;
        goto label_15f88c;
    }
    ctx->pc = 0x15F884u;
    SET_GPR_U32(ctx, 31, 0x15F88Cu);
    ctx->pc = 0x15F888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F884u;
            // 0x15f888: 0xafa20094  sw          $v0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F88Cu; }
        if (ctx->pc != 0x15F88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F88Cu; }
        if (ctx->pc != 0x15F88Cu) { return; }
    }
    ctx->pc = 0x15F88Cu;
label_15f88c:
    // 0x15f88c: 0x0  nop
    ctx->pc = 0x15f88cu;
    // NOP
label_15f890:
    // 0x15f890: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x15f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_15f894:
    // 0x15f894: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15f894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_15f898:
    // 0x15f898: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15f898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_15f89c:
    // 0x15f89c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_15f8a0:
    if (ctx->pc == 0x15F8A0u) {
        ctx->pc = 0x15F8A4u;
        goto label_15f8a4;
    }
    ctx->pc = 0x15F89Cu;
    {
        const bool branch_taken_0x15f89c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f89c) {
            ctx->pc = 0x15F8B8u;
            goto label_15f8b8;
        }
    }
    ctx->pc = 0x15F8A4u;
label_15f8a4:
    // 0x15f8a4: 0xc0fe48c  jal         func_3F9230
label_15f8a8:
    if (ctx->pc == 0x15F8A8u) {
        ctx->pc = 0x15F8A8u;
            // 0x15f8a8: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->pc = 0x15F8ACu;
        goto label_15f8ac;
    }
    ctx->pc = 0x15F8A4u;
    SET_GPR_U32(ctx, 31, 0x15F8ACu);
    ctx->pc = 0x15F8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8A4u;
            // 0x15f8a8: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8ACu; }
        if (ctx->pc != 0x15F8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8ACu; }
        if (ctx->pc != 0x15F8ACu) { return; }
    }
    ctx->pc = 0x15F8ACu;
label_15f8ac:
    // 0x15f8ac: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x15f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_15f8b0:
    // 0x15f8b0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_15f8b4:
    // 0x15f8b4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x15f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_15f8b8:
    // 0x15f8b8: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_15f8bc:
    // 0x15f8bc: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x15f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_15f8c0:
    // 0x15f8c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_15f8c4:
    if (ctx->pc == 0x15F8C4u) {
        ctx->pc = 0x15F8C8u;
        goto label_15f8c8;
    }
    ctx->pc = 0x15F8C0u;
    {
        const bool branch_taken_0x15f8c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f8c0) {
            ctx->pc = 0x15F8D8u;
            goto label_15f8d8;
        }
    }
    ctx->pc = 0x15F8C8u;
label_15f8c8:
    // 0x15f8c8: 0xc0fe48c  jal         func_3F9230
label_15f8cc:
    if (ctx->pc == 0x15F8CCu) {
        ctx->pc = 0x15F8CCu;
            // 0x15f8cc: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->pc = 0x15F8D0u;
        goto label_15f8d0;
    }
    ctx->pc = 0x15F8C8u;
    SET_GPR_U32(ctx, 31, 0x15F8D0u);
    ctx->pc = 0x15F8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8C8u;
            // 0x15f8cc: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8D0u; }
        if (ctx->pc != 0x15F8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8D0u; }
        if (ctx->pc != 0x15F8D0u) { return; }
    }
    ctx->pc = 0x15F8D0u;
label_15f8d0:
    // 0x15f8d0: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_15f8d4:
    // 0x15f8d4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x15f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_15f8d8:
    // 0x15f8d8: 0xc057fa4  jal         func_15FE90
label_15f8dc:
    if (ctx->pc == 0x15F8DCu) {
        ctx->pc = 0x15F8DCu;
            // 0x15f8dc: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->pc = 0x15F8E0u;
        goto label_15f8e0;
    }
    ctx->pc = 0x15F8D8u;
    SET_GPR_U32(ctx, 31, 0x15F8E0u);
    ctx->pc = 0x15F8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8D8u;
            // 0x15f8dc: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FE90u;
    if (runtime->hasFunction(0x15FE90u)) {
        auto targetFn = runtime->lookupFunction(0x15FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8E0u; }
        if (ctx->pc != 0x15F8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE90_0x15fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8E0u; }
        if (ctx->pc != 0x15F8E0u) { return; }
    }
    ctx->pc = 0x15F8E0u;
label_15f8e0:
    // 0x15f8e0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x15f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_15f8e4:
    // 0x15f8e4: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_15f8e8:
    // 0x15f8e8: 0x5462ffd6  bnel        $v1, $v0, . + 4 + (-0x2A << 2)
label_15f8ec:
    if (ctx->pc == 0x15F8ECu) {
        ctx->pc = 0x15F8ECu;
            // 0x15f8ec: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->pc = 0x15F8F0u;
        goto label_15f8f0;
    }
    ctx->pc = 0x15F8E8u;
    {
        const bool branch_taken_0x15f8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f8e8) {
            ctx->pc = 0x15F8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8E8u;
            // 0x15f8ec: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f844;
        }
    }
    ctx->pc = 0x15F8F0u;
label_15f8f0:
    // 0x15f8f0: 0xc058148  jal         func_160520
label_15f8f4:
    if (ctx->pc == 0x15F8F4u) {
        ctx->pc = 0x15F8F4u;
            // 0x15f8f4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->pc = 0x15F8F8u;
        goto label_15f8f8;
    }
    ctx->pc = 0x15F8F0u;
    SET_GPR_U32(ctx, 31, 0x15F8F8u);
    ctx->pc = 0x15F8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8F0u;
            // 0x15f8f4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160520u;
    if (runtime->hasFunction(0x160520u)) {
        auto targetFn = runtime->lookupFunction(0x160520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8F8u; }
        if (ctx->pc != 0x15F8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160520_0x160520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8F8u; }
        if (ctx->pc != 0x15F8F8u) { return; }
    }
    ctx->pc = 0x15F8F8u;
label_15f8f8:
    // 0x15f8f8: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x15f8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_15f8fc:
    // 0x15f8fc: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_15f900:
    if (ctx->pc == 0x15F900u) {
        ctx->pc = 0x15F900u;
            // 0x15f900: 0x26250108  addiu       $a1, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->pc = 0x15F904u;
        goto label_15f904;
    }
    ctx->pc = 0x15F8FCu;
    {
        const bool branch_taken_0x15f8fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f8fc) {
            ctx->pc = 0x15F900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8FCu;
            // 0x15f900: 0x26250108  addiu       $a1, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F914u;
            goto label_15f914;
        }
    }
    ctx->pc = 0x15F904u;
label_15f904:
    // 0x15f904: 0xc0fe48c  jal         func_3F9230
label_15f908:
    if (ctx->pc == 0x15F908u) {
        ctx->pc = 0x15F908u;
            // 0x15f908: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x15F90Cu;
        goto label_15f90c;
    }
    ctx->pc = 0x15F904u;
    SET_GPR_U32(ctx, 31, 0x15F90Cu);
    ctx->pc = 0x15F908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F904u;
            // 0x15f908: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F90Cu; }
        if (ctx->pc != 0x15F90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F90Cu; }
        if (ctx->pc != 0x15F90Cu) { return; }
    }
    ctx->pc = 0x15F90Cu;
label_15f90c:
    // 0x15f90c: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x15f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_15f910:
    // 0x15f910: 0x26250108  addiu       $a1, $s1, 0x108
    ctx->pc = 0x15f910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
label_15f914:
    // 0x15f914: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
label_15f918:
    if (ctx->pc == 0x15F918u) {
        ctx->pc = 0x15F918u;
            // 0x15f918: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x15F91Cu;
        goto label_15f91c;
    }
    ctx->pc = 0x15F914u;
    {
        const bool branch_taken_0x15f914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f914) {
            ctx->pc = 0x15F918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F914u;
            // 0x15f918: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F958u;
            goto label_15f958;
        }
    }
    ctx->pc = 0x15F91Cu;
label_15f91c:
    // 0x15f91c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_15f920:
    if (ctx->pc == 0x15F920u) {
        ctx->pc = 0x15F924u;
        goto label_15f924;
    }
    ctx->pc = 0x15F91Cu;
    {
        const bool branch_taken_0x15f91c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f91c) {
            ctx->pc = 0x15F954u;
            goto label_15f954;
        }
    }
    ctx->pc = 0x15F924u;
label_15f924:
    // 0x15f924: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_15f928:
    if (ctx->pc == 0x15F928u) {
        ctx->pc = 0x15F92Cu;
        goto label_15f92c;
    }
    ctx->pc = 0x15F924u;
    {
        const bool branch_taken_0x15f924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f924) {
            ctx->pc = 0x15F954u;
            goto label_15f954;
        }
    }
    ctx->pc = 0x15F92Cu;
label_15f92c:
    // 0x15f92c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_15f930:
    if (ctx->pc == 0x15F930u) {
        ctx->pc = 0x15F934u;
        goto label_15f934;
    }
    ctx->pc = 0x15F92Cu;
    {
        const bool branch_taken_0x15f92c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f92c) {
            ctx->pc = 0x15F954u;
            goto label_15f954;
        }
    }
    ctx->pc = 0x15F934u;
label_15f934:
    // 0x15f934: 0x26220114  addiu       $v0, $s1, 0x114
    ctx->pc = 0x15f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
label_15f938:
    // 0x15f938: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x15f938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_15f93c:
    // 0x15f93c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x15f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_15f940:
    // 0x15f940: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x15f940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_15f944:
    // 0x15f944: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x15f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_15f948:
    // 0x15f948: 0x27a70084  addiu       $a3, $sp, 0x84
    ctx->pc = 0x15f948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_15f94c:
    // 0x15f94c: 0xc05827c  jal         func_1609F0
label_15f950:
    if (ctx->pc == 0x15F950u) {
        ctx->pc = 0x15F950u;
            // 0x15f950: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->pc = 0x15F954u;
        goto label_15f954;
    }
    ctx->pc = 0x15F94Cu;
    SET_GPR_U32(ctx, 31, 0x15F954u);
    ctx->pc = 0x15F950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F94Cu;
            // 0x15f950: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F954u; }
        if (ctx->pc != 0x15F954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F954u; }
        if (ctx->pc != 0x15F954u) { return; }
    }
    ctx->pc = 0x15F954u;
label_15f954:
    // 0x15f954: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x15f954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_15f958:
    // 0x15f958: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_15f95c:
    if (ctx->pc == 0x15F95Cu) {
        ctx->pc = 0x15F95Cu;
            // 0x15f95c: 0x262500dc  addiu       $a1, $s1, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
        ctx->pc = 0x15F960u;
        goto label_15f960;
    }
    ctx->pc = 0x15F958u;
    {
        const bool branch_taken_0x15f958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f958) {
            ctx->pc = 0x15F95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F958u;
            // 0x15f95c: 0x262500dc  addiu       $a1, $s1, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F988u;
            goto label_15f988;
        }
    }
    ctx->pc = 0x15F960u;
label_15f960:
    // 0x15f960: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_15f964:
    if (ctx->pc == 0x15F964u) {
        ctx->pc = 0x15F968u;
        goto label_15f968;
    }
    ctx->pc = 0x15F960u;
    {
        const bool branch_taken_0x15f960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f960) {
            ctx->pc = 0x15F984u;
            goto label_15f984;
        }
    }
    ctx->pc = 0x15F968u;
label_15f968:
    // 0x15f968: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_15f96c:
    if (ctx->pc == 0x15F96Cu) {
        ctx->pc = 0x15F970u;
        goto label_15f970;
    }
    ctx->pc = 0x15F968u;
    {
        const bool branch_taken_0x15f968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f968) {
            ctx->pc = 0x15F984u;
            goto label_15f984;
        }
    }
    ctx->pc = 0x15F970u;
label_15f970:
    // 0x15f970: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x15f970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_15f974:
    // 0x15f974: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_15f978:
    if (ctx->pc == 0x15F978u) {
        ctx->pc = 0x15F97Cu;
        goto label_15f97c;
    }
    ctx->pc = 0x15F974u;
    {
        const bool branch_taken_0x15f974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f974) {
            ctx->pc = 0x15F984u;
            goto label_15f984;
        }
    }
    ctx->pc = 0x15F97Cu;
label_15f97c:
    // 0x15f97c: 0xc058194  jal         func_160650
label_15f980:
    if (ctx->pc == 0x15F980u) {
        ctx->pc = 0x15F984u;
        goto label_15f984;
    }
    ctx->pc = 0x15F97Cu;
    SET_GPR_U32(ctx, 31, 0x15F984u);
    ctx->pc = 0x160650u;
    if (runtime->hasFunction(0x160650u)) {
        auto targetFn = runtime->lookupFunction(0x160650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F984u; }
        if (ctx->pc != 0x15F984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160650_0x160650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F984u; }
        if (ctx->pc != 0x15F984u) { return; }
    }
    ctx->pc = 0x15F984u;
label_15f984:
    // 0x15f984: 0x262500dc  addiu       $a1, $s1, 0xDC
    ctx->pc = 0x15f984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
label_15f988:
    // 0x15f988: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
label_15f98c:
    if (ctx->pc == 0x15F98Cu) {
        ctx->pc = 0x15F98Cu;
            // 0x15f98c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->pc = 0x15F990u;
        goto label_15f990;
    }
    ctx->pc = 0x15F988u;
    {
        const bool branch_taken_0x15f988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f988) {
            ctx->pc = 0x15F98Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F988u;
            // 0x15f98c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F9CCu;
            goto label_15f9cc;
        }
    }
    ctx->pc = 0x15F990u;
label_15f990:
    // 0x15f990: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_15f994:
    if (ctx->pc == 0x15F994u) {
        ctx->pc = 0x15F998u;
        goto label_15f998;
    }
    ctx->pc = 0x15F990u;
    {
        const bool branch_taken_0x15f990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f990) {
            ctx->pc = 0x15F9C8u;
            goto label_15f9c8;
        }
    }
    ctx->pc = 0x15F998u;
label_15f998:
    // 0x15f998: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_15f99c:
    if (ctx->pc == 0x15F99Cu) {
        ctx->pc = 0x15F9A0u;
        goto label_15f9a0;
    }
    ctx->pc = 0x15F998u;
    {
        const bool branch_taken_0x15f998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f998) {
            ctx->pc = 0x15F9C8u;
            goto label_15f9c8;
        }
    }
    ctx->pc = 0x15F9A0u;
label_15f9a0:
    // 0x15f9a0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_15f9a4:
    if (ctx->pc == 0x15F9A4u) {
        ctx->pc = 0x15F9A8u;
        goto label_15f9a8;
    }
    ctx->pc = 0x15F9A0u;
    {
        const bool branch_taken_0x15f9a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9a0) {
            ctx->pc = 0x15F9C8u;
            goto label_15f9c8;
        }
    }
    ctx->pc = 0x15F9A8u;
label_15f9a8:
    // 0x15f9a8: 0x262200e8  addiu       $v0, $s1, 0xE8
    ctx->pc = 0x15f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
label_15f9ac:
    // 0x15f9ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15f9b0:
    // 0x15f9b0: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x15f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_15f9b4:
    // 0x15f9b4: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x15f9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_15f9b8:
    // 0x15f9b8: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_15f9bc:
    // 0x15f9bc: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x15f9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_15f9c0:
    // 0x15f9c0: 0xc05827c  jal         func_1609F0
label_15f9c4:
    if (ctx->pc == 0x15F9C4u) {
        ctx->pc = 0x15F9C4u;
            // 0x15f9c4: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x15F9C8u;
        goto label_15f9c8;
    }
    ctx->pc = 0x15F9C0u;
    SET_GPR_U32(ctx, 31, 0x15F9C8u);
    ctx->pc = 0x15F9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9C0u;
            // 0x15f9c4: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9C8u; }
        if (ctx->pc != 0x15F9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9C8u; }
        if (ctx->pc != 0x15F9C8u) { return; }
    }
    ctx->pc = 0x15F9C8u;
label_15f9c8:
    // 0x15f9c8: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x15f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_15f9cc:
    // 0x15f9cc: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_15f9d0:
    if (ctx->pc == 0x15F9D0u) {
        ctx->pc = 0x15F9D0u;
            // 0x15f9d0: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->pc = 0x15F9D4u;
        goto label_15f9d4;
    }
    ctx->pc = 0x15F9CCu;
    {
        const bool branch_taken_0x15f9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9cc) {
            ctx->pc = 0x15F9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9CCu;
            // 0x15f9d0: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F9FCu;
            goto label_15f9fc;
        }
    }
    ctx->pc = 0x15F9D4u;
label_15f9d4:
    // 0x15f9d4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_15f9d8:
    if (ctx->pc == 0x15F9D8u) {
        ctx->pc = 0x15F9DCu;
        goto label_15f9dc;
    }
    ctx->pc = 0x15F9D4u;
    {
        const bool branch_taken_0x15f9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9d4) {
            ctx->pc = 0x15F9F8u;
            goto label_15f9f8;
        }
    }
    ctx->pc = 0x15F9DCu;
label_15f9dc:
    // 0x15f9dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_15f9e0:
    if (ctx->pc == 0x15F9E0u) {
        ctx->pc = 0x15F9E4u;
        goto label_15f9e4;
    }
    ctx->pc = 0x15F9DCu;
    {
        const bool branch_taken_0x15f9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9dc) {
            ctx->pc = 0x15F9F8u;
            goto label_15f9f8;
        }
    }
    ctx->pc = 0x15F9E4u;
label_15f9e4:
    // 0x15f9e4: 0x8e2500d0  lw          $a1, 0xD0($s1)
    ctx->pc = 0x15f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_15f9e8:
    // 0x15f9e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_15f9ec:
    if (ctx->pc == 0x15F9ECu) {
        ctx->pc = 0x15F9F0u;
        goto label_15f9f0;
    }
    ctx->pc = 0x15F9E8u;
    {
        const bool branch_taken_0x15f9e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9e8) {
            ctx->pc = 0x15F9F8u;
            goto label_15f9f8;
        }
    }
    ctx->pc = 0x15F9F0u;
label_15f9f0:
    // 0x15f9f0: 0xc0580a0  jal         func_160280
label_15f9f4:
    if (ctx->pc == 0x15F9F4u) {
        ctx->pc = 0x15F9F8u;
        goto label_15f9f8;
    }
    ctx->pc = 0x15F9F0u;
    SET_GPR_U32(ctx, 31, 0x15F9F8u);
    ctx->pc = 0x160280u;
    if (runtime->hasFunction(0x160280u)) {
        auto targetFn = runtime->lookupFunction(0x160280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9F8u; }
        if (ctx->pc != 0x15F9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160280_0x160280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9F8u; }
        if (ctx->pc != 0x15F9F8u) { return; }
    }
    ctx->pc = 0x15F9F8u;
label_15f9f8:
    // 0x15f9f8: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x15f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_15f9fc:
    // 0x15f9fc: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
label_15fa00:
    if (ctx->pc == 0x15FA00u) {
        ctx->pc = 0x15FA00u;
            // 0x15fa00: 0x2625009c  addiu       $a1, $s1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
        ctx->pc = 0x15FA04u;
        goto label_15fa04;
    }
    ctx->pc = 0x15F9FCu;
    {
        const bool branch_taken_0x15f9fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9fc) {
            ctx->pc = 0x15FA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9FCu;
            // 0x15fa00: 0x2625009c  addiu       $a1, $s1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FA40u;
            goto label_15fa40;
        }
    }
    ctx->pc = 0x15FA04u;
label_15fa04:
    // 0x15fa04: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_15fa08:
    if (ctx->pc == 0x15FA08u) {
        ctx->pc = 0x15FA0Cu;
        goto label_15fa0c;
    }
    ctx->pc = 0x15FA04u;
    {
        const bool branch_taken_0x15fa04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa04) {
            ctx->pc = 0x15FA3Cu;
            goto label_15fa3c;
        }
    }
    ctx->pc = 0x15FA0Cu;
label_15fa0c:
    // 0x15fa0c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_15fa10:
    if (ctx->pc == 0x15FA10u) {
        ctx->pc = 0x15FA14u;
        goto label_15fa14;
    }
    ctx->pc = 0x15FA0Cu;
    {
        const bool branch_taken_0x15fa0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa0c) {
            ctx->pc = 0x15FA3Cu;
            goto label_15fa3c;
        }
    }
    ctx->pc = 0x15FA14u;
label_15fa14:
    // 0x15fa14: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_15fa18:
    if (ctx->pc == 0x15FA18u) {
        ctx->pc = 0x15FA1Cu;
        goto label_15fa1c;
    }
    ctx->pc = 0x15FA14u;
    {
        const bool branch_taken_0x15fa14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa14) {
            ctx->pc = 0x15FA3Cu;
            goto label_15fa3c;
        }
    }
    ctx->pc = 0x15FA1Cu;
label_15fa1c:
    // 0x15fa1c: 0x262200bc  addiu       $v0, $s1, 0xBC
    ctx->pc = 0x15fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
label_15fa20:
    // 0x15fa20: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x15fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_15fa24:
    // 0x15fa24: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x15fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_15fa28:
    // 0x15fa28: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15fa28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15fa2c:
    // 0x15fa2c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x15fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_15fa30:
    // 0x15fa30: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x15fa30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_15fa34:
    // 0x15fa34: 0xc05827c  jal         func_1609F0
label_15fa38:
    if (ctx->pc == 0x15FA38u) {
        ctx->pc = 0x15FA38u;
            // 0x15fa38: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x15FA3Cu;
        goto label_15fa3c;
    }
    ctx->pc = 0x15FA34u;
    SET_GPR_U32(ctx, 31, 0x15FA3Cu);
    ctx->pc = 0x15FA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA34u;
            // 0x15fa38: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA3Cu; }
        if (ctx->pc != 0x15FA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA3Cu; }
        if (ctx->pc != 0x15FA3Cu) { return; }
    }
    ctx->pc = 0x15FA3Cu;
label_15fa3c:
    // 0x15fa3c: 0x2625009c  addiu       $a1, $s1, 0x9C
    ctx->pc = 0x15fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
label_15fa40:
    // 0x15fa40: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
label_15fa44:
    if (ctx->pc == 0x15FA44u) {
        ctx->pc = 0x15FA44u;
            // 0x15fa44: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->pc = 0x15FA48u;
        goto label_15fa48;
    }
    ctx->pc = 0x15FA40u;
    {
        const bool branch_taken_0x15fa40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa40) {
            ctx->pc = 0x15FA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA40u;
            // 0x15fa44: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FA84u;
            goto label_15fa84;
        }
    }
    ctx->pc = 0x15FA48u;
label_15fa48:
    // 0x15fa48: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_15fa4c:
    if (ctx->pc == 0x15FA4Cu) {
        ctx->pc = 0x15FA50u;
        goto label_15fa50;
    }
    ctx->pc = 0x15FA48u;
    {
        const bool branch_taken_0x15fa48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa48) {
            ctx->pc = 0x15FA80u;
            goto label_15fa80;
        }
    }
    ctx->pc = 0x15FA50u;
label_15fa50:
    // 0x15fa50: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_15fa54:
    if (ctx->pc == 0x15FA54u) {
        ctx->pc = 0x15FA58u;
        goto label_15fa58;
    }
    ctx->pc = 0x15FA50u;
    {
        const bool branch_taken_0x15fa50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa50) {
            ctx->pc = 0x15FA80u;
            goto label_15fa80;
        }
    }
    ctx->pc = 0x15FA58u;
label_15fa58:
    // 0x15fa58: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_15fa5c:
    if (ctx->pc == 0x15FA5Cu) {
        ctx->pc = 0x15FA60u;
        goto label_15fa60;
    }
    ctx->pc = 0x15FA58u;
    {
        const bool branch_taken_0x15fa58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa58) {
            ctx->pc = 0x15FA80u;
            goto label_15fa80;
        }
    }
    ctx->pc = 0x15FA60u;
label_15fa60:
    // 0x15fa60: 0x262200a8  addiu       $v0, $s1, 0xA8
    ctx->pc = 0x15fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_15fa64:
    // 0x15fa64: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x15fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_15fa68:
    // 0x15fa68: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x15fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_15fa6c:
    // 0x15fa6c: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x15fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_15fa70:
    // 0x15fa70: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x15fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_15fa74:
    // 0x15fa74: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x15fa74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15fa78:
    // 0x15fa78: 0xc05827c  jal         func_1609F0
label_15fa7c:
    if (ctx->pc == 0x15FA7Cu) {
        ctx->pc = 0x15FA7Cu;
            // 0x15fa7c: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x15FA80u;
        goto label_15fa80;
    }
    ctx->pc = 0x15FA78u;
    SET_GPR_U32(ctx, 31, 0x15FA80u);
    ctx->pc = 0x15FA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA78u;
            // 0x15fa7c: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA80u; }
        if (ctx->pc != 0x15FA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA80u; }
        if (ctx->pc != 0x15FA80u) { return; }
    }
    ctx->pc = 0x15FA80u;
label_15fa80:
    // 0x15fa80: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x15fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_15fa84:
    // 0x15fa84: 0xc0fe620  jal         func_3F9880
label_15fa88:
    if (ctx->pc == 0x15FA88u) {
        ctx->pc = 0x15FA88u;
            // 0x15fa88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x15FA8Cu;
        goto label_15fa8c;
    }
    ctx->pc = 0x15FA84u;
    SET_GPR_U32(ctx, 31, 0x15FA8Cu);
    ctx->pc = 0x15FA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA84u;
            // 0x15fa88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9880u;
    if (runtime->hasFunction(0x3F9880u)) {
        auto targetFn = runtime->lookupFunction(0x3F9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA8Cu; }
        if (ctx->pc != 0x15FA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9880_0x3f9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA8Cu; }
        if (ctx->pc != 0x15FA8Cu) { return; }
    }
    ctx->pc = 0x15FA8Cu;
label_15fa8c:
    // 0x15fa8c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x15fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_15fa90:
    // 0x15fa90: 0xc0fe620  jal         func_3F9880
label_15fa94:
    if (ctx->pc == 0x15FA94u) {
        ctx->pc = 0x15FA94u;
            // 0x15fa94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x15FA98u;
        goto label_15fa98;
    }
    ctx->pc = 0x15FA90u;
    SET_GPR_U32(ctx, 31, 0x15FA98u);
    ctx->pc = 0x15FA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA90u;
            // 0x15fa94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9880u;
    if (runtime->hasFunction(0x3F9880u)) {
        auto targetFn = runtime->lookupFunction(0x3F9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA98u; }
        if (ctx->pc != 0x15FA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9880_0x3f9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA98u; }
        if (ctx->pc != 0x15FA98u) { return; }
    }
    ctx->pc = 0x15FA98u;
label_15fa98:
    // 0x15fa98: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x15fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_15fa9c:
    // 0x15fa9c: 0xc0fe620  jal         func_3F9880
label_15faa0:
    if (ctx->pc == 0x15FAA0u) {
        ctx->pc = 0x15FAA0u;
            // 0x15faa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x15FAA4u;
        goto label_15faa4;
    }
    ctx->pc = 0x15FA9Cu;
    SET_GPR_U32(ctx, 31, 0x15FAA4u);
    ctx->pc = 0x15FAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA9Cu;
            // 0x15faa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9880u;
    if (runtime->hasFunction(0x3F9880u)) {
        auto targetFn = runtime->lookupFunction(0x3F9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAA4u; }
        if (ctx->pc != 0x15FAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9880_0x3f9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAA4u; }
        if (ctx->pc != 0x15FAA4u) { return; }
    }
    ctx->pc = 0x15FAA4u;
label_15faa4:
    // 0x15faa4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15faa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_15faa8:
    // 0x15faa8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15faa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15faac:
    // 0x15faac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_15fab0:
    if (ctx->pc == 0x15FAB0u) {
        ctx->pc = 0x15FAB0u;
            // 0x15fab0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FAB4u;
        goto label_15fab4;
    }
    ctx->pc = 0x15FAACu;
    {
        const bool branch_taken_0x15faac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15faac) {
            ctx->pc = 0x15FAB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAACu;
            // 0x15fab0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FAC0u;
            goto label_15fac0;
        }
    }
    ctx->pc = 0x15FAB4u;
label_15fab4:
    // 0x15fab4: 0xc0400a8  jal         func_1002A0
label_15fab8:
    if (ctx->pc == 0x15FAB8u) {
        ctx->pc = 0x15FAB8u;
            // 0x15fab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FABCu;
        goto label_15fabc;
    }
    ctx->pc = 0x15FAB4u;
    SET_GPR_U32(ctx, 31, 0x15FABCu);
    ctx->pc = 0x15FAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAB4u;
            // 0x15fab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FABCu; }
        if (ctx->pc != 0x15FABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FABCu; }
        if (ctx->pc != 0x15FABCu) { return; }
    }
    ctx->pc = 0x15FABCu;
label_15fabc:
    // 0x15fabc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15fabcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15fac0:
    // 0x15fac0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15fac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15fac4:
    // 0x15fac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15fac8:
    // 0x15fac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15facc:
    // 0x15facc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15faccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15fad0:
    // 0x15fad0: 0x3e00008  jr          $ra
label_15fad4:
    if (ctx->pc == 0x15FAD4u) {
        ctx->pc = 0x15FAD4u;
            // 0x15fad4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x15FAD8u;
        goto label_15fad8;
    }
    ctx->pc = 0x15FAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAD0u;
            // 0x15fad4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FAD8u;
label_15fad8:
    // 0x15fad8: 0x0  nop
    ctx->pc = 0x15fad8u;
    // NOP
label_15fadc:
    // 0x15fadc: 0x0  nop
    ctx->pc = 0x15fadcu;
    // NOP
}
