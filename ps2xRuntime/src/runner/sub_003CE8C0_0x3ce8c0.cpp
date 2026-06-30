#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CE8C0
// Address: 0x3ce8c0 - 0x3cedc0
void sub_003CE8C0_0x3ce8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CE8C0_0x3ce8c0");
#endif

    switch (ctx->pc) {
        case 0x3ce8c0u: goto label_3ce8c0;
        case 0x3ce8c4u: goto label_3ce8c4;
        case 0x3ce8c8u: goto label_3ce8c8;
        case 0x3ce8ccu: goto label_3ce8cc;
        case 0x3ce8d0u: goto label_3ce8d0;
        case 0x3ce8d4u: goto label_3ce8d4;
        case 0x3ce8d8u: goto label_3ce8d8;
        case 0x3ce8dcu: goto label_3ce8dc;
        case 0x3ce8e0u: goto label_3ce8e0;
        case 0x3ce8e4u: goto label_3ce8e4;
        case 0x3ce8e8u: goto label_3ce8e8;
        case 0x3ce8ecu: goto label_3ce8ec;
        case 0x3ce8f0u: goto label_3ce8f0;
        case 0x3ce8f4u: goto label_3ce8f4;
        case 0x3ce8f8u: goto label_3ce8f8;
        case 0x3ce8fcu: goto label_3ce8fc;
        case 0x3ce900u: goto label_3ce900;
        case 0x3ce904u: goto label_3ce904;
        case 0x3ce908u: goto label_3ce908;
        case 0x3ce90cu: goto label_3ce90c;
        case 0x3ce910u: goto label_3ce910;
        case 0x3ce914u: goto label_3ce914;
        case 0x3ce918u: goto label_3ce918;
        case 0x3ce91cu: goto label_3ce91c;
        case 0x3ce920u: goto label_3ce920;
        case 0x3ce924u: goto label_3ce924;
        case 0x3ce928u: goto label_3ce928;
        case 0x3ce92cu: goto label_3ce92c;
        case 0x3ce930u: goto label_3ce930;
        case 0x3ce934u: goto label_3ce934;
        case 0x3ce938u: goto label_3ce938;
        case 0x3ce93cu: goto label_3ce93c;
        case 0x3ce940u: goto label_3ce940;
        case 0x3ce944u: goto label_3ce944;
        case 0x3ce948u: goto label_3ce948;
        case 0x3ce94cu: goto label_3ce94c;
        case 0x3ce950u: goto label_3ce950;
        case 0x3ce954u: goto label_3ce954;
        case 0x3ce958u: goto label_3ce958;
        case 0x3ce95cu: goto label_3ce95c;
        case 0x3ce960u: goto label_3ce960;
        case 0x3ce964u: goto label_3ce964;
        case 0x3ce968u: goto label_3ce968;
        case 0x3ce96cu: goto label_3ce96c;
        case 0x3ce970u: goto label_3ce970;
        case 0x3ce974u: goto label_3ce974;
        case 0x3ce978u: goto label_3ce978;
        case 0x3ce97cu: goto label_3ce97c;
        case 0x3ce980u: goto label_3ce980;
        case 0x3ce984u: goto label_3ce984;
        case 0x3ce988u: goto label_3ce988;
        case 0x3ce98cu: goto label_3ce98c;
        case 0x3ce990u: goto label_3ce990;
        case 0x3ce994u: goto label_3ce994;
        case 0x3ce998u: goto label_3ce998;
        case 0x3ce99cu: goto label_3ce99c;
        case 0x3ce9a0u: goto label_3ce9a0;
        case 0x3ce9a4u: goto label_3ce9a4;
        case 0x3ce9a8u: goto label_3ce9a8;
        case 0x3ce9acu: goto label_3ce9ac;
        case 0x3ce9b0u: goto label_3ce9b0;
        case 0x3ce9b4u: goto label_3ce9b4;
        case 0x3ce9b8u: goto label_3ce9b8;
        case 0x3ce9bcu: goto label_3ce9bc;
        case 0x3ce9c0u: goto label_3ce9c0;
        case 0x3ce9c4u: goto label_3ce9c4;
        case 0x3ce9c8u: goto label_3ce9c8;
        case 0x3ce9ccu: goto label_3ce9cc;
        case 0x3ce9d0u: goto label_3ce9d0;
        case 0x3ce9d4u: goto label_3ce9d4;
        case 0x3ce9d8u: goto label_3ce9d8;
        case 0x3ce9dcu: goto label_3ce9dc;
        case 0x3ce9e0u: goto label_3ce9e0;
        case 0x3ce9e4u: goto label_3ce9e4;
        case 0x3ce9e8u: goto label_3ce9e8;
        case 0x3ce9ecu: goto label_3ce9ec;
        case 0x3ce9f0u: goto label_3ce9f0;
        case 0x3ce9f4u: goto label_3ce9f4;
        case 0x3ce9f8u: goto label_3ce9f8;
        case 0x3ce9fcu: goto label_3ce9fc;
        case 0x3cea00u: goto label_3cea00;
        case 0x3cea04u: goto label_3cea04;
        case 0x3cea08u: goto label_3cea08;
        case 0x3cea0cu: goto label_3cea0c;
        case 0x3cea10u: goto label_3cea10;
        case 0x3cea14u: goto label_3cea14;
        case 0x3cea18u: goto label_3cea18;
        case 0x3cea1cu: goto label_3cea1c;
        case 0x3cea20u: goto label_3cea20;
        case 0x3cea24u: goto label_3cea24;
        case 0x3cea28u: goto label_3cea28;
        case 0x3cea2cu: goto label_3cea2c;
        case 0x3cea30u: goto label_3cea30;
        case 0x3cea34u: goto label_3cea34;
        case 0x3cea38u: goto label_3cea38;
        case 0x3cea3cu: goto label_3cea3c;
        case 0x3cea40u: goto label_3cea40;
        case 0x3cea44u: goto label_3cea44;
        case 0x3cea48u: goto label_3cea48;
        case 0x3cea4cu: goto label_3cea4c;
        case 0x3cea50u: goto label_3cea50;
        case 0x3cea54u: goto label_3cea54;
        case 0x3cea58u: goto label_3cea58;
        case 0x3cea5cu: goto label_3cea5c;
        case 0x3cea60u: goto label_3cea60;
        case 0x3cea64u: goto label_3cea64;
        case 0x3cea68u: goto label_3cea68;
        case 0x3cea6cu: goto label_3cea6c;
        case 0x3cea70u: goto label_3cea70;
        case 0x3cea74u: goto label_3cea74;
        case 0x3cea78u: goto label_3cea78;
        case 0x3cea7cu: goto label_3cea7c;
        case 0x3cea80u: goto label_3cea80;
        case 0x3cea84u: goto label_3cea84;
        case 0x3cea88u: goto label_3cea88;
        case 0x3cea8cu: goto label_3cea8c;
        case 0x3cea90u: goto label_3cea90;
        case 0x3cea94u: goto label_3cea94;
        case 0x3cea98u: goto label_3cea98;
        case 0x3cea9cu: goto label_3cea9c;
        case 0x3ceaa0u: goto label_3ceaa0;
        case 0x3ceaa4u: goto label_3ceaa4;
        case 0x3ceaa8u: goto label_3ceaa8;
        case 0x3ceaacu: goto label_3ceaac;
        case 0x3ceab0u: goto label_3ceab0;
        case 0x3ceab4u: goto label_3ceab4;
        case 0x3ceab8u: goto label_3ceab8;
        case 0x3ceabcu: goto label_3ceabc;
        case 0x3ceac0u: goto label_3ceac0;
        case 0x3ceac4u: goto label_3ceac4;
        case 0x3ceac8u: goto label_3ceac8;
        case 0x3ceaccu: goto label_3ceacc;
        case 0x3cead0u: goto label_3cead0;
        case 0x3cead4u: goto label_3cead4;
        case 0x3cead8u: goto label_3cead8;
        case 0x3ceadcu: goto label_3ceadc;
        case 0x3ceae0u: goto label_3ceae0;
        case 0x3ceae4u: goto label_3ceae4;
        case 0x3ceae8u: goto label_3ceae8;
        case 0x3ceaecu: goto label_3ceaec;
        case 0x3ceaf0u: goto label_3ceaf0;
        case 0x3ceaf4u: goto label_3ceaf4;
        case 0x3ceaf8u: goto label_3ceaf8;
        case 0x3ceafcu: goto label_3ceafc;
        case 0x3ceb00u: goto label_3ceb00;
        case 0x3ceb04u: goto label_3ceb04;
        case 0x3ceb08u: goto label_3ceb08;
        case 0x3ceb0cu: goto label_3ceb0c;
        case 0x3ceb10u: goto label_3ceb10;
        case 0x3ceb14u: goto label_3ceb14;
        case 0x3ceb18u: goto label_3ceb18;
        case 0x3ceb1cu: goto label_3ceb1c;
        case 0x3ceb20u: goto label_3ceb20;
        case 0x3ceb24u: goto label_3ceb24;
        case 0x3ceb28u: goto label_3ceb28;
        case 0x3ceb2cu: goto label_3ceb2c;
        case 0x3ceb30u: goto label_3ceb30;
        case 0x3ceb34u: goto label_3ceb34;
        case 0x3ceb38u: goto label_3ceb38;
        case 0x3ceb3cu: goto label_3ceb3c;
        case 0x3ceb40u: goto label_3ceb40;
        case 0x3ceb44u: goto label_3ceb44;
        case 0x3ceb48u: goto label_3ceb48;
        case 0x3ceb4cu: goto label_3ceb4c;
        case 0x3ceb50u: goto label_3ceb50;
        case 0x3ceb54u: goto label_3ceb54;
        case 0x3ceb58u: goto label_3ceb58;
        case 0x3ceb5cu: goto label_3ceb5c;
        case 0x3ceb60u: goto label_3ceb60;
        case 0x3ceb64u: goto label_3ceb64;
        case 0x3ceb68u: goto label_3ceb68;
        case 0x3ceb6cu: goto label_3ceb6c;
        case 0x3ceb70u: goto label_3ceb70;
        case 0x3ceb74u: goto label_3ceb74;
        case 0x3ceb78u: goto label_3ceb78;
        case 0x3ceb7cu: goto label_3ceb7c;
        case 0x3ceb80u: goto label_3ceb80;
        case 0x3ceb84u: goto label_3ceb84;
        case 0x3ceb88u: goto label_3ceb88;
        case 0x3ceb8cu: goto label_3ceb8c;
        case 0x3ceb90u: goto label_3ceb90;
        case 0x3ceb94u: goto label_3ceb94;
        case 0x3ceb98u: goto label_3ceb98;
        case 0x3ceb9cu: goto label_3ceb9c;
        case 0x3ceba0u: goto label_3ceba0;
        case 0x3ceba4u: goto label_3ceba4;
        case 0x3ceba8u: goto label_3ceba8;
        case 0x3cebacu: goto label_3cebac;
        case 0x3cebb0u: goto label_3cebb0;
        case 0x3cebb4u: goto label_3cebb4;
        case 0x3cebb8u: goto label_3cebb8;
        case 0x3cebbcu: goto label_3cebbc;
        case 0x3cebc0u: goto label_3cebc0;
        case 0x3cebc4u: goto label_3cebc4;
        case 0x3cebc8u: goto label_3cebc8;
        case 0x3cebccu: goto label_3cebcc;
        case 0x3cebd0u: goto label_3cebd0;
        case 0x3cebd4u: goto label_3cebd4;
        case 0x3cebd8u: goto label_3cebd8;
        case 0x3cebdcu: goto label_3cebdc;
        case 0x3cebe0u: goto label_3cebe0;
        case 0x3cebe4u: goto label_3cebe4;
        case 0x3cebe8u: goto label_3cebe8;
        case 0x3cebecu: goto label_3cebec;
        case 0x3cebf0u: goto label_3cebf0;
        case 0x3cebf4u: goto label_3cebf4;
        case 0x3cebf8u: goto label_3cebf8;
        case 0x3cebfcu: goto label_3cebfc;
        case 0x3cec00u: goto label_3cec00;
        case 0x3cec04u: goto label_3cec04;
        case 0x3cec08u: goto label_3cec08;
        case 0x3cec0cu: goto label_3cec0c;
        case 0x3cec10u: goto label_3cec10;
        case 0x3cec14u: goto label_3cec14;
        case 0x3cec18u: goto label_3cec18;
        case 0x3cec1cu: goto label_3cec1c;
        case 0x3cec20u: goto label_3cec20;
        case 0x3cec24u: goto label_3cec24;
        case 0x3cec28u: goto label_3cec28;
        case 0x3cec2cu: goto label_3cec2c;
        case 0x3cec30u: goto label_3cec30;
        case 0x3cec34u: goto label_3cec34;
        case 0x3cec38u: goto label_3cec38;
        case 0x3cec3cu: goto label_3cec3c;
        case 0x3cec40u: goto label_3cec40;
        case 0x3cec44u: goto label_3cec44;
        case 0x3cec48u: goto label_3cec48;
        case 0x3cec4cu: goto label_3cec4c;
        case 0x3cec50u: goto label_3cec50;
        case 0x3cec54u: goto label_3cec54;
        case 0x3cec58u: goto label_3cec58;
        case 0x3cec5cu: goto label_3cec5c;
        case 0x3cec60u: goto label_3cec60;
        case 0x3cec64u: goto label_3cec64;
        case 0x3cec68u: goto label_3cec68;
        case 0x3cec6cu: goto label_3cec6c;
        case 0x3cec70u: goto label_3cec70;
        case 0x3cec74u: goto label_3cec74;
        case 0x3cec78u: goto label_3cec78;
        case 0x3cec7cu: goto label_3cec7c;
        case 0x3cec80u: goto label_3cec80;
        case 0x3cec84u: goto label_3cec84;
        case 0x3cec88u: goto label_3cec88;
        case 0x3cec8cu: goto label_3cec8c;
        case 0x3cec90u: goto label_3cec90;
        case 0x3cec94u: goto label_3cec94;
        case 0x3cec98u: goto label_3cec98;
        case 0x3cec9cu: goto label_3cec9c;
        case 0x3ceca0u: goto label_3ceca0;
        case 0x3ceca4u: goto label_3ceca4;
        case 0x3ceca8u: goto label_3ceca8;
        case 0x3cecacu: goto label_3cecac;
        case 0x3cecb0u: goto label_3cecb0;
        case 0x3cecb4u: goto label_3cecb4;
        case 0x3cecb8u: goto label_3cecb8;
        case 0x3cecbcu: goto label_3cecbc;
        case 0x3cecc0u: goto label_3cecc0;
        case 0x3cecc4u: goto label_3cecc4;
        case 0x3cecc8u: goto label_3cecc8;
        case 0x3cecccu: goto label_3ceccc;
        case 0x3cecd0u: goto label_3cecd0;
        case 0x3cecd4u: goto label_3cecd4;
        case 0x3cecd8u: goto label_3cecd8;
        case 0x3cecdcu: goto label_3cecdc;
        case 0x3cece0u: goto label_3cece0;
        case 0x3cece4u: goto label_3cece4;
        case 0x3cece8u: goto label_3cece8;
        case 0x3cececu: goto label_3cecec;
        case 0x3cecf0u: goto label_3cecf0;
        case 0x3cecf4u: goto label_3cecf4;
        case 0x3cecf8u: goto label_3cecf8;
        case 0x3cecfcu: goto label_3cecfc;
        case 0x3ced00u: goto label_3ced00;
        case 0x3ced04u: goto label_3ced04;
        case 0x3ced08u: goto label_3ced08;
        case 0x3ced0cu: goto label_3ced0c;
        case 0x3ced10u: goto label_3ced10;
        case 0x3ced14u: goto label_3ced14;
        case 0x3ced18u: goto label_3ced18;
        case 0x3ced1cu: goto label_3ced1c;
        case 0x3ced20u: goto label_3ced20;
        case 0x3ced24u: goto label_3ced24;
        case 0x3ced28u: goto label_3ced28;
        case 0x3ced2cu: goto label_3ced2c;
        case 0x3ced30u: goto label_3ced30;
        case 0x3ced34u: goto label_3ced34;
        case 0x3ced38u: goto label_3ced38;
        case 0x3ced3cu: goto label_3ced3c;
        case 0x3ced40u: goto label_3ced40;
        case 0x3ced44u: goto label_3ced44;
        case 0x3ced48u: goto label_3ced48;
        case 0x3ced4cu: goto label_3ced4c;
        case 0x3ced50u: goto label_3ced50;
        case 0x3ced54u: goto label_3ced54;
        case 0x3ced58u: goto label_3ced58;
        case 0x3ced5cu: goto label_3ced5c;
        case 0x3ced60u: goto label_3ced60;
        case 0x3ced64u: goto label_3ced64;
        case 0x3ced68u: goto label_3ced68;
        case 0x3ced6cu: goto label_3ced6c;
        case 0x3ced70u: goto label_3ced70;
        case 0x3ced74u: goto label_3ced74;
        case 0x3ced78u: goto label_3ced78;
        case 0x3ced7cu: goto label_3ced7c;
        case 0x3ced80u: goto label_3ced80;
        case 0x3ced84u: goto label_3ced84;
        case 0x3ced88u: goto label_3ced88;
        case 0x3ced8cu: goto label_3ced8c;
        case 0x3ced90u: goto label_3ced90;
        case 0x3ced94u: goto label_3ced94;
        case 0x3ced98u: goto label_3ced98;
        case 0x3ced9cu: goto label_3ced9c;
        case 0x3ceda0u: goto label_3ceda0;
        case 0x3ceda4u: goto label_3ceda4;
        case 0x3ceda8u: goto label_3ceda8;
        case 0x3cedacu: goto label_3cedac;
        case 0x3cedb0u: goto label_3cedb0;
        case 0x3cedb4u: goto label_3cedb4;
        case 0x3cedb8u: goto label_3cedb8;
        case 0x3cedbcu: goto label_3cedbc;
        default: break;
    }

    ctx->pc = 0x3ce8c0u;

label_3ce8c0:
    // 0x3ce8c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ce8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ce8c4:
    // 0x3ce8c4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3ce8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3ce8c8:
    // 0x3ce8c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3ce8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3ce8cc:
    // 0x3ce8cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ce8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce8d0:
    // 0x3ce8d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ce8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ce8d4:
    // 0x3ce8d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ce8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ce8d8:
    // 0x3ce8d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ce8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ce8dc:
    // 0x3ce8dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ce8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ce8e0:
    // 0x3ce8e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ce8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ce8e4:
    // 0x3ce8e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ce8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ce8e8:
    // 0x3ce8e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ce8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ce8ec:
    // 0x3ce8ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ce8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ce8f0:
    // 0x3ce8f0: 0xc0ee760  jal         func_3B9D80
label_3ce8f4:
    if (ctx->pc == 0x3CE8F4u) {
        ctx->pc = 0x3CE8F4u;
            // 0x3ce8f4: 0x3445af5a  ori         $a1, $v0, 0xAF5A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44890);
        ctx->pc = 0x3CE8F8u;
        goto label_3ce8f8;
    }
    ctx->pc = 0x3CE8F0u;
    SET_GPR_U32(ctx, 31, 0x3CE8F8u);
    ctx->pc = 0x3CE8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE8F0u;
            // 0x3ce8f4: 0x3445af5a  ori         $a1, $v0, 0xAF5A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44890);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE8F8u; }
        if (ctx->pc != 0x3CE8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE8F8u; }
        if (ctx->pc != 0x3CE8F8u) { return; }
    }
    ctx->pc = 0x3CE8F8u;
label_3ce8f8:
    // 0x3ce8f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ce8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ce8fc:
    // 0x3ce8fc: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x3ce8fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
label_3ce900:
    // 0x3ce900: 0x244290e0  addiu       $v0, $v0, -0x6F20
    ctx->pc = 0x3ce900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
label_3ce904:
    // 0x3ce904: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3ce904u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_3ce908:
    // 0x3ce908: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3ce908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3ce90c:
    // 0x3ce90c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3ce90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3ce910:
    // 0x3ce910: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x3ce910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
label_3ce914:
    // 0x3ce914: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ce914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ce918:
    // 0x3ce918: 0xa223005c  sb          $v1, 0x5C($s1)
    ctx->pc = 0x3ce918u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 3));
label_3ce91c:
    // 0x3ce91c: 0x267390b0  addiu       $s3, $s3, -0x6F50
    ctx->pc = 0x3ce91cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938800));
label_3ce920:
    // 0x3ce920: 0xa223005d  sb          $v1, 0x5D($s1)
    ctx->pc = 0x3ce920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 3));
label_3ce924:
    // 0x3ce924: 0x2652ab70  addiu       $s2, $s2, -0x5490
    ctx->pc = 0x3ce924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945648));
label_3ce928:
    // 0x3ce928: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ce928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ce92c:
    // 0x3ce92c: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x3ce92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3ce930:
    // 0x3ce930: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ce930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ce934:
    // 0x3ce934: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3ce934u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce938:
    // 0x3ce938: 0x8c64078c  lw          $a0, 0x78C($v1)
    ctx->pc = 0x3ce938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1932)));
label_3ce93c:
    // 0x3ce93c: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x3ce93cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3ce940:
    // 0x3ce940: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3ce944:
    if (ctx->pc == 0x3CE944u) {
        ctx->pc = 0x3CE944u;
            // 0x3ce944: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE948u;
        goto label_3ce948;
    }
    ctx->pc = 0x3CE940u;
    {
        const bool branch_taken_0x3ce940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE940u;
            // 0x3ce944: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce940) {
            ctx->pc = 0x3CE94Cu;
            goto label_3ce94c;
        }
    }
    ctx->pc = 0x3CE948u;
label_3ce948:
    // 0x3ce948: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ce948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce94c:
    // 0x3ce94c: 0x8668000e  lh          $t0, 0xE($s3)
    ctx->pc = 0x3ce94cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
label_3ce950:
    // 0x3ce950: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x3ce950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3ce954:
    // 0x3ce954: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3ce954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3ce958:
    // 0x3ce958: 0x3c0642f0  lui         $a2, 0x42F0
    ctx->pc = 0x3ce958u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17136 << 16));
label_3ce95c:
    // 0x3ce95c: 0x866a0008  lh          $t2, 0x8($s3)
    ctx->pc = 0x3ce95cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_3ce960:
    // 0x3ce960: 0x3c05430c  lui         $a1, 0x430C
    ctx->pc = 0x3ce960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17164 << 16));
label_3ce964:
    // 0x3ce964: 0x8669000c  lh          $t1, 0xC($s3)
    ctx->pc = 0x3ce964u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_3ce968:
    // 0x3ce968: 0x1073818  mult        $a3, $t0, $a3
    ctx->pc = 0x3ce968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_3ce96c:
    // 0x3ce96c: 0xa6230062  sh          $v1, 0x62($s1)
    ctx->pc = 0x3ce96cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 98), (uint16_t)GPR_U32(ctx, 3));
label_3ce970:
    // 0x3ce970: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x3ce970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_3ce974:
    // 0x3ce974: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ce974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ce978:
    // 0x3ce978: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x3ce978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_3ce97c:
    // 0x3ce97c: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x3ce97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_3ce980:
    // 0x3ce980: 0xa6270064  sh          $a3, 0x64($s1)
    ctx->pc = 0x3ce980u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 7));
label_3ce984:
    // 0x3ce984: 0xae26006c  sw          $a2, 0x6C($s1)
    ctx->pc = 0x3ce984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 6));
label_3ce988:
    // 0x3ce988: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x3ce988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_3ce98c:
    // 0x3ce98c: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x3ce98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
label_3ce990:
    // 0x3ce990: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x3ce990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3ce994:
    // 0x3ce994: 0x50830038  beql        $a0, $v1, . + 4 + (0x38 << 2)
label_3ce998:
    if (ctx->pc == 0x3CE998u) {
        ctx->pc = 0x3CE998u;
            // 0x3ce998: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CE99Cu;
        goto label_3ce99c;
    }
    ctx->pc = 0x3CE994u;
    {
        const bool branch_taken_0x3ce994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ce994) {
            ctx->pc = 0x3CE998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE994u;
            // 0x3ce998: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CEA78u;
            goto label_3cea78;
        }
    }
    ctx->pc = 0x3CE99Cu;
label_3ce99c:
    // 0x3ce99c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ce99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce9a0:
    // 0x3ce9a0: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
label_3ce9a4:
    if (ctx->pc == 0x3CE9A4u) {
        ctx->pc = 0x3CE9A8u;
        goto label_3ce9a8;
    }
    ctx->pc = 0x3CE9A0u;
    {
        const bool branch_taken_0x3ce9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ce9a0) {
            ctx->pc = 0x3CEA74u;
            goto label_3cea74;
        }
    }
    ctx->pc = 0x3CE9A8u;
label_3ce9a8:
    // 0x3ce9a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ce9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ce9ac:
    // 0x3ce9ac: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
label_3ce9b0:
    if (ctx->pc == 0x3CE9B0u) {
        ctx->pc = 0x3CE9B0u;
            // 0x3ce9b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CE9B4u;
        goto label_3ce9b4;
    }
    ctx->pc = 0x3CE9ACu;
    {
        const bool branch_taken_0x3ce9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ce9ac) {
            ctx->pc = 0x3CE9B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE9ACu;
            // 0x3ce9b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE9FCu;
            goto label_3ce9fc;
        }
    }
    ctx->pc = 0x3CE9B4u;
label_3ce9b4:
    // 0x3ce9b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ce9b8:
    // 0x3ce9b8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3ce9bc:
    if (ctx->pc == 0x3CE9BCu) {
        ctx->pc = 0x3CE9C0u;
        goto label_3ce9c0;
    }
    ctx->pc = 0x3CE9B8u;
    {
        const bool branch_taken_0x3ce9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ce9b8) {
            ctx->pc = 0x3CE9C8u;
            goto label_3ce9c8;
        }
    }
    ctx->pc = 0x3CE9C0u;
label_3ce9c0:
    // 0x3ce9c0: 0x10000078  b           . + 4 + (0x78 << 2)
label_3ce9c4:
    if (ctx->pc == 0x3CE9C4u) {
        ctx->pc = 0x3CE9C4u;
            // 0x3ce9c4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3CE9C8u;
        goto label_3ce9c8;
    }
    ctx->pc = 0x3CE9C0u;
    {
        const bool branch_taken_0x3ce9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE9C0u;
            // 0x3ce9c4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9c0) {
            ctx->pc = 0x3CEBA4u;
            goto label_3ceba4;
        }
    }
    ctx->pc = 0x3CE9C8u;
label_3ce9c8:
    // 0x3ce9c8: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
label_3ce9cc:
    if (ctx->pc == 0x3CE9CCu) {
        ctx->pc = 0x3CE9CCu;
            // 0x3ce9cc: 0x8c550088  lw          $s5, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->pc = 0x3CE9D0u;
        goto label_3ce9d0;
    }
    ctx->pc = 0x3CE9C8u;
    {
        const bool branch_taken_0x3ce9c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce9c8) {
            ctx->pc = 0x3CE9CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE9C8u;
            // 0x3ce9cc: 0x8c550088  lw          $s5, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE9D8u;
            goto label_3ce9d8;
        }
    }
    ctx->pc = 0x3CE9D0u;
label_3ce9d0:
    // 0x3ce9d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ce9d4:
    if (ctx->pc == 0x3CE9D4u) {
        ctx->pc = 0x3CE9D4u;
            // 0x3ce9d4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3CE9D8u;
        goto label_3ce9d8;
    }
    ctx->pc = 0x3CE9D0u;
    {
        const bool branch_taken_0x3ce9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE9D0u;
            // 0x3ce9d4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9d0) {
            ctx->pc = 0x3CE9E4u;
            goto label_3ce9e4;
        }
    }
    ctx->pc = 0x3CE9D8u;
label_3ce9d8:
    // 0x3ce9d8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x3ce9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3ce9dc:
    // 0x3ce9dc: 0x10000075  b           . + 4 + (0x75 << 2)
label_3ce9e0:
    if (ctx->pc == 0x3CE9E0u) {
        ctx->pc = 0x3CE9E0u;
            // 0x3ce9e0: 0x24540050  addiu       $s4, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x3CE9E4u;
        goto label_3ce9e4;
    }
    ctx->pc = 0x3CE9DCu;
    {
        const bool branch_taken_0x3ce9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE9DCu;
            // 0x3ce9e0: 0x24540050  addiu       $s4, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9dc) {
            ctx->pc = 0x3CEBB4u;
            goto label_3cebb4;
        }
    }
    ctx->pc = 0x3CE9E4u;
label_3ce9e4:
    // 0x3ce9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ce9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ce9e8:
    // 0x3ce9e8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ce9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ce9ec:
    // 0x3ce9ec: 0x320f809  jalr        $t9
label_3ce9f0:
    if (ctx->pc == 0x3CE9F0u) {
        ctx->pc = 0x3CE9F0u;
            // 0x3ce9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9F4u;
        goto label_3ce9f4;
    }
    ctx->pc = 0x3CE9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE9F4u);
        ctx->pc = 0x3CE9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE9ECu;
            // 0x3ce9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE9F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE9F4u; }
            if (ctx->pc != 0x3CE9F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CE9F4u;
label_3ce9f4:
    // 0x3ce9f4: 0x10000070  b           . + 4 + (0x70 << 2)
label_3ce9f8:
    if (ctx->pc == 0x3CE9F8u) {
        ctx->pc = 0x3CE9F8u;
            // 0x3ce9f8: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x3CE9FCu;
        goto label_3ce9fc;
    }
    ctx->pc = 0x3CE9F4u;
    {
        const bool branch_taken_0x3ce9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE9F4u;
            // 0x3ce9f8: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9f4) {
            ctx->pc = 0x3CEBB8u;
            goto label_3cebb8;
        }
    }
    ctx->pc = 0x3CE9FCu;
label_3ce9fc:
    // 0x3ce9fc: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
label_3cea00:
    if (ctx->pc == 0x3CEA00u) {
        ctx->pc = 0x3CEA00u;
            // 0x3cea00: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x3CEA04u;
        goto label_3cea04;
    }
    ctx->pc = 0x3CE9FCu;
    {
        const bool branch_taken_0x3ce9fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CEA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE9FCu;
            // 0x3cea00: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9fc) {
            ctx->pc = 0x3CEA34u;
            goto label_3cea34;
        }
    }
    ctx->pc = 0x3CEA04u;
label_3cea04:
    // 0x3cea04: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
label_3cea08:
    if (ctx->pc == 0x3CEA08u) {
        ctx->pc = 0x3CEA08u;
            // 0x3cea08: 0x8c550088  lw          $s5, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->pc = 0x3CEA0Cu;
        goto label_3cea0c;
    }
    ctx->pc = 0x3CEA04u;
    {
        const bool branch_taken_0x3cea04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cea04) {
            ctx->pc = 0x3CEA08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEA04u;
            // 0x3cea08: 0x8c550088  lw          $s5, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CEA14u;
            goto label_3cea14;
        }
    }
    ctx->pc = 0x3CEA0Cu;
label_3cea0c:
    // 0x3cea0c: 0x10000013  b           . + 4 + (0x13 << 2)
label_3cea10:
    if (ctx->pc == 0x3CEA10u) {
        ctx->pc = 0x3CEA10u;
            // 0x3cea10: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3CEA14u;
        goto label_3cea14;
    }
    ctx->pc = 0x3CEA0Cu;
    {
        const bool branch_taken_0x3cea0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEA0Cu;
            // 0x3cea10: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cea0c) {
            ctx->pc = 0x3CEA5Cu;
            goto label_3cea5c;
        }
    }
    ctx->pc = 0x3CEA14u;
label_3cea14:
    // 0x3cea14: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x3cea14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3cea18:
    // 0x3cea18: 0x90430090  lbu         $v1, 0x90($v0)
    ctx->pc = 0x3cea18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
label_3cea1c:
    // 0x3cea1c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x3cea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3cea20:
    // 0x3cea20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cea24:
    // 0x3cea24: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3cea24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3cea28:
    // 0x3cea28: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3cea28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3cea2c:
    // 0x3cea2c: 0x10000061  b           . + 4 + (0x61 << 2)
label_3cea30:
    if (ctx->pc == 0x3CEA30u) {
        ctx->pc = 0x3CEA30u;
            // 0x3cea30: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x3CEA34u;
        goto label_3cea34;
    }
    ctx->pc = 0x3CEA2Cu;
    {
        const bool branch_taken_0x3cea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEA2Cu;
            // 0x3cea30: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cea2c) {
            ctx->pc = 0x3CEBB4u;
            goto label_3cebb4;
        }
    }
    ctx->pc = 0x3CEA34u;
label_3cea34:
    // 0x3cea34: 0x90450090  lbu         $a1, 0x90($v0)
    ctx->pc = 0x3cea34u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
label_3cea38:
    // 0x3cea38: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x3cea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3cea3c:
    // 0x3cea3c: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x3cea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3cea40:
    // 0x3cea40: 0x8c550088  lw          $s5, 0x88($v0)
    ctx->pc = 0x3cea40u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_3cea44:
    // 0x3cea44: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3cea44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3cea48:
    // 0x3cea48: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3cea48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3cea4c:
    // 0x3cea4c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x3cea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3cea50:
    // 0x3cea50: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3cea50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3cea54:
    // 0x3cea54: 0x10000057  b           . + 4 + (0x57 << 2)
label_3cea58:
    if (ctx->pc == 0x3CEA58u) {
        ctx->pc = 0x3CEA58u;
            // 0x3cea58: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3CEA5Cu;
        goto label_3cea5c;
    }
    ctx->pc = 0x3CEA54u;
    {
        const bool branch_taken_0x3cea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEA54u;
            // 0x3cea58: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cea54) {
            ctx->pc = 0x3CEBB4u;
            goto label_3cebb4;
        }
    }
    ctx->pc = 0x3CEA5Cu;
label_3cea5c:
    // 0x3cea5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cea5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cea60:
    // 0x3cea60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cea60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cea64:
    // 0x3cea64: 0x320f809  jalr        $t9
label_3cea68:
    if (ctx->pc == 0x3CEA68u) {
        ctx->pc = 0x3CEA68u;
            // 0x3cea68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CEA6Cu;
        goto label_3cea6c;
    }
    ctx->pc = 0x3CEA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CEA6Cu);
        ctx->pc = 0x3CEA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEA64u;
            // 0x3cea68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CEA6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CEA6Cu; }
            if (ctx->pc != 0x3CEA6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CEA6Cu;
label_3cea6c:
    // 0x3cea6c: 0x10000051  b           . + 4 + (0x51 << 2)
label_3cea70:
    if (ctx->pc == 0x3CEA70u) {
        ctx->pc = 0x3CEA74u;
        goto label_3cea74;
    }
    ctx->pc = 0x3CEA6Cu;
    {
        const bool branch_taken_0x3cea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cea6c) {
            ctx->pc = 0x3CEBB4u;
            goto label_3cebb4;
        }
    }
    ctx->pc = 0x3CEA74u;
label_3cea74:
    // 0x3cea74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cea78:
    // 0x3cea78: 0x12030034  beq         $s0, $v1, . + 4 + (0x34 << 2)
label_3cea7c:
    if (ctx->pc == 0x3CEA7Cu) {
        ctx->pc = 0x3CEA7Cu;
            // 0x3cea7c: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x3CEA80u;
        goto label_3cea80;
    }
    ctx->pc = 0x3CEA78u;
    {
        const bool branch_taken_0x3cea78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CEA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEA78u;
            // 0x3cea7c: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cea78) {
            ctx->pc = 0x3CEB4Cu;
            goto label_3ceb4c;
        }
    }
    ctx->pc = 0x3CEA80u;
label_3cea80:
    // 0x3cea80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cea84:
    // 0x3cea84: 0x52030023  beql        $s0, $v1, . + 4 + (0x23 << 2)
label_3cea88:
    if (ctx->pc == 0x3CEA88u) {
        ctx->pc = 0x3CEA88u;
            // 0x3cea88: 0x90470090  lbu         $a3, 0x90($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->pc = 0x3CEA8Cu;
        goto label_3cea8c;
    }
    ctx->pc = 0x3CEA84u;
    {
        const bool branch_taken_0x3cea84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cea84) {
            ctx->pc = 0x3CEA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEA84u;
            // 0x3cea88: 0x90470090  lbu         $a3, 0x90($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CEB14u;
            goto label_3ceb14;
        }
    }
    ctx->pc = 0x3CEA8Cu;
label_3cea8c:
    // 0x3cea8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cea90:
    // 0x3cea90: 0x52030012  beql        $s0, $v1, . + 4 + (0x12 << 2)
label_3cea94:
    if (ctx->pc == 0x3CEA94u) {
        ctx->pc = 0x3CEA94u;
            // 0x3cea94: 0x90470090  lbu         $a3, 0x90($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->pc = 0x3CEA98u;
        goto label_3cea98;
    }
    ctx->pc = 0x3CEA90u;
    {
        const bool branch_taken_0x3cea90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cea90) {
            ctx->pc = 0x3CEA94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEA90u;
            // 0x3cea94: 0x90470090  lbu         $a3, 0x90($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CEADCu;
            goto label_3ceadc;
        }
    }
    ctx->pc = 0x3CEA98u;
label_3cea98:
    // 0x3cea98: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
label_3cea9c:
    if (ctx->pc == 0x3CEA9Cu) {
        ctx->pc = 0x3CEA9Cu;
            // 0x3cea9c: 0x90460090  lbu         $a2, 0x90($v0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->pc = 0x3CEAA0u;
        goto label_3ceaa0;
    }
    ctx->pc = 0x3CEA98u;
    {
        const bool branch_taken_0x3cea98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cea98) {
            ctx->pc = 0x3CEA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEA98u;
            // 0x3cea9c: 0x90460090  lbu         $a2, 0x90($v0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CEAA8u;
            goto label_3ceaa8;
        }
    }
    ctx->pc = 0x3CEAA0u;
label_3ceaa0:
    // 0x3ceaa0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_3ceaa4:
    if (ctx->pc == 0x3CEAA4u) {
        ctx->pc = 0x3CEAA4u;
            // 0x3ceaa4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3CEAA8u;
        goto label_3ceaa8;
    }
    ctx->pc = 0x3CEAA0u;
    {
        const bool branch_taken_0x3ceaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEAA0u;
            // 0x3ceaa4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceaa0) {
            ctx->pc = 0x3CEB8Cu;
            goto label_3ceb8c;
        }
    }
    ctx->pc = 0x3CEAA8u;
label_3ceaa8:
    // 0x3ceaa8: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x3ceaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_3ceaac:
    // 0x3ceaac: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x3ceaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_3ceab0:
    // 0x3ceab0: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3ceab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3ceab4:
    // 0x3ceab4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3ceab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3ceab8:
    // 0x3ceab8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3ceab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ceabc:
    // 0x3ceabc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x3ceabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3ceac0:
    // 0x3ceac0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3ceac0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_3ceac4:
    // 0x3ceac4: 0xa4a821  addu        $s5, $a1, $a0
    ctx->pc = 0x3ceac4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3ceac8:
    // 0x3ceac8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ceac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ceacc:
    // 0x3ceacc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ceaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cead0:
    // 0x3cead0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3cead0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3cead4:
    // 0x3cead4: 0x10000037  b           . + 4 + (0x37 << 2)
label_3cead8:
    if (ctx->pc == 0x3CEAD8u) {
        ctx->pc = 0x3CEAD8u;
            // 0x3cead8: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3CEADCu;
        goto label_3ceadc;
    }
    ctx->pc = 0x3CEAD4u;
    {
        const bool branch_taken_0x3cead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEAD4u;
            // 0x3cead8: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cead4) {
            ctx->pc = 0x3CEBB4u;
            goto label_3cebb4;
        }
    }
    ctx->pc = 0x3CEADCu;
label_3ceadc:
    // 0x3ceadc: 0x8c460088  lw          $a2, 0x88($v0)
    ctx->pc = 0x3ceadcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_3ceae0:
    // 0x3ceae0: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x3ceae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_3ceae4:
    // 0x3ceae4: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3ceae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3ceae8:
    // 0x3ceae8: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x3ceae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3ceaec:
    // 0x3ceaec: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x3ceaecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3ceaf0:
    // 0x3ceaf0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x3ceaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3ceaf4:
    // 0x3ceaf4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3ceaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3ceaf8:
    // 0x3ceaf8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3ceaf8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_3ceafc:
    // 0x3ceafc: 0x85a821  addu        $s5, $a0, $a1
    ctx->pc = 0x3ceafcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ceb00:
    // 0x3ceb00: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3ceb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3ceb04:
    // 0x3ceb04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ceb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ceb08:
    // 0x3ceb08: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3ceb08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3ceb0c:
    // 0x3ceb0c: 0x10000029  b           . + 4 + (0x29 << 2)
label_3ceb10:
    if (ctx->pc == 0x3CEB10u) {
        ctx->pc = 0x3CEB10u;
            // 0x3ceb10: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3CEB14u;
        goto label_3ceb14;
    }
    ctx->pc = 0x3CEB0Cu;
    {
        const bool branch_taken_0x3ceb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEB0Cu;
            // 0x3ceb10: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb0c) {
            ctx->pc = 0x3CEBB4u;
            goto label_3cebb4;
        }
    }
    ctx->pc = 0x3CEB14u;
label_3ceb14:
    // 0x3ceb14: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x3ceb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3ceb18:
    // 0x3ceb18: 0x8c460078  lw          $a2, 0x78($v0)
    ctx->pc = 0x3ceb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_3ceb1c:
    // 0x3ceb1c: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x3ceb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_3ceb20:
    // 0x3ceb20: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x3ceb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3ceb24:
    // 0x3ceb24: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3ceb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3ceb28:
    // 0x3ceb28: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x3ceb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3ceb2c:
    // 0x3ceb2c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3ceb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ceb30:
    // 0x3ceb30: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x3ceb30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ceb34:
    // 0x3ceb34: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3ceb34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3ceb38:
    // 0x3ceb38: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x3ceb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_3ceb3c:
    // 0x3ceb3c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3ceb3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_3ceb40:
    // 0x3ceb40: 0xc5a821  addu        $s5, $a2, $a1
    ctx->pc = 0x3ceb40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3ceb44:
    // 0x3ceb44: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3ceb48:
    if (ctx->pc == 0x3CEB48u) {
        ctx->pc = 0x3CEB48u;
            // 0x3ceb48: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3CEB4Cu;
        goto label_3ceb4c;
    }
    ctx->pc = 0x3CEB44u;
    {
        const bool branch_taken_0x3ceb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEB44u;
            // 0x3ceb48: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb44) {
            ctx->pc = 0x3CEBB4u;
            goto label_3cebb4;
        }
    }
    ctx->pc = 0x3CEB4Cu;
label_3ceb4c:
    // 0x3ceb4c: 0x90480090  lbu         $t0, 0x90($v0)
    ctx->pc = 0x3ceb4cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
label_3ceb50:
    // 0x3ceb50: 0x8c470088  lw          $a3, 0x88($v0)
    ctx->pc = 0x3ceb50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_3ceb54:
    // 0x3ceb54: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x3ceb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3ceb58:
    // 0x3ceb58: 0x8c460080  lw          $a2, 0x80($v0)
    ctx->pc = 0x3ceb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_3ceb5c:
    // 0x3ceb5c: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x3ceb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3ceb60:
    // 0x3ceb60: 0xe82821  addu        $a1, $a3, $t0
    ctx->pc = 0x3ceb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_3ceb64:
    // 0x3ceb64: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x3ceb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3ceb68:
    // 0x3ceb68: 0xc81023  subu        $v0, $a2, $t0
    ctx->pc = 0x3ceb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_3ceb6c:
    // 0x3ceb6c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3ceb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ceb70:
    // 0x3ceb70: 0x473023  subu        $a2, $v0, $a3
    ctx->pc = 0x3ceb70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3ceb74:
    // 0x3ceb74: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3ceb74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3ceb78:
    // 0x3ceb78: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x3ceb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_3ceb7c:
    // 0x3ceb7c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x3ceb7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_3ceb80:
    // 0x3ceb80: 0xa6a821  addu        $s5, $a1, $a2
    ctx->pc = 0x3ceb80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3ceb84:
    // 0x3ceb84: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ceb88:
    if (ctx->pc == 0x3CEB88u) {
        ctx->pc = 0x3CEB88u;
            // 0x3ceb88: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3CEB8Cu;
        goto label_3ceb8c;
    }
    ctx->pc = 0x3CEB84u;
    {
        const bool branch_taken_0x3ceb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEB84u;
            // 0x3ceb88: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb84) {
            ctx->pc = 0x3CEBB4u;
            goto label_3cebb4;
        }
    }
    ctx->pc = 0x3CEB8Cu;
label_3ceb8c:
    // 0x3ceb8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ceb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ceb90:
    // 0x3ceb90: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ceb90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ceb94:
    // 0x3ceb94: 0x320f809  jalr        $t9
label_3ceb98:
    if (ctx->pc == 0x3CEB98u) {
        ctx->pc = 0x3CEB98u;
            // 0x3ceb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CEB9Cu;
        goto label_3ceb9c;
    }
    ctx->pc = 0x3CEB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CEB9Cu);
        ctx->pc = 0x3CEB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEB94u;
            // 0x3ceb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CEB9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CEB9Cu; }
            if (ctx->pc != 0x3CEB9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CEB9Cu;
label_3ceb9c:
    // 0x3ceb9c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ceba0:
    if (ctx->pc == 0x3CEBA0u) {
        ctx->pc = 0x3CEBA4u;
        goto label_3ceba4;
    }
    ctx->pc = 0x3CEB9Cu;
    {
        const bool branch_taken_0x3ceb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ceb9c) {
            ctx->pc = 0x3CEBB4u;
            goto label_3cebb4;
        }
    }
    ctx->pc = 0x3CEBA4u;
label_3ceba4:
    // 0x3ceba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ceba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ceba8:
    // 0x3ceba8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ceba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cebac:
    // 0x3cebac: 0x320f809  jalr        $t9
label_3cebb0:
    if (ctx->pc == 0x3CEBB0u) {
        ctx->pc = 0x3CEBB0u;
            // 0x3cebb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CEBB4u;
        goto label_3cebb4;
    }
    ctx->pc = 0x3CEBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CEBB4u);
        ctx->pc = 0x3CEBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEBACu;
            // 0x3cebb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CEBB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CEBB4u; }
            if (ctx->pc != 0x3CEBB4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CEBB4u;
label_3cebb4:
    // 0x3cebb4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x3cebb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3cebb8:
    // 0x3cebb8: 0xc6400238  lwc1        $f0, 0x238($s2)
    ctx->pc = 0x3cebb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cebbc:
    // 0x3cebbc: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x3cebbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_3cebc0:
    // 0x3cebc0: 0x86630010  lh          $v1, 0x10($s3)
    ctx->pc = 0x3cebc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
label_3cebc4:
    // 0x3cebc4: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x3cebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3cebc8:
    // 0x3cebc8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x3cebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_3cebcc:
    // 0x3cebcc: 0xa625005e  sh          $a1, 0x5E($s1)
    ctx->pc = 0x3cebccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 94), (uint16_t)GPR_U32(ctx, 5));
label_3cebd0:
    // 0x3cebd0: 0xa6240060  sh          $a0, 0x60($s1)
    ctx->pc = 0x3cebd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 4));
label_3cebd4:
    // 0x3cebd4: 0x86240062  lh          $a0, 0x62($s1)
    ctx->pc = 0x3cebd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
label_3cebd8:
    // 0x3cebd8: 0x8625005e  lh          $a1, 0x5E($s1)
    ctx->pc = 0x3cebd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
label_3cebdc:
    // 0x3cebdc: 0x92620012  lbu         $v0, 0x12($s3)
    ctx->pc = 0x3cebdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
label_3cebe0:
    // 0x3cebe0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3cebe0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_3cebe4:
    // 0x3cebe4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x3cebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3cebe8:
    // 0x3cebe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3cebec:
    // 0x3cebec: 0xa6230066  sh          $v1, 0x66($s1)
    ctx->pc = 0x3cebecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 3));
label_3cebf0:
    // 0x3cebf0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3cebf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3cebf4:
    // 0x3cebf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3cebf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3cebf8:
    // 0x3cebf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3cebf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cebfc:
    // 0x3cebfc: 0x0  nop
    ctx->pc = 0x3cebfcu;
    // NOP
label_3cec00:
    // 0x3cec00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3cec00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3cec04:
    // 0x3cec04: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3cec08:
    if (ctx->pc == 0x3CEC08u) {
        ctx->pc = 0x3CEC08u;
            // 0x3cec08: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3CEC0Cu;
        goto label_3cec0c;
    }
    ctx->pc = 0x3CEC04u;
    {
        const bool branch_taken_0x3cec04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CEC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEC04u;
            // 0x3cec08: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec04) {
            ctx->pc = 0x3CEC18u;
            goto label_3cec18;
        }
    }
    ctx->pc = 0x3CEC0Cu;
label_3cec0c:
    // 0x3cec0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cec0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cec10:
    // 0x3cec10: 0x10000008  b           . + 4 + (0x8 << 2)
label_3cec14:
    if (ctx->pc == 0x3CEC14u) {
        ctx->pc = 0x3CEC14u;
            // 0x3cec14: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3CEC18u;
        goto label_3cec18;
    }
    ctx->pc = 0x3CEC10u;
    {
        const bool branch_taken_0x3cec10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEC10u;
            // 0x3cec14: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec10) {
            ctx->pc = 0x3CEC34u;
            goto label_3cec34;
        }
    }
    ctx->pc = 0x3CEC18u;
label_3cec18:
    // 0x3cec18: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3cec18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3cec1c:
    // 0x3cec1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cec1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3cec20:
    // 0x3cec20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cec20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cec24:
    // 0x3cec24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cec24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cec28:
    // 0x3cec28: 0x0  nop
    ctx->pc = 0x3cec28u;
    // NOP
label_3cec2c:
    // 0x3cec2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cec2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cec30:
    // 0x3cec30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3cec30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3cec34:
    // 0x3cec34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cec34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cec38:
    // 0x3cec38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3cec38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cec3c:
    // 0x3cec3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cec3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cec40:
    // 0x3cec40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3cec40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3cec44:
    // 0x3cec44: 0x0  nop
    ctx->pc = 0x3cec44u;
    // NOP
label_3cec48:
    // 0x3cec48: 0xa6230068  sh          $v1, 0x68($s1)
    ctx->pc = 0x3cec48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 104), (uint16_t)GPR_U32(ctx, 3));
label_3cec4c:
    // 0x3cec4c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3cec4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3cec50:
    // 0x3cec50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3cec50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cec54:
    // 0x3cec54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3cec54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cec58:
    // 0x3cec58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3cec58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cec5c:
    // 0x3cec5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cec5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cec60:
    // 0x3cec60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cec60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cec64:
    // 0x3cec64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cec64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cec68:
    // 0x3cec68: 0x3e00008  jr          $ra
label_3cec6c:
    if (ctx->pc == 0x3CEC6Cu) {
        ctx->pc = 0x3CEC6Cu;
            // 0x3cec6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CEC70u;
        goto label_3cec70;
    }
    ctx->pc = 0x3CEC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CEC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEC68u;
            // 0x3cec6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CEC70u;
label_3cec70:
    // 0x3cec70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3cec74:
    // 0x3cec74: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3cec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3cec78:
    // 0x3cec78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3cec7c:
    // 0x3cec7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cec80:
    // 0x3cec80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cec80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cec84:
    // 0x3cec84: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3cec84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3cec88:
    // 0x3cec88: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_3cec8c:
    if (ctx->pc == 0x3CEC8Cu) {
        ctx->pc = 0x3CEC90u;
        goto label_3cec90;
    }
    ctx->pc = 0x3CEC88u;
    {
        const bool branch_taken_0x3cec88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cec88) {
            ctx->pc = 0x3CECBCu;
            goto label_3cecbc;
        }
    }
    ctx->pc = 0x3CEC90u;
label_3cec90:
    // 0x3cec90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3cec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3cec94:
    // 0x3cec94: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_3cec98:
    if (ctx->pc == 0x3CEC98u) {
        ctx->pc = 0x3CEC9Cu;
        goto label_3cec9c;
    }
    ctx->pc = 0x3CEC94u;
    {
        const bool branch_taken_0x3cec94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cec94) {
            ctx->pc = 0x3CECBCu;
            goto label_3cecbc;
        }
    }
    ctx->pc = 0x3CEC9Cu;
label_3cec9c:
    // 0x3cec9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3cec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ceca0:
    // 0x3ceca0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3ceca4:
    if (ctx->pc == 0x3CECA4u) {
        ctx->pc = 0x3CECA8u;
        goto label_3ceca8;
    }
    ctx->pc = 0x3CECA0u;
    {
        const bool branch_taken_0x3ceca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ceca0) {
            ctx->pc = 0x3CECBCu;
            goto label_3cecbc;
        }
    }
    ctx->pc = 0x3CECA8u;
label_3ceca8:
    // 0x3ceca8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ceca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cecac:
    // 0x3cecac: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3cecb0:
    if (ctx->pc == 0x3CECB0u) {
        ctx->pc = 0x3CECB4u;
        goto label_3cecb4;
    }
    ctx->pc = 0x3CECACu;
    {
        const bool branch_taken_0x3cecac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cecac) {
            ctx->pc = 0x3CECBCu;
            goto label_3cecbc;
        }
    }
    ctx->pc = 0x3CECB4u;
label_3cecb4:
    // 0x3cecb4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3cecb8:
    if (ctx->pc == 0x3CECB8u) {
        ctx->pc = 0x3CECB8u;
            // 0x3cecb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3CECBCu;
        goto label_3cecbc;
    }
    ctx->pc = 0x3CECB4u;
    {
        const bool branch_taken_0x3cecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CECB4u;
            // 0x3cecb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cecb4) {
            ctx->pc = 0x3CEDB0u;
            goto label_3cedb0;
        }
    }
    ctx->pc = 0x3CECBCu;
label_3cecbc:
    // 0x3cecbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cecc0:
    // 0x3cecc0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cecc4:
    // 0x3cecc4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cecc8:
    // 0x3cecc8: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cecc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3ceccc:
    // 0x3ceccc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_3cecd0:
    if (ctx->pc == 0x3CECD0u) {
        ctx->pc = 0x3CECD4u;
        goto label_3cecd4;
    }
    ctx->pc = 0x3CECCCu;
    {
        const bool branch_taken_0x3ceccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ceccc) {
            ctx->pc = 0x3CECF0u;
            goto label_3cecf0;
        }
    }
    ctx->pc = 0x3CECD4u;
label_3cecd4:
    // 0x3cecd4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3cecd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cecd8:
    // 0x3cecd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cecd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cecdc:
    // 0x3cecdc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cecdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cece0:
    // 0x3cece0: 0x320f809  jalr        $t9
label_3cece4:
    if (ctx->pc == 0x3CECE4u) {
        ctx->pc = 0x3CECE4u;
            // 0x3cece4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CECE8u;
        goto label_3cece8;
    }
    ctx->pc = 0x3CECE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CECE8u);
        ctx->pc = 0x3CECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CECE0u;
            // 0x3cece4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CECE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CECE8u; }
            if (ctx->pc != 0x3CECE8u) { return; }
        }
        }
    }
    ctx->pc = 0x3CECE8u;
label_3cece8:
    // 0x3cece8: 0x10000030  b           . + 4 + (0x30 << 2)
label_3cecec:
    if (ctx->pc == 0x3CECECu) {
        ctx->pc = 0x3CECF0u;
        goto label_3cecf0;
    }
    ctx->pc = 0x3CECE8u;
    {
        const bool branch_taken_0x3cece8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cece8) {
            ctx->pc = 0x3CEDACu;
            goto label_3cedac;
        }
    }
    ctx->pc = 0x3CECF0u;
label_3cecf0:
    // 0x3cecf0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cecf4:
    // 0x3cecf4: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3cecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3cecf8:
    // 0x3cecf8: 0xc0506ac  jal         func_141AB0
label_3cecfc:
    if (ctx->pc == 0x3CECFCu) {
        ctx->pc = 0x3CECFCu;
            // 0x3cecfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CED00u;
        goto label_3ced00;
    }
    ctx->pc = 0x3CECF8u;
    SET_GPR_U32(ctx, 31, 0x3CED00u);
    ctx->pc = 0x3CECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CECF8u;
            // 0x3cecfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CED00u; }
        if (ctx->pc != 0x3CED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CED00u; }
        if (ctx->pc != 0x3CED00u) { return; }
    }
    ctx->pc = 0x3CED00u;
label_3ced00:
    // 0x3ced00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ced00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ced04:
    // 0x3ced04: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ced04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ced08:
    // 0x3ced08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ced08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ced0c:
    // 0x3ced0c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ced0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ced10:
    // 0x3ced10: 0x320f809  jalr        $t9
label_3ced14:
    if (ctx->pc == 0x3CED14u) {
        ctx->pc = 0x3CED14u;
            // 0x3ced14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CED18u;
        goto label_3ced18;
    }
    ctx->pc = 0x3CED10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CED18u);
        ctx->pc = 0x3CED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CED10u;
            // 0x3ced14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CED18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CED18u; }
            if (ctx->pc != 0x3CED18u) { return; }
        }
        }
    }
    ctx->pc = 0x3CED18u;
label_3ced18:
    // 0x3ced18: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3ced18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3ced1c:
    // 0x3ced1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ced1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ced20:
    // 0x3ced20: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3ced24:
    if (ctx->pc == 0x3CED24u) {
        ctx->pc = 0x3CED24u;
            // 0x3ced24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CED28u;
        goto label_3ced28;
    }
    ctx->pc = 0x3CED20u;
    {
        const bool branch_taken_0x3ced20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ced20) {
            ctx->pc = 0x3CED24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CED20u;
            // 0x3ced24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CED34u;
            goto label_3ced34;
        }
    }
    ctx->pc = 0x3CED28u;
label_3ced28:
    // 0x3ced28: 0xc110754  jal         func_441D50
label_3ced2c:
    if (ctx->pc == 0x3CED2Cu) {
        ctx->pc = 0x3CED2Cu;
            // 0x3ced2c: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x3CED30u;
        goto label_3ced30;
    }
    ctx->pc = 0x3CED28u;
    SET_GPR_U32(ctx, 31, 0x3CED30u);
    ctx->pc = 0x3CED2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CED28u;
            // 0x3ced2c: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CED30u; }
        if (ctx->pc != 0x3CED30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CED30u; }
        if (ctx->pc != 0x3CED30u) { return; }
    }
    ctx->pc = 0x3CED30u;
label_3ced30:
    // 0x3ced30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ced30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ced34:
    // 0x3ced34: 0xc0f3b70  jal         func_3CEDC0
label_3ced38:
    if (ctx->pc == 0x3CED38u) {
        ctx->pc = 0x3CED3Cu;
        goto label_3ced3c;
    }
    ctx->pc = 0x3CED34u;
    SET_GPR_U32(ctx, 31, 0x3CED3Cu);
    ctx->pc = 0x3CEDC0u;
    if (runtime->hasFunction(0x3CEDC0u)) {
        auto targetFn = runtime->lookupFunction(0x3CEDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CED3Cu; }
        if (ctx->pc != 0x3CED3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CEDC0_0x3cedc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CED3Cu; }
        if (ctx->pc != 0x3CED3Cu) { return; }
    }
    ctx->pc = 0x3CED3Cu;
label_3ced3c:
    // 0x3ced3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ced3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ced40:
    // 0x3ced40: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ced40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ced44:
    // 0x3ced44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ced44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ced48:
    // 0x3ced48: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ced48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ced4c:
    // 0x3ced4c: 0x320f809  jalr        $t9
label_3ced50:
    if (ctx->pc == 0x3CED50u) {
        ctx->pc = 0x3CED54u;
        goto label_3ced54;
    }
    ctx->pc = 0x3CED4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CED54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CED54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CED54u; }
            if (ctx->pc != 0x3CED54u) { return; }
        }
        }
    }
    ctx->pc = 0x3CED54u;
label_3ced54:
    // 0x3ced54: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3ced54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3ced58:
    // 0x3ced58: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ced58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3ced5c:
    // 0x3ced5c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_3ced60:
    if (ctx->pc == 0x3CED60u) {
        ctx->pc = 0x3CED64u;
        goto label_3ced64;
    }
    ctx->pc = 0x3CED5Cu;
    {
        const bool branch_taken_0x3ced5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ced5c) {
            ctx->pc = 0x3CEDACu;
            goto label_3cedac;
        }
    }
    ctx->pc = 0x3CED64u;
label_3ced64:
    // 0x3ced64: 0xc05068c  jal         func_141A30
label_3ced68:
    if (ctx->pc == 0x3CED68u) {
        ctx->pc = 0x3CED68u;
            // 0x3ced68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CED6Cu;
        goto label_3ced6c;
    }
    ctx->pc = 0x3CED64u;
    SET_GPR_U32(ctx, 31, 0x3CED6Cu);
    ctx->pc = 0x3CED68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CED64u;
            // 0x3ced68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CED6Cu; }
        if (ctx->pc != 0x3CED6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CED6Cu; }
        if (ctx->pc != 0x3CED6Cu) { return; }
    }
    ctx->pc = 0x3CED6Cu;
label_3ced6c:
    // 0x3ced6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ced6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ced70:
    // 0x3ced70: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ced70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ced74:
    // 0x3ced74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ced74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ced78:
    // 0x3ced78: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ced78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ced7c:
    // 0x3ced7c: 0x320f809  jalr        $t9
label_3ced80:
    if (ctx->pc == 0x3CED80u) {
        ctx->pc = 0x3CED80u;
            // 0x3ced80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CED84u;
        goto label_3ced84;
    }
    ctx->pc = 0x3CED7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CED84u);
        ctx->pc = 0x3CED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CED7Cu;
            // 0x3ced80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CED84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CED84u; }
            if (ctx->pc != 0x3CED84u) { return; }
        }
        }
    }
    ctx->pc = 0x3CED84u;
label_3ced84:
    // 0x3ced84: 0xc110754  jal         func_441D50
label_3ced88:
    if (ctx->pc == 0x3CED88u) {
        ctx->pc = 0x3CED88u;
            // 0x3ced88: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x3CED8Cu;
        goto label_3ced8c;
    }
    ctx->pc = 0x3CED84u;
    SET_GPR_U32(ctx, 31, 0x3CED8Cu);
    ctx->pc = 0x3CED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CED84u;
            // 0x3ced88: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CED8Cu; }
        if (ctx->pc != 0x3CED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CED8Cu; }
        if (ctx->pc != 0x3CED8Cu) { return; }
    }
    ctx->pc = 0x3CED8Cu;
label_3ced8c:
    // 0x3ced8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ced8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ced90:
    // 0x3ced90: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ced90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ced94:
    // 0x3ced94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ced94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ced98:
    // 0x3ced98: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ced98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ced9c:
    // 0x3ced9c: 0x320f809  jalr        $t9
label_3ceda0:
    if (ctx->pc == 0x3CEDA0u) {
        ctx->pc = 0x3CEDA4u;
        goto label_3ceda4;
    }
    ctx->pc = 0x3CED9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CEDA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CEDA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CEDA4u; }
            if (ctx->pc != 0x3CEDA4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CEDA4u;
label_3ceda4:
    // 0x3ceda4: 0xc05068c  jal         func_141A30
label_3ceda8:
    if (ctx->pc == 0x3CEDA8u) {
        ctx->pc = 0x3CEDA8u;
            // 0x3ceda8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CEDACu;
        goto label_3cedac;
    }
    ctx->pc = 0x3CEDA4u;
    SET_GPR_U32(ctx, 31, 0x3CEDACu);
    ctx->pc = 0x3CEDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEDA4u;
            // 0x3ceda8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CEDACu; }
        if (ctx->pc != 0x3CEDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CEDACu; }
        if (ctx->pc != 0x3CEDACu) { return; }
    }
    ctx->pc = 0x3CEDACu;
label_3cedac:
    // 0x3cedac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cedacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3cedb0:
    // 0x3cedb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cedb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cedb4:
    // 0x3cedb4: 0x3e00008  jr          $ra
label_3cedb8:
    if (ctx->pc == 0x3CEDB8u) {
        ctx->pc = 0x3CEDB8u;
            // 0x3cedb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3CEDBCu;
        goto label_3cedbc;
    }
    ctx->pc = 0x3CEDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CEDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEDB4u;
            // 0x3cedb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CEDBCu;
label_3cedbc:
    // 0x3cedbc: 0x0  nop
    ctx->pc = 0x3cedbcu;
    // NOP
}
