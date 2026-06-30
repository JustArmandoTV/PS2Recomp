#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003468B0
// Address: 0x3468b0 - 0x346d90
void sub_003468B0_0x3468b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003468B0_0x3468b0");
#endif

    switch (ctx->pc) {
        case 0x3468b0u: goto label_3468b0;
        case 0x3468b4u: goto label_3468b4;
        case 0x3468b8u: goto label_3468b8;
        case 0x3468bcu: goto label_3468bc;
        case 0x3468c0u: goto label_3468c0;
        case 0x3468c4u: goto label_3468c4;
        case 0x3468c8u: goto label_3468c8;
        case 0x3468ccu: goto label_3468cc;
        case 0x3468d0u: goto label_3468d0;
        case 0x3468d4u: goto label_3468d4;
        case 0x3468d8u: goto label_3468d8;
        case 0x3468dcu: goto label_3468dc;
        case 0x3468e0u: goto label_3468e0;
        case 0x3468e4u: goto label_3468e4;
        case 0x3468e8u: goto label_3468e8;
        case 0x3468ecu: goto label_3468ec;
        case 0x3468f0u: goto label_3468f0;
        case 0x3468f4u: goto label_3468f4;
        case 0x3468f8u: goto label_3468f8;
        case 0x3468fcu: goto label_3468fc;
        case 0x346900u: goto label_346900;
        case 0x346904u: goto label_346904;
        case 0x346908u: goto label_346908;
        case 0x34690cu: goto label_34690c;
        case 0x346910u: goto label_346910;
        case 0x346914u: goto label_346914;
        case 0x346918u: goto label_346918;
        case 0x34691cu: goto label_34691c;
        case 0x346920u: goto label_346920;
        case 0x346924u: goto label_346924;
        case 0x346928u: goto label_346928;
        case 0x34692cu: goto label_34692c;
        case 0x346930u: goto label_346930;
        case 0x346934u: goto label_346934;
        case 0x346938u: goto label_346938;
        case 0x34693cu: goto label_34693c;
        case 0x346940u: goto label_346940;
        case 0x346944u: goto label_346944;
        case 0x346948u: goto label_346948;
        case 0x34694cu: goto label_34694c;
        case 0x346950u: goto label_346950;
        case 0x346954u: goto label_346954;
        case 0x346958u: goto label_346958;
        case 0x34695cu: goto label_34695c;
        case 0x346960u: goto label_346960;
        case 0x346964u: goto label_346964;
        case 0x346968u: goto label_346968;
        case 0x34696cu: goto label_34696c;
        case 0x346970u: goto label_346970;
        case 0x346974u: goto label_346974;
        case 0x346978u: goto label_346978;
        case 0x34697cu: goto label_34697c;
        case 0x346980u: goto label_346980;
        case 0x346984u: goto label_346984;
        case 0x346988u: goto label_346988;
        case 0x34698cu: goto label_34698c;
        case 0x346990u: goto label_346990;
        case 0x346994u: goto label_346994;
        case 0x346998u: goto label_346998;
        case 0x34699cu: goto label_34699c;
        case 0x3469a0u: goto label_3469a0;
        case 0x3469a4u: goto label_3469a4;
        case 0x3469a8u: goto label_3469a8;
        case 0x3469acu: goto label_3469ac;
        case 0x3469b0u: goto label_3469b0;
        case 0x3469b4u: goto label_3469b4;
        case 0x3469b8u: goto label_3469b8;
        case 0x3469bcu: goto label_3469bc;
        case 0x3469c0u: goto label_3469c0;
        case 0x3469c4u: goto label_3469c4;
        case 0x3469c8u: goto label_3469c8;
        case 0x3469ccu: goto label_3469cc;
        case 0x3469d0u: goto label_3469d0;
        case 0x3469d4u: goto label_3469d4;
        case 0x3469d8u: goto label_3469d8;
        case 0x3469dcu: goto label_3469dc;
        case 0x3469e0u: goto label_3469e0;
        case 0x3469e4u: goto label_3469e4;
        case 0x3469e8u: goto label_3469e8;
        case 0x3469ecu: goto label_3469ec;
        case 0x3469f0u: goto label_3469f0;
        case 0x3469f4u: goto label_3469f4;
        case 0x3469f8u: goto label_3469f8;
        case 0x3469fcu: goto label_3469fc;
        case 0x346a00u: goto label_346a00;
        case 0x346a04u: goto label_346a04;
        case 0x346a08u: goto label_346a08;
        case 0x346a0cu: goto label_346a0c;
        case 0x346a10u: goto label_346a10;
        case 0x346a14u: goto label_346a14;
        case 0x346a18u: goto label_346a18;
        case 0x346a1cu: goto label_346a1c;
        case 0x346a20u: goto label_346a20;
        case 0x346a24u: goto label_346a24;
        case 0x346a28u: goto label_346a28;
        case 0x346a2cu: goto label_346a2c;
        case 0x346a30u: goto label_346a30;
        case 0x346a34u: goto label_346a34;
        case 0x346a38u: goto label_346a38;
        case 0x346a3cu: goto label_346a3c;
        case 0x346a40u: goto label_346a40;
        case 0x346a44u: goto label_346a44;
        case 0x346a48u: goto label_346a48;
        case 0x346a4cu: goto label_346a4c;
        case 0x346a50u: goto label_346a50;
        case 0x346a54u: goto label_346a54;
        case 0x346a58u: goto label_346a58;
        case 0x346a5cu: goto label_346a5c;
        case 0x346a60u: goto label_346a60;
        case 0x346a64u: goto label_346a64;
        case 0x346a68u: goto label_346a68;
        case 0x346a6cu: goto label_346a6c;
        case 0x346a70u: goto label_346a70;
        case 0x346a74u: goto label_346a74;
        case 0x346a78u: goto label_346a78;
        case 0x346a7cu: goto label_346a7c;
        case 0x346a80u: goto label_346a80;
        case 0x346a84u: goto label_346a84;
        case 0x346a88u: goto label_346a88;
        case 0x346a8cu: goto label_346a8c;
        case 0x346a90u: goto label_346a90;
        case 0x346a94u: goto label_346a94;
        case 0x346a98u: goto label_346a98;
        case 0x346a9cu: goto label_346a9c;
        case 0x346aa0u: goto label_346aa0;
        case 0x346aa4u: goto label_346aa4;
        case 0x346aa8u: goto label_346aa8;
        case 0x346aacu: goto label_346aac;
        case 0x346ab0u: goto label_346ab0;
        case 0x346ab4u: goto label_346ab4;
        case 0x346ab8u: goto label_346ab8;
        case 0x346abcu: goto label_346abc;
        case 0x346ac0u: goto label_346ac0;
        case 0x346ac4u: goto label_346ac4;
        case 0x346ac8u: goto label_346ac8;
        case 0x346accu: goto label_346acc;
        case 0x346ad0u: goto label_346ad0;
        case 0x346ad4u: goto label_346ad4;
        case 0x346ad8u: goto label_346ad8;
        case 0x346adcu: goto label_346adc;
        case 0x346ae0u: goto label_346ae0;
        case 0x346ae4u: goto label_346ae4;
        case 0x346ae8u: goto label_346ae8;
        case 0x346aecu: goto label_346aec;
        case 0x346af0u: goto label_346af0;
        case 0x346af4u: goto label_346af4;
        case 0x346af8u: goto label_346af8;
        case 0x346afcu: goto label_346afc;
        case 0x346b00u: goto label_346b00;
        case 0x346b04u: goto label_346b04;
        case 0x346b08u: goto label_346b08;
        case 0x346b0cu: goto label_346b0c;
        case 0x346b10u: goto label_346b10;
        case 0x346b14u: goto label_346b14;
        case 0x346b18u: goto label_346b18;
        case 0x346b1cu: goto label_346b1c;
        case 0x346b20u: goto label_346b20;
        case 0x346b24u: goto label_346b24;
        case 0x346b28u: goto label_346b28;
        case 0x346b2cu: goto label_346b2c;
        case 0x346b30u: goto label_346b30;
        case 0x346b34u: goto label_346b34;
        case 0x346b38u: goto label_346b38;
        case 0x346b3cu: goto label_346b3c;
        case 0x346b40u: goto label_346b40;
        case 0x346b44u: goto label_346b44;
        case 0x346b48u: goto label_346b48;
        case 0x346b4cu: goto label_346b4c;
        case 0x346b50u: goto label_346b50;
        case 0x346b54u: goto label_346b54;
        case 0x346b58u: goto label_346b58;
        case 0x346b5cu: goto label_346b5c;
        case 0x346b60u: goto label_346b60;
        case 0x346b64u: goto label_346b64;
        case 0x346b68u: goto label_346b68;
        case 0x346b6cu: goto label_346b6c;
        case 0x346b70u: goto label_346b70;
        case 0x346b74u: goto label_346b74;
        case 0x346b78u: goto label_346b78;
        case 0x346b7cu: goto label_346b7c;
        case 0x346b80u: goto label_346b80;
        case 0x346b84u: goto label_346b84;
        case 0x346b88u: goto label_346b88;
        case 0x346b8cu: goto label_346b8c;
        case 0x346b90u: goto label_346b90;
        case 0x346b94u: goto label_346b94;
        case 0x346b98u: goto label_346b98;
        case 0x346b9cu: goto label_346b9c;
        case 0x346ba0u: goto label_346ba0;
        case 0x346ba4u: goto label_346ba4;
        case 0x346ba8u: goto label_346ba8;
        case 0x346bacu: goto label_346bac;
        case 0x346bb0u: goto label_346bb0;
        case 0x346bb4u: goto label_346bb4;
        case 0x346bb8u: goto label_346bb8;
        case 0x346bbcu: goto label_346bbc;
        case 0x346bc0u: goto label_346bc0;
        case 0x346bc4u: goto label_346bc4;
        case 0x346bc8u: goto label_346bc8;
        case 0x346bccu: goto label_346bcc;
        case 0x346bd0u: goto label_346bd0;
        case 0x346bd4u: goto label_346bd4;
        case 0x346bd8u: goto label_346bd8;
        case 0x346bdcu: goto label_346bdc;
        case 0x346be0u: goto label_346be0;
        case 0x346be4u: goto label_346be4;
        case 0x346be8u: goto label_346be8;
        case 0x346becu: goto label_346bec;
        case 0x346bf0u: goto label_346bf0;
        case 0x346bf4u: goto label_346bf4;
        case 0x346bf8u: goto label_346bf8;
        case 0x346bfcu: goto label_346bfc;
        case 0x346c00u: goto label_346c00;
        case 0x346c04u: goto label_346c04;
        case 0x346c08u: goto label_346c08;
        case 0x346c0cu: goto label_346c0c;
        case 0x346c10u: goto label_346c10;
        case 0x346c14u: goto label_346c14;
        case 0x346c18u: goto label_346c18;
        case 0x346c1cu: goto label_346c1c;
        case 0x346c20u: goto label_346c20;
        case 0x346c24u: goto label_346c24;
        case 0x346c28u: goto label_346c28;
        case 0x346c2cu: goto label_346c2c;
        case 0x346c30u: goto label_346c30;
        case 0x346c34u: goto label_346c34;
        case 0x346c38u: goto label_346c38;
        case 0x346c3cu: goto label_346c3c;
        case 0x346c40u: goto label_346c40;
        case 0x346c44u: goto label_346c44;
        case 0x346c48u: goto label_346c48;
        case 0x346c4cu: goto label_346c4c;
        case 0x346c50u: goto label_346c50;
        case 0x346c54u: goto label_346c54;
        case 0x346c58u: goto label_346c58;
        case 0x346c5cu: goto label_346c5c;
        case 0x346c60u: goto label_346c60;
        case 0x346c64u: goto label_346c64;
        case 0x346c68u: goto label_346c68;
        case 0x346c6cu: goto label_346c6c;
        case 0x346c70u: goto label_346c70;
        case 0x346c74u: goto label_346c74;
        case 0x346c78u: goto label_346c78;
        case 0x346c7cu: goto label_346c7c;
        case 0x346c80u: goto label_346c80;
        case 0x346c84u: goto label_346c84;
        case 0x346c88u: goto label_346c88;
        case 0x346c8cu: goto label_346c8c;
        case 0x346c90u: goto label_346c90;
        case 0x346c94u: goto label_346c94;
        case 0x346c98u: goto label_346c98;
        case 0x346c9cu: goto label_346c9c;
        case 0x346ca0u: goto label_346ca0;
        case 0x346ca4u: goto label_346ca4;
        case 0x346ca8u: goto label_346ca8;
        case 0x346cacu: goto label_346cac;
        case 0x346cb0u: goto label_346cb0;
        case 0x346cb4u: goto label_346cb4;
        case 0x346cb8u: goto label_346cb8;
        case 0x346cbcu: goto label_346cbc;
        case 0x346cc0u: goto label_346cc0;
        case 0x346cc4u: goto label_346cc4;
        case 0x346cc8u: goto label_346cc8;
        case 0x346cccu: goto label_346ccc;
        case 0x346cd0u: goto label_346cd0;
        case 0x346cd4u: goto label_346cd4;
        case 0x346cd8u: goto label_346cd8;
        case 0x346cdcu: goto label_346cdc;
        case 0x346ce0u: goto label_346ce0;
        case 0x346ce4u: goto label_346ce4;
        case 0x346ce8u: goto label_346ce8;
        case 0x346cecu: goto label_346cec;
        case 0x346cf0u: goto label_346cf0;
        case 0x346cf4u: goto label_346cf4;
        case 0x346cf8u: goto label_346cf8;
        case 0x346cfcu: goto label_346cfc;
        case 0x346d00u: goto label_346d00;
        case 0x346d04u: goto label_346d04;
        case 0x346d08u: goto label_346d08;
        case 0x346d0cu: goto label_346d0c;
        case 0x346d10u: goto label_346d10;
        case 0x346d14u: goto label_346d14;
        case 0x346d18u: goto label_346d18;
        case 0x346d1cu: goto label_346d1c;
        case 0x346d20u: goto label_346d20;
        case 0x346d24u: goto label_346d24;
        case 0x346d28u: goto label_346d28;
        case 0x346d2cu: goto label_346d2c;
        case 0x346d30u: goto label_346d30;
        case 0x346d34u: goto label_346d34;
        case 0x346d38u: goto label_346d38;
        case 0x346d3cu: goto label_346d3c;
        case 0x346d40u: goto label_346d40;
        case 0x346d44u: goto label_346d44;
        case 0x346d48u: goto label_346d48;
        case 0x346d4cu: goto label_346d4c;
        case 0x346d50u: goto label_346d50;
        case 0x346d54u: goto label_346d54;
        case 0x346d58u: goto label_346d58;
        case 0x346d5cu: goto label_346d5c;
        case 0x346d60u: goto label_346d60;
        case 0x346d64u: goto label_346d64;
        case 0x346d68u: goto label_346d68;
        case 0x346d6cu: goto label_346d6c;
        case 0x346d70u: goto label_346d70;
        case 0x346d74u: goto label_346d74;
        case 0x346d78u: goto label_346d78;
        case 0x346d7cu: goto label_346d7c;
        case 0x346d80u: goto label_346d80;
        case 0x346d84u: goto label_346d84;
        case 0x346d88u: goto label_346d88;
        case 0x346d8cu: goto label_346d8c;
        default: break;
    }

    ctx->pc = 0x3468b0u;

label_3468b0:
    // 0x3468b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3468b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3468b4:
    // 0x3468b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3468b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3468b8:
    // 0x3468b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3468b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3468bc:
    // 0x3468bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3468bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3468c0:
    // 0x3468c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3468c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3468c4:
    // 0x3468c4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3468c8:
    if (ctx->pc == 0x3468C8u) {
        ctx->pc = 0x3468C8u;
            // 0x3468c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3468CCu;
        goto label_3468cc;
    }
    ctx->pc = 0x3468C4u;
    {
        const bool branch_taken_0x3468c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3468C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3468C4u;
            // 0x3468c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3468c4) {
            ctx->pc = 0x3469F8u;
            goto label_3469f8;
        }
    }
    ctx->pc = 0x3468CCu;
label_3468cc:
    // 0x3468cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3468ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3468d0:
    // 0x3468d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3468d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3468d4:
    // 0x3468d4: 0x24635890  addiu       $v1, $v1, 0x5890
    ctx->pc = 0x3468d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22672));
label_3468d8:
    // 0x3468d8: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3468d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_3468dc:
    // 0x3468dc: 0x244258c8  addiu       $v0, $v0, 0x58C8
    ctx->pc = 0x3468dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22728));
label_3468e0:
    // 0x3468e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3468e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3468e4:
    // 0x3468e4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3468e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3468e8:
    // 0x3468e8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3468e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3468ec:
    // 0x3468ec: 0xc0407c0  jal         func_101F00
label_3468f0:
    if (ctx->pc == 0x3468F0u) {
        ctx->pc = 0x3468F0u;
            // 0x3468f0: 0x24a56a10  addiu       $a1, $a1, 0x6A10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27152));
        ctx->pc = 0x3468F4u;
        goto label_3468f4;
    }
    ctx->pc = 0x3468ECu;
    SET_GPR_U32(ctx, 31, 0x3468F4u);
    ctx->pc = 0x3468F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3468ECu;
            // 0x3468f0: 0x24a56a10  addiu       $a1, $a1, 0x6A10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3468F4u; }
        if (ctx->pc != 0x3468F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3468F4u; }
        if (ctx->pc != 0x3468F4u) { return; }
    }
    ctx->pc = 0x3468F4u;
label_3468f4:
    // 0x3468f4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3468f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3468f8:
    // 0x3468f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3468fc:
    if (ctx->pc == 0x3468FCu) {
        ctx->pc = 0x3468FCu;
            // 0x3468fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x346900u;
        goto label_346900;
    }
    ctx->pc = 0x3468F8u;
    {
        const bool branch_taken_0x3468f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3468f8) {
            ctx->pc = 0x3468FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3468F8u;
            // 0x3468fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34690Cu;
            goto label_34690c;
        }
    }
    ctx->pc = 0x346900u;
label_346900:
    // 0x346900: 0xc07507c  jal         func_1D41F0
label_346904:
    if (ctx->pc == 0x346904u) {
        ctx->pc = 0x346904u;
            // 0x346904: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x346908u;
        goto label_346908;
    }
    ctx->pc = 0x346900u;
    SET_GPR_U32(ctx, 31, 0x346908u);
    ctx->pc = 0x346904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346900u;
            // 0x346904: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346908u; }
        if (ctx->pc != 0x346908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346908u; }
        if (ctx->pc != 0x346908u) { return; }
    }
    ctx->pc = 0x346908u;
label_346908:
    // 0x346908: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x346908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_34690c:
    // 0x34690c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_346910:
    if (ctx->pc == 0x346910u) {
        ctx->pc = 0x346910u;
            // 0x346910: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x346914u;
        goto label_346914;
    }
    ctx->pc = 0x34690Cu;
    {
        const bool branch_taken_0x34690c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34690c) {
            ctx->pc = 0x346910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34690Cu;
            // 0x346910: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34693Cu;
            goto label_34693c;
        }
    }
    ctx->pc = 0x346914u;
label_346914:
    // 0x346914: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_346918:
    if (ctx->pc == 0x346918u) {
        ctx->pc = 0x34691Cu;
        goto label_34691c;
    }
    ctx->pc = 0x346914u;
    {
        const bool branch_taken_0x346914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346914) {
            ctx->pc = 0x346938u;
            goto label_346938;
        }
    }
    ctx->pc = 0x34691Cu;
label_34691c:
    // 0x34691c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_346920:
    if (ctx->pc == 0x346920u) {
        ctx->pc = 0x346924u;
        goto label_346924;
    }
    ctx->pc = 0x34691Cu;
    {
        const bool branch_taken_0x34691c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34691c) {
            ctx->pc = 0x346938u;
            goto label_346938;
        }
    }
    ctx->pc = 0x346924u;
label_346924:
    // 0x346924: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x346924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_346928:
    // 0x346928: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_34692c:
    if (ctx->pc == 0x34692Cu) {
        ctx->pc = 0x346930u;
        goto label_346930;
    }
    ctx->pc = 0x346928u;
    {
        const bool branch_taken_0x346928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x346928) {
            ctx->pc = 0x346938u;
            goto label_346938;
        }
    }
    ctx->pc = 0x346930u;
label_346930:
    // 0x346930: 0xc0400a8  jal         func_1002A0
label_346934:
    if (ctx->pc == 0x346934u) {
        ctx->pc = 0x346938u;
        goto label_346938;
    }
    ctx->pc = 0x346930u;
    SET_GPR_U32(ctx, 31, 0x346938u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346938u; }
        if (ctx->pc != 0x346938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346938u; }
        if (ctx->pc != 0x346938u) { return; }
    }
    ctx->pc = 0x346938u;
label_346938:
    // 0x346938: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x346938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_34693c:
    // 0x34693c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_346940:
    if (ctx->pc == 0x346940u) {
        ctx->pc = 0x346940u;
            // 0x346940: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x346944u;
        goto label_346944;
    }
    ctx->pc = 0x34693Cu;
    {
        const bool branch_taken_0x34693c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34693c) {
            ctx->pc = 0x346940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34693Cu;
            // 0x346940: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34696Cu;
            goto label_34696c;
        }
    }
    ctx->pc = 0x346944u;
label_346944:
    // 0x346944: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_346948:
    if (ctx->pc == 0x346948u) {
        ctx->pc = 0x34694Cu;
        goto label_34694c;
    }
    ctx->pc = 0x346944u;
    {
        const bool branch_taken_0x346944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346944) {
            ctx->pc = 0x346968u;
            goto label_346968;
        }
    }
    ctx->pc = 0x34694Cu;
label_34694c:
    // 0x34694c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_346950:
    if (ctx->pc == 0x346950u) {
        ctx->pc = 0x346954u;
        goto label_346954;
    }
    ctx->pc = 0x34694Cu;
    {
        const bool branch_taken_0x34694c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34694c) {
            ctx->pc = 0x346968u;
            goto label_346968;
        }
    }
    ctx->pc = 0x346954u;
label_346954:
    // 0x346954: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x346954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_346958:
    // 0x346958: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_34695c:
    if (ctx->pc == 0x34695Cu) {
        ctx->pc = 0x346960u;
        goto label_346960;
    }
    ctx->pc = 0x346958u;
    {
        const bool branch_taken_0x346958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x346958) {
            ctx->pc = 0x346968u;
            goto label_346968;
        }
    }
    ctx->pc = 0x346960u;
label_346960:
    // 0x346960: 0xc0400a8  jal         func_1002A0
label_346964:
    if (ctx->pc == 0x346964u) {
        ctx->pc = 0x346968u;
        goto label_346968;
    }
    ctx->pc = 0x346960u;
    SET_GPR_U32(ctx, 31, 0x346968u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346968u; }
        if (ctx->pc != 0x346968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346968u; }
        if (ctx->pc != 0x346968u) { return; }
    }
    ctx->pc = 0x346968u;
label_346968:
    // 0x346968: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x346968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_34696c:
    // 0x34696c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_346970:
    if (ctx->pc == 0x346970u) {
        ctx->pc = 0x346974u;
        goto label_346974;
    }
    ctx->pc = 0x34696Cu;
    {
        const bool branch_taken_0x34696c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34696c) {
            ctx->pc = 0x346988u;
            goto label_346988;
        }
    }
    ctx->pc = 0x346974u;
label_346974:
    // 0x346974: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x346974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_346978:
    // 0x346978: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x346978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34697c:
    // 0x34697c: 0x24635878  addiu       $v1, $v1, 0x5878
    ctx->pc = 0x34697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22648));
label_346980:
    // 0x346980: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x346980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_346984:
    // 0x346984: 0xac403ea8  sw          $zero, 0x3EA8($v0)
    ctx->pc = 0x346984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16040), GPR_U32(ctx, 0));
label_346988:
    // 0x346988: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_34698c:
    if (ctx->pc == 0x34698Cu) {
        ctx->pc = 0x34698Cu;
            // 0x34698c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x346990u;
        goto label_346990;
    }
    ctx->pc = 0x346988u;
    {
        const bool branch_taken_0x346988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x346988) {
            ctx->pc = 0x34698Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346988u;
            // 0x34698c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3469E4u;
            goto label_3469e4;
        }
    }
    ctx->pc = 0x346990u;
label_346990:
    // 0x346990: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_346994:
    // 0x346994: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x346994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_346998:
    // 0x346998: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x346998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34699c:
    // 0x34699c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x34699cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3469a0:
    // 0x3469a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3469a4:
    if (ctx->pc == 0x3469A4u) {
        ctx->pc = 0x3469A4u;
            // 0x3469a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3469A8u;
        goto label_3469a8;
    }
    ctx->pc = 0x3469A0u;
    {
        const bool branch_taken_0x3469a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3469a0) {
            ctx->pc = 0x3469A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3469A0u;
            // 0x3469a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3469BCu;
            goto label_3469bc;
        }
    }
    ctx->pc = 0x3469A8u;
label_3469a8:
    // 0x3469a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3469a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3469ac:
    // 0x3469ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3469acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3469b0:
    // 0x3469b0: 0x320f809  jalr        $t9
label_3469b4:
    if (ctx->pc == 0x3469B4u) {
        ctx->pc = 0x3469B4u;
            // 0x3469b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3469B8u;
        goto label_3469b8;
    }
    ctx->pc = 0x3469B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3469B8u);
        ctx->pc = 0x3469B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3469B0u;
            // 0x3469b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3469B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3469B8u; }
            if (ctx->pc != 0x3469B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3469B8u;
label_3469b8:
    // 0x3469b8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3469b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3469bc:
    // 0x3469bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3469c0:
    if (ctx->pc == 0x3469C0u) {
        ctx->pc = 0x3469C0u;
            // 0x3469c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3469C4u;
        goto label_3469c4;
    }
    ctx->pc = 0x3469BCu;
    {
        const bool branch_taken_0x3469bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3469bc) {
            ctx->pc = 0x3469C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3469BCu;
            // 0x3469c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3469D8u;
            goto label_3469d8;
        }
    }
    ctx->pc = 0x3469C4u;
label_3469c4:
    // 0x3469c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3469c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3469c8:
    // 0x3469c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3469c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3469cc:
    // 0x3469cc: 0x320f809  jalr        $t9
label_3469d0:
    if (ctx->pc == 0x3469D0u) {
        ctx->pc = 0x3469D0u;
            // 0x3469d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3469D4u;
        goto label_3469d4;
    }
    ctx->pc = 0x3469CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3469D4u);
        ctx->pc = 0x3469D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3469CCu;
            // 0x3469d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3469D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3469D4u; }
            if (ctx->pc != 0x3469D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3469D4u;
label_3469d4:
    // 0x3469d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3469d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3469d8:
    // 0x3469d8: 0xc075bf8  jal         func_1D6FE0
label_3469dc:
    if (ctx->pc == 0x3469DCu) {
        ctx->pc = 0x3469DCu;
            // 0x3469dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3469E0u;
        goto label_3469e0;
    }
    ctx->pc = 0x3469D8u;
    SET_GPR_U32(ctx, 31, 0x3469E0u);
    ctx->pc = 0x3469DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3469D8u;
            // 0x3469dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469E0u; }
        if (ctx->pc != 0x3469E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469E0u; }
        if (ctx->pc != 0x3469E0u) { return; }
    }
    ctx->pc = 0x3469E0u;
label_3469e0:
    // 0x3469e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3469e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3469e4:
    // 0x3469e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3469e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3469e8:
    // 0x3469e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3469ec:
    if (ctx->pc == 0x3469ECu) {
        ctx->pc = 0x3469ECu;
            // 0x3469ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3469F0u;
        goto label_3469f0;
    }
    ctx->pc = 0x3469E8u;
    {
        const bool branch_taken_0x3469e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3469e8) {
            ctx->pc = 0x3469ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3469E8u;
            // 0x3469ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3469FCu;
            goto label_3469fc;
        }
    }
    ctx->pc = 0x3469F0u;
label_3469f0:
    // 0x3469f0: 0xc0400a8  jal         func_1002A0
label_3469f4:
    if (ctx->pc == 0x3469F4u) {
        ctx->pc = 0x3469F4u;
            // 0x3469f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3469F8u;
        goto label_3469f8;
    }
    ctx->pc = 0x3469F0u;
    SET_GPR_U32(ctx, 31, 0x3469F8u);
    ctx->pc = 0x3469F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3469F0u;
            // 0x3469f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469F8u; }
        if (ctx->pc != 0x3469F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469F8u; }
        if (ctx->pc != 0x3469F8u) { return; }
    }
    ctx->pc = 0x3469F8u;
label_3469f8:
    // 0x3469f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3469f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3469fc:
    // 0x3469fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3469fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_346a00:
    // 0x346a00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_346a04:
    // 0x346a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_346a08:
    // 0x346a08: 0x3e00008  jr          $ra
label_346a0c:
    if (ctx->pc == 0x346A0Cu) {
        ctx->pc = 0x346A0Cu;
            // 0x346a0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x346A10u;
        goto label_346a10;
    }
    ctx->pc = 0x346A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346A08u;
            // 0x346a0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346A10u;
label_346a10:
    // 0x346a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_346a14:
    // 0x346a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x346a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_346a18:
    // 0x346a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_346a1c:
    // 0x346a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_346a20:
    // 0x346a20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_346a24:
    // 0x346a24: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_346a28:
    if (ctx->pc == 0x346A28u) {
        ctx->pc = 0x346A28u;
            // 0x346a28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x346A2Cu;
        goto label_346a2c;
    }
    ctx->pc = 0x346A24u;
    {
        const bool branch_taken_0x346a24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x346A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346A24u;
            // 0x346a28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a24) {
            ctx->pc = 0x346B2Cu;
            goto label_346b2c;
        }
    }
    ctx->pc = 0x346A2Cu;
label_346a2c:
    // 0x346a2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x346a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_346a30:
    // 0x346a30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_346a34:
    // 0x346a34: 0x24635930  addiu       $v1, $v1, 0x5930
    ctx->pc = 0x346a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22832));
label_346a38:
    // 0x346a38: 0x24425970  addiu       $v0, $v0, 0x5970
    ctx->pc = 0x346a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22896));
label_346a3c:
    // 0x346a3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x346a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_346a40:
    // 0x346a40: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x346a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_346a44:
    // 0x346a44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x346a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_346a48:
    // 0x346a48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x346a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_346a4c:
    // 0x346a4c: 0x320f809  jalr        $t9
label_346a50:
    if (ctx->pc == 0x346A50u) {
        ctx->pc = 0x346A54u;
        goto label_346a54;
    }
    ctx->pc = 0x346A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346A54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x346A54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x346A54u; }
            if (ctx->pc != 0x346A54u) { return; }
        }
        }
    }
    ctx->pc = 0x346A54u;
label_346a54:
    // 0x346a54: 0x262400a4  addiu       $a0, $s1, 0xA4
    ctx->pc = 0x346a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_346a58:
    // 0x346a58: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_346a5c:
    if (ctx->pc == 0x346A5Cu) {
        ctx->pc = 0x346A60u;
        goto label_346a60;
    }
    ctx->pc = 0x346A58u;
    {
        const bool branch_taken_0x346a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x346a58) {
            ctx->pc = 0x346A94u;
            goto label_346a94;
        }
    }
    ctx->pc = 0x346A60u;
label_346a60:
    // 0x346a60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_346a64:
    // 0x346a64: 0x24425868  addiu       $v0, $v0, 0x5868
    ctx->pc = 0x346a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22632));
label_346a68:
    // 0x346a68: 0xc0d2210  jal         func_348840
label_346a6c:
    if (ctx->pc == 0x346A6Cu) {
        ctx->pc = 0x346A6Cu;
            // 0x346a6c: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x346A70u;
        goto label_346a70;
    }
    ctx->pc = 0x346A68u;
    SET_GPR_U32(ctx, 31, 0x346A70u);
    ctx->pc = 0x346A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346A68u;
            // 0x346a6c: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348840u;
    if (runtime->hasFunction(0x348840u)) {
        auto targetFn = runtime->lookupFunction(0x348840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A70u; }
        if (ctx->pc != 0x346A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348840_0x348840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A70u; }
        if (ctx->pc != 0x346A70u) { return; }
    }
    ctx->pc = 0x346A70u;
label_346a70:
    // 0x346a70: 0x262200a4  addiu       $v0, $s1, 0xA4
    ctx->pc = 0x346a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_346a74:
    // 0x346a74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_346a78:
    if (ctx->pc == 0x346A78u) {
        ctx->pc = 0x346A7Cu;
        goto label_346a7c;
    }
    ctx->pc = 0x346A74u;
    {
        const bool branch_taken_0x346a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346a74) {
            ctx->pc = 0x346A94u;
            goto label_346a94;
        }
    }
    ctx->pc = 0x346A7Cu;
label_346a7c:
    // 0x346a7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_346a80:
    // 0x346a80: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x346a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_346a84:
    // 0x346a84: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x346a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
label_346a88:
    // 0x346a88: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x346a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_346a8c:
    // 0x346a8c: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x346a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_346a90:
    // 0x346a90: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x346a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_346a94:
    // 0x346a94: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_346a98:
    if (ctx->pc == 0x346A98u) {
        ctx->pc = 0x346A98u;
            // 0x346a98: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x346A9Cu;
        goto label_346a9c;
    }
    ctx->pc = 0x346A94u;
    {
        const bool branch_taken_0x346a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x346a94) {
            ctx->pc = 0x346A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346A94u;
            // 0x346a98: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346B18u;
            goto label_346b18;
        }
    }
    ctx->pc = 0x346A9Cu;
label_346a9c:
    // 0x346a9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_346aa0:
    // 0x346aa0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x346aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_346aa4:
    // 0x346aa4: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x346aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_346aa8:
    // 0x346aa8: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x346aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_346aac:
    // 0x346aac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x346aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_346ab0:
    // 0x346ab0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x346ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_346ab4:
    // 0x346ab4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_346ab8:
    if (ctx->pc == 0x346AB8u) {
        ctx->pc = 0x346AB8u;
            // 0x346ab8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x346ABCu;
        goto label_346abc;
    }
    ctx->pc = 0x346AB4u;
    {
        const bool branch_taken_0x346ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346AB4u;
            // 0x346ab8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ab4) {
            ctx->pc = 0x346AF0u;
            goto label_346af0;
        }
    }
    ctx->pc = 0x346ABCu;
label_346abc:
    // 0x346abc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_346ac0:
    // 0x346ac0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x346ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_346ac4:
    // 0x346ac4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x346ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_346ac8:
    // 0x346ac8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x346ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_346acc:
    // 0x346acc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_346ad0:
    if (ctx->pc == 0x346AD0u) {
        ctx->pc = 0x346AD4u;
        goto label_346ad4;
    }
    ctx->pc = 0x346ACCu;
    {
        const bool branch_taken_0x346acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x346acc) {
            ctx->pc = 0x346AF0u;
            goto label_346af0;
        }
    }
    ctx->pc = 0x346AD4u;
label_346ad4:
    // 0x346ad4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_346ad8:
    if (ctx->pc == 0x346AD8u) {
        ctx->pc = 0x346AD8u;
            // 0x346ad8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x346ADCu;
        goto label_346adc;
    }
    ctx->pc = 0x346AD4u;
    {
        const bool branch_taken_0x346ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x346ad4) {
            ctx->pc = 0x346AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346AD4u;
            // 0x346ad8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346AF0u;
            goto label_346af0;
        }
    }
    ctx->pc = 0x346ADCu;
label_346adc:
    // 0x346adc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x346adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_346ae0:
    // 0x346ae0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x346ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_346ae4:
    // 0x346ae4: 0x320f809  jalr        $t9
label_346ae8:
    if (ctx->pc == 0x346AE8u) {
        ctx->pc = 0x346AE8u;
            // 0x346ae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x346AECu;
        goto label_346aec;
    }
    ctx->pc = 0x346AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346AECu);
        ctx->pc = 0x346AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346AE4u;
            // 0x346ae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x346AECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x346AECu; }
            if (ctx->pc != 0x346AECu) { return; }
        }
        }
    }
    ctx->pc = 0x346AECu;
label_346aec:
    // 0x346aec: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x346aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_346af0:
    // 0x346af0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_346af4:
    if (ctx->pc == 0x346AF4u) {
        ctx->pc = 0x346AF8u;
        goto label_346af8;
    }
    ctx->pc = 0x346AF0u;
    {
        const bool branch_taken_0x346af0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x346af0) {
            ctx->pc = 0x346B14u;
            goto label_346b14;
        }
    }
    ctx->pc = 0x346AF8u;
label_346af8:
    // 0x346af8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_346afc:
    // 0x346afc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x346afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_346b00:
    // 0x346b00: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_346b04:
    if (ctx->pc == 0x346B04u) {
        ctx->pc = 0x346B04u;
            // 0x346b04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x346B08u;
        goto label_346b08;
    }
    ctx->pc = 0x346B00u;
    {
        const bool branch_taken_0x346b00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x346B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346B00u;
            // 0x346b04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b00) {
            ctx->pc = 0x346B14u;
            goto label_346b14;
        }
    }
    ctx->pc = 0x346B08u;
label_346b08:
    // 0x346b08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_346b0c:
    // 0x346b0c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x346b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_346b10:
    // 0x346b10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x346b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_346b14:
    // 0x346b14: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x346b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_346b18:
    // 0x346b18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x346b18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_346b1c:
    // 0x346b1c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_346b20:
    if (ctx->pc == 0x346B20u) {
        ctx->pc = 0x346B20u;
            // 0x346b20: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x346B24u;
        goto label_346b24;
    }
    ctx->pc = 0x346B1Cu;
    {
        const bool branch_taken_0x346b1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x346b1c) {
            ctx->pc = 0x346B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346B1Cu;
            // 0x346b20: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346B30u;
            goto label_346b30;
        }
    }
    ctx->pc = 0x346B24u;
label_346b24:
    // 0x346b24: 0xc0400a8  jal         func_1002A0
label_346b28:
    if (ctx->pc == 0x346B28u) {
        ctx->pc = 0x346B28u;
            // 0x346b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x346B2Cu;
        goto label_346b2c;
    }
    ctx->pc = 0x346B24u;
    SET_GPR_U32(ctx, 31, 0x346B2Cu);
    ctx->pc = 0x346B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346B24u;
            // 0x346b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B2Cu; }
        if (ctx->pc != 0x346B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B2Cu; }
        if (ctx->pc != 0x346B2Cu) { return; }
    }
    ctx->pc = 0x346B2Cu;
label_346b2c:
    // 0x346b2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x346b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_346b30:
    // 0x346b30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x346b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_346b34:
    // 0x346b34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_346b38:
    // 0x346b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_346b3c:
    // 0x346b3c: 0x3e00008  jr          $ra
label_346b40:
    if (ctx->pc == 0x346B40u) {
        ctx->pc = 0x346B40u;
            // 0x346b40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x346B44u;
        goto label_346b44;
    }
    ctx->pc = 0x346B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346B3Cu;
            // 0x346b40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346B44u;
label_346b44:
    // 0x346b44: 0x0  nop
    ctx->pc = 0x346b44u;
    // NOP
label_346b48:
    // 0x346b48: 0x0  nop
    ctx->pc = 0x346b48u;
    // NOP
label_346b4c:
    // 0x346b4c: 0x0  nop
    ctx->pc = 0x346b4cu;
    // NOP
label_346b50:
    // 0x346b50: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x346b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_346b54:
    // 0x346b54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x346b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_346b58:
    // 0x346b58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x346b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_346b5c:
    // 0x346b5c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x346b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_346b60:
    // 0x346b60: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x346b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_346b64:
    // 0x346b64: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x346b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_346b68:
    // 0x346b68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x346b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_346b6c:
    // 0x346b6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x346b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_346b70:
    // 0x346b70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x346b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_346b74:
    // 0x346b74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x346b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_346b78:
    // 0x346b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_346b7c:
    // 0x346b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_346b80:
    // 0x346b80: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x346b80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_346b84:
    // 0x346b84: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_346b88:
    if (ctx->pc == 0x346B88u) {
        ctx->pc = 0x346B88u;
            // 0x346b88: 0xafa400bc  sw          $a0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
        ctx->pc = 0x346B8Cu;
        goto label_346b8c;
    }
    ctx->pc = 0x346B84u;
    {
        const bool branch_taken_0x346b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x346B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346B84u;
            // 0x346b88: 0xafa400bc  sw          $a0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b84) {
            ctx->pc = 0x346BD4u;
            goto label_346bd4;
        }
    }
    ctx->pc = 0x346B8Cu;
label_346b8c:
    // 0x346b8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x346b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_346b90:
    // 0x346b90: 0x50a30074  beql        $a1, $v1, . + 4 + (0x74 << 2)
label_346b94:
    if (ctx->pc == 0x346B94u) {
        ctx->pc = 0x346B94u;
            // 0x346b94: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x346B98u;
        goto label_346b98;
    }
    ctx->pc = 0x346B90u;
    {
        const bool branch_taken_0x346b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x346b90) {
            ctx->pc = 0x346B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346B90u;
            // 0x346b94: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346D64u;
            goto label_346d64;
        }
    }
    ctx->pc = 0x346B98u;
label_346b98:
    // 0x346b98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x346b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_346b9c:
    // 0x346b9c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_346ba0:
    if (ctx->pc == 0x346BA0u) {
        ctx->pc = 0x346BA4u;
        goto label_346ba4;
    }
    ctx->pc = 0x346B9Cu;
    {
        const bool branch_taken_0x346b9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x346b9c) {
            ctx->pc = 0x346BACu;
            goto label_346bac;
        }
    }
    ctx->pc = 0x346BA4u;
label_346ba4:
    // 0x346ba4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_346ba8:
    if (ctx->pc == 0x346BA8u) {
        ctx->pc = 0x346BACu;
        goto label_346bac;
    }
    ctx->pc = 0x346BA4u;
    {
        const bool branch_taken_0x346ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346ba4) {
            ctx->pc = 0x346D60u;
            goto label_346d60;
        }
    }
    ctx->pc = 0x346BACu;
label_346bac:
    // 0x346bac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x346bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_346bb0:
    // 0x346bb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x346bb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_346bb4:
    // 0x346bb4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x346bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_346bb8:
    // 0x346bb8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x346bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_346bbc:
    // 0x346bbc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x346bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_346bc0:
    // 0x346bc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x346bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_346bc4:
    // 0x346bc4: 0x320f809  jalr        $t9
label_346bc8:
    if (ctx->pc == 0x346BC8u) {
        ctx->pc = 0x346BC8u;
            // 0x346bc8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x346BCCu;
        goto label_346bcc;
    }
    ctx->pc = 0x346BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346BCCu);
        ctx->pc = 0x346BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346BC4u;
            // 0x346bc8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x346BCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x346BCCu; }
            if (ctx->pc != 0x346BCCu) { return; }
        }
        }
    }
    ctx->pc = 0x346BCCu;
label_346bcc:
    // 0x346bcc: 0x10000064  b           . + 4 + (0x64 << 2)
label_346bd0:
    if (ctx->pc == 0x346BD0u) {
        ctx->pc = 0x346BD4u;
        goto label_346bd4;
    }
    ctx->pc = 0x346BCCu;
    {
        const bool branch_taken_0x346bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346bcc) {
            ctx->pc = 0x346D60u;
            goto label_346d60;
        }
    }
    ctx->pc = 0x346BD4u;
label_346bd4:
    // 0x346bd4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x346bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_346bd8:
    // 0x346bd8: 0x8c760070  lw          $s6, 0x70($v1)
    ctx->pc = 0x346bd8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_346bdc:
    // 0x346bdc: 0x12c00060  beqz        $s6, . + 4 + (0x60 << 2)
label_346be0:
    if (ctx->pc == 0x346BE0u) {
        ctx->pc = 0x346BE4u;
        goto label_346be4;
    }
    ctx->pc = 0x346BDCu;
    {
        const bool branch_taken_0x346bdc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x346bdc) {
            ctx->pc = 0x346D60u;
            goto label_346d60;
        }
    }
    ctx->pc = 0x346BE4u;
label_346be4:
    // 0x346be4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_346be8:
    // 0x346be8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x346be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_346bec:
    // 0x346bec: 0x8c55e378  lw          $s5, -0x1C88($v0)
    ctx->pc = 0x346becu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_346bf0:
    // 0x346bf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x346bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346bf4:
    // 0x346bf4: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x346bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_346bf8:
    // 0x346bf8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x346bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_346bfc:
    // 0x346bfc: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x346bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_346c00:
    // 0x346c00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x346c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_346c04:
    // 0x346c04: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x346c04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_346c08:
    // 0x346c08: 0x8c7ee370  lw          $fp, -0x1C90($v1)
    ctx->pc = 0x346c08u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_346c0c:
    // 0x346c0c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x346c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_346c10:
    // 0x346c10: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x346c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_346c14:
    // 0x346c14: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x346c14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_346c18:
    // 0x346c18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x346c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_346c1c:
    // 0x346c1c: 0x24540084  addiu       $s4, $v0, 0x84
    ctx->pc = 0x346c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_346c20:
    // 0x346c20: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x346c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_346c24:
    // 0x346c24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_346c28:
    // 0x346c28: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x346c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_346c2c:
    // 0x346c2c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x346c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_346c30:
    // 0x346c30: 0x24b70010  addiu       $s7, $a1, 0x10
    ctx->pc = 0x346c30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_346c34:
    // 0x346c34: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x346c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_346c38:
    // 0x346c38: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x346c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_346c3c:
    // 0x346c3c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x346c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_346c40:
    // 0x346c40: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x346c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_346c44:
    // 0x346c44: 0xc04e4a4  jal         func_139290
label_346c48:
    if (ctx->pc == 0x346C48u) {
        ctx->pc = 0x346C48u;
            // 0x346c48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x346C4Cu;
        goto label_346c4c;
    }
    ctx->pc = 0x346C44u;
    SET_GPR_U32(ctx, 31, 0x346C4Cu);
    ctx->pc = 0x346C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346C44u;
            // 0x346c48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C4Cu; }
        if (ctx->pc != 0x346C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C4Cu; }
        if (ctx->pc != 0x346C4Cu) { return; }
    }
    ctx->pc = 0x346C4Cu;
label_346c4c:
    // 0x346c4c: 0xc04e738  jal         func_139CE0
label_346c50:
    if (ctx->pc == 0x346C50u) {
        ctx->pc = 0x346C50u;
            // 0x346c50: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x346C54u;
        goto label_346c54;
    }
    ctx->pc = 0x346C4Cu;
    SET_GPR_U32(ctx, 31, 0x346C54u);
    ctx->pc = 0x346C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346C4Cu;
            // 0x346c50: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C54u; }
        if (ctx->pc != 0x346C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C54u; }
        if (ctx->pc != 0x346C54u) { return; }
    }
    ctx->pc = 0x346C54u;
label_346c54:
    // 0x346c54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x346c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346c58:
    // 0x346c58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x346c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346c5c:
    // 0x346c5c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x346c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_346c60:
    // 0x346c60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x346c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_346c64:
    // 0x346c64: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x346c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_346c68:
    // 0x346c68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x346c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_346c6c:
    // 0x346c6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x346c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_346c70:
    // 0x346c70: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x346c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_346c74:
    // 0x346c74: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x346c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_346c78:
    // 0x346c78: 0x14640029  bne         $v1, $a0, . + 4 + (0x29 << 2)
label_346c7c:
    if (ctx->pc == 0x346C7Cu) {
        ctx->pc = 0x346C80u;
        goto label_346c80;
    }
    ctx->pc = 0x346C78u;
    {
        const bool branch_taken_0x346c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x346c78) {
            ctx->pc = 0x346D20u;
            goto label_346d20;
        }
    }
    ctx->pc = 0x346C80u;
label_346c80:
    // 0x346c80: 0xc0d1c14  jal         func_347050
label_346c84:
    if (ctx->pc == 0x346C84u) {
        ctx->pc = 0x346C84u;
            // 0x346c84: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x346C88u;
        goto label_346c88;
    }
    ctx->pc = 0x346C80u;
    SET_GPR_U32(ctx, 31, 0x346C88u);
    ctx->pc = 0x346C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346C80u;
            // 0x346c84: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C88u; }
        if (ctx->pc != 0x346C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C88u; }
        if (ctx->pc != 0x346C88u) { return; }
    }
    ctx->pc = 0x346C88u;
label_346c88:
    // 0x346c88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x346c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346c8c:
    // 0x346c8c: 0xc04f278  jal         func_13C9E0
label_346c90:
    if (ctx->pc == 0x346C90u) {
        ctx->pc = 0x346C90u;
            // 0x346c90: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x346C94u;
        goto label_346c94;
    }
    ctx->pc = 0x346C8Cu;
    SET_GPR_U32(ctx, 31, 0x346C94u);
    ctx->pc = 0x346C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346C8Cu;
            // 0x346c90: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C94u; }
        if (ctx->pc != 0x346C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C94u; }
        if (ctx->pc != 0x346C94u) { return; }
    }
    ctx->pc = 0x346C94u;
label_346c94:
    // 0x346c94: 0xc0d1c10  jal         func_347040
label_346c98:
    if (ctx->pc == 0x346C98u) {
        ctx->pc = 0x346C98u;
            // 0x346c98: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x346C9Cu;
        goto label_346c9c;
    }
    ctx->pc = 0x346C94u;
    SET_GPR_U32(ctx, 31, 0x346C9Cu);
    ctx->pc = 0x346C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346C94u;
            // 0x346c98: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C9Cu; }
        if (ctx->pc != 0x346C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C9Cu; }
        if (ctx->pc != 0x346C9Cu) { return; }
    }
    ctx->pc = 0x346C9Cu;
label_346c9c:
    // 0x346c9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x346c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346ca0:
    // 0x346ca0: 0xc04ce80  jal         func_133A00
label_346ca4:
    if (ctx->pc == 0x346CA4u) {
        ctx->pc = 0x346CA4u;
            // 0x346ca4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x346CA8u;
        goto label_346ca8;
    }
    ctx->pc = 0x346CA0u;
    SET_GPR_U32(ctx, 31, 0x346CA8u);
    ctx->pc = 0x346CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346CA0u;
            // 0x346ca4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346CA8u; }
        if (ctx->pc != 0x346CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346CA8u; }
        if (ctx->pc != 0x346CA8u) { return; }
    }
    ctx->pc = 0x346CA8u;
label_346ca8:
    // 0x346ca8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x346ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_346cac:
    // 0x346cac: 0xc0d1c0c  jal         func_347030
label_346cb0:
    if (ctx->pc == 0x346CB0u) {
        ctx->pc = 0x346CB0u;
            // 0x346cb0: 0x244400a4  addiu       $a0, $v0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
        ctx->pc = 0x346CB4u;
        goto label_346cb4;
    }
    ctx->pc = 0x346CACu;
    SET_GPR_U32(ctx, 31, 0x346CB4u);
    ctx->pc = 0x346CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346CACu;
            // 0x346cb0: 0x244400a4  addiu       $a0, $v0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347030u;
    if (runtime->hasFunction(0x347030u)) {
        auto targetFn = runtime->lookupFunction(0x347030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346CB4u; }
        if (ctx->pc != 0x346CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347030_0x347030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346CB4u; }
        if (ctx->pc != 0x346CB4u) { return; }
    }
    ctx->pc = 0x346CB4u;
label_346cb4:
    // 0x346cb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x346cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346cb8:
    // 0x346cb8: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_346cbc:
    if (ctx->pc == 0x346CBCu) {
        ctx->pc = 0x346CC0u;
        goto label_346cc0;
    }
    ctx->pc = 0x346CB8u;
    {
        const bool branch_taken_0x346cb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x346cb8) {
            ctx->pc = 0x346D20u;
            goto label_346d20;
        }
    }
    ctx->pc = 0x346CC0u;
label_346cc0:
    // 0x346cc0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x346cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_346cc4:
    // 0x346cc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x346cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346cc8:
    // 0x346cc8: 0xc0d1c08  jal         func_347020
label_346ccc:
    if (ctx->pc == 0x346CCCu) {
        ctx->pc = 0x346CCCu;
            // 0x346ccc: 0x244400a4  addiu       $a0, $v0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
        ctx->pc = 0x346CD0u;
        goto label_346cd0;
    }
    ctx->pc = 0x346CC8u;
    SET_GPR_U32(ctx, 31, 0x346CD0u);
    ctx->pc = 0x346CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346CC8u;
            // 0x346ccc: 0x244400a4  addiu       $a0, $v0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347020u;
    if (runtime->hasFunction(0x347020u)) {
        auto targetFn = runtime->lookupFunction(0x347020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346CD0u; }
        if (ctx->pc != 0x346CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347020_0x347020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346CD0u; }
        if (ctx->pc != 0x346CD0u) { return; }
    }
    ctx->pc = 0x346CD0u;
label_346cd0:
    // 0x346cd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x346cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346cd4:
    // 0x346cd4: 0x0  nop
    ctx->pc = 0x346cd4u;
    // NOP
label_346cd8:
    // 0x346cd8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x346cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_346cdc:
    // 0x346cdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x346cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_346ce0:
    // 0x346ce0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x346ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_346ce4:
    // 0x346ce4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x346ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_346ce8:
    // 0x346ce8: 0x320f809  jalr        $t9
label_346cec:
    if (ctx->pc == 0x346CECu) {
        ctx->pc = 0x346CF0u;
        goto label_346cf0;
    }
    ctx->pc = 0x346CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346CF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x346CF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x346CF0u; }
            if (ctx->pc != 0x346CF0u) { return; }
        }
        }
    }
    ctx->pc = 0x346CF0u;
label_346cf0:
    // 0x346cf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x346cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_346cf4:
    // 0x346cf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x346cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_346cf8:
    // 0x346cf8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x346cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_346cfc:
    // 0x346cfc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x346cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_346d00:
    // 0x346d00: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x346d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_346d04:
    // 0x346d04: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x346d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_346d08:
    // 0x346d08: 0xc0d1b64  jal         func_346D90
label_346d0c:
    if (ctx->pc == 0x346D0Cu) {
        ctx->pc = 0x346D0Cu;
            // 0x346d0c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x346D10u;
        goto label_346d10;
    }
    ctx->pc = 0x346D08u;
    SET_GPR_U32(ctx, 31, 0x346D10u);
    ctx->pc = 0x346D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346D08u;
            // 0x346d0c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346D90u;
    if (runtime->hasFunction(0x346D90u)) {
        auto targetFn = runtime->lookupFunction(0x346D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346D10u; }
        if (ctx->pc != 0x346D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346D90_0x346d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346D10u; }
        if (ctx->pc != 0x346D10u) { return; }
    }
    ctx->pc = 0x346D10u;
label_346d10:
    // 0x346d10: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x346d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_346d14:
    // 0x346d14: 0x12182b  sltu        $v1, $zero, $s2
    ctx->pc = 0x346d14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_346d18:
    // 0x346d18: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_346d1c:
    if (ctx->pc == 0x346D1Cu) {
        ctx->pc = 0x346D1Cu;
            // 0x346d1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x346D20u;
        goto label_346d20;
    }
    ctx->pc = 0x346D18u;
    {
        const bool branch_taken_0x346d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x346D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346D18u;
            // 0x346d1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d18) {
            ctx->pc = 0x346CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_346cd8;
        }
    }
    ctx->pc = 0x346D20u;
label_346d20:
    // 0x346d20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x346d20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_346d24:
    // 0x346d24: 0x276182b  sltu        $v1, $s3, $s6
    ctx->pc = 0x346d24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_346d28:
    // 0x346d28: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_346d2c:
    if (ctx->pc == 0x346D2Cu) {
        ctx->pc = 0x346D2Cu;
            // 0x346d2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x346D30u;
        goto label_346d30;
    }
    ctx->pc = 0x346D28u;
    {
        const bool branch_taken_0x346d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x346D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346D28u;
            // 0x346d2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d28) {
            ctx->pc = 0x346C5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_346c5c;
        }
    }
    ctx->pc = 0x346D30u;
label_346d30:
    // 0x346d30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x346d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_346d34:
    // 0x346d34: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x346d34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_346d38:
    // 0x346d38: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_346d3c:
    if (ctx->pc == 0x346D3Cu) {
        ctx->pc = 0x346D3Cu;
            // 0x346d3c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x346D40u;
        goto label_346d40;
    }
    ctx->pc = 0x346D38u;
    {
        const bool branch_taken_0x346d38 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x346D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346D38u;
            // 0x346d3c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d38) {
            ctx->pc = 0x346D60u;
            goto label_346d60;
        }
    }
    ctx->pc = 0x346D40u;
label_346d40:
    // 0x346d40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x346d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_346d44:
    // 0x346d44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_346d48:
    // 0x346d48: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x346d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_346d4c:
    // 0x346d4c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x346d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_346d50:
    // 0x346d50: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x346d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_346d54:
    // 0x346d54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x346d54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346d58:
    // 0x346d58: 0xc055d28  jal         func_1574A0
label_346d5c:
    if (ctx->pc == 0x346D5Cu) {
        ctx->pc = 0x346D5Cu;
            // 0x346d5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x346D60u;
        goto label_346d60;
    }
    ctx->pc = 0x346D58u;
    SET_GPR_U32(ctx, 31, 0x346D60u);
    ctx->pc = 0x346D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346D58u;
            // 0x346d5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346D60u; }
        if (ctx->pc != 0x346D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346D60u; }
        if (ctx->pc != 0x346D60u) { return; }
    }
    ctx->pc = 0x346D60u;
label_346d60:
    // 0x346d60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x346d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_346d64:
    // 0x346d64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x346d64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_346d68:
    // 0x346d68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x346d68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_346d6c:
    // 0x346d6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x346d6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_346d70:
    // 0x346d70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x346d70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_346d74:
    // 0x346d74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x346d74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_346d78:
    // 0x346d78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x346d78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_346d7c:
    // 0x346d7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x346d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_346d80:
    // 0x346d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_346d84:
    // 0x346d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_346d88:
    // 0x346d88: 0x3e00008  jr          $ra
label_346d8c:
    if (ctx->pc == 0x346D8Cu) {
        ctx->pc = 0x346D8Cu;
            // 0x346d8c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x346D90u;
        goto label_fallthrough_0x346d88;
    }
    ctx->pc = 0x346D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346D88u;
            // 0x346d8c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x346d88:
    ctx->pc = 0x346D90u;
}
