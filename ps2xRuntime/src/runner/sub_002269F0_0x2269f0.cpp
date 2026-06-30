#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002269F0
// Address: 0x2269f0 - 0x226ee0
void sub_002269F0_0x2269f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002269F0_0x2269f0");
#endif

    switch (ctx->pc) {
        case 0x2269f0u: goto label_2269f0;
        case 0x2269f4u: goto label_2269f4;
        case 0x2269f8u: goto label_2269f8;
        case 0x2269fcu: goto label_2269fc;
        case 0x226a00u: goto label_226a00;
        case 0x226a04u: goto label_226a04;
        case 0x226a08u: goto label_226a08;
        case 0x226a0cu: goto label_226a0c;
        case 0x226a10u: goto label_226a10;
        case 0x226a14u: goto label_226a14;
        case 0x226a18u: goto label_226a18;
        case 0x226a1cu: goto label_226a1c;
        case 0x226a20u: goto label_226a20;
        case 0x226a24u: goto label_226a24;
        case 0x226a28u: goto label_226a28;
        case 0x226a2cu: goto label_226a2c;
        case 0x226a30u: goto label_226a30;
        case 0x226a34u: goto label_226a34;
        case 0x226a38u: goto label_226a38;
        case 0x226a3cu: goto label_226a3c;
        case 0x226a40u: goto label_226a40;
        case 0x226a44u: goto label_226a44;
        case 0x226a48u: goto label_226a48;
        case 0x226a4cu: goto label_226a4c;
        case 0x226a50u: goto label_226a50;
        case 0x226a54u: goto label_226a54;
        case 0x226a58u: goto label_226a58;
        case 0x226a5cu: goto label_226a5c;
        case 0x226a60u: goto label_226a60;
        case 0x226a64u: goto label_226a64;
        case 0x226a68u: goto label_226a68;
        case 0x226a6cu: goto label_226a6c;
        case 0x226a70u: goto label_226a70;
        case 0x226a74u: goto label_226a74;
        case 0x226a78u: goto label_226a78;
        case 0x226a7cu: goto label_226a7c;
        case 0x226a80u: goto label_226a80;
        case 0x226a84u: goto label_226a84;
        case 0x226a88u: goto label_226a88;
        case 0x226a8cu: goto label_226a8c;
        case 0x226a90u: goto label_226a90;
        case 0x226a94u: goto label_226a94;
        case 0x226a98u: goto label_226a98;
        case 0x226a9cu: goto label_226a9c;
        case 0x226aa0u: goto label_226aa0;
        case 0x226aa4u: goto label_226aa4;
        case 0x226aa8u: goto label_226aa8;
        case 0x226aacu: goto label_226aac;
        case 0x226ab0u: goto label_226ab0;
        case 0x226ab4u: goto label_226ab4;
        case 0x226ab8u: goto label_226ab8;
        case 0x226abcu: goto label_226abc;
        case 0x226ac0u: goto label_226ac0;
        case 0x226ac4u: goto label_226ac4;
        case 0x226ac8u: goto label_226ac8;
        case 0x226accu: goto label_226acc;
        case 0x226ad0u: goto label_226ad0;
        case 0x226ad4u: goto label_226ad4;
        case 0x226ad8u: goto label_226ad8;
        case 0x226adcu: goto label_226adc;
        case 0x226ae0u: goto label_226ae0;
        case 0x226ae4u: goto label_226ae4;
        case 0x226ae8u: goto label_226ae8;
        case 0x226aecu: goto label_226aec;
        case 0x226af0u: goto label_226af0;
        case 0x226af4u: goto label_226af4;
        case 0x226af8u: goto label_226af8;
        case 0x226afcu: goto label_226afc;
        case 0x226b00u: goto label_226b00;
        case 0x226b04u: goto label_226b04;
        case 0x226b08u: goto label_226b08;
        case 0x226b0cu: goto label_226b0c;
        case 0x226b10u: goto label_226b10;
        case 0x226b14u: goto label_226b14;
        case 0x226b18u: goto label_226b18;
        case 0x226b1cu: goto label_226b1c;
        case 0x226b20u: goto label_226b20;
        case 0x226b24u: goto label_226b24;
        case 0x226b28u: goto label_226b28;
        case 0x226b2cu: goto label_226b2c;
        case 0x226b30u: goto label_226b30;
        case 0x226b34u: goto label_226b34;
        case 0x226b38u: goto label_226b38;
        case 0x226b3cu: goto label_226b3c;
        case 0x226b40u: goto label_226b40;
        case 0x226b44u: goto label_226b44;
        case 0x226b48u: goto label_226b48;
        case 0x226b4cu: goto label_226b4c;
        case 0x226b50u: goto label_226b50;
        case 0x226b54u: goto label_226b54;
        case 0x226b58u: goto label_226b58;
        case 0x226b5cu: goto label_226b5c;
        case 0x226b60u: goto label_226b60;
        case 0x226b64u: goto label_226b64;
        case 0x226b68u: goto label_226b68;
        case 0x226b6cu: goto label_226b6c;
        case 0x226b70u: goto label_226b70;
        case 0x226b74u: goto label_226b74;
        case 0x226b78u: goto label_226b78;
        case 0x226b7cu: goto label_226b7c;
        case 0x226b80u: goto label_226b80;
        case 0x226b84u: goto label_226b84;
        case 0x226b88u: goto label_226b88;
        case 0x226b8cu: goto label_226b8c;
        case 0x226b90u: goto label_226b90;
        case 0x226b94u: goto label_226b94;
        case 0x226b98u: goto label_226b98;
        case 0x226b9cu: goto label_226b9c;
        case 0x226ba0u: goto label_226ba0;
        case 0x226ba4u: goto label_226ba4;
        case 0x226ba8u: goto label_226ba8;
        case 0x226bacu: goto label_226bac;
        case 0x226bb0u: goto label_226bb0;
        case 0x226bb4u: goto label_226bb4;
        case 0x226bb8u: goto label_226bb8;
        case 0x226bbcu: goto label_226bbc;
        case 0x226bc0u: goto label_226bc0;
        case 0x226bc4u: goto label_226bc4;
        case 0x226bc8u: goto label_226bc8;
        case 0x226bccu: goto label_226bcc;
        case 0x226bd0u: goto label_226bd0;
        case 0x226bd4u: goto label_226bd4;
        case 0x226bd8u: goto label_226bd8;
        case 0x226bdcu: goto label_226bdc;
        case 0x226be0u: goto label_226be0;
        case 0x226be4u: goto label_226be4;
        case 0x226be8u: goto label_226be8;
        case 0x226becu: goto label_226bec;
        case 0x226bf0u: goto label_226bf0;
        case 0x226bf4u: goto label_226bf4;
        case 0x226bf8u: goto label_226bf8;
        case 0x226bfcu: goto label_226bfc;
        case 0x226c00u: goto label_226c00;
        case 0x226c04u: goto label_226c04;
        case 0x226c08u: goto label_226c08;
        case 0x226c0cu: goto label_226c0c;
        case 0x226c10u: goto label_226c10;
        case 0x226c14u: goto label_226c14;
        case 0x226c18u: goto label_226c18;
        case 0x226c1cu: goto label_226c1c;
        case 0x226c20u: goto label_226c20;
        case 0x226c24u: goto label_226c24;
        case 0x226c28u: goto label_226c28;
        case 0x226c2cu: goto label_226c2c;
        case 0x226c30u: goto label_226c30;
        case 0x226c34u: goto label_226c34;
        case 0x226c38u: goto label_226c38;
        case 0x226c3cu: goto label_226c3c;
        case 0x226c40u: goto label_226c40;
        case 0x226c44u: goto label_226c44;
        case 0x226c48u: goto label_226c48;
        case 0x226c4cu: goto label_226c4c;
        case 0x226c50u: goto label_226c50;
        case 0x226c54u: goto label_226c54;
        case 0x226c58u: goto label_226c58;
        case 0x226c5cu: goto label_226c5c;
        case 0x226c60u: goto label_226c60;
        case 0x226c64u: goto label_226c64;
        case 0x226c68u: goto label_226c68;
        case 0x226c6cu: goto label_226c6c;
        case 0x226c70u: goto label_226c70;
        case 0x226c74u: goto label_226c74;
        case 0x226c78u: goto label_226c78;
        case 0x226c7cu: goto label_226c7c;
        case 0x226c80u: goto label_226c80;
        case 0x226c84u: goto label_226c84;
        case 0x226c88u: goto label_226c88;
        case 0x226c8cu: goto label_226c8c;
        case 0x226c90u: goto label_226c90;
        case 0x226c94u: goto label_226c94;
        case 0x226c98u: goto label_226c98;
        case 0x226c9cu: goto label_226c9c;
        case 0x226ca0u: goto label_226ca0;
        case 0x226ca4u: goto label_226ca4;
        case 0x226ca8u: goto label_226ca8;
        case 0x226cacu: goto label_226cac;
        case 0x226cb0u: goto label_226cb0;
        case 0x226cb4u: goto label_226cb4;
        case 0x226cb8u: goto label_226cb8;
        case 0x226cbcu: goto label_226cbc;
        case 0x226cc0u: goto label_226cc0;
        case 0x226cc4u: goto label_226cc4;
        case 0x226cc8u: goto label_226cc8;
        case 0x226cccu: goto label_226ccc;
        case 0x226cd0u: goto label_226cd0;
        case 0x226cd4u: goto label_226cd4;
        case 0x226cd8u: goto label_226cd8;
        case 0x226cdcu: goto label_226cdc;
        case 0x226ce0u: goto label_226ce0;
        case 0x226ce4u: goto label_226ce4;
        case 0x226ce8u: goto label_226ce8;
        case 0x226cecu: goto label_226cec;
        case 0x226cf0u: goto label_226cf0;
        case 0x226cf4u: goto label_226cf4;
        case 0x226cf8u: goto label_226cf8;
        case 0x226cfcu: goto label_226cfc;
        case 0x226d00u: goto label_226d00;
        case 0x226d04u: goto label_226d04;
        case 0x226d08u: goto label_226d08;
        case 0x226d0cu: goto label_226d0c;
        case 0x226d10u: goto label_226d10;
        case 0x226d14u: goto label_226d14;
        case 0x226d18u: goto label_226d18;
        case 0x226d1cu: goto label_226d1c;
        case 0x226d20u: goto label_226d20;
        case 0x226d24u: goto label_226d24;
        case 0x226d28u: goto label_226d28;
        case 0x226d2cu: goto label_226d2c;
        case 0x226d30u: goto label_226d30;
        case 0x226d34u: goto label_226d34;
        case 0x226d38u: goto label_226d38;
        case 0x226d3cu: goto label_226d3c;
        case 0x226d40u: goto label_226d40;
        case 0x226d44u: goto label_226d44;
        case 0x226d48u: goto label_226d48;
        case 0x226d4cu: goto label_226d4c;
        case 0x226d50u: goto label_226d50;
        case 0x226d54u: goto label_226d54;
        case 0x226d58u: goto label_226d58;
        case 0x226d5cu: goto label_226d5c;
        case 0x226d60u: goto label_226d60;
        case 0x226d64u: goto label_226d64;
        case 0x226d68u: goto label_226d68;
        case 0x226d6cu: goto label_226d6c;
        case 0x226d70u: goto label_226d70;
        case 0x226d74u: goto label_226d74;
        case 0x226d78u: goto label_226d78;
        case 0x226d7cu: goto label_226d7c;
        case 0x226d80u: goto label_226d80;
        case 0x226d84u: goto label_226d84;
        case 0x226d88u: goto label_226d88;
        case 0x226d8cu: goto label_226d8c;
        case 0x226d90u: goto label_226d90;
        case 0x226d94u: goto label_226d94;
        case 0x226d98u: goto label_226d98;
        case 0x226d9cu: goto label_226d9c;
        case 0x226da0u: goto label_226da0;
        case 0x226da4u: goto label_226da4;
        case 0x226da8u: goto label_226da8;
        case 0x226dacu: goto label_226dac;
        case 0x226db0u: goto label_226db0;
        case 0x226db4u: goto label_226db4;
        case 0x226db8u: goto label_226db8;
        case 0x226dbcu: goto label_226dbc;
        case 0x226dc0u: goto label_226dc0;
        case 0x226dc4u: goto label_226dc4;
        case 0x226dc8u: goto label_226dc8;
        case 0x226dccu: goto label_226dcc;
        case 0x226dd0u: goto label_226dd0;
        case 0x226dd4u: goto label_226dd4;
        case 0x226dd8u: goto label_226dd8;
        case 0x226ddcu: goto label_226ddc;
        case 0x226de0u: goto label_226de0;
        case 0x226de4u: goto label_226de4;
        case 0x226de8u: goto label_226de8;
        case 0x226decu: goto label_226dec;
        case 0x226df0u: goto label_226df0;
        case 0x226df4u: goto label_226df4;
        case 0x226df8u: goto label_226df8;
        case 0x226dfcu: goto label_226dfc;
        case 0x226e00u: goto label_226e00;
        case 0x226e04u: goto label_226e04;
        case 0x226e08u: goto label_226e08;
        case 0x226e0cu: goto label_226e0c;
        case 0x226e10u: goto label_226e10;
        case 0x226e14u: goto label_226e14;
        case 0x226e18u: goto label_226e18;
        case 0x226e1cu: goto label_226e1c;
        case 0x226e20u: goto label_226e20;
        case 0x226e24u: goto label_226e24;
        case 0x226e28u: goto label_226e28;
        case 0x226e2cu: goto label_226e2c;
        case 0x226e30u: goto label_226e30;
        case 0x226e34u: goto label_226e34;
        case 0x226e38u: goto label_226e38;
        case 0x226e3cu: goto label_226e3c;
        case 0x226e40u: goto label_226e40;
        case 0x226e44u: goto label_226e44;
        case 0x226e48u: goto label_226e48;
        case 0x226e4cu: goto label_226e4c;
        case 0x226e50u: goto label_226e50;
        case 0x226e54u: goto label_226e54;
        case 0x226e58u: goto label_226e58;
        case 0x226e5cu: goto label_226e5c;
        case 0x226e60u: goto label_226e60;
        case 0x226e64u: goto label_226e64;
        case 0x226e68u: goto label_226e68;
        case 0x226e6cu: goto label_226e6c;
        case 0x226e70u: goto label_226e70;
        case 0x226e74u: goto label_226e74;
        case 0x226e78u: goto label_226e78;
        case 0x226e7cu: goto label_226e7c;
        case 0x226e80u: goto label_226e80;
        case 0x226e84u: goto label_226e84;
        case 0x226e88u: goto label_226e88;
        case 0x226e8cu: goto label_226e8c;
        case 0x226e90u: goto label_226e90;
        case 0x226e94u: goto label_226e94;
        case 0x226e98u: goto label_226e98;
        case 0x226e9cu: goto label_226e9c;
        case 0x226ea0u: goto label_226ea0;
        case 0x226ea4u: goto label_226ea4;
        case 0x226ea8u: goto label_226ea8;
        case 0x226eacu: goto label_226eac;
        case 0x226eb0u: goto label_226eb0;
        case 0x226eb4u: goto label_226eb4;
        case 0x226eb8u: goto label_226eb8;
        case 0x226ebcu: goto label_226ebc;
        case 0x226ec0u: goto label_226ec0;
        case 0x226ec4u: goto label_226ec4;
        case 0x226ec8u: goto label_226ec8;
        case 0x226eccu: goto label_226ecc;
        case 0x226ed0u: goto label_226ed0;
        case 0x226ed4u: goto label_226ed4;
        case 0x226ed8u: goto label_226ed8;
        case 0x226edcu: goto label_226edc;
        default: break;
    }

    ctx->pc = 0x2269f0u;

label_2269f0:
    // 0x2269f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2269f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2269f4:
    // 0x2269f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2269f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2269f8:
    // 0x2269f8: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2269f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_2269fc:
    // 0x2269fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_226a00:
    if (ctx->pc == 0x226A00u) {
        ctx->pc = 0x226A04u;
        goto label_226a04;
    }
    ctx->pc = 0x2269FCu;
    {
        const bool branch_taken_0x2269fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2269fc) {
            ctx->pc = 0x226A14u;
            goto label_226a14;
        }
    }
    ctx->pc = 0x226A04u;
label_226a04:
    // 0x226a04: 0xc089638  jal         func_2258E0
label_226a08:
    if (ctx->pc == 0x226A08u) {
        ctx->pc = 0x226A08u;
            // 0x226a08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x226A0Cu;
        goto label_226a0c;
    }
    ctx->pc = 0x226A04u;
    SET_GPR_U32(ctx, 31, 0x226A0Cu);
    ctx->pc = 0x226A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226A04u;
            // 0x226a08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A0Cu; }
        if (ctx->pc != 0x226A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A0Cu; }
        if (ctx->pc != 0x226A0Cu) { return; }
    }
    ctx->pc = 0x226A0Cu;
label_226a0c:
    // 0x226a0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_226a10:
    if (ctx->pc == 0x226A10u) {
        ctx->pc = 0x226A10u;
            // 0x226a10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x226A14u;
        goto label_226a14;
    }
    ctx->pc = 0x226A0Cu;
    {
        const bool branch_taken_0x226a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226A0Cu;
            // 0x226a10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a0c) {
            ctx->pc = 0x226A20u;
            goto label_226a20;
        }
    }
    ctx->pc = 0x226A14u;
label_226a14:
    // 0x226a14: 0xc089638  jal         func_2258E0
label_226a18:
    if (ctx->pc == 0x226A18u) {
        ctx->pc = 0x226A1Cu;
        goto label_226a1c;
    }
    ctx->pc = 0x226A14u;
    SET_GPR_U32(ctx, 31, 0x226A1Cu);
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A1Cu; }
        if (ctx->pc != 0x226A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A1Cu; }
        if (ctx->pc != 0x226A1Cu) { return; }
    }
    ctx->pc = 0x226A1Cu;
label_226a1c:
    // 0x226a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226a20:
    // 0x226a20: 0x3e00008  jr          $ra
label_226a24:
    if (ctx->pc == 0x226A24u) {
        ctx->pc = 0x226A24u;
            // 0x226a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x226A28u;
        goto label_226a28;
    }
    ctx->pc = 0x226A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226A20u;
            // 0x226a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226A28u;
label_226a28:
    // 0x226a28: 0x0  nop
    ctx->pc = 0x226a28u;
    // NOP
label_226a2c:
    // 0x226a2c: 0x0  nop
    ctx->pc = 0x226a2cu;
    // NOP
label_226a30:
    // 0x226a30: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x226a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226a34:
    // 0x226a34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x226a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_226a38:
    // 0x226a38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x226a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_226a3c:
    // 0x226a3c: 0x0  nop
    ctx->pc = 0x226a3cu;
    // NOP
label_226a40:
    // 0x226a40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x226a40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_226a44:
    // 0x226a44: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x226a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_226a48:
    // 0x226a48: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x226a48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_226a4c:
    // 0x226a4c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x226a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_226a50:
    // 0x226a50: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x226a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_226a54:
    // 0x226a54: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x226a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_226a58:
    // 0x226a58: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x226a58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_226a5c:
    // 0x226a5c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x226a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_226a60:
    // 0x226a60: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x226a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_226a64:
    // 0x226a64: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x226a64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_226a68:
    // 0x226a68: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x226a68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_226a6c:
    // 0x226a6c: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x226a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_226a70:
    // 0x226a70: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x226a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_226a74:
    // 0x226a74: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x226a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_226a78:
    // 0x226a78: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x226a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_226a7c:
    // 0x226a7c: 0x3e00008  jr          $ra
label_226a80:
    if (ctx->pc == 0x226A80u) {
        ctx->pc = 0x226A80u;
            // 0x226a80: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->pc = 0x226A84u;
        goto label_226a84;
    }
    ctx->pc = 0x226A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226A7Cu;
            // 0x226a80: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226A84u;
label_226a84:
    // 0x226a84: 0x0  nop
    ctx->pc = 0x226a84u;
    // NOP
label_226a88:
    // 0x226a88: 0x0  nop
    ctx->pc = 0x226a88u;
    // NOP
label_226a8c:
    // 0x226a8c: 0x0  nop
    ctx->pc = 0x226a8cu;
    // NOP
label_226a90:
    // 0x226a90: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x226a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226a94:
    // 0x226a94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x226a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_226a98:
    // 0x226a98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x226a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_226a9c:
    // 0x226a9c: 0x0  nop
    ctx->pc = 0x226a9cu;
    // NOP
label_226aa0:
    // 0x226aa0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x226aa0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_226aa4:
    // 0x226aa4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x226aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_226aa8:
    // 0x226aa8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x226aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_226aac:
    // 0x226aac: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x226aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_226ab0:
    // 0x226ab0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x226ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_226ab4:
    // 0x226ab4: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x226ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_226ab8:
    // 0x226ab8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x226ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_226abc:
    // 0x226abc: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x226abcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_226ac0:
    // 0x226ac0: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x226ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_226ac4:
    // 0x226ac4: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x226ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_226ac8:
    // 0x226ac8: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x226ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_226acc:
    // 0x226acc: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x226accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_226ad0:
    // 0x226ad0: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x226ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_226ad4:
    // 0x226ad4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x226ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_226ad8:
    // 0x226ad8: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x226ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_226adc:
    // 0x226adc: 0x3e00008  jr          $ra
label_226ae0:
    if (ctx->pc == 0x226AE0u) {
        ctx->pc = 0x226AE0u;
            // 0x226ae0: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->pc = 0x226AE4u;
        goto label_226ae4;
    }
    ctx->pc = 0x226ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226ADCu;
            // 0x226ae0: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226AE4u;
label_226ae4:
    // 0x226ae4: 0x0  nop
    ctx->pc = 0x226ae4u;
    // NOP
label_226ae8:
    // 0x226ae8: 0x0  nop
    ctx->pc = 0x226ae8u;
    // NOP
label_226aec:
    // 0x226aec: 0x0  nop
    ctx->pc = 0x226aecu;
    // NOP
label_226af0:
    // 0x226af0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x226af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226af4:
    // 0x226af4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x226af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226af8:
    // 0x226af8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_226afc:
    // 0x226afc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_226b00:
    if (ctx->pc == 0x226B00u) {
        ctx->pc = 0x226B00u;
            // 0x226b00: 0xc4a20028  lwc1        $f2, 0x28($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x226B04u;
        goto label_226b04;
    }
    ctx->pc = 0x226AFCu;
    {
        const bool branch_taken_0x226afc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x226B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226AFCu;
            // 0x226b00: 0xc4a20028  lwc1        $f2, 0x28($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x226afc) {
            ctx->pc = 0x226B0Cu;
            goto label_226b0c;
        }
    }
    ctx->pc = 0x226B04u;
label_226b04:
    // 0x226b04: 0x10000002  b           . + 4 + (0x2 << 2)
label_226b08:
    if (ctx->pc == 0x226B08u) {
        ctx->pc = 0x226B0Cu;
        goto label_226b0c;
    }
    ctx->pc = 0x226B04u;
    {
        const bool branch_taken_0x226b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b04) {
            ctx->pc = 0x226B10u;
            goto label_226b10;
        }
    }
    ctx->pc = 0x226B0Cu;
label_226b0c:
    // 0x226b0c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x226b0cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_226b10:
    // 0x226b10: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x226b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_226b14:
    // 0x226b14: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_226b18:
    if (ctx->pc == 0x226B18u) {
        ctx->pc = 0x226B18u;
            // 0x226b18: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x226B1Cu;
        goto label_226b1c;
    }
    ctx->pc = 0x226B14u;
    {
        const bool branch_taken_0x226b14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226b14) {
            ctx->pc = 0x226B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226B14u;
            // 0x226b18: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x226B1Cu;
            goto label_226b1c;
        }
    }
    ctx->pc = 0x226B1Cu;
label_226b1c:
    // 0x226b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_226b20:
    // 0x226b20: 0x0  nop
    ctx->pc = 0x226b20u;
    // NOP
label_226b24:
    // 0x226b24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_226b28:
    // 0x226b28: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_226b2c:
    if (ctx->pc == 0x226B2Cu) {
        ctx->pc = 0x226B30u;
        goto label_226b30;
    }
    ctx->pc = 0x226B28u;
    {
        const bool branch_taken_0x226b28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226b28) {
            ctx->pc = 0x226B4Cu;
            goto label_226b4c;
        }
    }
    ctx->pc = 0x226B30u;
label_226b30:
    // 0x226b30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x226b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_226b34:
    // 0x226b34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_226b38:
    // 0x226b38: 0x0  nop
    ctx->pc = 0x226b38u;
    // NOP
label_226b3c:
    // 0x226b3c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x226b3cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_226b40:
    // 0x226b40: 0x0  nop
    ctx->pc = 0x226b40u;
    // NOP
label_226b44:
    // 0x226b44: 0x0  nop
    ctx->pc = 0x226b44u;
    // NOP
label_226b48:
    // 0x226b48: 0x0  nop
    ctx->pc = 0x226b48u;
    // NOP
label_226b4c:
    // 0x226b4c: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x226b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_226b50:
    // 0x226b50: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x226b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_226b54:
    // 0x226b54: 0x3e00008  jr          $ra
label_226b58:
    if (ctx->pc == 0x226B58u) {
        ctx->pc = 0x226B58u;
            // 0x226b58: 0xe48000d8  swc1        $f0, 0xD8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
        ctx->pc = 0x226B5Cu;
        goto label_226b5c;
    }
    ctx->pc = 0x226B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226B54u;
            // 0x226b58: 0xe48000d8  swc1        $f0, 0xD8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226B5Cu;
label_226b5c:
    // 0x226b5c: 0x0  nop
    ctx->pc = 0x226b5cu;
    // NOP
label_226b60:
    // 0x226b60: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x226b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226b64:
    // 0x226b64: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x226b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226b68:
    // 0x226b68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x226b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_226b6c:
    // 0x226b6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_226b70:
    if (ctx->pc == 0x226B70u) {
        ctx->pc = 0x226B70u;
            // 0x226b70: 0xc4a20028  lwc1        $f2, 0x28($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x226B74u;
        goto label_226b74;
    }
    ctx->pc = 0x226B6Cu;
    {
        const bool branch_taken_0x226b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x226B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226B6Cu;
            // 0x226b70: 0xc4a20028  lwc1        $f2, 0x28($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b6c) {
            ctx->pc = 0x226B7Cu;
            goto label_226b7c;
        }
    }
    ctx->pc = 0x226B74u;
label_226b74:
    // 0x226b74: 0x10000002  b           . + 4 + (0x2 << 2)
label_226b78:
    if (ctx->pc == 0x226B78u) {
        ctx->pc = 0x226B7Cu;
        goto label_226b7c;
    }
    ctx->pc = 0x226B74u;
    {
        const bool branch_taken_0x226b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b74) {
            ctx->pc = 0x226B80u;
            goto label_226b80;
        }
    }
    ctx->pc = 0x226B7Cu;
label_226b7c:
    // 0x226b7c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x226b7cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_226b80:
    // 0x226b80: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x226b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_226b84:
    // 0x226b84: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_226b88:
    if (ctx->pc == 0x226B88u) {
        ctx->pc = 0x226B88u;
            // 0x226b88: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x226B8Cu;
        goto label_226b8c;
    }
    ctx->pc = 0x226B84u;
    {
        const bool branch_taken_0x226b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226b84) {
            ctx->pc = 0x226B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226B84u;
            // 0x226b88: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x226B8Cu;
            goto label_226b8c;
        }
    }
    ctx->pc = 0x226B8Cu;
label_226b8c:
    // 0x226b8c: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x226b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_226b90:
    // 0x226b90: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x226b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_226b94:
    // 0x226b94: 0x3e00008  jr          $ra
label_226b98:
    if (ctx->pc == 0x226B98u) {
        ctx->pc = 0x226B98u;
            // 0x226b98: 0xe48000d8  swc1        $f0, 0xD8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
        ctx->pc = 0x226B9Cu;
        goto label_226b9c;
    }
    ctx->pc = 0x226B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226B94u;
            // 0x226b98: 0xe48000d8  swc1        $f0, 0xD8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226B9Cu;
label_226b9c:
    // 0x226b9c: 0x0  nop
    ctx->pc = 0x226b9cu;
    // NOP
label_226ba0:
    // 0x226ba0: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x226ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226ba4:
    // 0x226ba4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x226ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_226ba8:
    // 0x226ba8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x226ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_226bac:
    // 0x226bac: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x226bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_226bb0:
    // 0x226bb0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x226bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_226bb4:
    // 0x226bb4: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x226bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_226bb8:
    // 0x226bb8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x226bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_226bbc:
    // 0x226bbc: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x226bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_226bc0:
    // 0x226bc0: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x226bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_226bc4:
    // 0x226bc4: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x226bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_226bc8:
    // 0x226bc8: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x226bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_226bcc:
    // 0x226bcc: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x226bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_226bd0:
    // 0x226bd0: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x226bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_226bd4:
    // 0x226bd4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x226bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_226bd8:
    // 0x226bd8: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x226bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_226bdc:
    // 0x226bdc: 0x3e00008  jr          $ra
label_226be0:
    if (ctx->pc == 0x226BE0u) {
        ctx->pc = 0x226BE0u;
            // 0x226be0: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->pc = 0x226BE4u;
        goto label_226be4;
    }
    ctx->pc = 0x226BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226BDCu;
            // 0x226be0: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226BE4u;
label_226be4:
    // 0x226be4: 0x0  nop
    ctx->pc = 0x226be4u;
    // NOP
label_226be8:
    // 0x226be8: 0x0  nop
    ctx->pc = 0x226be8u;
    // NOP
label_226bec:
    // 0x226bec: 0x0  nop
    ctx->pc = 0x226becu;
    // NOP
label_226bf0:
    // 0x226bf0: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x226bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226bf4:
    // 0x226bf4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x226bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_226bf8:
    // 0x226bf8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x226bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_226bfc:
    // 0x226bfc: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x226bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_226c00:
    // 0x226c00: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x226c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_226c04:
    // 0x226c04: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x226c04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_226c08:
    // 0x226c08: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x226c08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_226c0c:
    // 0x226c0c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x226c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_226c10:
    // 0x226c10: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x226c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_226c14:
    // 0x226c14: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x226c14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_226c18:
    // 0x226c18: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x226c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_226c1c:
    // 0x226c1c: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x226c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_226c20:
    // 0x226c20: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x226c20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_226c24:
    // 0x226c24: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x226c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_226c28:
    // 0x226c28: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x226c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_226c2c:
    // 0x226c2c: 0x3e00008  jr          $ra
label_226c30:
    if (ctx->pc == 0x226C30u) {
        ctx->pc = 0x226C30u;
            // 0x226c30: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->pc = 0x226C34u;
        goto label_226c34;
    }
    ctx->pc = 0x226C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226C2Cu;
            // 0x226c30: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226C34u;
label_226c34:
    // 0x226c34: 0x0  nop
    ctx->pc = 0x226c34u;
    // NOP
label_226c38:
    // 0x226c38: 0x0  nop
    ctx->pc = 0x226c38u;
    // NOP
label_226c3c:
    // 0x226c3c: 0x0  nop
    ctx->pc = 0x226c3cu;
    // NOP
label_226c40:
    // 0x226c40: 0xc48100e0  lwc1        $f1, 0xE0($a0)
    ctx->pc = 0x226c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226c44:
    // 0x226c44: 0xc48300dc  lwc1        $f3, 0xDC($a0)
    ctx->pc = 0x226c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_226c48:
    // 0x226c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_226c4c:
    // 0x226c4c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x226c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226c50:
    // 0x226c50: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226c50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226c54:
    // 0x226c54: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x226c54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_226c58:
    // 0x226c58: 0xe48100e0  swc1        $f1, 0xE0($a0)
    ctx->pc = 0x226c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
label_226c5c:
    // 0x226c5c: 0xc48100e4  lwc1        $f1, 0xE4($a0)
    ctx->pc = 0x226c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226c60:
    // 0x226c60: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x226c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226c64:
    // 0x226c64: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226c64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226c68:
    // 0x226c68: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x226c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_226c6c:
    // 0x226c6c: 0xe48100e4  swc1        $f1, 0xE4($a0)
    ctx->pc = 0x226c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
label_226c70:
    // 0x226c70: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x226c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226c74:
    // 0x226c74: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x226c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226c78:
    // 0x226c78: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226c78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226c7c:
    // 0x226c7c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x226c7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_226c80:
    // 0x226c80: 0xe48100e8  swc1        $f1, 0xE8($a0)
    ctx->pc = 0x226c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
label_226c84:
    // 0x226c84: 0xc48100ec  lwc1        $f1, 0xEC($a0)
    ctx->pc = 0x226c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226c88:
    // 0x226c88: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x226c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226c8c:
    // 0x226c8c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226c8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226c90:
    // 0x226c90: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x226c90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_226c94:
    // 0x226c94: 0xe48100ec  swc1        $f1, 0xEC($a0)
    ctx->pc = 0x226c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
label_226c98:
    // 0x226c98: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x226c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_226c9c:
    // 0x226c9c: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x226c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226ca0:
    // 0x226ca0: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x226ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_226ca4:
    // 0x226ca4: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x226ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226ca8:
    // 0x226ca8: 0x46011a41  sub.s       $f9, $f3, $f1
    ctx->pc = 0x226ca8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_226cac:
    // 0x226cac: 0xc4830064  lwc1        $f3, 0x64($a0)
    ctx->pc = 0x226cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_226cb0:
    // 0x226cb0: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x226cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226cb4:
    // 0x226cb4: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x226cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_226cb8:
    // 0x226cb8: 0x46032201  sub.s       $f8, $f4, $f3
    ctx->pc = 0x226cb8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_226cbc:
    // 0x226cbc: 0x460111c1  sub.s       $f7, $f2, $f1
    ctx->pc = 0x226cbcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_226cc0:
    // 0x226cc0: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x226cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_226cc4:
    // 0x226cc4: 0x4606401a  mula.s      $f8, $f6
    ctx->pc = 0x226cc4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_226cc8:
    // 0x226cc8: 0xc48100f0  lwc1        $f1, 0xF0($a0)
    ctx->pc = 0x226cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226ccc:
    // 0x226ccc: 0x460438dd  msub.s      $f3, $f7, $f4
    ctx->pc = 0x226cccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_226cd0:
    // 0x226cd0: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x226cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226cd4:
    // 0x226cd4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226cd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226cd8:
    // 0x226cd8: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x226cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_226cdc:
    // 0x226cdc: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x226cdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_226ce0:
    // 0x226ce0: 0xe48100f0  swc1        $f1, 0xF0($a0)
    ctx->pc = 0x226ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_226ce4:
    // 0x226ce4: 0x4605381a  mula.s      $f7, $f5
    ctx->pc = 0x226ce4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_226ce8:
    // 0x226ce8: 0xc48100f4  lwc1        $f1, 0xF4($a0)
    ctx->pc = 0x226ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226cec:
    // 0x226cec: 0x460648dd  msub.s      $f3, $f9, $f6
    ctx->pc = 0x226cecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[6]));
label_226cf0:
    // 0x226cf0: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x226cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226cf4:
    // 0x226cf4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226cf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226cf8:
    // 0x226cf8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x226cf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_226cfc:
    // 0x226cfc: 0xe48100f4  swc1        $f1, 0xF4($a0)
    ctx->pc = 0x226cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_226d00:
    // 0x226d00: 0x4604481a  mula.s      $f9, $f4
    ctx->pc = 0x226d00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
label_226d04:
    // 0x226d04: 0xc48100f8  lwc1        $f1, 0xF8($a0)
    ctx->pc = 0x226d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226d08:
    // 0x226d08: 0x460540dd  msub.s      $f3, $f8, $f5
    ctx->pc = 0x226d08u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
label_226d0c:
    // 0x226d0c: 0xc48200d8  lwc1        $f2, 0xD8($a0)
    ctx->pc = 0x226d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226d10:
    // 0x226d10: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226d10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226d14:
    // 0x226d14: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x226d14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_226d18:
    // 0x226d18: 0xe48100f8  swc1        $f1, 0xF8($a0)
    ctx->pc = 0x226d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_226d1c:
    // 0x226d1c: 0xc48100fc  lwc1        $f1, 0xFC($a0)
    ctx->pc = 0x226d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226d20:
    // 0x226d20: 0xc48200dc  lwc1        $f2, 0xDC($a0)
    ctx->pc = 0x226d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226d24:
    // 0x226d24: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226d24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226d28:
    // 0x226d28: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x226d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_226d2c:
    // 0x226d2c: 0x3e00008  jr          $ra
label_226d30:
    if (ctx->pc == 0x226D30u) {
        ctx->pc = 0x226D30u;
            // 0x226d30: 0xe48000fc  swc1        $f0, 0xFC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
        ctx->pc = 0x226D34u;
        goto label_226d34;
    }
    ctx->pc = 0x226D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226D2Cu;
            // 0x226d30: 0xe48000fc  swc1        $f0, 0xFC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226D34u;
label_226d34:
    // 0x226d34: 0x0  nop
    ctx->pc = 0x226d34u;
    // NOP
label_226d38:
    // 0x226d38: 0x0  nop
    ctx->pc = 0x226d38u;
    // NOP
label_226d3c:
    // 0x226d3c: 0x0  nop
    ctx->pc = 0x226d3cu;
    // NOP
label_226d40:
    // 0x226d40: 0xc48000f0  lwc1        $f0, 0xF0($a0)
    ctx->pc = 0x226d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226d44:
    // 0x226d44: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x226d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226d48:
    // 0x226d48: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x226d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_226d4c:
    // 0x226d4c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x226d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226d50:
    // 0x226d50: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x226d50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_226d54:
    // 0x226d54: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x226d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_226d58:
    // 0x226d58: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x226d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_226d5c:
    // 0x226d5c: 0xc48000f4  lwc1        $f0, 0xF4($a0)
    ctx->pc = 0x226d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226d60:
    // 0x226d60: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x226d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226d64:
    // 0x226d64: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x226d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226d68:
    // 0x226d68: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x226d68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_226d6c:
    // 0x226d6c: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x226d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_226d70:
    // 0x226d70: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x226d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_226d74:
    // 0x226d74: 0xc48000f8  lwc1        $f0, 0xF8($a0)
    ctx->pc = 0x226d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226d78:
    // 0x226d78: 0xc48200d8  lwc1        $f2, 0xD8($a0)
    ctx->pc = 0x226d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226d7c:
    // 0x226d7c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x226d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226d80:
    // 0x226d80: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x226d80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_226d84:
    // 0x226d84: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x226d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_226d88:
    // 0x226d88: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x226d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_226d8c:
    // 0x226d8c: 0xc48000fc  lwc1        $f0, 0xFC($a0)
    ctx->pc = 0x226d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226d90:
    // 0x226d90: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x226d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226d94:
    // 0x226d94: 0xc48200dc  lwc1        $f2, 0xDC($a0)
    ctx->pc = 0x226d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226d98:
    // 0x226d98: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x226d98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_226d9c:
    // 0x226d9c: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x226d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_226da0:
    // 0x226da0: 0x3e00008  jr          $ra
label_226da4:
    if (ctx->pc == 0x226DA4u) {
        ctx->pc = 0x226DA4u;
            // 0x226da4: 0xe48000fc  swc1        $f0, 0xFC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
        ctx->pc = 0x226DA8u;
        goto label_226da8;
    }
    ctx->pc = 0x226DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226DA0u;
            // 0x226da4: 0xe48000fc  swc1        $f0, 0xFC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226DA8u;
label_226da8:
    // 0x226da8: 0x0  nop
    ctx->pc = 0x226da8u;
    // NOP
label_226dac:
    // 0x226dac: 0x0  nop
    ctx->pc = 0x226dacu;
    // NOP
label_226db0:
    // 0x226db0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x226db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226db4:
    // 0x226db4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x226db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226db8:
    // 0x226db8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x226db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226dbc:
    // 0x226dbc: 0x46016142  mul.s       $f5, $f12, $f1
    ctx->pc = 0x226dbcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_226dc0:
    // 0x226dc0: 0x46026182  mul.s       $f6, $f12, $f2
    ctx->pc = 0x226dc0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_226dc4:
    // 0x226dc4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x226dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226dc8:
    // 0x226dc8: 0x46006102  mul.s       $f4, $f12, $f0
    ctx->pc = 0x226dc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226dcc:
    // 0x226dcc: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x226dccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_226dd0:
    // 0x226dd0: 0xc48000e0  lwc1        $f0, 0xE0($a0)
    ctx->pc = 0x226dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226dd4:
    // 0x226dd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x226dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_226dd8:
    // 0x226dd8: 0xc48300dc  lwc1        $f3, 0xDC($a0)
    ctx->pc = 0x226dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_226ddc:
    // 0x226ddc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x226ddcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_226de0:
    // 0x226de0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x226de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_226de4:
    // 0x226de4: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x226de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
label_226de8:
    // 0x226de8: 0xc48000e4  lwc1        $f0, 0xE4($a0)
    ctx->pc = 0x226de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226dec:
    // 0x226dec: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x226decu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_226df0:
    // 0x226df0: 0x4606181c  madd.s      $f0, $f3, $f6
    ctx->pc = 0x226df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_226df4:
    // 0x226df4: 0xe48000e4  swc1        $f0, 0xE4($a0)
    ctx->pc = 0x226df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
label_226df8:
    // 0x226df8: 0xc48000e8  lwc1        $f0, 0xE8($a0)
    ctx->pc = 0x226df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226dfc:
    // 0x226dfc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x226dfcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_226e00:
    // 0x226e00: 0x4605181c  madd.s      $f0, $f3, $f5
    ctx->pc = 0x226e00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
label_226e04:
    // 0x226e04: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x226e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
label_226e08:
    // 0x226e08: 0xc48000ec  lwc1        $f0, 0xEC($a0)
    ctx->pc = 0x226e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226e0c:
    // 0x226e0c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x226e0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_226e10:
    // 0x226e10: 0x4604181c  madd.s      $f0, $f3, $f4
    ctx->pc = 0x226e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_226e14:
    // 0x226e14: 0x3e00008  jr          $ra
label_226e18:
    if (ctx->pc == 0x226E18u) {
        ctx->pc = 0x226E18u;
            // 0x226e18: 0xe48000ec  swc1        $f0, 0xEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
        ctx->pc = 0x226E1Cu;
        goto label_226e1c;
    }
    ctx->pc = 0x226E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226E14u;
            // 0x226e18: 0xe48000ec  swc1        $f0, 0xEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226E1Cu;
label_226e1c:
    // 0x226e1c: 0x0  nop
    ctx->pc = 0x226e1cu;
    // NOP
label_226e20:
    // 0x226e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_226e24:
    // 0x226e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226e28:
    // 0x226e28: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x226e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226e2c:
    // 0x226e2c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226e30:
    // 0x226e30: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x226e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_226e34:
    // 0x226e34: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x226e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226e38:
    // 0x226e38: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226e3c:
    // 0x226e3c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x226e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_226e40:
    // 0x226e40: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x226e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226e44:
    // 0x226e44: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226e48:
    // 0x226e48: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x226e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_226e4c:
    // 0x226e4c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x226e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226e50:
    // 0x226e50: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226e54:
    // 0x226e54: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x226e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_226e58:
    // 0x226e58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x226e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226e5c:
    // 0x226e5c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x226e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_226e60:
    // 0x226e60: 0x320f809  jalr        $t9
label_226e64:
    if (ctx->pc == 0x226E64u) {
        ctx->pc = 0x226E64u;
            // 0x226e64: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x226E68u;
        goto label_226e68;
    }
    ctx->pc = 0x226E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x226E68u);
        ctx->pc = 0x226E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226E60u;
            // 0x226e64: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x226E68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x226E68u; }
            if (ctx->pc != 0x226E68u) { return; }
        }
        }
    }
    ctx->pc = 0x226E68u;
label_226e68:
    // 0x226e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226e6c:
    // 0x226e6c: 0x3e00008  jr          $ra
label_226e70:
    if (ctx->pc == 0x226E70u) {
        ctx->pc = 0x226E70u;
            // 0x226e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x226E74u;
        goto label_226e74;
    }
    ctx->pc = 0x226E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226E6Cu;
            // 0x226e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226E74u;
label_226e74:
    // 0x226e74: 0x0  nop
    ctx->pc = 0x226e74u;
    // NOP
label_226e78:
    // 0x226e78: 0x0  nop
    ctx->pc = 0x226e78u;
    // NOP
label_226e7c:
    // 0x226e7c: 0x0  nop
    ctx->pc = 0x226e7cu;
    // NOP
label_226e80:
    // 0x226e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_226e84:
    // 0x226e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226e88:
    // 0x226e88: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x226e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226e8c:
    // 0x226e8c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226e90:
    // 0x226e90: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x226e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_226e94:
    // 0x226e94: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x226e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226e98:
    // 0x226e98: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226e9c:
    // 0x226e9c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x226e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_226ea0:
    // 0x226ea0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x226ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226ea4:
    // 0x226ea4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226ea8:
    // 0x226ea8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x226ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_226eac:
    // 0x226eac: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x226eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226eb0:
    // 0x226eb0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226eb4:
    // 0x226eb4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x226eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_226eb8:
    // 0x226eb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x226eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226ebc:
    // 0x226ebc: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x226ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_226ec0:
    // 0x226ec0: 0x320f809  jalr        $t9
label_226ec4:
    if (ctx->pc == 0x226EC4u) {
        ctx->pc = 0x226EC4u;
            // 0x226ec4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x226EC8u;
        goto label_226ec8;
    }
    ctx->pc = 0x226EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x226EC8u);
        ctx->pc = 0x226EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226EC0u;
            // 0x226ec4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x226EC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x226EC8u; }
            if (ctx->pc != 0x226EC8u) { return; }
        }
        }
    }
    ctx->pc = 0x226EC8u;
label_226ec8:
    // 0x226ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226ecc:
    // 0x226ecc: 0x3e00008  jr          $ra
label_226ed0:
    if (ctx->pc == 0x226ED0u) {
        ctx->pc = 0x226ED0u;
            // 0x226ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x226ED4u;
        goto label_226ed4;
    }
    ctx->pc = 0x226ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226ECCu;
            // 0x226ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226ED4u;
label_226ed4:
    // 0x226ed4: 0x0  nop
    ctx->pc = 0x226ed4u;
    // NOP
label_226ed8:
    // 0x226ed8: 0x0  nop
    ctx->pc = 0x226ed8u;
    // NOP
label_226edc:
    // 0x226edc: 0x0  nop
    ctx->pc = 0x226edcu;
    // NOP
}
