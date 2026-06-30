#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00355860
// Address: 0x355860 - 0x355d00
void sub_00355860_0x355860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355860_0x355860");
#endif

    switch (ctx->pc) {
        case 0x355860u: goto label_355860;
        case 0x355864u: goto label_355864;
        case 0x355868u: goto label_355868;
        case 0x35586cu: goto label_35586c;
        case 0x355870u: goto label_355870;
        case 0x355874u: goto label_355874;
        case 0x355878u: goto label_355878;
        case 0x35587cu: goto label_35587c;
        case 0x355880u: goto label_355880;
        case 0x355884u: goto label_355884;
        case 0x355888u: goto label_355888;
        case 0x35588cu: goto label_35588c;
        case 0x355890u: goto label_355890;
        case 0x355894u: goto label_355894;
        case 0x355898u: goto label_355898;
        case 0x35589cu: goto label_35589c;
        case 0x3558a0u: goto label_3558a0;
        case 0x3558a4u: goto label_3558a4;
        case 0x3558a8u: goto label_3558a8;
        case 0x3558acu: goto label_3558ac;
        case 0x3558b0u: goto label_3558b0;
        case 0x3558b4u: goto label_3558b4;
        case 0x3558b8u: goto label_3558b8;
        case 0x3558bcu: goto label_3558bc;
        case 0x3558c0u: goto label_3558c0;
        case 0x3558c4u: goto label_3558c4;
        case 0x3558c8u: goto label_3558c8;
        case 0x3558ccu: goto label_3558cc;
        case 0x3558d0u: goto label_3558d0;
        case 0x3558d4u: goto label_3558d4;
        case 0x3558d8u: goto label_3558d8;
        case 0x3558dcu: goto label_3558dc;
        case 0x3558e0u: goto label_3558e0;
        case 0x3558e4u: goto label_3558e4;
        case 0x3558e8u: goto label_3558e8;
        case 0x3558ecu: goto label_3558ec;
        case 0x3558f0u: goto label_3558f0;
        case 0x3558f4u: goto label_3558f4;
        case 0x3558f8u: goto label_3558f8;
        case 0x3558fcu: goto label_3558fc;
        case 0x355900u: goto label_355900;
        case 0x355904u: goto label_355904;
        case 0x355908u: goto label_355908;
        case 0x35590cu: goto label_35590c;
        case 0x355910u: goto label_355910;
        case 0x355914u: goto label_355914;
        case 0x355918u: goto label_355918;
        case 0x35591cu: goto label_35591c;
        case 0x355920u: goto label_355920;
        case 0x355924u: goto label_355924;
        case 0x355928u: goto label_355928;
        case 0x35592cu: goto label_35592c;
        case 0x355930u: goto label_355930;
        case 0x355934u: goto label_355934;
        case 0x355938u: goto label_355938;
        case 0x35593cu: goto label_35593c;
        case 0x355940u: goto label_355940;
        case 0x355944u: goto label_355944;
        case 0x355948u: goto label_355948;
        case 0x35594cu: goto label_35594c;
        case 0x355950u: goto label_355950;
        case 0x355954u: goto label_355954;
        case 0x355958u: goto label_355958;
        case 0x35595cu: goto label_35595c;
        case 0x355960u: goto label_355960;
        case 0x355964u: goto label_355964;
        case 0x355968u: goto label_355968;
        case 0x35596cu: goto label_35596c;
        case 0x355970u: goto label_355970;
        case 0x355974u: goto label_355974;
        case 0x355978u: goto label_355978;
        case 0x35597cu: goto label_35597c;
        case 0x355980u: goto label_355980;
        case 0x355984u: goto label_355984;
        case 0x355988u: goto label_355988;
        case 0x35598cu: goto label_35598c;
        case 0x355990u: goto label_355990;
        case 0x355994u: goto label_355994;
        case 0x355998u: goto label_355998;
        case 0x35599cu: goto label_35599c;
        case 0x3559a0u: goto label_3559a0;
        case 0x3559a4u: goto label_3559a4;
        case 0x3559a8u: goto label_3559a8;
        case 0x3559acu: goto label_3559ac;
        case 0x3559b0u: goto label_3559b0;
        case 0x3559b4u: goto label_3559b4;
        case 0x3559b8u: goto label_3559b8;
        case 0x3559bcu: goto label_3559bc;
        case 0x3559c0u: goto label_3559c0;
        case 0x3559c4u: goto label_3559c4;
        case 0x3559c8u: goto label_3559c8;
        case 0x3559ccu: goto label_3559cc;
        case 0x3559d0u: goto label_3559d0;
        case 0x3559d4u: goto label_3559d4;
        case 0x3559d8u: goto label_3559d8;
        case 0x3559dcu: goto label_3559dc;
        case 0x3559e0u: goto label_3559e0;
        case 0x3559e4u: goto label_3559e4;
        case 0x3559e8u: goto label_3559e8;
        case 0x3559ecu: goto label_3559ec;
        case 0x3559f0u: goto label_3559f0;
        case 0x3559f4u: goto label_3559f4;
        case 0x3559f8u: goto label_3559f8;
        case 0x3559fcu: goto label_3559fc;
        case 0x355a00u: goto label_355a00;
        case 0x355a04u: goto label_355a04;
        case 0x355a08u: goto label_355a08;
        case 0x355a0cu: goto label_355a0c;
        case 0x355a10u: goto label_355a10;
        case 0x355a14u: goto label_355a14;
        case 0x355a18u: goto label_355a18;
        case 0x355a1cu: goto label_355a1c;
        case 0x355a20u: goto label_355a20;
        case 0x355a24u: goto label_355a24;
        case 0x355a28u: goto label_355a28;
        case 0x355a2cu: goto label_355a2c;
        case 0x355a30u: goto label_355a30;
        case 0x355a34u: goto label_355a34;
        case 0x355a38u: goto label_355a38;
        case 0x355a3cu: goto label_355a3c;
        case 0x355a40u: goto label_355a40;
        case 0x355a44u: goto label_355a44;
        case 0x355a48u: goto label_355a48;
        case 0x355a4cu: goto label_355a4c;
        case 0x355a50u: goto label_355a50;
        case 0x355a54u: goto label_355a54;
        case 0x355a58u: goto label_355a58;
        case 0x355a5cu: goto label_355a5c;
        case 0x355a60u: goto label_355a60;
        case 0x355a64u: goto label_355a64;
        case 0x355a68u: goto label_355a68;
        case 0x355a6cu: goto label_355a6c;
        case 0x355a70u: goto label_355a70;
        case 0x355a74u: goto label_355a74;
        case 0x355a78u: goto label_355a78;
        case 0x355a7cu: goto label_355a7c;
        case 0x355a80u: goto label_355a80;
        case 0x355a84u: goto label_355a84;
        case 0x355a88u: goto label_355a88;
        case 0x355a8cu: goto label_355a8c;
        case 0x355a90u: goto label_355a90;
        case 0x355a94u: goto label_355a94;
        case 0x355a98u: goto label_355a98;
        case 0x355a9cu: goto label_355a9c;
        case 0x355aa0u: goto label_355aa0;
        case 0x355aa4u: goto label_355aa4;
        case 0x355aa8u: goto label_355aa8;
        case 0x355aacu: goto label_355aac;
        case 0x355ab0u: goto label_355ab0;
        case 0x355ab4u: goto label_355ab4;
        case 0x355ab8u: goto label_355ab8;
        case 0x355abcu: goto label_355abc;
        case 0x355ac0u: goto label_355ac0;
        case 0x355ac4u: goto label_355ac4;
        case 0x355ac8u: goto label_355ac8;
        case 0x355accu: goto label_355acc;
        case 0x355ad0u: goto label_355ad0;
        case 0x355ad4u: goto label_355ad4;
        case 0x355ad8u: goto label_355ad8;
        case 0x355adcu: goto label_355adc;
        case 0x355ae0u: goto label_355ae0;
        case 0x355ae4u: goto label_355ae4;
        case 0x355ae8u: goto label_355ae8;
        case 0x355aecu: goto label_355aec;
        case 0x355af0u: goto label_355af0;
        case 0x355af4u: goto label_355af4;
        case 0x355af8u: goto label_355af8;
        case 0x355afcu: goto label_355afc;
        case 0x355b00u: goto label_355b00;
        case 0x355b04u: goto label_355b04;
        case 0x355b08u: goto label_355b08;
        case 0x355b0cu: goto label_355b0c;
        case 0x355b10u: goto label_355b10;
        case 0x355b14u: goto label_355b14;
        case 0x355b18u: goto label_355b18;
        case 0x355b1cu: goto label_355b1c;
        case 0x355b20u: goto label_355b20;
        case 0x355b24u: goto label_355b24;
        case 0x355b28u: goto label_355b28;
        case 0x355b2cu: goto label_355b2c;
        case 0x355b30u: goto label_355b30;
        case 0x355b34u: goto label_355b34;
        case 0x355b38u: goto label_355b38;
        case 0x355b3cu: goto label_355b3c;
        case 0x355b40u: goto label_355b40;
        case 0x355b44u: goto label_355b44;
        case 0x355b48u: goto label_355b48;
        case 0x355b4cu: goto label_355b4c;
        case 0x355b50u: goto label_355b50;
        case 0x355b54u: goto label_355b54;
        case 0x355b58u: goto label_355b58;
        case 0x355b5cu: goto label_355b5c;
        case 0x355b60u: goto label_355b60;
        case 0x355b64u: goto label_355b64;
        case 0x355b68u: goto label_355b68;
        case 0x355b6cu: goto label_355b6c;
        case 0x355b70u: goto label_355b70;
        case 0x355b74u: goto label_355b74;
        case 0x355b78u: goto label_355b78;
        case 0x355b7cu: goto label_355b7c;
        case 0x355b80u: goto label_355b80;
        case 0x355b84u: goto label_355b84;
        case 0x355b88u: goto label_355b88;
        case 0x355b8cu: goto label_355b8c;
        case 0x355b90u: goto label_355b90;
        case 0x355b94u: goto label_355b94;
        case 0x355b98u: goto label_355b98;
        case 0x355b9cu: goto label_355b9c;
        case 0x355ba0u: goto label_355ba0;
        case 0x355ba4u: goto label_355ba4;
        case 0x355ba8u: goto label_355ba8;
        case 0x355bacu: goto label_355bac;
        case 0x355bb0u: goto label_355bb0;
        case 0x355bb4u: goto label_355bb4;
        case 0x355bb8u: goto label_355bb8;
        case 0x355bbcu: goto label_355bbc;
        case 0x355bc0u: goto label_355bc0;
        case 0x355bc4u: goto label_355bc4;
        case 0x355bc8u: goto label_355bc8;
        case 0x355bccu: goto label_355bcc;
        case 0x355bd0u: goto label_355bd0;
        case 0x355bd4u: goto label_355bd4;
        case 0x355bd8u: goto label_355bd8;
        case 0x355bdcu: goto label_355bdc;
        case 0x355be0u: goto label_355be0;
        case 0x355be4u: goto label_355be4;
        case 0x355be8u: goto label_355be8;
        case 0x355becu: goto label_355bec;
        case 0x355bf0u: goto label_355bf0;
        case 0x355bf4u: goto label_355bf4;
        case 0x355bf8u: goto label_355bf8;
        case 0x355bfcu: goto label_355bfc;
        case 0x355c00u: goto label_355c00;
        case 0x355c04u: goto label_355c04;
        case 0x355c08u: goto label_355c08;
        case 0x355c0cu: goto label_355c0c;
        case 0x355c10u: goto label_355c10;
        case 0x355c14u: goto label_355c14;
        case 0x355c18u: goto label_355c18;
        case 0x355c1cu: goto label_355c1c;
        case 0x355c20u: goto label_355c20;
        case 0x355c24u: goto label_355c24;
        case 0x355c28u: goto label_355c28;
        case 0x355c2cu: goto label_355c2c;
        case 0x355c30u: goto label_355c30;
        case 0x355c34u: goto label_355c34;
        case 0x355c38u: goto label_355c38;
        case 0x355c3cu: goto label_355c3c;
        case 0x355c40u: goto label_355c40;
        case 0x355c44u: goto label_355c44;
        case 0x355c48u: goto label_355c48;
        case 0x355c4cu: goto label_355c4c;
        case 0x355c50u: goto label_355c50;
        case 0x355c54u: goto label_355c54;
        case 0x355c58u: goto label_355c58;
        case 0x355c5cu: goto label_355c5c;
        case 0x355c60u: goto label_355c60;
        case 0x355c64u: goto label_355c64;
        case 0x355c68u: goto label_355c68;
        case 0x355c6cu: goto label_355c6c;
        case 0x355c70u: goto label_355c70;
        case 0x355c74u: goto label_355c74;
        case 0x355c78u: goto label_355c78;
        case 0x355c7cu: goto label_355c7c;
        case 0x355c80u: goto label_355c80;
        case 0x355c84u: goto label_355c84;
        case 0x355c88u: goto label_355c88;
        case 0x355c8cu: goto label_355c8c;
        case 0x355c90u: goto label_355c90;
        case 0x355c94u: goto label_355c94;
        case 0x355c98u: goto label_355c98;
        case 0x355c9cu: goto label_355c9c;
        case 0x355ca0u: goto label_355ca0;
        case 0x355ca4u: goto label_355ca4;
        case 0x355ca8u: goto label_355ca8;
        case 0x355cacu: goto label_355cac;
        case 0x355cb0u: goto label_355cb0;
        case 0x355cb4u: goto label_355cb4;
        case 0x355cb8u: goto label_355cb8;
        case 0x355cbcu: goto label_355cbc;
        case 0x355cc0u: goto label_355cc0;
        case 0x355cc4u: goto label_355cc4;
        case 0x355cc8u: goto label_355cc8;
        case 0x355cccu: goto label_355ccc;
        case 0x355cd0u: goto label_355cd0;
        case 0x355cd4u: goto label_355cd4;
        case 0x355cd8u: goto label_355cd8;
        case 0x355cdcu: goto label_355cdc;
        case 0x355ce0u: goto label_355ce0;
        case 0x355ce4u: goto label_355ce4;
        case 0x355ce8u: goto label_355ce8;
        case 0x355cecu: goto label_355cec;
        case 0x355cf0u: goto label_355cf0;
        case 0x355cf4u: goto label_355cf4;
        case 0x355cf8u: goto label_355cf8;
        case 0x355cfcu: goto label_355cfc;
        default: break;
    }

    ctx->pc = 0x355860u;

label_355860:
    // 0x355860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_355864:
    // 0x355864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x355864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_355868:
    // 0x355868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x355868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35586c:
    // 0x35586c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35586cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_355870:
    // 0x355870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x355870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_355874:
    // 0x355874: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_355878:
    if (ctx->pc == 0x355878u) {
        ctx->pc = 0x355878u;
            // 0x355878: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35587Cu;
        goto label_35587c;
    }
    ctx->pc = 0x355874u;
    {
        const bool branch_taken_0x355874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x355878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355874u;
            // 0x355878: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355874) {
            ctx->pc = 0x3559BCu;
            goto label_3559bc;
        }
    }
    ctx->pc = 0x35587Cu;
label_35587c:
    // 0x35587c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35587cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_355880:
    // 0x355880: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x355880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_355884:
    // 0x355884: 0x24635f20  addiu       $v1, $v1, 0x5F20
    ctx->pc = 0x355884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24352));
label_355888:
    // 0x355888: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x355888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_35588c:
    // 0x35588c: 0x24425f58  addiu       $v0, $v0, 0x5F58
    ctx->pc = 0x35588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24408));
label_355890:
    // 0x355890: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x355890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_355894:
    // 0x355894: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x355894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_355898:
    // 0x355898: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x355898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_35589c:
    // 0x35589c: 0xc0407c0  jal         func_101F00
label_3558a0:
    if (ctx->pc == 0x3558A0u) {
        ctx->pc = 0x3558A0u;
            // 0x3558a0: 0x24a56d00  addiu       $a1, $a1, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
        ctx->pc = 0x3558A4u;
        goto label_3558a4;
    }
    ctx->pc = 0x35589Cu;
    SET_GPR_U32(ctx, 31, 0x3558A4u);
    ctx->pc = 0x3558A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35589Cu;
            // 0x3558a0: 0x24a56d00  addiu       $a1, $a1, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3558A4u; }
        if (ctx->pc != 0x3558A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3558A4u; }
        if (ctx->pc != 0x3558A4u) { return; }
    }
    ctx->pc = 0x3558A4u;
label_3558a4:
    // 0x3558a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3558a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3558a8:
    // 0x3558a8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3558ac:
    if (ctx->pc == 0x3558ACu) {
        ctx->pc = 0x3558ACu;
            // 0x3558ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3558B0u;
        goto label_3558b0;
    }
    ctx->pc = 0x3558A8u;
    {
        const bool branch_taken_0x3558a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558a8) {
            ctx->pc = 0x3558ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3558A8u;
            // 0x3558ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3558D0u;
            goto label_3558d0;
        }
    }
    ctx->pc = 0x3558B0u;
label_3558b0:
    // 0x3558b0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x3558b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_3558b4:
    // 0x3558b4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3558b8:
    if (ctx->pc == 0x3558B8u) {
        ctx->pc = 0x3558B8u;
            // 0x3558b8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x3558BCu;
        goto label_3558bc;
    }
    ctx->pc = 0x3558B4u;
    {
        const bool branch_taken_0x3558b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558b4) {
            ctx->pc = 0x3558B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3558B4u;
            // 0x3558b8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3558CCu;
            goto label_3558cc;
        }
    }
    ctx->pc = 0x3558BCu;
label_3558bc:
    // 0x3558bc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x3558bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_3558c0:
    // 0x3558c0: 0xc0407c0  jal         func_101F00
label_3558c4:
    if (ctx->pc == 0x3558C4u) {
        ctx->pc = 0x3558C4u;
            // 0x3558c4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x3558C8u;
        goto label_3558c8;
    }
    ctx->pc = 0x3558C0u;
    SET_GPR_U32(ctx, 31, 0x3558C8u);
    ctx->pc = 0x3558C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3558C0u;
            // 0x3558c4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3558C8u; }
        if (ctx->pc != 0x3558C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3558C8u; }
        if (ctx->pc != 0x3558C8u) { return; }
    }
    ctx->pc = 0x3558C8u;
label_3558c8:
    // 0x3558c8: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x3558c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_3558cc:
    // 0x3558cc: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3558ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3558d0:
    // 0x3558d0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3558d4:
    if (ctx->pc == 0x3558D4u) {
        ctx->pc = 0x3558D4u;
            // 0x3558d4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3558D8u;
        goto label_3558d8;
    }
    ctx->pc = 0x3558D0u;
    {
        const bool branch_taken_0x3558d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558d0) {
            ctx->pc = 0x3558D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3558D0u;
            // 0x3558d4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355900u;
            goto label_355900;
        }
    }
    ctx->pc = 0x3558D8u;
label_3558d8:
    // 0x3558d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3558dc:
    if (ctx->pc == 0x3558DCu) {
        ctx->pc = 0x3558E0u;
        goto label_3558e0;
    }
    ctx->pc = 0x3558D8u;
    {
        const bool branch_taken_0x3558d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558d8) {
            ctx->pc = 0x3558FCu;
            goto label_3558fc;
        }
    }
    ctx->pc = 0x3558E0u;
label_3558e0:
    // 0x3558e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3558e4:
    if (ctx->pc == 0x3558E4u) {
        ctx->pc = 0x3558E8u;
        goto label_3558e8;
    }
    ctx->pc = 0x3558E0u;
    {
        const bool branch_taken_0x3558e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558e0) {
            ctx->pc = 0x3558FCu;
            goto label_3558fc;
        }
    }
    ctx->pc = 0x3558E8u;
label_3558e8:
    // 0x3558e8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3558e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3558ec:
    // 0x3558ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3558f0:
    if (ctx->pc == 0x3558F0u) {
        ctx->pc = 0x3558F4u;
        goto label_3558f4;
    }
    ctx->pc = 0x3558ECu;
    {
        const bool branch_taken_0x3558ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558ec) {
            ctx->pc = 0x3558FCu;
            goto label_3558fc;
        }
    }
    ctx->pc = 0x3558F4u;
label_3558f4:
    // 0x3558f4: 0xc0400a8  jal         func_1002A0
label_3558f8:
    if (ctx->pc == 0x3558F8u) {
        ctx->pc = 0x3558FCu;
        goto label_3558fc;
    }
    ctx->pc = 0x3558F4u;
    SET_GPR_U32(ctx, 31, 0x3558FCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3558FCu; }
        if (ctx->pc != 0x3558FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3558FCu; }
        if (ctx->pc != 0x3558FCu) { return; }
    }
    ctx->pc = 0x3558FCu;
label_3558fc:
    // 0x3558fc: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3558fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_355900:
    // 0x355900: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_355904:
    if (ctx->pc == 0x355904u) {
        ctx->pc = 0x355904u;
            // 0x355904: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x355908u;
        goto label_355908;
    }
    ctx->pc = 0x355900u;
    {
        const bool branch_taken_0x355900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355900) {
            ctx->pc = 0x355904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355900u;
            // 0x355904: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355930u;
            goto label_355930;
        }
    }
    ctx->pc = 0x355908u;
label_355908:
    // 0x355908: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_35590c:
    if (ctx->pc == 0x35590Cu) {
        ctx->pc = 0x355910u;
        goto label_355910;
    }
    ctx->pc = 0x355908u;
    {
        const bool branch_taken_0x355908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355908) {
            ctx->pc = 0x35592Cu;
            goto label_35592c;
        }
    }
    ctx->pc = 0x355910u;
label_355910:
    // 0x355910: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_355914:
    if (ctx->pc == 0x355914u) {
        ctx->pc = 0x355918u;
        goto label_355918;
    }
    ctx->pc = 0x355910u;
    {
        const bool branch_taken_0x355910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355910) {
            ctx->pc = 0x35592Cu;
            goto label_35592c;
        }
    }
    ctx->pc = 0x355918u;
label_355918:
    // 0x355918: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x355918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_35591c:
    // 0x35591c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_355920:
    if (ctx->pc == 0x355920u) {
        ctx->pc = 0x355924u;
        goto label_355924;
    }
    ctx->pc = 0x35591Cu;
    {
        const bool branch_taken_0x35591c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35591c) {
            ctx->pc = 0x35592Cu;
            goto label_35592c;
        }
    }
    ctx->pc = 0x355924u;
label_355924:
    // 0x355924: 0xc0400a8  jal         func_1002A0
label_355928:
    if (ctx->pc == 0x355928u) {
        ctx->pc = 0x35592Cu;
        goto label_35592c;
    }
    ctx->pc = 0x355924u;
    SET_GPR_U32(ctx, 31, 0x35592Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35592Cu; }
        if (ctx->pc != 0x35592Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35592Cu; }
        if (ctx->pc != 0x35592Cu) { return; }
    }
    ctx->pc = 0x35592Cu;
label_35592c:
    // 0x35592c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x35592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_355930:
    // 0x355930: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_355934:
    if (ctx->pc == 0x355934u) {
        ctx->pc = 0x355938u;
        goto label_355938;
    }
    ctx->pc = 0x355930u;
    {
        const bool branch_taken_0x355930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355930) {
            ctx->pc = 0x35594Cu;
            goto label_35594c;
        }
    }
    ctx->pc = 0x355938u;
label_355938:
    // 0x355938: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x355938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35593c:
    // 0x35593c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_355940:
    // 0x355940: 0x24635f08  addiu       $v1, $v1, 0x5F08
    ctx->pc = 0x355940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24328));
label_355944:
    // 0x355944: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x355944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_355948:
    // 0x355948: 0xac403ff8  sw          $zero, 0x3FF8($v0)
    ctx->pc = 0x355948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16376), GPR_U32(ctx, 0));
label_35594c:
    // 0x35594c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_355950:
    if (ctx->pc == 0x355950u) {
        ctx->pc = 0x355950u;
            // 0x355950: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x355954u;
        goto label_355954;
    }
    ctx->pc = 0x35594Cu;
    {
        const bool branch_taken_0x35594c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35594c) {
            ctx->pc = 0x355950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35594Cu;
            // 0x355950: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3559A8u;
            goto label_3559a8;
        }
    }
    ctx->pc = 0x355954u;
label_355954:
    // 0x355954: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x355954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_355958:
    // 0x355958: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x355958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_35595c:
    // 0x35595c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35595cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_355960:
    // 0x355960: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x355960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_355964:
    // 0x355964: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_355968:
    if (ctx->pc == 0x355968u) {
        ctx->pc = 0x355968u;
            // 0x355968: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x35596Cu;
        goto label_35596c;
    }
    ctx->pc = 0x355964u;
    {
        const bool branch_taken_0x355964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x355964) {
            ctx->pc = 0x355968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355964u;
            // 0x355968: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355980u;
            goto label_355980;
        }
    }
    ctx->pc = 0x35596Cu;
label_35596c:
    // 0x35596c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35596cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_355970:
    // 0x355970: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x355970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_355974:
    // 0x355974: 0x320f809  jalr        $t9
label_355978:
    if (ctx->pc == 0x355978u) {
        ctx->pc = 0x355978u;
            // 0x355978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35597Cu;
        goto label_35597c;
    }
    ctx->pc = 0x355974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35597Cu);
        ctx->pc = 0x355978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355974u;
            // 0x355978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35597Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35597Cu; }
            if (ctx->pc != 0x35597Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35597Cu;
label_35597c:
    // 0x35597c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x35597cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_355980:
    // 0x355980: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_355984:
    if (ctx->pc == 0x355984u) {
        ctx->pc = 0x355984u;
            // 0x355984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355988u;
        goto label_355988;
    }
    ctx->pc = 0x355980u;
    {
        const bool branch_taken_0x355980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x355980) {
            ctx->pc = 0x355984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355980u;
            // 0x355984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35599Cu;
            goto label_35599c;
        }
    }
    ctx->pc = 0x355988u;
label_355988:
    // 0x355988: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x355988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35598c:
    // 0x35598c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x35598cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_355990:
    // 0x355990: 0x320f809  jalr        $t9
label_355994:
    if (ctx->pc == 0x355994u) {
        ctx->pc = 0x355994u;
            // 0x355994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x355998u;
        goto label_355998;
    }
    ctx->pc = 0x355990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x355998u);
        ctx->pc = 0x355994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355990u;
            // 0x355994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x355998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x355998u; }
            if (ctx->pc != 0x355998u) { return; }
        }
        }
    }
    ctx->pc = 0x355998u;
label_355998:
    // 0x355998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x355998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35599c:
    // 0x35599c: 0xc075bf8  jal         func_1D6FE0
label_3559a0:
    if (ctx->pc == 0x3559A0u) {
        ctx->pc = 0x3559A0u;
            // 0x3559a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3559A4u;
        goto label_3559a4;
    }
    ctx->pc = 0x35599Cu;
    SET_GPR_U32(ctx, 31, 0x3559A4u);
    ctx->pc = 0x3559A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35599Cu;
            // 0x3559a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3559A4u; }
        if (ctx->pc != 0x3559A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3559A4u; }
        if (ctx->pc != 0x3559A4u) { return; }
    }
    ctx->pc = 0x3559A4u;
label_3559a4:
    // 0x3559a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3559a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3559a8:
    // 0x3559a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3559a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3559ac:
    // 0x3559ac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3559b0:
    if (ctx->pc == 0x3559B0u) {
        ctx->pc = 0x3559B0u;
            // 0x3559b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3559B4u;
        goto label_3559b4;
    }
    ctx->pc = 0x3559ACu;
    {
        const bool branch_taken_0x3559ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3559ac) {
            ctx->pc = 0x3559B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3559ACu;
            // 0x3559b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3559C0u;
            goto label_3559c0;
        }
    }
    ctx->pc = 0x3559B4u;
label_3559b4:
    // 0x3559b4: 0xc0400a8  jal         func_1002A0
label_3559b8:
    if (ctx->pc == 0x3559B8u) {
        ctx->pc = 0x3559B8u;
            // 0x3559b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3559BCu;
        goto label_3559bc;
    }
    ctx->pc = 0x3559B4u;
    SET_GPR_U32(ctx, 31, 0x3559BCu);
    ctx->pc = 0x3559B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3559B4u;
            // 0x3559b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3559BCu; }
        if (ctx->pc != 0x3559BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3559BCu; }
        if (ctx->pc != 0x3559BCu) { return; }
    }
    ctx->pc = 0x3559BCu;
label_3559bc:
    // 0x3559bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3559bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3559c0:
    // 0x3559c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3559c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3559c4:
    // 0x3559c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3559c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3559c8:
    // 0x3559c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3559c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3559cc:
    // 0x3559cc: 0x3e00008  jr          $ra
label_3559d0:
    if (ctx->pc == 0x3559D0u) {
        ctx->pc = 0x3559D0u;
            // 0x3559d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3559D4u;
        goto label_3559d4;
    }
    ctx->pc = 0x3559CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3559D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3559CCu;
            // 0x3559d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3559D4u;
label_3559d4:
    // 0x3559d4: 0x0  nop
    ctx->pc = 0x3559d4u;
    // NOP
label_3559d8:
    // 0x3559d8: 0x0  nop
    ctx->pc = 0x3559d8u;
    // NOP
label_3559dc:
    // 0x3559dc: 0x0  nop
    ctx->pc = 0x3559dcu;
    // NOP
label_3559e0:
    // 0x3559e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3559e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3559e4:
    // 0x3559e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3559e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3559e8:
    // 0x3559e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3559e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3559ec:
    // 0x3559ec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3559ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3559f0:
    // 0x3559f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3559f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3559f4:
    // 0x3559f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3559f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3559f8:
    // 0x3559f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3559f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3559fc:
    // 0x3559fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3559fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_355a00:
    // 0x355a00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x355a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_355a04:
    // 0x355a04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x355a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_355a08:
    // 0x355a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x355a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_355a0c:
    // 0x355a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_355a10:
    // 0x355a10: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x355a10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_355a14:
    // 0x355a14: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_355a18:
    if (ctx->pc == 0x355A18u) {
        ctx->pc = 0x355A18u;
            // 0x355a18: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355A1Cu;
        goto label_355a1c;
    }
    ctx->pc = 0x355A14u;
    {
        const bool branch_taken_0x355a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x355A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355A14u;
            // 0x355a18: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355a14) {
            ctx->pc = 0x355A64u;
            goto label_355a64;
        }
    }
    ctx->pc = 0x355A1Cu;
label_355a1c:
    // 0x355a1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x355a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_355a20:
    // 0x355a20: 0x50a3004b  beql        $a1, $v1, . + 4 + (0x4B << 2)
label_355a24:
    if (ctx->pc == 0x355A24u) {
        ctx->pc = 0x355A24u;
            // 0x355a24: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x355A28u;
        goto label_355a28;
    }
    ctx->pc = 0x355A20u;
    {
        const bool branch_taken_0x355a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x355a20) {
            ctx->pc = 0x355A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355A20u;
            // 0x355a24: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355B50u;
            goto label_355b50;
        }
    }
    ctx->pc = 0x355A28u;
label_355a28:
    // 0x355a28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x355a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_355a2c:
    // 0x355a2c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_355a30:
    if (ctx->pc == 0x355A30u) {
        ctx->pc = 0x355A34u;
        goto label_355a34;
    }
    ctx->pc = 0x355A2Cu;
    {
        const bool branch_taken_0x355a2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x355a2c) {
            ctx->pc = 0x355A3Cu;
            goto label_355a3c;
        }
    }
    ctx->pc = 0x355A34u;
label_355a34:
    // 0x355a34: 0x10000045  b           . + 4 + (0x45 << 2)
label_355a38:
    if (ctx->pc == 0x355A38u) {
        ctx->pc = 0x355A3Cu;
        goto label_355a3c;
    }
    ctx->pc = 0x355A34u;
    {
        const bool branch_taken_0x355a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a34) {
            ctx->pc = 0x355B4Cu;
            goto label_355b4c;
        }
    }
    ctx->pc = 0x355A3Cu;
label_355a3c:
    // 0x355a3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x355a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_355a40:
    // 0x355a40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x355a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_355a44:
    // 0x355a44: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x355a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_355a48:
    // 0x355a48: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x355a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_355a4c:
    // 0x355a4c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x355a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_355a50:
    // 0x355a50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x355a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_355a54:
    // 0x355a54: 0x320f809  jalr        $t9
label_355a58:
    if (ctx->pc == 0x355A58u) {
        ctx->pc = 0x355A58u;
            // 0x355a58: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x355A5Cu;
        goto label_355a5c;
    }
    ctx->pc = 0x355A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x355A5Cu);
        ctx->pc = 0x355A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355A54u;
            // 0x355a58: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x355A5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x355A5Cu; }
            if (ctx->pc != 0x355A5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x355A5Cu;
label_355a5c:
    // 0x355a5c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_355a60:
    if (ctx->pc == 0x355A60u) {
        ctx->pc = 0x355A64u;
        goto label_355a64;
    }
    ctx->pc = 0x355A5Cu;
    {
        const bool branch_taken_0x355a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a5c) {
            ctx->pc = 0x355B4Cu;
            goto label_355b4c;
        }
    }
    ctx->pc = 0x355A64u;
label_355a64:
    // 0x355a64: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x355a64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_355a68:
    // 0x355a68: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
label_355a6c:
    if (ctx->pc == 0x355A6Cu) {
        ctx->pc = 0x355A70u;
        goto label_355a70;
    }
    ctx->pc = 0x355A68u;
    {
        const bool branch_taken_0x355a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a68) {
            ctx->pc = 0x355B4Cu;
            goto label_355b4c;
        }
    }
    ctx->pc = 0x355A70u;
label_355a70:
    // 0x355a70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x355a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_355a74:
    // 0x355a74: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x355a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_355a78:
    // 0x355a78: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x355a78u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_355a7c:
    // 0x355a7c: 0x26be0090  addiu       $fp, $s5, 0x90
    ctx->pc = 0x355a7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_355a80:
    // 0x355a80: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x355a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_355a84:
    // 0x355a84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x355a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355a88:
    // 0x355a88: 0x8eb30088  lw          $s3, 0x88($s5)
    ctx->pc = 0x355a88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_355a8c:
    // 0x355a8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x355a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355a90:
    // 0x355a90: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x355a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_355a94:
    // 0x355a94: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x355a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_355a98:
    // 0x355a98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x355a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_355a9c:
    // 0x355a9c: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x355a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_355aa0:
    // 0x355aa0: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x355aa0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_355aa4:
    // 0x355aa4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x355aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_355aa8:
    // 0x355aa8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x355aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_355aac:
    // 0x355aac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x355aacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_355ab0:
    // 0x355ab0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x355ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_355ab4:
    // 0x355ab4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x355ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_355ab8:
    // 0x355ab8: 0x8ea40084  lw          $a0, 0x84($s5)
    ctx->pc = 0x355ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_355abc:
    // 0x355abc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x355abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_355ac0:
    // 0x355ac0: 0xaea40090  sw          $a0, 0x90($s5)
    ctx->pc = 0x355ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 4));
label_355ac4:
    // 0x355ac4: 0x24b60010  addiu       $s6, $a1, 0x10
    ctx->pc = 0x355ac4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_355ac8:
    // 0x355ac8: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x355ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_355acc:
    // 0x355acc: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x355accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_355ad0:
    // 0x355ad0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x355ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_355ad4:
    // 0x355ad4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x355ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_355ad8:
    // 0x355ad8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x355ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_355adc:
    // 0x355adc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x355adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_355ae0:
    // 0x355ae0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x355ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_355ae4:
    // 0x355ae4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x355ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_355ae8:
    // 0x355ae8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x355ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_355aec:
    // 0x355aec: 0xc0d5858  jal         func_356160
label_355af0:
    if (ctx->pc == 0x355AF0u) {
        ctx->pc = 0x355AF0u;
            // 0x355af0: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x355AF4u;
        goto label_355af4;
    }
    ctx->pc = 0x355AECu;
    SET_GPR_U32(ctx, 31, 0x355AF4u);
    ctx->pc = 0x355AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355AECu;
            // 0x355af0: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356160u;
    if (runtime->hasFunction(0x356160u)) {
        auto targetFn = runtime->lookupFunction(0x356160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355AF4u; }
        if (ctx->pc != 0x355AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356160_0x356160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355AF4u; }
        if (ctx->pc != 0x355AF4u) { return; }
    }
    ctx->pc = 0x355AF4u;
label_355af4:
    // 0x355af4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x355af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_355af8:
    // 0x355af8: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x355af8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_355afc:
    // 0x355afc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_355b00:
    if (ctx->pc == 0x355B00u) {
        ctx->pc = 0x355B00u;
            // 0x355b00: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x355B04u;
        goto label_355b04;
    }
    ctx->pc = 0x355AFCu;
    {
        const bool branch_taken_0x355afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x355B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355AFCu;
            // 0x355b00: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355afc) {
            ctx->pc = 0x355AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_355ad0;
        }
    }
    ctx->pc = 0x355B04u;
label_355b04:
    // 0x355b04: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x355b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_355b08:
    // 0x355b08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x355b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_355b0c:
    // 0x355b0c: 0x8ea40084  lw          $a0, 0x84($s5)
    ctx->pc = 0x355b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_355b10:
    // 0x355b10: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x355b10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_355b14:
    // 0x355b14: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x355b14u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_355b18:
    // 0x355b18: 0x1810  mfhi        $v1
    ctx->pc = 0x355b18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_355b1c:
    // 0x355b1c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x355b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_355b20:
    // 0x355b20: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x355b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_355b24:
    // 0x355b24: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_355b28:
    if (ctx->pc == 0x355B28u) {
        ctx->pc = 0x355B28u;
            // 0x355b28: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x355B2Cu;
        goto label_355b2c;
    }
    ctx->pc = 0x355B24u;
    {
        const bool branch_taken_0x355b24 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x355B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355B24u;
            // 0x355b28: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b24) {
            ctx->pc = 0x355B4Cu;
            goto label_355b4c;
        }
    }
    ctx->pc = 0x355B2Cu;
label_355b2c:
    // 0x355b2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x355b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_355b30:
    // 0x355b30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x355b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_355b34:
    // 0x355b34: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x355b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_355b38:
    // 0x355b38: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x355b38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_355b3c:
    // 0x355b3c: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x355b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_355b40:
    // 0x355b40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x355b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355b44:
    // 0x355b44: 0xc055d28  jal         func_1574A0
label_355b48:
    if (ctx->pc == 0x355B48u) {
        ctx->pc = 0x355B48u;
            // 0x355b48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355B4Cu;
        goto label_355b4c;
    }
    ctx->pc = 0x355B44u;
    SET_GPR_U32(ctx, 31, 0x355B4Cu);
    ctx->pc = 0x355B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355B44u;
            // 0x355b48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355B4Cu; }
        if (ctx->pc != 0x355B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355B4Cu; }
        if (ctx->pc != 0x355B4Cu) { return; }
    }
    ctx->pc = 0x355B4Cu;
label_355b4c:
    // 0x355b4c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x355b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_355b50:
    // 0x355b50: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x355b50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_355b54:
    // 0x355b54: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x355b54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_355b58:
    // 0x355b58: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x355b58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_355b5c:
    // 0x355b5c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x355b5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_355b60:
    // 0x355b60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x355b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_355b64:
    // 0x355b64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x355b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_355b68:
    // 0x355b68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x355b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_355b6c:
    // 0x355b6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_355b70:
    // 0x355b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_355b74:
    // 0x355b74: 0x3e00008  jr          $ra
label_355b78:
    if (ctx->pc == 0x355B78u) {
        ctx->pc = 0x355B78u;
            // 0x355b78: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x355B7Cu;
        goto label_355b7c;
    }
    ctx->pc = 0x355B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355B74u;
            // 0x355b78: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355B7Cu;
label_355b7c:
    // 0x355b7c: 0x0  nop
    ctx->pc = 0x355b7cu;
    // NOP
label_355b80:
    // 0x355b80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x355b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_355b84:
    // 0x355b84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x355b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_355b88:
    // 0x355b88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x355b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_355b8c:
    // 0x355b8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x355b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_355b90:
    // 0x355b90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x355b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_355b94:
    // 0x355b94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x355b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_355b98:
    // 0x355b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x355b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_355b9c:
    // 0x355b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_355ba0:
    // 0x355ba0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x355ba0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_355ba4:
    // 0x355ba4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_355ba8:
    if (ctx->pc == 0x355BA8u) {
        ctx->pc = 0x355BA8u;
            // 0x355ba8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355BACu;
        goto label_355bac;
    }
    ctx->pc = 0x355BA4u;
    {
        const bool branch_taken_0x355ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x355BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355BA4u;
            // 0x355ba8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ba4) {
            ctx->pc = 0x355BD8u;
            goto label_355bd8;
        }
    }
    ctx->pc = 0x355BACu;
label_355bac:
    // 0x355bac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x355bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_355bb0:
    // 0x355bb0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_355bb4:
    if (ctx->pc == 0x355BB4u) {
        ctx->pc = 0x355BB4u;
            // 0x355bb4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x355BB8u;
        goto label_355bb8;
    }
    ctx->pc = 0x355BB0u;
    {
        const bool branch_taken_0x355bb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x355bb0) {
            ctx->pc = 0x355BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355BB0u;
            // 0x355bb4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355BCCu;
            goto label_355bcc;
        }
    }
    ctx->pc = 0x355BB8u;
label_355bb8:
    // 0x355bb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x355bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_355bbc:
    // 0x355bbc: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
label_355bc0:
    if (ctx->pc == 0x355BC0u) {
        ctx->pc = 0x355BC4u;
        goto label_355bc4;
    }
    ctx->pc = 0x355BBCu;
    {
        const bool branch_taken_0x355bbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x355bbc) {
            ctx->pc = 0x355C58u;
            goto label_355c58;
        }
    }
    ctx->pc = 0x355BC4u;
label_355bc4:
    // 0x355bc4: 0x10000024  b           . + 4 + (0x24 << 2)
label_355bc8:
    if (ctx->pc == 0x355BC8u) {
        ctx->pc = 0x355BCCu;
        goto label_355bcc;
    }
    ctx->pc = 0x355BC4u;
    {
        const bool branch_taken_0x355bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355bc4) {
            ctx->pc = 0x355C58u;
            goto label_355c58;
        }
    }
    ctx->pc = 0x355BCCu;
label_355bcc:
    // 0x355bcc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x355bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_355bd0:
    // 0x355bd0: 0x320f809  jalr        $t9
label_355bd4:
    if (ctx->pc == 0x355BD4u) {
        ctx->pc = 0x355BD8u;
        goto label_355bd8;
    }
    ctx->pc = 0x355BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x355BD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x355BD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x355BD8u; }
            if (ctx->pc != 0x355BD8u) { return; }
        }
        }
    }
    ctx->pc = 0x355BD8u;
label_355bd8:
    // 0x355bd8: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x355bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_355bdc:
    // 0x355bdc: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_355be0:
    if (ctx->pc == 0x355BE0u) {
        ctx->pc = 0x355BE4u;
        goto label_355be4;
    }
    ctx->pc = 0x355BDCu;
    {
        const bool branch_taken_0x355bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x355bdc) {
            ctx->pc = 0x355C58u;
            goto label_355c58;
        }
    }
    ctx->pc = 0x355BE4u;
label_355be4:
    // 0x355be4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x355be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_355be8:
    // 0x355be8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x355be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_355bec:
    // 0x355bec: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x355becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_355bf0:
    // 0x355bf0: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x355bf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_355bf4:
    // 0x355bf4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_355bf8:
    if (ctx->pc == 0x355BF8u) {
        ctx->pc = 0x355BFCu;
        goto label_355bfc;
    }
    ctx->pc = 0x355BF4u;
    {
        const bool branch_taken_0x355bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x355bf4) {
            ctx->pc = 0x355C58u;
            goto label_355c58;
        }
    }
    ctx->pc = 0x355BFCu;
label_355bfc:
    // 0x355bfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x355bfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355c00:
    // 0x355c00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x355c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355c04:
    // 0x355c04: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x355c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_355c08:
    // 0x355c08: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x355c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_355c0c:
    // 0x355c0c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x355c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_355c10:
    // 0x355c10: 0xc0f4cb0  jal         func_3D32C0
label_355c14:
    if (ctx->pc == 0x355C14u) {
        ctx->pc = 0x355C14u;
            // 0x355c14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355C18u;
        goto label_355c18;
    }
    ctx->pc = 0x355C10u;
    SET_GPR_U32(ctx, 31, 0x355C18u);
    ctx->pc = 0x355C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355C10u;
            // 0x355c14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D32C0u;
    if (runtime->hasFunction(0x3D32C0u)) {
        auto targetFn = runtime->lookupFunction(0x3D32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355C18u; }
        if (ctx->pc != 0x355C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D32C0_0x3d32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355C18u; }
        if (ctx->pc != 0x355C18u) { return; }
    }
    ctx->pc = 0x355C18u;
label_355c18:
    // 0x355c18: 0xc0e3658  jal         func_38D960
label_355c1c:
    if (ctx->pc == 0x355C1Cu) {
        ctx->pc = 0x355C1Cu;
            // 0x355c1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355C20u;
        goto label_355c20;
    }
    ctx->pc = 0x355C18u;
    SET_GPR_U32(ctx, 31, 0x355C20u);
    ctx->pc = 0x355C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355C18u;
            // 0x355c1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355C20u; }
        if (ctx->pc != 0x355C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355C20u; }
        if (ctx->pc != 0x355C20u) { return; }
    }
    ctx->pc = 0x355C20u;
label_355c20:
    // 0x355c20: 0xc0f4ac4  jal         func_3D2B10
label_355c24:
    if (ctx->pc == 0x355C24u) {
        ctx->pc = 0x355C24u;
            // 0x355c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355C28u;
        goto label_355c28;
    }
    ctx->pc = 0x355C20u;
    SET_GPR_U32(ctx, 31, 0x355C28u);
    ctx->pc = 0x355C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355C20u;
            // 0x355c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2B10u;
    if (runtime->hasFunction(0x3D2B10u)) {
        auto targetFn = runtime->lookupFunction(0x3D2B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355C28u; }
        if (ctx->pc != 0x355C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2B10_0x3d2b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355C28u; }
        if (ctx->pc != 0x355C28u) { return; }
    }
    ctx->pc = 0x355C28u;
label_355c28:
    // 0x355c28: 0x8e450270  lw          $a1, 0x270($s2)
    ctx->pc = 0x355c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_355c2c:
    // 0x355c2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x355c2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_355c30:
    // 0x355c30: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x355c30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_355c34:
    // 0x355c34: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x355c34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_355c38:
    // 0x355c38: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x355c38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_355c3c:
    // 0x355c3c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x355c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_355c40:
    // 0x355c40: 0xa4a40064  sh          $a0, 0x64($a1)
    ctx->pc = 0x355c40u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
label_355c44:
    // 0x355c44: 0x8e450274  lw          $a1, 0x274($s2)
    ctx->pc = 0x355c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_355c48:
    // 0x355c48: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x355c48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_355c4c:
    // 0x355c4c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x355c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_355c50:
    // 0x355c50: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_355c54:
    if (ctx->pc == 0x355C54u) {
        ctx->pc = 0x355C54u;
            // 0x355c54: 0xa4a40064  sh          $a0, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x355C58u;
        goto label_355c58;
    }
    ctx->pc = 0x355C50u;
    {
        const bool branch_taken_0x355c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x355C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355C50u;
            // 0x355c54: 0xa4a40064  sh          $a0, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c50) {
            ctx->pc = 0x355C04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_355c04;
        }
    }
    ctx->pc = 0x355C58u;
label_355c58:
    // 0x355c58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x355c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_355c5c:
    // 0x355c5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x355c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_355c60:
    // 0x355c60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x355c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_355c64:
    // 0x355c64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x355c64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_355c68:
    // 0x355c68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_355c6c:
    // 0x355c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_355c70:
    // 0x355c70: 0x3e00008  jr          $ra
label_355c74:
    if (ctx->pc == 0x355C74u) {
        ctx->pc = 0x355C74u;
            // 0x355c74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x355C78u;
        goto label_355c78;
    }
    ctx->pc = 0x355C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355C70u;
            // 0x355c74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355C78u;
label_355c78:
    // 0x355c78: 0x0  nop
    ctx->pc = 0x355c78u;
    // NOP
label_355c7c:
    // 0x355c7c: 0x0  nop
    ctx->pc = 0x355c7cu;
    // NOP
label_355c80:
    // 0x355c80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x355c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_355c84:
    // 0x355c84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x355c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_355c88:
    // 0x355c88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x355c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_355c8c:
    // 0x355c8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x355c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_355c90:
    // 0x355c90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x355c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_355c94:
    // 0x355c94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x355c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_355c98:
    // 0x355c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_355c9c:
    // 0x355c9c: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x355c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_355ca0:
    // 0x355ca0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_355ca4:
    if (ctx->pc == 0x355CA4u) {
        ctx->pc = 0x355CA4u;
            // 0x355ca4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355CA8u;
        goto label_355ca8;
    }
    ctx->pc = 0x355CA0u;
    {
        const bool branch_taken_0x355ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x355CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355CA0u;
            // 0x355ca4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ca0) {
            ctx->pc = 0x355CE0u;
            goto label_355ce0;
        }
    }
    ctx->pc = 0x355CA8u;
label_355ca8:
    // 0x355ca8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x355ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355cac:
    // 0x355cac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x355cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355cb0:
    // 0x355cb0: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x355cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_355cb4:
    // 0x355cb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x355cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_355cb8:
    // 0x355cb8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x355cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_355cbc:
    // 0x355cbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x355cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_355cc0:
    // 0x355cc0: 0xc0f4cc8  jal         func_3D3320
label_355cc4:
    if (ctx->pc == 0x355CC4u) {
        ctx->pc = 0x355CC4u;
            // 0x355cc4: 0xae8000e0  sw          $zero, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x355CC8u;
        goto label_355cc8;
    }
    ctx->pc = 0x355CC0u;
    SET_GPR_U32(ctx, 31, 0x355CC8u);
    ctx->pc = 0x355CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355CC0u;
            // 0x355cc4: 0xae8000e0  sw          $zero, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D3320u;
    if (runtime->hasFunction(0x3D3320u)) {
        auto targetFn = runtime->lookupFunction(0x3D3320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355CC8u; }
        if (ctx->pc != 0x355CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D3320_0x3d3320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355CC8u; }
        if (ctx->pc != 0x355CC8u) { return; }
    }
    ctx->pc = 0x355CC8u;
label_355cc8:
    // 0x355cc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x355cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_355ccc:
    // 0x355ccc: 0xae80020c  sw          $zero, 0x20C($s4)
    ctx->pc = 0x355cccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 524), GPR_U32(ctx, 0));
label_355cd0:
    // 0x355cd0: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x355cd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_355cd4:
    // 0x355cd4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_355cd8:
    if (ctx->pc == 0x355CD8u) {
        ctx->pc = 0x355CD8u;
            // 0x355cd8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x355CDCu;
        goto label_355cdc;
    }
    ctx->pc = 0x355CD4u;
    {
        const bool branch_taken_0x355cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x355CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355CD4u;
            // 0x355cd8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355cd4) {
            ctx->pc = 0x355CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_355cb0;
        }
    }
    ctx->pc = 0x355CDCu;
label_355cdc:
    // 0x355cdc: 0x0  nop
    ctx->pc = 0x355cdcu;
    // NOP
label_355ce0:
    // 0x355ce0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x355ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_355ce4:
    // 0x355ce4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x355ce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_355ce8:
    // 0x355ce8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x355ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_355cec:
    // 0x355cec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x355cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_355cf0:
    // 0x355cf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_355cf4:
    // 0x355cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_355cf8:
    // 0x355cf8: 0x3e00008  jr          $ra
label_355cfc:
    if (ctx->pc == 0x355CFCu) {
        ctx->pc = 0x355CFCu;
            // 0x355cfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x355D00u;
        goto label_fallthrough_0x355cf8;
    }
    ctx->pc = 0x355CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355CF8u;
            // 0x355cfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x355cf8:
    ctx->pc = 0x355D00u;
}
