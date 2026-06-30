#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DC760
// Address: 0x4dc760 - 0x4dca90
void sub_004DC760_0x4dc760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC760_0x4dc760");
#endif

    switch (ctx->pc) {
        case 0x4dc760u: goto label_4dc760;
        case 0x4dc764u: goto label_4dc764;
        case 0x4dc768u: goto label_4dc768;
        case 0x4dc76cu: goto label_4dc76c;
        case 0x4dc770u: goto label_4dc770;
        case 0x4dc774u: goto label_4dc774;
        case 0x4dc778u: goto label_4dc778;
        case 0x4dc77cu: goto label_4dc77c;
        case 0x4dc780u: goto label_4dc780;
        case 0x4dc784u: goto label_4dc784;
        case 0x4dc788u: goto label_4dc788;
        case 0x4dc78cu: goto label_4dc78c;
        case 0x4dc790u: goto label_4dc790;
        case 0x4dc794u: goto label_4dc794;
        case 0x4dc798u: goto label_4dc798;
        case 0x4dc79cu: goto label_4dc79c;
        case 0x4dc7a0u: goto label_4dc7a0;
        case 0x4dc7a4u: goto label_4dc7a4;
        case 0x4dc7a8u: goto label_4dc7a8;
        case 0x4dc7acu: goto label_4dc7ac;
        case 0x4dc7b0u: goto label_4dc7b0;
        case 0x4dc7b4u: goto label_4dc7b4;
        case 0x4dc7b8u: goto label_4dc7b8;
        case 0x4dc7bcu: goto label_4dc7bc;
        case 0x4dc7c0u: goto label_4dc7c0;
        case 0x4dc7c4u: goto label_4dc7c4;
        case 0x4dc7c8u: goto label_4dc7c8;
        case 0x4dc7ccu: goto label_4dc7cc;
        case 0x4dc7d0u: goto label_4dc7d0;
        case 0x4dc7d4u: goto label_4dc7d4;
        case 0x4dc7d8u: goto label_4dc7d8;
        case 0x4dc7dcu: goto label_4dc7dc;
        case 0x4dc7e0u: goto label_4dc7e0;
        case 0x4dc7e4u: goto label_4dc7e4;
        case 0x4dc7e8u: goto label_4dc7e8;
        case 0x4dc7ecu: goto label_4dc7ec;
        case 0x4dc7f0u: goto label_4dc7f0;
        case 0x4dc7f4u: goto label_4dc7f4;
        case 0x4dc7f8u: goto label_4dc7f8;
        case 0x4dc7fcu: goto label_4dc7fc;
        case 0x4dc800u: goto label_4dc800;
        case 0x4dc804u: goto label_4dc804;
        case 0x4dc808u: goto label_4dc808;
        case 0x4dc80cu: goto label_4dc80c;
        case 0x4dc810u: goto label_4dc810;
        case 0x4dc814u: goto label_4dc814;
        case 0x4dc818u: goto label_4dc818;
        case 0x4dc81cu: goto label_4dc81c;
        case 0x4dc820u: goto label_4dc820;
        case 0x4dc824u: goto label_4dc824;
        case 0x4dc828u: goto label_4dc828;
        case 0x4dc82cu: goto label_4dc82c;
        case 0x4dc830u: goto label_4dc830;
        case 0x4dc834u: goto label_4dc834;
        case 0x4dc838u: goto label_4dc838;
        case 0x4dc83cu: goto label_4dc83c;
        case 0x4dc840u: goto label_4dc840;
        case 0x4dc844u: goto label_4dc844;
        case 0x4dc848u: goto label_4dc848;
        case 0x4dc84cu: goto label_4dc84c;
        case 0x4dc850u: goto label_4dc850;
        case 0x4dc854u: goto label_4dc854;
        case 0x4dc858u: goto label_4dc858;
        case 0x4dc85cu: goto label_4dc85c;
        case 0x4dc860u: goto label_4dc860;
        case 0x4dc864u: goto label_4dc864;
        case 0x4dc868u: goto label_4dc868;
        case 0x4dc86cu: goto label_4dc86c;
        case 0x4dc870u: goto label_4dc870;
        case 0x4dc874u: goto label_4dc874;
        case 0x4dc878u: goto label_4dc878;
        case 0x4dc87cu: goto label_4dc87c;
        case 0x4dc880u: goto label_4dc880;
        case 0x4dc884u: goto label_4dc884;
        case 0x4dc888u: goto label_4dc888;
        case 0x4dc88cu: goto label_4dc88c;
        case 0x4dc890u: goto label_4dc890;
        case 0x4dc894u: goto label_4dc894;
        case 0x4dc898u: goto label_4dc898;
        case 0x4dc89cu: goto label_4dc89c;
        case 0x4dc8a0u: goto label_4dc8a0;
        case 0x4dc8a4u: goto label_4dc8a4;
        case 0x4dc8a8u: goto label_4dc8a8;
        case 0x4dc8acu: goto label_4dc8ac;
        case 0x4dc8b0u: goto label_4dc8b0;
        case 0x4dc8b4u: goto label_4dc8b4;
        case 0x4dc8b8u: goto label_4dc8b8;
        case 0x4dc8bcu: goto label_4dc8bc;
        case 0x4dc8c0u: goto label_4dc8c0;
        case 0x4dc8c4u: goto label_4dc8c4;
        case 0x4dc8c8u: goto label_4dc8c8;
        case 0x4dc8ccu: goto label_4dc8cc;
        case 0x4dc8d0u: goto label_4dc8d0;
        case 0x4dc8d4u: goto label_4dc8d4;
        case 0x4dc8d8u: goto label_4dc8d8;
        case 0x4dc8dcu: goto label_4dc8dc;
        case 0x4dc8e0u: goto label_4dc8e0;
        case 0x4dc8e4u: goto label_4dc8e4;
        case 0x4dc8e8u: goto label_4dc8e8;
        case 0x4dc8ecu: goto label_4dc8ec;
        case 0x4dc8f0u: goto label_4dc8f0;
        case 0x4dc8f4u: goto label_4dc8f4;
        case 0x4dc8f8u: goto label_4dc8f8;
        case 0x4dc8fcu: goto label_4dc8fc;
        case 0x4dc900u: goto label_4dc900;
        case 0x4dc904u: goto label_4dc904;
        case 0x4dc908u: goto label_4dc908;
        case 0x4dc90cu: goto label_4dc90c;
        case 0x4dc910u: goto label_4dc910;
        case 0x4dc914u: goto label_4dc914;
        case 0x4dc918u: goto label_4dc918;
        case 0x4dc91cu: goto label_4dc91c;
        case 0x4dc920u: goto label_4dc920;
        case 0x4dc924u: goto label_4dc924;
        case 0x4dc928u: goto label_4dc928;
        case 0x4dc92cu: goto label_4dc92c;
        case 0x4dc930u: goto label_4dc930;
        case 0x4dc934u: goto label_4dc934;
        case 0x4dc938u: goto label_4dc938;
        case 0x4dc93cu: goto label_4dc93c;
        case 0x4dc940u: goto label_4dc940;
        case 0x4dc944u: goto label_4dc944;
        case 0x4dc948u: goto label_4dc948;
        case 0x4dc94cu: goto label_4dc94c;
        case 0x4dc950u: goto label_4dc950;
        case 0x4dc954u: goto label_4dc954;
        case 0x4dc958u: goto label_4dc958;
        case 0x4dc95cu: goto label_4dc95c;
        case 0x4dc960u: goto label_4dc960;
        case 0x4dc964u: goto label_4dc964;
        case 0x4dc968u: goto label_4dc968;
        case 0x4dc96cu: goto label_4dc96c;
        case 0x4dc970u: goto label_4dc970;
        case 0x4dc974u: goto label_4dc974;
        case 0x4dc978u: goto label_4dc978;
        case 0x4dc97cu: goto label_4dc97c;
        case 0x4dc980u: goto label_4dc980;
        case 0x4dc984u: goto label_4dc984;
        case 0x4dc988u: goto label_4dc988;
        case 0x4dc98cu: goto label_4dc98c;
        case 0x4dc990u: goto label_4dc990;
        case 0x4dc994u: goto label_4dc994;
        case 0x4dc998u: goto label_4dc998;
        case 0x4dc99cu: goto label_4dc99c;
        case 0x4dc9a0u: goto label_4dc9a0;
        case 0x4dc9a4u: goto label_4dc9a4;
        case 0x4dc9a8u: goto label_4dc9a8;
        case 0x4dc9acu: goto label_4dc9ac;
        case 0x4dc9b0u: goto label_4dc9b0;
        case 0x4dc9b4u: goto label_4dc9b4;
        case 0x4dc9b8u: goto label_4dc9b8;
        case 0x4dc9bcu: goto label_4dc9bc;
        case 0x4dc9c0u: goto label_4dc9c0;
        case 0x4dc9c4u: goto label_4dc9c4;
        case 0x4dc9c8u: goto label_4dc9c8;
        case 0x4dc9ccu: goto label_4dc9cc;
        case 0x4dc9d0u: goto label_4dc9d0;
        case 0x4dc9d4u: goto label_4dc9d4;
        case 0x4dc9d8u: goto label_4dc9d8;
        case 0x4dc9dcu: goto label_4dc9dc;
        case 0x4dc9e0u: goto label_4dc9e0;
        case 0x4dc9e4u: goto label_4dc9e4;
        case 0x4dc9e8u: goto label_4dc9e8;
        case 0x4dc9ecu: goto label_4dc9ec;
        case 0x4dc9f0u: goto label_4dc9f0;
        case 0x4dc9f4u: goto label_4dc9f4;
        case 0x4dc9f8u: goto label_4dc9f8;
        case 0x4dc9fcu: goto label_4dc9fc;
        case 0x4dca00u: goto label_4dca00;
        case 0x4dca04u: goto label_4dca04;
        case 0x4dca08u: goto label_4dca08;
        case 0x4dca0cu: goto label_4dca0c;
        case 0x4dca10u: goto label_4dca10;
        case 0x4dca14u: goto label_4dca14;
        case 0x4dca18u: goto label_4dca18;
        case 0x4dca1cu: goto label_4dca1c;
        case 0x4dca20u: goto label_4dca20;
        case 0x4dca24u: goto label_4dca24;
        case 0x4dca28u: goto label_4dca28;
        case 0x4dca2cu: goto label_4dca2c;
        case 0x4dca30u: goto label_4dca30;
        case 0x4dca34u: goto label_4dca34;
        case 0x4dca38u: goto label_4dca38;
        case 0x4dca3cu: goto label_4dca3c;
        case 0x4dca40u: goto label_4dca40;
        case 0x4dca44u: goto label_4dca44;
        case 0x4dca48u: goto label_4dca48;
        case 0x4dca4cu: goto label_4dca4c;
        case 0x4dca50u: goto label_4dca50;
        case 0x4dca54u: goto label_4dca54;
        case 0x4dca58u: goto label_4dca58;
        case 0x4dca5cu: goto label_4dca5c;
        case 0x4dca60u: goto label_4dca60;
        case 0x4dca64u: goto label_4dca64;
        case 0x4dca68u: goto label_4dca68;
        case 0x4dca6cu: goto label_4dca6c;
        case 0x4dca70u: goto label_4dca70;
        case 0x4dca74u: goto label_4dca74;
        case 0x4dca78u: goto label_4dca78;
        case 0x4dca7cu: goto label_4dca7c;
        case 0x4dca80u: goto label_4dca80;
        case 0x4dca84u: goto label_4dca84;
        case 0x4dca88u: goto label_4dca88;
        case 0x4dca8cu: goto label_4dca8c;
        default: break;
    }

    ctx->pc = 0x4dc760u;

label_4dc760:
    // 0x4dc760: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4dc760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4dc764:
    // 0x4dc764: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4dc764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4dc768:
    // 0x4dc768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dc768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dc76c:
    // 0x4dc76c: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4dc76cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
label_4dc770:
    // 0x4dc770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dc770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dc774:
    // 0x4dc774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dc774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc778:
    // 0x4dc778: 0xc1372dc  jal         func_4DCB70
label_4dc77c:
    if (ctx->pc == 0x4DC77Cu) {
        ctx->pc = 0x4DC77Cu;
            // 0x4dc77c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4DC780u;
        goto label_4dc780;
    }
    ctx->pc = 0x4DC778u;
    SET_GPR_U32(ctx, 31, 0x4DC780u);
    ctx->pc = 0x4DC77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC778u;
            // 0x4dc77c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DCB70u;
    if (runtime->hasFunction(0x4DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x4DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC780u; }
        if (ctx->pc != 0x4DC780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DCB70_0x4dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC780u; }
        if (ctx->pc != 0x4DC780u) { return; }
    }
    ctx->pc = 0x4DC780u;
label_4dc780:
    // 0x4dc780: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dc780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dc784:
    // 0x4dc784: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dc784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dc788:
    // 0x4dc788: 0x24632d80  addiu       $v1, $v1, 0x2D80
    ctx->pc = 0x4dc788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11648));
label_4dc78c:
    // 0x4dc78c: 0x24422db8  addiu       $v0, $v0, 0x2DB8
    ctx->pc = 0x4dc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11704));
label_4dc790:
    // 0x4dc790: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dc790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4dc794:
    // 0x4dc794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dc794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dc798:
    // 0x4dc798: 0xc1372d8  jal         func_4DCB60
label_4dc79c:
    if (ctx->pc == 0x4DC79Cu) {
        ctx->pc = 0x4DC79Cu;
            // 0x4dc79c: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4DC7A0u;
        goto label_4dc7a0;
    }
    ctx->pc = 0x4DC798u;
    SET_GPR_U32(ctx, 31, 0x4DC7A0u);
    ctx->pc = 0x4DC79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC798u;
            // 0x4dc79c: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DCB60u;
    if (runtime->hasFunction(0x4DCB60u)) {
        auto targetFn = runtime->lookupFunction(0x4DCB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC7A0u; }
        if (ctx->pc != 0x4DC7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DCB60_0x4dcb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC7A0u; }
        if (ctx->pc != 0x4DC7A0u) { return; }
    }
    ctx->pc = 0x4DC7A0u;
label_4dc7a0:
    // 0x4dc7a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4dc7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4dc7a4:
    // 0x4dc7a4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4dc7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4dc7a8:
    // 0x4dc7a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dc7ac:
    // 0x4dc7ac: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4dc7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4dc7b0:
    // 0x4dc7b0: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x4dc7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
label_4dc7b4:
    // 0x4dc7b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4dc7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4dc7b8:
    // 0x4dc7b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dc7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dc7bc:
    // 0x4dc7bc: 0x24422d08  addiu       $v0, $v0, 0x2D08
    ctx->pc = 0x4dc7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11528));
label_4dc7c0:
    // 0x4dc7c0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4dc7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4dc7c4:
    // 0x4dc7c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4dc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4dc7c8:
    // 0x4dc7c8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x4dc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_4dc7cc:
    // 0x4dc7cc: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x4dc7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_4dc7d0:
    // 0x4dc7d0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4dc7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_4dc7d4:
    // 0x4dc7d4: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x4dc7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_4dc7d8:
    // 0x4dc7d8: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x4dc7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_4dc7dc:
    // 0x4dc7dc: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x4dc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_4dc7e0:
    // 0x4dc7e0: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x4dc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_4dc7e4:
    // 0x4dc7e4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4dc7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_4dc7e8:
    // 0x4dc7e8: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x4dc7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_4dc7ec:
    // 0x4dc7ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dc7f0:
    // 0x4dc7f0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4dc7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4dc7f4:
    // 0x4dc7f4: 0xc0a7a88  jal         func_29EA20
label_4dc7f8:
    if (ctx->pc == 0x4DC7F8u) {
        ctx->pc = 0x4DC7F8u;
            // 0x4dc7f8: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x4DC7FCu;
        goto label_4dc7fc;
    }
    ctx->pc = 0x4DC7F4u;
    SET_GPR_U32(ctx, 31, 0x4DC7FCu);
    ctx->pc = 0x4DC7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC7F4u;
            // 0x4dc7f8: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC7FCu; }
        if (ctx->pc != 0x4DC7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC7FCu; }
        if (ctx->pc != 0x4DC7FCu) { return; }
    }
    ctx->pc = 0x4DC7FCu;
label_4dc7fc:
    // 0x4dc7fc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4dc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4dc800:
    // 0x4dc800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4dc800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc804:
    // 0x4dc804: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_4dc808:
    if (ctx->pc == 0x4DC808u) {
        ctx->pc = 0x4DC808u;
            // 0x4dc808: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DC80Cu;
        goto label_4dc80c;
    }
    ctx->pc = 0x4DC804u;
    {
        const bool branch_taken_0x4dc804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC804u;
            // 0x4dc808: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc804) {
            ctx->pc = 0x4DC824u;
            goto label_4dc824;
        }
    }
    ctx->pc = 0x4DC80Cu;
label_4dc80c:
    // 0x4dc80c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4dc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4dc810:
    // 0x4dc810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dc810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dc814:
    // 0x4dc814: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4dc814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4dc818:
    // 0x4dc818: 0xc0804bc  jal         func_2012F0
label_4dc81c:
    if (ctx->pc == 0x4DC81Cu) {
        ctx->pc = 0x4DC81Cu;
            // 0x4dc81c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4DC820u;
        goto label_4dc820;
    }
    ctx->pc = 0x4DC818u;
    SET_GPR_U32(ctx, 31, 0x4DC820u);
    ctx->pc = 0x4DC81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC818u;
            // 0x4dc81c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC820u; }
        if (ctx->pc != 0x4DC820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC820u; }
        if (ctx->pc != 0x4DC820u) { return; }
    }
    ctx->pc = 0x4DC820u;
label_4dc820:
    // 0x4dc820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4dc820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc824:
    // 0x4dc824: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4dc824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4dc828:
    // 0x4dc828: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4dc828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4dc82c:
    // 0x4dc82c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x4dc82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_4dc830:
    // 0x4dc830: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4dc830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dc834:
    // 0x4dc834: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x4dc834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
label_4dc838:
    // 0x4dc838: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4dc838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4dc83c:
    // 0x4dc83c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x4dc83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_4dc840:
    // 0x4dc840: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4dc840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4dc844:
    // 0x4dc844: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x4dc844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_4dc848:
    // 0x4dc848: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4dc848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_4dc84c:
    // 0x4dc84c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x4dc84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_4dc850:
    // 0x4dc850: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x4dc850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_4dc854:
    // 0x4dc854: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x4dc854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_4dc858:
    // 0x4dc858: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4dc858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4dc85c:
    // 0x4dc85c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4dc85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4dc860:
    // 0x4dc860: 0xc0a3830  jal         func_28E0C0
label_4dc864:
    if (ctx->pc == 0x4DC864u) {
        ctx->pc = 0x4DC864u;
            // 0x4dc864: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4DC868u;
        goto label_4dc868;
    }
    ctx->pc = 0x4DC860u;
    SET_GPR_U32(ctx, 31, 0x4DC868u);
    ctx->pc = 0x4DC864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC860u;
            // 0x4dc864: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC868u; }
        if (ctx->pc != 0x4DC868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC868u; }
        if (ctx->pc != 0x4DC868u) { return; }
    }
    ctx->pc = 0x4DC868u;
label_4dc868:
    // 0x4dc868: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dc868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dc86c:
    // 0x4dc86c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4dc86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4dc870:
    // 0x4dc870: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4dc870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4dc874:
    // 0x4dc874: 0xc0a7a88  jal         func_29EA20
label_4dc878:
    if (ctx->pc == 0x4DC878u) {
        ctx->pc = 0x4DC878u;
            // 0x4dc878: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4DC87Cu;
        goto label_4dc87c;
    }
    ctx->pc = 0x4DC874u;
    SET_GPR_U32(ctx, 31, 0x4DC87Cu);
    ctx->pc = 0x4DC878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC874u;
            // 0x4dc878: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC87Cu; }
        if (ctx->pc != 0x4DC87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC87Cu; }
        if (ctx->pc != 0x4DC87Cu) { return; }
    }
    ctx->pc = 0x4DC87Cu;
label_4dc87c:
    // 0x4dc87c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4dc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4dc880:
    // 0x4dc880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dc880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc884:
    // 0x4dc884: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4dc888:
    if (ctx->pc == 0x4DC888u) {
        ctx->pc = 0x4DC888u;
            // 0x4dc888: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DC88Cu;
        goto label_4dc88c;
    }
    ctx->pc = 0x4DC884u;
    {
        const bool branch_taken_0x4dc884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC884u;
            // 0x4dc888: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc884) {
            ctx->pc = 0x4DC89Cu;
            goto label_4dc89c;
        }
    }
    ctx->pc = 0x4DC88Cu;
label_4dc88c:
    // 0x4dc88c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dc88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dc890:
    // 0x4dc890: 0xc082940  jal         func_20A500
label_4dc894:
    if (ctx->pc == 0x4DC894u) {
        ctx->pc = 0x4DC894u;
            // 0x4dc894: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DC898u;
        goto label_4dc898;
    }
    ctx->pc = 0x4DC890u;
    SET_GPR_U32(ctx, 31, 0x4DC898u);
    ctx->pc = 0x4DC894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC890u;
            // 0x4dc894: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC898u; }
        if (ctx->pc != 0x4DC898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC898u; }
        if (ctx->pc != 0x4DC898u) { return; }
    }
    ctx->pc = 0x4DC898u;
label_4dc898:
    // 0x4dc898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dc898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc89c:
    // 0x4dc89c: 0xae2400a8  sw          $a0, 0xA8($s1)
    ctx->pc = 0x4dc89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 4));
label_4dc8a0:
    // 0x4dc8a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x4dc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_4dc8a4:
    // 0x4dc8a4: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4dc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4dc8a8:
    // 0x4dc8a8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4dc8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_4dc8ac:
    // 0x4dc8ac: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x4dc8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_4dc8b0:
    // 0x4dc8b0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4dc8b4:
    if (ctx->pc == 0x4DC8B4u) {
        ctx->pc = 0x4DC8B4u;
            // 0x4dc8b4: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->pc = 0x4DC8B8u;
        goto label_4dc8b8;
    }
    ctx->pc = 0x4DC8B0u;
    {
        const bool branch_taken_0x4dc8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4dc8b0) {
            ctx->pc = 0x4DC8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC8B0u;
            // 0x4dc8b4: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC8C8u;
            goto label_4dc8c8;
        }
    }
    ctx->pc = 0x4DC8B8u;
label_4dc8b8:
    // 0x4dc8b8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4dc8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4dc8bc:
    // 0x4dc8bc: 0xc0a728c  jal         func_29CA30
label_4dc8c0:
    if (ctx->pc == 0x4DC8C0u) {
        ctx->pc = 0x4DC8C0u;
            // 0x4dc8c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4DC8C4u;
        goto label_4dc8c4;
    }
    ctx->pc = 0x4DC8BCu;
    SET_GPR_U32(ctx, 31, 0x4DC8C4u);
    ctx->pc = 0x4DC8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC8BCu;
            // 0x4dc8c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC8C4u; }
        if (ctx->pc != 0x4DC8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC8C4u; }
        if (ctx->pc != 0x4DC8C4u) { return; }
    }
    ctx->pc = 0x4DC8C4u;
label_4dc8c4:
    // 0x4dc8c4: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4dc8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4dc8c8:
    // 0x4dc8c8: 0x8e2500a8  lw          $a1, 0xA8($s1)
    ctx->pc = 0x4dc8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_4dc8cc:
    // 0x4dc8cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4dc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4dc8d0:
    // 0x4dc8d0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4dc8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4dc8d4:
    // 0x4dc8d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4dc8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4dc8d8:
    // 0x4dc8d8: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x4dc8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_4dc8dc:
    // 0x4dc8dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4dc8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4dc8e0:
    // 0x4dc8e0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4dc8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4dc8e4:
    // 0x4dc8e4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x4dc8e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_4dc8e8:
    // 0x4dc8e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4dc8ec:
    if (ctx->pc == 0x4DC8ECu) {
        ctx->pc = 0x4DC8F0u;
        goto label_4dc8f0;
    }
    ctx->pc = 0x4DC8E8u;
    {
        const bool branch_taken_0x4dc8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc8e8) {
            ctx->pc = 0x4DC928u;
            goto label_4dc928;
        }
    }
    ctx->pc = 0x4DC8F0u;
label_4dc8f0:
    // 0x4dc8f0: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x4dc8f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_4dc8f4:
    // 0x4dc8f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4dc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4dc8f8:
    // 0x4dc8f8: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x4dc8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_4dc8fc:
    // 0x4dc8fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4dc8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4dc900:
    // 0x4dc900: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dc900u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dc904:
    // 0x4dc904: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4dc908:
    if (ctx->pc == 0x4DC908u) {
        ctx->pc = 0x4DC90Cu;
        goto label_4dc90c;
    }
    ctx->pc = 0x4DC904u;
    {
        const bool branch_taken_0x4dc904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dc904) {
            ctx->pc = 0x4DC928u;
            goto label_4dc928;
        }
    }
    ctx->pc = 0x4DC90Cu;
label_4dc90c:
    // 0x4dc90c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4dc910:
    if (ctx->pc == 0x4DC910u) {
        ctx->pc = 0x4DC914u;
        goto label_4dc914;
    }
    ctx->pc = 0x4DC90Cu;
    {
        const bool branch_taken_0x4dc90c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc90c) {
            ctx->pc = 0x4DC928u;
            goto label_4dc928;
        }
    }
    ctx->pc = 0x4DC914u;
label_4dc914:
    // 0x4dc914: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4dc914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dc918:
    // 0x4dc918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dc918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dc91c:
    // 0x4dc91c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dc91cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dc920:
    // 0x4dc920: 0x320f809  jalr        $t9
label_4dc924:
    if (ctx->pc == 0x4DC924u) {
        ctx->pc = 0x4DC924u;
            // 0x4dc924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DC928u;
        goto label_4dc928;
    }
    ctx->pc = 0x4DC920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DC928u);
        ctx->pc = 0x4DC924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC920u;
            // 0x4dc924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DC928u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DC928u; }
            if (ctx->pc != 0x4DC928u) { return; }
        }
        }
    }
    ctx->pc = 0x4DC928u;
label_4dc928:
    // 0x4dc928: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dc928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dc92c:
    // 0x4dc92c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4dc92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4dc930:
    // 0x4dc930: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4dc930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4dc934:
    // 0x4dc934: 0xc0a7a88  jal         func_29EA20
label_4dc938:
    if (ctx->pc == 0x4DC938u) {
        ctx->pc = 0x4DC938u;
            // 0x4dc938: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4DC93Cu;
        goto label_4dc93c;
    }
    ctx->pc = 0x4DC934u;
    SET_GPR_U32(ctx, 31, 0x4DC93Cu);
    ctx->pc = 0x4DC938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC934u;
            // 0x4dc938: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC93Cu; }
        if (ctx->pc != 0x4DC93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC93Cu; }
        if (ctx->pc != 0x4DC93Cu) { return; }
    }
    ctx->pc = 0x4DC93Cu;
label_4dc93c:
    // 0x4dc93c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4dc93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4dc940:
    // 0x4dc940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dc940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc944:
    // 0x4dc944: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4dc948:
    if (ctx->pc == 0x4DC948u) {
        ctx->pc = 0x4DC948u;
            // 0x4dc948: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DC94Cu;
        goto label_4dc94c;
    }
    ctx->pc = 0x4DC944u;
    {
        const bool branch_taken_0x4dc944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC944u;
            // 0x4dc948: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc944) {
            ctx->pc = 0x4DC95Cu;
            goto label_4dc95c;
        }
    }
    ctx->pc = 0x4DC94Cu;
label_4dc94c:
    // 0x4dc94c: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x4dc94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4dc950:
    // 0x4dc950: 0xc081c54  jal         func_207150
label_4dc954:
    if (ctx->pc == 0x4DC954u) {
        ctx->pc = 0x4DC954u;
            // 0x4dc954: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4DC958u;
        goto label_4dc958;
    }
    ctx->pc = 0x4DC950u;
    SET_GPR_U32(ctx, 31, 0x4DC958u);
    ctx->pc = 0x4DC954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC950u;
            // 0x4dc954: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207150u;
    if (runtime->hasFunction(0x207150u)) {
        auto targetFn = runtime->lookupFunction(0x207150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC958u; }
        if (ctx->pc != 0x4DC958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207150_0x207150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC958u; }
        if (ctx->pc != 0x4DC958u) { return; }
    }
    ctx->pc = 0x4DC958u;
label_4dc958:
    // 0x4dc958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dc958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc95c:
    // 0x4dc95c: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x4dc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_4dc960:
    // 0x4dc960: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4dc960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4dc964:
    // 0x4dc964: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4dc964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4dc968:
    // 0x4dc968: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4dc968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4dc96c:
    // 0x4dc96c: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x4dc96cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_4dc970:
    // 0x4dc970: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_4dc974:
    if (ctx->pc == 0x4DC974u) {
        ctx->pc = 0x4DC974u;
            // 0x4dc974: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC978u;
        goto label_4dc978;
    }
    ctx->pc = 0x4DC970u;
    {
        const bool branch_taken_0x4dc970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4DC974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC970u;
            // 0x4dc974: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc970) {
            ctx->pc = 0x4DC97Cu;
            goto label_4dc97c;
        }
    }
    ctx->pc = 0x4DC978u;
label_4dc978:
    // 0x4dc978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4dc978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dc97c:
    // 0x4dc97c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4dc97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4dc980:
    // 0x4dc980: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4dc980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4dc984:
    // 0x4dc984: 0x24428038  addiu       $v0, $v0, -0x7FC8
    ctx->pc = 0x4dc984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934584));
label_4dc988:
    // 0x4dc988: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4dc988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4dc98c:
    // 0x4dc98c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4dc98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4dc990:
    // 0x4dc990: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4dc990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dc994:
    // 0x4dc994: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4dc994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4dc998:
    // 0x4dc998: 0xc0b61c4  jal         func_2D8710
label_4dc99c:
    if (ctx->pc == 0x4DC99Cu) {
        ctx->pc = 0x4DC99Cu;
            // 0x4dc99c: 0xe440aa68  swc1        $f0, -0x5598($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294945384), bits); }
        ctx->pc = 0x4DC9A0u;
        goto label_4dc9a0;
    }
    ctx->pc = 0x4DC998u;
    SET_GPR_U32(ctx, 31, 0x4DC9A0u);
    ctx->pc = 0x4DC99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC998u;
            // 0x4dc99c: 0xe440aa68  swc1        $f0, -0x5598($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294945384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC9A0u; }
        if (ctx->pc != 0x4DC9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC9A0u; }
        if (ctx->pc != 0x4DC9A0u) { return; }
    }
    ctx->pc = 0x4DC9A0u;
label_4dc9a0:
    // 0x4dc9a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4dc9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dc9a4:
    // 0x4dc9a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dc9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dc9a8:
    // 0x4dc9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dc9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc9ac:
    // 0x4dc9ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dc9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc9b0:
    // 0x4dc9b0: 0x3e00008  jr          $ra
label_4dc9b4:
    if (ctx->pc == 0x4DC9B4u) {
        ctx->pc = 0x4DC9B4u;
            // 0x4dc9b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4DC9B8u;
        goto label_4dc9b8;
    }
    ctx->pc = 0x4DC9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC9B0u;
            // 0x4dc9b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DC9B8u;
label_4dc9b8:
    // 0x4dc9b8: 0x0  nop
    ctx->pc = 0x4dc9b8u;
    // NOP
label_4dc9bc:
    // 0x4dc9bc: 0x0  nop
    ctx->pc = 0x4dc9bcu;
    // NOP
label_4dc9c0:
    // 0x4dc9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dc9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dc9c4:
    // 0x4dc9c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dc9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dc9c8:
    // 0x4dc9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dc9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dc9cc:
    // 0x4dc9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dc9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dc9d0:
    // 0x4dc9d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dc9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc9d4:
    // 0x4dc9d4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_4dc9d8:
    if (ctx->pc == 0x4DC9D8u) {
        ctx->pc = 0x4DC9D8u;
            // 0x4dc9d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC9DCu;
        goto label_4dc9dc;
    }
    ctx->pc = 0x4DC9D4u;
    {
        const bool branch_taken_0x4dc9d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC9D4u;
            // 0x4dc9d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc9d4) {
            ctx->pc = 0x4DCA74u;
            goto label_4dca74;
        }
    }
    ctx->pc = 0x4DC9DCu;
label_4dc9dc:
    // 0x4dc9dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dc9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dc9e0:
    // 0x4dc9e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dc9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dc9e4:
    // 0x4dc9e4: 0x24632d80  addiu       $v1, $v1, 0x2D80
    ctx->pc = 0x4dc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11648));
label_4dc9e8:
    // 0x4dc9e8: 0x24422db8  addiu       $v0, $v0, 0x2DB8
    ctx->pc = 0x4dc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11704));
label_4dc9ec:
    // 0x4dc9ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4dc9f0:
    // 0x4dc9f0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_4dc9f4:
    if (ctx->pc == 0x4DC9F4u) {
        ctx->pc = 0x4DC9F4u;
            // 0x4dc9f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4DC9F8u;
        goto label_4dc9f8;
    }
    ctx->pc = 0x4DC9F0u;
    {
        const bool branch_taken_0x4dc9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC9F0u;
            // 0x4dc9f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc9f0) {
            ctx->pc = 0x4DCA5Cu;
            goto label_4dca5c;
        }
    }
    ctx->pc = 0x4DC9F8u;
label_4dc9f8:
    // 0x4dc9f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dc9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dc9fc:
    // 0x4dc9fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dca00:
    // 0x4dca00: 0x24632d30  addiu       $v1, $v1, 0x2D30
    ctx->pc = 0x4dca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11568));
label_4dca04:
    // 0x4dca04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4dca04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4dca08:
    // 0x4dca08: 0x24422d68  addiu       $v0, $v0, 0x2D68
    ctx->pc = 0x4dca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11624));
label_4dca0c:
    // 0x4dca0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4dca10:
    // 0x4dca10: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4dca10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_4dca14:
    // 0x4dca14: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4dca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4dca18:
    // 0x4dca18: 0xc0407c0  jal         func_101F00
label_4dca1c:
    if (ctx->pc == 0x4DCA1Cu) {
        ctx->pc = 0x4DCA1Cu;
            // 0x4dca1c: 0x24a5c120  addiu       $a1, $a1, -0x3EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951200));
        ctx->pc = 0x4DCA20u;
        goto label_4dca20;
    }
    ctx->pc = 0x4DCA18u;
    SET_GPR_U32(ctx, 31, 0x4DCA20u);
    ctx->pc = 0x4DCA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCA18u;
            // 0x4dca1c: 0x24a5c120  addiu       $a1, $a1, -0x3EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA20u; }
        if (ctx->pc != 0x4DCA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA20u; }
        if (ctx->pc != 0x4DCA20u) { return; }
    }
    ctx->pc = 0x4DCA20u;
label_4dca20:
    // 0x4dca20: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4dca20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4dca24:
    // 0x4dca24: 0xc0a8c98  jal         func_2A3260
label_4dca28:
    if (ctx->pc == 0x4DCA28u) {
        ctx->pc = 0x4DCA28u;
            // 0x4dca28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4DCA2Cu;
        goto label_4dca2c;
    }
    ctx->pc = 0x4DCA24u;
    SET_GPR_U32(ctx, 31, 0x4DCA2Cu);
    ctx->pc = 0x4DCA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCA24u;
            // 0x4dca28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA2Cu; }
        if (ctx->pc != 0x4DCA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA2Cu; }
        if (ctx->pc != 0x4DCA2Cu) { return; }
    }
    ctx->pc = 0x4DCA2Cu;
label_4dca2c:
    // 0x4dca2c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4dca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_4dca30:
    // 0x4dca30: 0xc1372bc  jal         func_4DCAF0
label_4dca34:
    if (ctx->pc == 0x4DCA34u) {
        ctx->pc = 0x4DCA34u;
            // 0x4dca34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4DCA38u;
        goto label_4dca38;
    }
    ctx->pc = 0x4DCA30u;
    SET_GPR_U32(ctx, 31, 0x4DCA38u);
    ctx->pc = 0x4DCA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCA30u;
            // 0x4dca34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DCAF0u;
    if (runtime->hasFunction(0x4DCAF0u)) {
        auto targetFn = runtime->lookupFunction(0x4DCAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA38u; }
        if (ctx->pc != 0x4DCA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DCAF0_0x4dcaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA38u; }
        if (ctx->pc != 0x4DCA38u) { return; }
    }
    ctx->pc = 0x4DCA38u;
label_4dca38:
    // 0x4dca38: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4dca38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4dca3c:
    // 0x4dca3c: 0xc1372bc  jal         func_4DCAF0
label_4dca40:
    if (ctx->pc == 0x4DCA40u) {
        ctx->pc = 0x4DCA40u;
            // 0x4dca40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4DCA44u;
        goto label_4dca44;
    }
    ctx->pc = 0x4DCA3Cu;
    SET_GPR_U32(ctx, 31, 0x4DCA44u);
    ctx->pc = 0x4DCA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCA3Cu;
            // 0x4dca40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DCAF0u;
    if (runtime->hasFunction(0x4DCAF0u)) {
        auto targetFn = runtime->lookupFunction(0x4DCAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA44u; }
        if (ctx->pc != 0x4DCA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DCAF0_0x4dcaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA44u; }
        if (ctx->pc != 0x4DCA44u) { return; }
    }
    ctx->pc = 0x4DCA44u;
label_4dca44:
    // 0x4dca44: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4dca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_4dca48:
    // 0x4dca48: 0xc1372a4  jal         func_4DCA90
label_4dca4c:
    if (ctx->pc == 0x4DCA4Cu) {
        ctx->pc = 0x4DCA4Cu;
            // 0x4dca4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCA50u;
        goto label_4dca50;
    }
    ctx->pc = 0x4DCA48u;
    SET_GPR_U32(ctx, 31, 0x4DCA50u);
    ctx->pc = 0x4DCA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCA48u;
            // 0x4dca4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DCA90u;
    if (runtime->hasFunction(0x4DCA90u)) {
        auto targetFn = runtime->lookupFunction(0x4DCA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA50u; }
        if (ctx->pc != 0x4DCA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DCA90_0x4dca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA50u; }
        if (ctx->pc != 0x4DCA50u) { return; }
    }
    ctx->pc = 0x4DCA50u;
label_4dca50:
    // 0x4dca50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dca54:
    // 0x4dca54: 0xc0ae1c0  jal         func_2B8700
label_4dca58:
    if (ctx->pc == 0x4DCA58u) {
        ctx->pc = 0x4DCA58u;
            // 0x4dca58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCA5Cu;
        goto label_4dca5c;
    }
    ctx->pc = 0x4DCA54u;
    SET_GPR_U32(ctx, 31, 0x4DCA5Cu);
    ctx->pc = 0x4DCA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCA54u;
            // 0x4dca58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA5Cu; }
        if (ctx->pc != 0x4DCA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA5Cu; }
        if (ctx->pc != 0x4DCA5Cu) { return; }
    }
    ctx->pc = 0x4DCA5Cu;
label_4dca5c:
    // 0x4dca5c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4dca5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4dca60:
    // 0x4dca60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dca60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dca64:
    // 0x4dca64: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4dca68:
    if (ctx->pc == 0x4DCA68u) {
        ctx->pc = 0x4DCA68u;
            // 0x4dca68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCA6Cu;
        goto label_4dca6c;
    }
    ctx->pc = 0x4DCA64u;
    {
        const bool branch_taken_0x4dca64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dca64) {
            ctx->pc = 0x4DCA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCA64u;
            // 0x4dca68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DCA78u;
            goto label_4dca78;
        }
    }
    ctx->pc = 0x4DCA6Cu;
label_4dca6c:
    // 0x4dca6c: 0xc0400a8  jal         func_1002A0
label_4dca70:
    if (ctx->pc == 0x4DCA70u) {
        ctx->pc = 0x4DCA70u;
            // 0x4dca70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCA74u;
        goto label_4dca74;
    }
    ctx->pc = 0x4DCA6Cu;
    SET_GPR_U32(ctx, 31, 0x4DCA74u);
    ctx->pc = 0x4DCA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCA6Cu;
            // 0x4dca70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA74u; }
        if (ctx->pc != 0x4DCA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCA74u; }
        if (ctx->pc != 0x4DCA74u) { return; }
    }
    ctx->pc = 0x4DCA74u;
label_4dca74:
    // 0x4dca74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4dca74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dca78:
    // 0x4dca78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dca78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dca7c:
    // 0x4dca7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dca7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dca80:
    // 0x4dca80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dca80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dca84:
    // 0x4dca84: 0x3e00008  jr          $ra
label_4dca88:
    if (ctx->pc == 0x4DCA88u) {
        ctx->pc = 0x4DCA88u;
            // 0x4dca88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DCA8Cu;
        goto label_4dca8c;
    }
    ctx->pc = 0x4DCA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCA84u;
            // 0x4dca88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DCA8Cu;
label_4dca8c:
    // 0x4dca8c: 0x0  nop
    ctx->pc = 0x4dca8cu;
    // NOP
}
