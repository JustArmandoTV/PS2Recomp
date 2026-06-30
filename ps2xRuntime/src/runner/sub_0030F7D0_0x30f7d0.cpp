#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030F7D0
// Address: 0x30f7d0 - 0x30fc60
void sub_0030F7D0_0x30f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F7D0_0x30f7d0");
#endif

    switch (ctx->pc) {
        case 0x30f7d0u: goto label_30f7d0;
        case 0x30f7d4u: goto label_30f7d4;
        case 0x30f7d8u: goto label_30f7d8;
        case 0x30f7dcu: goto label_30f7dc;
        case 0x30f7e0u: goto label_30f7e0;
        case 0x30f7e4u: goto label_30f7e4;
        case 0x30f7e8u: goto label_30f7e8;
        case 0x30f7ecu: goto label_30f7ec;
        case 0x30f7f0u: goto label_30f7f0;
        case 0x30f7f4u: goto label_30f7f4;
        case 0x30f7f8u: goto label_30f7f8;
        case 0x30f7fcu: goto label_30f7fc;
        case 0x30f800u: goto label_30f800;
        case 0x30f804u: goto label_30f804;
        case 0x30f808u: goto label_30f808;
        case 0x30f80cu: goto label_30f80c;
        case 0x30f810u: goto label_30f810;
        case 0x30f814u: goto label_30f814;
        case 0x30f818u: goto label_30f818;
        case 0x30f81cu: goto label_30f81c;
        case 0x30f820u: goto label_30f820;
        case 0x30f824u: goto label_30f824;
        case 0x30f828u: goto label_30f828;
        case 0x30f82cu: goto label_30f82c;
        case 0x30f830u: goto label_30f830;
        case 0x30f834u: goto label_30f834;
        case 0x30f838u: goto label_30f838;
        case 0x30f83cu: goto label_30f83c;
        case 0x30f840u: goto label_30f840;
        case 0x30f844u: goto label_30f844;
        case 0x30f848u: goto label_30f848;
        case 0x30f84cu: goto label_30f84c;
        case 0x30f850u: goto label_30f850;
        case 0x30f854u: goto label_30f854;
        case 0x30f858u: goto label_30f858;
        case 0x30f85cu: goto label_30f85c;
        case 0x30f860u: goto label_30f860;
        case 0x30f864u: goto label_30f864;
        case 0x30f868u: goto label_30f868;
        case 0x30f86cu: goto label_30f86c;
        case 0x30f870u: goto label_30f870;
        case 0x30f874u: goto label_30f874;
        case 0x30f878u: goto label_30f878;
        case 0x30f87cu: goto label_30f87c;
        case 0x30f880u: goto label_30f880;
        case 0x30f884u: goto label_30f884;
        case 0x30f888u: goto label_30f888;
        case 0x30f88cu: goto label_30f88c;
        case 0x30f890u: goto label_30f890;
        case 0x30f894u: goto label_30f894;
        case 0x30f898u: goto label_30f898;
        case 0x30f89cu: goto label_30f89c;
        case 0x30f8a0u: goto label_30f8a0;
        case 0x30f8a4u: goto label_30f8a4;
        case 0x30f8a8u: goto label_30f8a8;
        case 0x30f8acu: goto label_30f8ac;
        case 0x30f8b0u: goto label_30f8b0;
        case 0x30f8b4u: goto label_30f8b4;
        case 0x30f8b8u: goto label_30f8b8;
        case 0x30f8bcu: goto label_30f8bc;
        case 0x30f8c0u: goto label_30f8c0;
        case 0x30f8c4u: goto label_30f8c4;
        case 0x30f8c8u: goto label_30f8c8;
        case 0x30f8ccu: goto label_30f8cc;
        case 0x30f8d0u: goto label_30f8d0;
        case 0x30f8d4u: goto label_30f8d4;
        case 0x30f8d8u: goto label_30f8d8;
        case 0x30f8dcu: goto label_30f8dc;
        case 0x30f8e0u: goto label_30f8e0;
        case 0x30f8e4u: goto label_30f8e4;
        case 0x30f8e8u: goto label_30f8e8;
        case 0x30f8ecu: goto label_30f8ec;
        case 0x30f8f0u: goto label_30f8f0;
        case 0x30f8f4u: goto label_30f8f4;
        case 0x30f8f8u: goto label_30f8f8;
        case 0x30f8fcu: goto label_30f8fc;
        case 0x30f900u: goto label_30f900;
        case 0x30f904u: goto label_30f904;
        case 0x30f908u: goto label_30f908;
        case 0x30f90cu: goto label_30f90c;
        case 0x30f910u: goto label_30f910;
        case 0x30f914u: goto label_30f914;
        case 0x30f918u: goto label_30f918;
        case 0x30f91cu: goto label_30f91c;
        case 0x30f920u: goto label_30f920;
        case 0x30f924u: goto label_30f924;
        case 0x30f928u: goto label_30f928;
        case 0x30f92cu: goto label_30f92c;
        case 0x30f930u: goto label_30f930;
        case 0x30f934u: goto label_30f934;
        case 0x30f938u: goto label_30f938;
        case 0x30f93cu: goto label_30f93c;
        case 0x30f940u: goto label_30f940;
        case 0x30f944u: goto label_30f944;
        case 0x30f948u: goto label_30f948;
        case 0x30f94cu: goto label_30f94c;
        case 0x30f950u: goto label_30f950;
        case 0x30f954u: goto label_30f954;
        case 0x30f958u: goto label_30f958;
        case 0x30f95cu: goto label_30f95c;
        case 0x30f960u: goto label_30f960;
        case 0x30f964u: goto label_30f964;
        case 0x30f968u: goto label_30f968;
        case 0x30f96cu: goto label_30f96c;
        case 0x30f970u: goto label_30f970;
        case 0x30f974u: goto label_30f974;
        case 0x30f978u: goto label_30f978;
        case 0x30f97cu: goto label_30f97c;
        case 0x30f980u: goto label_30f980;
        case 0x30f984u: goto label_30f984;
        case 0x30f988u: goto label_30f988;
        case 0x30f98cu: goto label_30f98c;
        case 0x30f990u: goto label_30f990;
        case 0x30f994u: goto label_30f994;
        case 0x30f998u: goto label_30f998;
        case 0x30f99cu: goto label_30f99c;
        case 0x30f9a0u: goto label_30f9a0;
        case 0x30f9a4u: goto label_30f9a4;
        case 0x30f9a8u: goto label_30f9a8;
        case 0x30f9acu: goto label_30f9ac;
        case 0x30f9b0u: goto label_30f9b0;
        case 0x30f9b4u: goto label_30f9b4;
        case 0x30f9b8u: goto label_30f9b8;
        case 0x30f9bcu: goto label_30f9bc;
        case 0x30f9c0u: goto label_30f9c0;
        case 0x30f9c4u: goto label_30f9c4;
        case 0x30f9c8u: goto label_30f9c8;
        case 0x30f9ccu: goto label_30f9cc;
        case 0x30f9d0u: goto label_30f9d0;
        case 0x30f9d4u: goto label_30f9d4;
        case 0x30f9d8u: goto label_30f9d8;
        case 0x30f9dcu: goto label_30f9dc;
        case 0x30f9e0u: goto label_30f9e0;
        case 0x30f9e4u: goto label_30f9e4;
        case 0x30f9e8u: goto label_30f9e8;
        case 0x30f9ecu: goto label_30f9ec;
        case 0x30f9f0u: goto label_30f9f0;
        case 0x30f9f4u: goto label_30f9f4;
        case 0x30f9f8u: goto label_30f9f8;
        case 0x30f9fcu: goto label_30f9fc;
        case 0x30fa00u: goto label_30fa00;
        case 0x30fa04u: goto label_30fa04;
        case 0x30fa08u: goto label_30fa08;
        case 0x30fa0cu: goto label_30fa0c;
        case 0x30fa10u: goto label_30fa10;
        case 0x30fa14u: goto label_30fa14;
        case 0x30fa18u: goto label_30fa18;
        case 0x30fa1cu: goto label_30fa1c;
        case 0x30fa20u: goto label_30fa20;
        case 0x30fa24u: goto label_30fa24;
        case 0x30fa28u: goto label_30fa28;
        case 0x30fa2cu: goto label_30fa2c;
        case 0x30fa30u: goto label_30fa30;
        case 0x30fa34u: goto label_30fa34;
        case 0x30fa38u: goto label_30fa38;
        case 0x30fa3cu: goto label_30fa3c;
        case 0x30fa40u: goto label_30fa40;
        case 0x30fa44u: goto label_30fa44;
        case 0x30fa48u: goto label_30fa48;
        case 0x30fa4cu: goto label_30fa4c;
        case 0x30fa50u: goto label_30fa50;
        case 0x30fa54u: goto label_30fa54;
        case 0x30fa58u: goto label_30fa58;
        case 0x30fa5cu: goto label_30fa5c;
        case 0x30fa60u: goto label_30fa60;
        case 0x30fa64u: goto label_30fa64;
        case 0x30fa68u: goto label_30fa68;
        case 0x30fa6cu: goto label_30fa6c;
        case 0x30fa70u: goto label_30fa70;
        case 0x30fa74u: goto label_30fa74;
        case 0x30fa78u: goto label_30fa78;
        case 0x30fa7cu: goto label_30fa7c;
        case 0x30fa80u: goto label_30fa80;
        case 0x30fa84u: goto label_30fa84;
        case 0x30fa88u: goto label_30fa88;
        case 0x30fa8cu: goto label_30fa8c;
        case 0x30fa90u: goto label_30fa90;
        case 0x30fa94u: goto label_30fa94;
        case 0x30fa98u: goto label_30fa98;
        case 0x30fa9cu: goto label_30fa9c;
        case 0x30faa0u: goto label_30faa0;
        case 0x30faa4u: goto label_30faa4;
        case 0x30faa8u: goto label_30faa8;
        case 0x30faacu: goto label_30faac;
        case 0x30fab0u: goto label_30fab0;
        case 0x30fab4u: goto label_30fab4;
        case 0x30fab8u: goto label_30fab8;
        case 0x30fabcu: goto label_30fabc;
        case 0x30fac0u: goto label_30fac0;
        case 0x30fac4u: goto label_30fac4;
        case 0x30fac8u: goto label_30fac8;
        case 0x30faccu: goto label_30facc;
        case 0x30fad0u: goto label_30fad0;
        case 0x30fad4u: goto label_30fad4;
        case 0x30fad8u: goto label_30fad8;
        case 0x30fadcu: goto label_30fadc;
        case 0x30fae0u: goto label_30fae0;
        case 0x30fae4u: goto label_30fae4;
        case 0x30fae8u: goto label_30fae8;
        case 0x30faecu: goto label_30faec;
        case 0x30faf0u: goto label_30faf0;
        case 0x30faf4u: goto label_30faf4;
        case 0x30faf8u: goto label_30faf8;
        case 0x30fafcu: goto label_30fafc;
        case 0x30fb00u: goto label_30fb00;
        case 0x30fb04u: goto label_30fb04;
        case 0x30fb08u: goto label_30fb08;
        case 0x30fb0cu: goto label_30fb0c;
        case 0x30fb10u: goto label_30fb10;
        case 0x30fb14u: goto label_30fb14;
        case 0x30fb18u: goto label_30fb18;
        case 0x30fb1cu: goto label_30fb1c;
        case 0x30fb20u: goto label_30fb20;
        case 0x30fb24u: goto label_30fb24;
        case 0x30fb28u: goto label_30fb28;
        case 0x30fb2cu: goto label_30fb2c;
        case 0x30fb30u: goto label_30fb30;
        case 0x30fb34u: goto label_30fb34;
        case 0x30fb38u: goto label_30fb38;
        case 0x30fb3cu: goto label_30fb3c;
        case 0x30fb40u: goto label_30fb40;
        case 0x30fb44u: goto label_30fb44;
        case 0x30fb48u: goto label_30fb48;
        case 0x30fb4cu: goto label_30fb4c;
        case 0x30fb50u: goto label_30fb50;
        case 0x30fb54u: goto label_30fb54;
        case 0x30fb58u: goto label_30fb58;
        case 0x30fb5cu: goto label_30fb5c;
        case 0x30fb60u: goto label_30fb60;
        case 0x30fb64u: goto label_30fb64;
        case 0x30fb68u: goto label_30fb68;
        case 0x30fb6cu: goto label_30fb6c;
        case 0x30fb70u: goto label_30fb70;
        case 0x30fb74u: goto label_30fb74;
        case 0x30fb78u: goto label_30fb78;
        case 0x30fb7cu: goto label_30fb7c;
        case 0x30fb80u: goto label_30fb80;
        case 0x30fb84u: goto label_30fb84;
        case 0x30fb88u: goto label_30fb88;
        case 0x30fb8cu: goto label_30fb8c;
        case 0x30fb90u: goto label_30fb90;
        case 0x30fb94u: goto label_30fb94;
        case 0x30fb98u: goto label_30fb98;
        case 0x30fb9cu: goto label_30fb9c;
        case 0x30fba0u: goto label_30fba0;
        case 0x30fba4u: goto label_30fba4;
        case 0x30fba8u: goto label_30fba8;
        case 0x30fbacu: goto label_30fbac;
        case 0x30fbb0u: goto label_30fbb0;
        case 0x30fbb4u: goto label_30fbb4;
        case 0x30fbb8u: goto label_30fbb8;
        case 0x30fbbcu: goto label_30fbbc;
        case 0x30fbc0u: goto label_30fbc0;
        case 0x30fbc4u: goto label_30fbc4;
        case 0x30fbc8u: goto label_30fbc8;
        case 0x30fbccu: goto label_30fbcc;
        case 0x30fbd0u: goto label_30fbd0;
        case 0x30fbd4u: goto label_30fbd4;
        case 0x30fbd8u: goto label_30fbd8;
        case 0x30fbdcu: goto label_30fbdc;
        case 0x30fbe0u: goto label_30fbe0;
        case 0x30fbe4u: goto label_30fbe4;
        case 0x30fbe8u: goto label_30fbe8;
        case 0x30fbecu: goto label_30fbec;
        case 0x30fbf0u: goto label_30fbf0;
        case 0x30fbf4u: goto label_30fbf4;
        case 0x30fbf8u: goto label_30fbf8;
        case 0x30fbfcu: goto label_30fbfc;
        case 0x30fc00u: goto label_30fc00;
        case 0x30fc04u: goto label_30fc04;
        case 0x30fc08u: goto label_30fc08;
        case 0x30fc0cu: goto label_30fc0c;
        case 0x30fc10u: goto label_30fc10;
        case 0x30fc14u: goto label_30fc14;
        case 0x30fc18u: goto label_30fc18;
        case 0x30fc1cu: goto label_30fc1c;
        case 0x30fc20u: goto label_30fc20;
        case 0x30fc24u: goto label_30fc24;
        case 0x30fc28u: goto label_30fc28;
        case 0x30fc2cu: goto label_30fc2c;
        case 0x30fc30u: goto label_30fc30;
        case 0x30fc34u: goto label_30fc34;
        case 0x30fc38u: goto label_30fc38;
        case 0x30fc3cu: goto label_30fc3c;
        case 0x30fc40u: goto label_30fc40;
        case 0x30fc44u: goto label_30fc44;
        case 0x30fc48u: goto label_30fc48;
        case 0x30fc4cu: goto label_30fc4c;
        case 0x30fc50u: goto label_30fc50;
        case 0x30fc54u: goto label_30fc54;
        case 0x30fc58u: goto label_30fc58;
        case 0x30fc5cu: goto label_30fc5c;
        default: break;
    }

    ctx->pc = 0x30f7d0u;

label_30f7d0:
    // 0x30f7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30f7d4:
    // 0x30f7d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30f7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30f7d8:
    // 0x30f7d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30f7dc:
    // 0x30f7dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30f7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30f7e0:
    // 0x30f7e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30f7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30f7e4:
    // 0x30f7e4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x30f7e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_30f7e8:
    // 0x30f7e8: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x30f7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_30f7ec:
    // 0x30f7ec: 0x54800117  bnel        $a0, $zero, . + 4 + (0x117 << 2)
label_30f7f0:
    if (ctx->pc == 0x30F7F0u) {
        ctx->pc = 0x30F7F0u;
            // 0x30f7f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x30F7F4u;
        goto label_30f7f4;
    }
    ctx->pc = 0x30F7ECu;
    {
        const bool branch_taken_0x30f7ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f7ec) {
            ctx->pc = 0x30F7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F7ECu;
            // 0x30f7f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FC4Cu;
            goto label_30fc4c;
        }
    }
    ctx->pc = 0x30F7F4u;
label_30f7f4:
    // 0x30f7f4: 0x92240060  lbu         $a0, 0x60($s1)
    ctx->pc = 0x30f7f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
label_30f7f8:
    // 0x30f7f8: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x30f7f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_30f7fc:
    // 0x30f7fc: 0x10200112  beqz        $at, . + 4 + (0x112 << 2)
label_30f800:
    if (ctx->pc == 0x30F800u) {
        ctx->pc = 0x30F804u;
        goto label_30f804;
    }
    ctx->pc = 0x30F7FCu;
    {
        const bool branch_taken_0x30f7fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f7fc) {
            ctx->pc = 0x30FC48u;
            goto label_30fc48;
        }
    }
    ctx->pc = 0x30F804u;
label_30f804:
    // 0x30f804: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x30f804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_30f808:
    // 0x30f808: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30f808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30f80c:
    // 0x30f80c: 0x24a5bb30  addiu       $a1, $a1, -0x44D0
    ctx->pc = 0x30f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949680));
label_30f810:
    // 0x30f810: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30f810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_30f814:
    // 0x30f814: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x30f814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30f818:
    // 0x30f818: 0x800008  jr          $a0
label_30f81c:
    if (ctx->pc == 0x30F81Cu) {
        ctx->pc = 0x30F820u;
        goto label_30f820;
    }
    ctx->pc = 0x30F818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30F820u: goto label_30f820;
            case 0x30FB2Cu: goto label_30fb2c;
            case 0x30FB8Cu: goto label_30fb8c;
            case 0x30FBECu: goto label_30fbec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30F820u;
label_30f820:
    // 0x30f820: 0x86240062  lh          $a0, 0x62($s1)
    ctx->pc = 0x30f820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
label_30f824:
    // 0x30f824: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30f824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30f828:
    // 0x30f828: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x30f828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_30f82c:
    // 0x30f82c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30f830:
    // 0x30f830: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_30f834:
    // 0x30f834: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x30f834u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30f838:
    // 0x30f838: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x30f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_30f83c:
    // 0x30f83c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x30f83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_30f840:
    // 0x30f840: 0x58400003  blezl       $v0, . + 4 + (0x3 << 2)
label_30f844:
    if (ctx->pc == 0x30F844u) {
        ctx->pc = 0x30F844u;
            // 0x30f844: 0x8e020a74  lw          $v0, 0xA74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2676)));
        ctx->pc = 0x30F848u;
        goto label_30f848;
    }
    ctx->pc = 0x30F840u;
    {
        const bool branch_taken_0x30f840 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30f840) {
            ctx->pc = 0x30F844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F840u;
            // 0x30f844: 0x8e020a74  lw          $v0, 0xA74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2676)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F850u;
            goto label_30f850;
        }
    }
    ctx->pc = 0x30F848u;
label_30f848:
    // 0x30f848: 0x10000028  b           . + 4 + (0x28 << 2)
label_30f84c:
    if (ctx->pc == 0x30F84Cu) {
        ctx->pc = 0x30F84Cu;
            // 0x30f84c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x30F850u;
        goto label_30f850;
    }
    ctx->pc = 0x30F848u;
    {
        const bool branch_taken_0x30f848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F848u;
            // 0x30f84c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f848) {
            ctx->pc = 0x30F8ECu;
            goto label_30f8ec;
        }
    }
    ctx->pc = 0x30F850u;
label_30f850:
    // 0x30f850: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_30f854:
    if (ctx->pc == 0x30F854u) {
        ctx->pc = 0x30F854u;
            // 0x30f854: 0x8e020d70  lw          $v0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->pc = 0x30F858u;
        goto label_30f858;
    }
    ctx->pc = 0x30F850u;
    {
        const bool branch_taken_0x30f850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f850) {
            ctx->pc = 0x30F854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F850u;
            // 0x30f854: 0x8e020d70  lw          $v0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F860u;
            goto label_30f860;
        }
    }
    ctx->pc = 0x30F858u;
label_30f858:
    // 0x30f858: 0x10000024  b           . + 4 + (0x24 << 2)
label_30f85c:
    if (ctx->pc == 0x30F85Cu) {
        ctx->pc = 0x30F85Cu;
            // 0x30f85c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x30F860u;
        goto label_30f860;
    }
    ctx->pc = 0x30F858u;
    {
        const bool branch_taken_0x30f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F858u;
            // 0x30f85c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f858) {
            ctx->pc = 0x30F8ECu;
            goto label_30f8ec;
        }
    }
    ctx->pc = 0x30F860u;
label_30f860:
    // 0x30f860: 0x8c4400cc  lw          $a0, 0xCC($v0)
    ctx->pc = 0x30f860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_30f864:
    // 0x30f864: 0x50800021  beql        $a0, $zero, . + 4 + (0x21 << 2)
label_30f868:
    if (ctx->pc == 0x30F868u) {
        ctx->pc = 0x30F868u;
            // 0x30f868: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x30F86Cu;
        goto label_30f86c;
    }
    ctx->pc = 0x30F864u;
    {
        const bool branch_taken_0x30f864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f864) {
            ctx->pc = 0x30F868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F864u;
            // 0x30f868: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F8ECu;
            goto label_30f8ec;
        }
    }
    ctx->pc = 0x30F86Cu;
label_30f86c:
    // 0x30f86c: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x30f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
label_30f870:
    // 0x30f870: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x30f870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_30f874:
    // 0x30f874: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_30f878:
    if (ctx->pc == 0x30F878u) {
        ctx->pc = 0x30F87Cu;
        goto label_30f87c;
    }
    ctx->pc = 0x30F874u;
    {
        const bool branch_taken_0x30f874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f874) {
            ctx->pc = 0x30F884u;
            goto label_30f884;
        }
    }
    ctx->pc = 0x30F87Cu;
label_30f87c:
    // 0x30f87c: 0x38820003  xori        $v0, $a0, 0x3
    ctx->pc = 0x30f87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
label_30f880:
    // 0x30f880: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x30f880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_30f884:
    // 0x30f884: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_30f888:
    if (ctx->pc == 0x30F888u) {
        ctx->pc = 0x30F888u;
            // 0x30f888: 0x3c024852  lui         $v0, 0x4852 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
        ctx->pc = 0x30F88Cu;
        goto label_30f88c;
    }
    ctx->pc = 0x30F884u;
    {
        const bool branch_taken_0x30f884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f884) {
            ctx->pc = 0x30F888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F884u;
            // 0x30f888: 0x3c024852  lui         $v0, 0x4852 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F898u;
            goto label_30f898;
        }
    }
    ctx->pc = 0x30F88Cu;
label_30f88c:
    // 0x30f88c: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x30f88cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_30f890:
    // 0x30f890: 0x10000016  b           . + 4 + (0x16 << 2)
label_30f894:
    if (ctx->pc == 0x30F894u) {
        ctx->pc = 0x30F898u;
        goto label_30f898;
    }
    ctx->pc = 0x30F890u;
    {
        const bool branch_taken_0x30f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f890) {
            ctx->pc = 0x30F8ECu;
            goto label_30f8ec;
        }
    }
    ctx->pc = 0x30F898u;
label_30f898:
    // 0x30f898: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x30f898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_30f89c:
    // 0x30f89c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x30f89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_30f8a0:
    // 0x30f8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30f8a4:
    // 0x30f8a4: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x30f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f8a8:
    // 0x30f8a8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_30f8ac:
    // 0x30f8ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30f8acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_30f8b0:
    // 0x30f8b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30f8b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30f8b4:
    // 0x30f8b4: 0x0  nop
    ctx->pc = 0x30f8b4u;
    // NOP
label_30f8b8:
    // 0x30f8b8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x30f8b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_30f8bc:
    // 0x30f8bc: 0x0  nop
    ctx->pc = 0x30f8bcu;
    // NOP
label_30f8c0:
    // 0x30f8c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30f8c4:
    // 0x30f8c4: 0x0  nop
    ctx->pc = 0x30f8c4u;
    // NOP
label_30f8c8:
    // 0x30f8c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30f8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30f8cc:
    // 0x30f8cc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_30f8d0:
    if (ctx->pc == 0x30F8D0u) {
        ctx->pc = 0x30F8D0u;
            // 0x30f8d0: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x30F8D4u;
        goto label_30f8d4;
    }
    ctx->pc = 0x30F8CCu;
    {
        const bool branch_taken_0x30f8cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f8cc) {
            ctx->pc = 0x30F8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8CCu;
            // 0x30f8d0: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F8DCu;
            goto label_30f8dc;
        }
    }
    ctx->pc = 0x30F8D4u;
label_30f8d4:
    // 0x30f8d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_30f8d8:
    if (ctx->pc == 0x30F8D8u) {
        ctx->pc = 0x30F8D8u;
            // 0x30f8d8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x30F8DCu;
        goto label_30f8dc;
    }
    ctx->pc = 0x30F8D4u;
    {
        const bool branch_taken_0x30f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8D4u;
            // 0x30f8d8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8d4) {
            ctx->pc = 0x30F8ECu;
            goto label_30f8ec;
        }
    }
    ctx->pc = 0x30F8DCu;
label_30f8dc:
    // 0x30f8dc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x30f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_30f8e0:
    // 0x30f8e0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_30f8e4:
    if (ctx->pc == 0x30F8E4u) {
        ctx->pc = 0x30F8E4u;
            // 0x30f8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F8E8u;
        goto label_30f8e8;
    }
    ctx->pc = 0x30F8E0u;
    {
        const bool branch_taken_0x30f8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x30f8e0) {
            ctx->pc = 0x30F8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8E0u;
            // 0x30f8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F8ECu;
            goto label_30f8ec;
        }
    }
    ctx->pc = 0x30F8E8u;
label_30f8e8:
    // 0x30f8e8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x30f8e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_30f8ec:
    // 0x30f8ec: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_30f8f0:
    if (ctx->pc == 0x30F8F0u) {
        ctx->pc = 0x30F8F0u;
            // 0x30f8f0: 0x96220064  lhu         $v0, 0x64($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->pc = 0x30F8F4u;
        goto label_30f8f4;
    }
    ctx->pc = 0x30F8ECu;
    {
        const bool branch_taken_0x30f8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f8ec) {
            ctx->pc = 0x30F8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8ECu;
            // 0x30f8f0: 0x96220064  lhu         $v0, 0x64($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F924u;
            goto label_30f924;
        }
    }
    ctx->pc = 0x30F8F4u;
label_30f8f4:
    // 0x30f8f4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x30f8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_30f8f8:
    // 0x30f8f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_30f8fc:
    if (ctx->pc == 0x30F8FCu) {
        ctx->pc = 0x30F8FCu;
            // 0x30f8fc: 0x96220064  lhu         $v0, 0x64($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->pc = 0x30F900u;
        goto label_30f900;
    }
    ctx->pc = 0x30F8F8u;
    {
        const bool branch_taken_0x30f8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f8f8) {
            ctx->pc = 0x30F8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8F8u;
            // 0x30f8fc: 0x96220064  lhu         $v0, 0x64($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F914u;
            goto label_30f914;
        }
    }
    ctx->pc = 0x30F900u;
label_30f900:
    // 0x30f900: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x30f900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30f904:
    // 0x30f904: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x30f904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_30f908:
    // 0x30f908: 0x320f809  jalr        $t9
label_30f90c:
    if (ctx->pc == 0x30F90Cu) {
        ctx->pc = 0x30F90Cu;
            // 0x30f90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F910u;
        goto label_30f910;
    }
    ctx->pc = 0x30F908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30F910u);
        ctx->pc = 0x30F90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F908u;
            // 0x30f90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30F910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30F910u; }
            if (ctx->pc != 0x30F910u) { return; }
        }
        }
    }
    ctx->pc = 0x30F910u;
label_30f910:
    // 0x30f910: 0x96220064  lhu         $v0, 0x64($s1)
    ctx->pc = 0x30f910u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_30f914:
    // 0x30f914: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x30f914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_30f918:
    // 0x30f918: 0xa6220064  sh          $v0, 0x64($s1)
    ctx->pc = 0x30f918u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
label_30f91c:
    // 0x30f91c: 0x10000003  b           . + 4 + (0x3 << 2)
label_30f920:
    if (ctx->pc == 0x30F920u) {
        ctx->pc = 0x30F920u;
            // 0x30f920: 0xa6200066  sh          $zero, 0x66($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x30F924u;
        goto label_30f924;
    }
    ctx->pc = 0x30F91Cu;
    {
        const bool branch_taken_0x30f91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F91Cu;
            // 0x30f920: 0xa6200066  sh          $zero, 0x66($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f91c) {
            ctx->pc = 0x30F92Cu;
            goto label_30f92c;
        }
    }
    ctx->pc = 0x30F924u;
label_30f924:
    // 0x30f924: 0x3042ffdf  andi        $v0, $v0, 0xFFDF
    ctx->pc = 0x30f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
label_30f928:
    // 0x30f928: 0xa6220064  sh          $v0, 0x64($s1)
    ctx->pc = 0x30f928u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
label_30f92c:
    // 0x30f92c: 0xc077574  jal         func_1DD5D0
label_30f930:
    if (ctx->pc == 0x30F930u) {
        ctx->pc = 0x30F930u;
            // 0x30f930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F934u;
        goto label_30f934;
    }
    ctx->pc = 0x30F92Cu;
    SET_GPR_U32(ctx, 31, 0x30F934u);
    ctx->pc = 0x30F930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F92Cu;
            // 0x30f930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F934u; }
        if (ctx->pc != 0x30F934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F934u; }
        if (ctx->pc != 0x30F934u) { return; }
    }
    ctx->pc = 0x30F934u;
label_30f934:
    // 0x30f934: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x30f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_30f938:
    // 0x30f938: 0x54430032  bnel        $v0, $v1, . + 4 + (0x32 << 2)
label_30f93c:
    if (ctx->pc == 0x30F93Cu) {
        ctx->pc = 0x30F93Cu;
            // 0x30f93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F940u;
        goto label_30f940;
    }
    ctx->pc = 0x30F938u;
    {
        const bool branch_taken_0x30f938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30f938) {
            ctx->pc = 0x30F93Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F938u;
            // 0x30f93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FA04u;
            goto label_30fa04;
        }
    }
    ctx->pc = 0x30F940u;
label_30f940:
    // 0x30f940: 0xc0c3890  jal         func_30E240
label_30f944:
    if (ctx->pc == 0x30F944u) {
        ctx->pc = 0x30F944u;
            // 0x30f944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F948u;
        goto label_30f948;
    }
    ctx->pc = 0x30F940u;
    SET_GPR_U32(ctx, 31, 0x30F948u);
    ctx->pc = 0x30F944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F940u;
            // 0x30f944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E240u;
    if (runtime->hasFunction(0x30E240u)) {
        auto targetFn = runtime->lookupFunction(0x30E240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F948u; }
        if (ctx->pc != 0x30F948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E240_0x30e240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F948u; }
        if (ctx->pc != 0x30F948u) { return; }
    }
    ctx->pc = 0x30F948u;
label_30f948:
    // 0x30f948: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30f948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30f94c:
    // 0x30f94c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x30f94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_30f950:
    // 0x30f950: 0x5460005b  bnel        $v1, $zero, . + 4 + (0x5B << 2)
label_30f954:
    if (ctx->pc == 0x30F954u) {
        ctx->pc = 0x30F954u;
            // 0x30f954: 0x96230064  lhu         $v1, 0x64($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->pc = 0x30F958u;
        goto label_30f958;
    }
    ctx->pc = 0x30F950u;
    {
        const bool branch_taken_0x30f950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f950) {
            ctx->pc = 0x30F954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F950u;
            // 0x30f954: 0x96230064  lhu         $v1, 0x64($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FAC0u;
            goto label_30fac0;
        }
    }
    ctx->pc = 0x30F958u;
label_30f958:
    // 0x30f958: 0x86220066  lh          $v0, 0x66($s1)
    ctx->pc = 0x30f958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_30f95c:
    // 0x30f95c: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
label_30f960:
    if (ctx->pc == 0x30F960u) {
        ctx->pc = 0x30F960u;
            // 0x30f960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F964u;
        goto label_30f964;
    }
    ctx->pc = 0x30F95Cu;
    {
        const bool branch_taken_0x30f95c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30F960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F95Cu;
            // 0x30f960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f95c) {
            ctx->pc = 0x30F9F0u;
            goto label_30f9f0;
        }
    }
    ctx->pc = 0x30F964u;
label_30f964:
    // 0x30f964: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30f964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f968:
    // 0x30f968: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30f968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30f96c:
    // 0x30f96c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_30f970:
    // 0x30f970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30f974:
    // 0x30f974: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30f978:
    // 0x30f978: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30f978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_30f97c:
    // 0x30f97c: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x30f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f980:
    // 0x30f980: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x30f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f984:
    // 0x30f984: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30f984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30f988:
    // 0x30f988: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x30f988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_30f98c:
    // 0x30f98c: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x30f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f990:
    // 0x30f990: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x30f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f994:
    // 0x30f994: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30f994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30f998:
    // 0x30f998: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x30f998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
label_30f99c:
    // 0x30f99c: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x30f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f9a0:
    // 0x30f9a0: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x30f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f9a4:
    // 0x30f9a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30f9a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30f9a8:
    // 0x30f9a8: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x30f9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
label_30f9ac:
    // 0x30f9ac: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x30f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f9b0:
    // 0x30f9b0: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x30f9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f9b4:
    // 0x30f9b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30f9b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30f9b8:
    // 0x30f9b8: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x30f9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
label_30f9bc:
    // 0x30f9bc: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x30f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f9c0:
    // 0x30f9c0: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x30f9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f9c4:
    // 0x30f9c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30f9c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30f9c8:
    // 0x30f9c8: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x30f9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_30f9cc:
    // 0x30f9cc: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x30f9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f9d0:
    // 0x30f9d0: 0xc44000ec  lwc1        $f0, 0xEC($v0)
    ctx->pc = 0x30f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f9d4:
    // 0x30f9d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30f9d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30f9d8:
    // 0x30f9d8: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x30f9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_30f9dc:
    // 0x30f9dc: 0x86220066  lh          $v0, 0x66($s1)
    ctx->pc = 0x30f9dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_30f9e0:
    // 0x30f9e0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x30f9e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_30f9e4:
    // 0x30f9e4: 0x1020ffe0  beqz        $at, . + 4 + (-0x20 << 2)
label_30f9e8:
    if (ctx->pc == 0x30F9E8u) {
        ctx->pc = 0x30F9E8u;
            // 0x30f9e8: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x30F9ECu;
        goto label_30f9ec;
    }
    ctx->pc = 0x30F9E4u;
    {
        const bool branch_taken_0x30f9e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F9E4u;
            // 0x30f9e8: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f9e4) {
            ctx->pc = 0x30F968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f968;
        }
    }
    ctx->pc = 0x30F9ECu;
label_30f9ec:
    // 0x30f9ec: 0x0  nop
    ctx->pc = 0x30f9ecu;
    // NOP
label_30f9f0:
    // 0x30f9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30f9f4:
    // 0x30f9f4: 0xc0c3f18  jal         func_30FC60
label_30f9f8:
    if (ctx->pc == 0x30F9F8u) {
        ctx->pc = 0x30F9F8u;
            // 0x30f9f8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x30F9FCu;
        goto label_30f9fc;
    }
    ctx->pc = 0x30F9F4u;
    SET_GPR_U32(ctx, 31, 0x30F9FCu);
    ctx->pc = 0x30F9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F9F4u;
            // 0x30f9f8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FC60u;
    if (runtime->hasFunction(0x30FC60u)) {
        auto targetFn = runtime->lookupFunction(0x30FC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F9FCu; }
        if (ctx->pc != 0x30F9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FC60_0x30fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F9FCu; }
        if (ctx->pc != 0x30F9FCu) { return; }
    }
    ctx->pc = 0x30F9FCu;
label_30f9fc:
    // 0x30f9fc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_30fa00:
    if (ctx->pc == 0x30FA00u) {
        ctx->pc = 0x30FA04u;
        goto label_30fa04;
    }
    ctx->pc = 0x30F9FCu;
    {
        const bool branch_taken_0x30f9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f9fc) {
            ctx->pc = 0x30FABCu;
            goto label_30fabc;
        }
    }
    ctx->pc = 0x30FA04u;
label_30fa04:
    // 0x30fa04: 0xc0c3890  jal         func_30E240
label_30fa08:
    if (ctx->pc == 0x30FA08u) {
        ctx->pc = 0x30FA0Cu;
        goto label_30fa0c;
    }
    ctx->pc = 0x30FA04u;
    SET_GPR_U32(ctx, 31, 0x30FA0Cu);
    ctx->pc = 0x30E240u;
    if (runtime->hasFunction(0x30E240u)) {
        auto targetFn = runtime->lookupFunction(0x30E240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FA0Cu; }
        if (ctx->pc != 0x30FA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E240_0x30e240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FA0Cu; }
        if (ctx->pc != 0x30FA0Cu) { return; }
    }
    ctx->pc = 0x30FA0Cu;
label_30fa0c:
    // 0x30fa0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30fa0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30fa10:
    // 0x30fa10: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x30fa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_30fa14:
    // 0x30fa14: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_30fa18:
    if (ctx->pc == 0x30FA18u) {
        ctx->pc = 0x30FA1Cu;
        goto label_30fa1c;
    }
    ctx->pc = 0x30FA14u;
    {
        const bool branch_taken_0x30fa14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fa14) {
            ctx->pc = 0x30FABCu;
            goto label_30fabc;
        }
    }
    ctx->pc = 0x30FA1Cu;
label_30fa1c:
    // 0x30fa1c: 0x86220066  lh          $v0, 0x66($s1)
    ctx->pc = 0x30fa1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_30fa20:
    // 0x30fa20: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
label_30fa24:
    if (ctx->pc == 0x30FA24u) {
        ctx->pc = 0x30FA24u;
            // 0x30fa24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30FA28u;
        goto label_30fa28;
    }
    ctx->pc = 0x30FA20u;
    {
        const bool branch_taken_0x30fa20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30FA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FA20u;
            // 0x30fa24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa20) {
            ctx->pc = 0x30FAB0u;
            goto label_30fab0;
        }
    }
    ctx->pc = 0x30FA28u;
label_30fa28:
    // 0x30fa28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30fa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fa2c:
    // 0x30fa2c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x30fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_30fa30:
    // 0x30fa30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_30fa34:
    // 0x30fa34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_30fa38:
    // 0x30fa38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30fa3c:
    // 0x30fa3c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_30fa40:
    // 0x30fa40: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x30fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30fa44:
    // 0x30fa44: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x30fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30fa48:
    // 0x30fa48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fa48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30fa4c:
    // 0x30fa4c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x30fa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_30fa50:
    // 0x30fa50: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x30fa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30fa54:
    // 0x30fa54: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x30fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30fa58:
    // 0x30fa58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fa58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30fa5c:
    // 0x30fa5c: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x30fa5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
label_30fa60:
    // 0x30fa60: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x30fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30fa64:
    // 0x30fa64: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x30fa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30fa68:
    // 0x30fa68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fa68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30fa6c:
    // 0x30fa6c: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x30fa6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
label_30fa70:
    // 0x30fa70: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x30fa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30fa74:
    // 0x30fa74: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x30fa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30fa78:
    // 0x30fa78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fa78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30fa7c:
    // 0x30fa7c: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x30fa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
label_30fa80:
    // 0x30fa80: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x30fa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30fa84:
    // 0x30fa84: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x30fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30fa88:
    // 0x30fa88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fa88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30fa8c:
    // 0x30fa8c: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x30fa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_30fa90:
    // 0x30fa90: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x30fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30fa94:
    // 0x30fa94: 0xc44000ec  lwc1        $f0, 0xEC($v0)
    ctx->pc = 0x30fa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30fa98:
    // 0x30fa98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fa98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30fa9c:
    // 0x30fa9c: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x30fa9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_30faa0:
    // 0x30faa0: 0x86220066  lh          $v0, 0x66($s1)
    ctx->pc = 0x30faa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_30faa4:
    // 0x30faa4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x30faa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30faa8:
    // 0x30faa8: 0x1020ffe0  beqz        $at, . + 4 + (-0x20 << 2)
label_30faac:
    if (ctx->pc == 0x30FAACu) {
        ctx->pc = 0x30FAACu;
            // 0x30faac: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x30FAB0u;
        goto label_30fab0;
    }
    ctx->pc = 0x30FAA8u;
    {
        const bool branch_taken_0x30faa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FAA8u;
            // 0x30faac: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30faa8) {
            ctx->pc = 0x30FA2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fa2c;
        }
    }
    ctx->pc = 0x30FAB0u;
label_30fab0:
    // 0x30fab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30fab4:
    // 0x30fab4: 0xc0772c8  jal         func_1DCB20
label_30fab8:
    if (ctx->pc == 0x30FAB8u) {
        ctx->pc = 0x30FAB8u;
            // 0x30fab8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x30FABCu;
        goto label_30fabc;
    }
    ctx->pc = 0x30FAB4u;
    SET_GPR_U32(ctx, 31, 0x30FABCu);
    ctx->pc = 0x30FAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FAB4u;
            // 0x30fab8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB20u;
    if (runtime->hasFunction(0x1DCB20u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FABCu; }
        if (ctx->pc != 0x30FABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB20_0x1dcb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FABCu; }
        if (ctx->pc != 0x30FABCu) { return; }
    }
    ctx->pc = 0x30FABCu;
label_30fabc:
    // 0x30fabc: 0x96230064  lhu         $v1, 0x64($s1)
    ctx->pc = 0x30fabcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_30fac0:
    // 0x30fac0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x30fac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_30fac4:
    // 0x30fac4: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
label_30fac8:
    if (ctx->pc == 0x30FAC8u) {
        ctx->pc = 0x30FACCu;
        goto label_30facc;
    }
    ctx->pc = 0x30FAC4u;
    {
        const bool branch_taken_0x30fac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fac4) {
            ctx->pc = 0x30FC48u;
            goto label_30fc48;
        }
    }
    ctx->pc = 0x30FACCu;
label_30facc:
    // 0x30facc: 0x82240061  lb          $a0, 0x61($s1)
    ctx->pc = 0x30faccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
label_30fad0:
    // 0x30fad0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x30fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_30fad4:
    // 0x30fad4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x30fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_30fad8:
    // 0x30fad8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30fad8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30fadc:
    // 0x30fadc: 0x0  nop
    ctx->pc = 0x30fadcu;
    // NOP
label_30fae0:
    // 0x30fae0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30fae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_30fae4:
    // 0x30fae4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x30fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30fae8:
    // 0x30fae8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30faec:
    // 0x30faec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30faecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_30faf0:
    // 0x30faf0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30faf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_30faf4:
    // 0x30faf4: 0x0  nop
    ctx->pc = 0x30faf4u;
    // NOP
label_30faf8:
    // 0x30faf8: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x30faf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_30fafc:
    // 0x30fafc: 0xa2230061  sb          $v1, 0x61($s1)
    ctx->pc = 0x30fafcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
label_30fb00:
    // 0x30fb00: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x30fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_30fb04:
    // 0x30fb04: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x30fb04u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_30fb08:
    // 0x30fb08: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30fb08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_30fb0c:
    // 0x30fb0c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x30fb0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30fb10:
    // 0x30fb10: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
label_30fb14:
    if (ctx->pc == 0x30FB14u) {
        ctx->pc = 0x30FB18u;
        goto label_30fb18;
    }
    ctx->pc = 0x30FB10u;
    {
        const bool branch_taken_0x30fb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fb10) {
            ctx->pc = 0x30FC48u;
            goto label_30fc48;
        }
    }
    ctx->pc = 0x30FB18u;
label_30fb18:
    // 0x30fb18: 0x96230064  lhu         $v1, 0x64($s1)
    ctx->pc = 0x30fb18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_30fb1c:
    // 0x30fb1c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30fb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_30fb20:
    // 0x30fb20: 0xa6230064  sh          $v1, 0x64($s1)
    ctx->pc = 0x30fb20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 3));
label_30fb24:
    // 0x30fb24: 0x10000048  b           . + 4 + (0x48 << 2)
label_30fb28:
    if (ctx->pc == 0x30FB28u) {
        ctx->pc = 0x30FB28u;
            // 0x30fb28: 0xa2200061  sb          $zero, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x30FB2Cu;
        goto label_30fb2c;
    }
    ctx->pc = 0x30FB24u;
    {
        const bool branch_taken_0x30fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FB24u;
            // 0x30fb28: 0xa2200061  sb          $zero, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb24) {
            ctx->pc = 0x30FC48u;
            goto label_30fc48;
        }
    }
    ctx->pc = 0x30FB2Cu;
label_30fb2c:
    // 0x30fb2c: 0x82240061  lb          $a0, 0x61($s1)
    ctx->pc = 0x30fb2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
label_30fb30:
    // 0x30fb30: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x30fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_30fb34:
    // 0x30fb34: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x30fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_30fb38:
    // 0x30fb38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30fb38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30fb3c:
    // 0x30fb3c: 0x0  nop
    ctx->pc = 0x30fb3cu;
    // NOP
label_30fb40:
    // 0x30fb40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30fb40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_30fb44:
    // 0x30fb44: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x30fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30fb48:
    // 0x30fb48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fb48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30fb4c:
    // 0x30fb4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30fb4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_30fb50:
    // 0x30fb50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30fb50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_30fb54:
    // 0x30fb54: 0x0  nop
    ctx->pc = 0x30fb54u;
    // NOP
label_30fb58:
    // 0x30fb58: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x30fb58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_30fb5c:
    // 0x30fb5c: 0xa2230061  sb          $v1, 0x61($s1)
    ctx->pc = 0x30fb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
label_30fb60:
    // 0x30fb60: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x30fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_30fb64:
    // 0x30fb64: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x30fb64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_30fb68:
    // 0x30fb68: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30fb68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_30fb6c:
    // 0x30fb6c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x30fb6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30fb70:
    // 0x30fb70: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_30fb74:
    if (ctx->pc == 0x30FB74u) {
        ctx->pc = 0x30FB78u;
        goto label_30fb78;
    }
    ctx->pc = 0x30FB70u;
    {
        const bool branch_taken_0x30fb70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fb70) {
            ctx->pc = 0x30FC48u;
            goto label_30fc48;
        }
    }
    ctx->pc = 0x30FB78u;
label_30fb78:
    // 0x30fb78: 0x96230064  lhu         $v1, 0x64($s1)
    ctx->pc = 0x30fb78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_30fb7c:
    // 0x30fb7c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30fb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_30fb80:
    // 0x30fb80: 0xa6230064  sh          $v1, 0x64($s1)
    ctx->pc = 0x30fb80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 3));
label_30fb84:
    // 0x30fb84: 0x10000030  b           . + 4 + (0x30 << 2)
label_30fb88:
    if (ctx->pc == 0x30FB88u) {
        ctx->pc = 0x30FB88u;
            // 0x30fb88: 0xa2200061  sb          $zero, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x30FB8Cu;
        goto label_30fb8c;
    }
    ctx->pc = 0x30FB84u;
    {
        const bool branch_taken_0x30fb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FB84u;
            // 0x30fb88: 0xa2200061  sb          $zero, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb84) {
            ctx->pc = 0x30FC48u;
            goto label_30fc48;
        }
    }
    ctx->pc = 0x30FB8Cu;
label_30fb8c:
    // 0x30fb8c: 0x82240061  lb          $a0, 0x61($s1)
    ctx->pc = 0x30fb8cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
label_30fb90:
    // 0x30fb90: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x30fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_30fb94:
    // 0x30fb94: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x30fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_30fb98:
    // 0x30fb98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30fb98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30fb9c:
    // 0x30fb9c: 0x0  nop
    ctx->pc = 0x30fb9cu;
    // NOP
label_30fba0:
    // 0x30fba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30fba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_30fba4:
    // 0x30fba4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x30fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30fba8:
    // 0x30fba8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30fbac:
    // 0x30fbac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30fbacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_30fbb0:
    // 0x30fbb0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30fbb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_30fbb4:
    // 0x30fbb4: 0x0  nop
    ctx->pc = 0x30fbb4u;
    // NOP
label_30fbb8:
    // 0x30fbb8: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x30fbb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_30fbbc:
    // 0x30fbbc: 0xa2230061  sb          $v1, 0x61($s1)
    ctx->pc = 0x30fbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
label_30fbc0:
    // 0x30fbc0: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x30fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_30fbc4:
    // 0x30fbc4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x30fbc4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_30fbc8:
    // 0x30fbc8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30fbc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_30fbcc:
    // 0x30fbcc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x30fbccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30fbd0:
    // 0x30fbd0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_30fbd4:
    if (ctx->pc == 0x30FBD4u) {
        ctx->pc = 0x30FBD8u;
        goto label_30fbd8;
    }
    ctx->pc = 0x30FBD0u;
    {
        const bool branch_taken_0x30fbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fbd0) {
            ctx->pc = 0x30FC48u;
            goto label_30fc48;
        }
    }
    ctx->pc = 0x30FBD8u;
label_30fbd8:
    // 0x30fbd8: 0x96230064  lhu         $v1, 0x64($s1)
    ctx->pc = 0x30fbd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_30fbdc:
    // 0x30fbdc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30fbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_30fbe0:
    // 0x30fbe0: 0xa6230064  sh          $v1, 0x64($s1)
    ctx->pc = 0x30fbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 3));
label_30fbe4:
    // 0x30fbe4: 0x10000018  b           . + 4 + (0x18 << 2)
label_30fbe8:
    if (ctx->pc == 0x30FBE8u) {
        ctx->pc = 0x30FBE8u;
            // 0x30fbe8: 0xa2200061  sb          $zero, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x30FBECu;
        goto label_30fbec;
    }
    ctx->pc = 0x30FBE4u;
    {
        const bool branch_taken_0x30fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FBE4u;
            // 0x30fbe8: 0xa2200061  sb          $zero, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fbe4) {
            ctx->pc = 0x30FC48u;
            goto label_30fc48;
        }
    }
    ctx->pc = 0x30FBECu;
label_30fbec:
    // 0x30fbec: 0x82240061  lb          $a0, 0x61($s1)
    ctx->pc = 0x30fbecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
label_30fbf0:
    // 0x30fbf0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x30fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_30fbf4:
    // 0x30fbf4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x30fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_30fbf8:
    // 0x30fbf8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30fbf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30fbfc:
    // 0x30fbfc: 0x0  nop
    ctx->pc = 0x30fbfcu;
    // NOP
label_30fc00:
    // 0x30fc00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30fc00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_30fc04:
    // 0x30fc04: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x30fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30fc08:
    // 0x30fc08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fc08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30fc0c:
    // 0x30fc0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30fc0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_30fc10:
    // 0x30fc10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30fc10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_30fc14:
    // 0x30fc14: 0x0  nop
    ctx->pc = 0x30fc14u;
    // NOP
label_30fc18:
    // 0x30fc18: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x30fc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_30fc1c:
    // 0x30fc1c: 0xa2230061  sb          $v1, 0x61($s1)
    ctx->pc = 0x30fc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
label_30fc20:
    // 0x30fc20: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x30fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_30fc24:
    // 0x30fc24: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x30fc24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_30fc28:
    // 0x30fc28: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30fc28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_30fc2c:
    // 0x30fc2c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x30fc2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30fc30:
    // 0x30fc30: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_30fc34:
    if (ctx->pc == 0x30FC34u) {
        ctx->pc = 0x30FC38u;
        goto label_30fc38;
    }
    ctx->pc = 0x30FC30u;
    {
        const bool branch_taken_0x30fc30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fc30) {
            ctx->pc = 0x30FC48u;
            goto label_30fc48;
        }
    }
    ctx->pc = 0x30FC38u;
label_30fc38:
    // 0x30fc38: 0x96230064  lhu         $v1, 0x64($s1)
    ctx->pc = 0x30fc38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_30fc3c:
    // 0x30fc3c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30fc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_30fc40:
    // 0x30fc40: 0xa6230064  sh          $v1, 0x64($s1)
    ctx->pc = 0x30fc40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 3));
label_30fc44:
    // 0x30fc44: 0xa2200061  sb          $zero, 0x61($s1)
    ctx->pc = 0x30fc44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
label_30fc48:
    // 0x30fc48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30fc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30fc4c:
    // 0x30fc4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30fc4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30fc50:
    // 0x30fc50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30fc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30fc54:
    // 0x30fc54: 0x3e00008  jr          $ra
label_30fc58:
    if (ctx->pc == 0x30FC58u) {
        ctx->pc = 0x30FC58u;
            // 0x30fc58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30FC5Cu;
        goto label_30fc5c;
    }
    ctx->pc = 0x30FC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FC54u;
            // 0x30fc58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FC5Cu;
label_30fc5c:
    // 0x30fc5c: 0x0  nop
    ctx->pc = 0x30fc5cu;
    // NOP
}
