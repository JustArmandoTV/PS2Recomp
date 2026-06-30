#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00486A30
// Address: 0x486a30 - 0x486f40
void sub_00486A30_0x486a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486A30_0x486a30");
#endif

    switch (ctx->pc) {
        case 0x486a30u: goto label_486a30;
        case 0x486a34u: goto label_486a34;
        case 0x486a38u: goto label_486a38;
        case 0x486a3cu: goto label_486a3c;
        case 0x486a40u: goto label_486a40;
        case 0x486a44u: goto label_486a44;
        case 0x486a48u: goto label_486a48;
        case 0x486a4cu: goto label_486a4c;
        case 0x486a50u: goto label_486a50;
        case 0x486a54u: goto label_486a54;
        case 0x486a58u: goto label_486a58;
        case 0x486a5cu: goto label_486a5c;
        case 0x486a60u: goto label_486a60;
        case 0x486a64u: goto label_486a64;
        case 0x486a68u: goto label_486a68;
        case 0x486a6cu: goto label_486a6c;
        case 0x486a70u: goto label_486a70;
        case 0x486a74u: goto label_486a74;
        case 0x486a78u: goto label_486a78;
        case 0x486a7cu: goto label_486a7c;
        case 0x486a80u: goto label_486a80;
        case 0x486a84u: goto label_486a84;
        case 0x486a88u: goto label_486a88;
        case 0x486a8cu: goto label_486a8c;
        case 0x486a90u: goto label_486a90;
        case 0x486a94u: goto label_486a94;
        case 0x486a98u: goto label_486a98;
        case 0x486a9cu: goto label_486a9c;
        case 0x486aa0u: goto label_486aa0;
        case 0x486aa4u: goto label_486aa4;
        case 0x486aa8u: goto label_486aa8;
        case 0x486aacu: goto label_486aac;
        case 0x486ab0u: goto label_486ab0;
        case 0x486ab4u: goto label_486ab4;
        case 0x486ab8u: goto label_486ab8;
        case 0x486abcu: goto label_486abc;
        case 0x486ac0u: goto label_486ac0;
        case 0x486ac4u: goto label_486ac4;
        case 0x486ac8u: goto label_486ac8;
        case 0x486accu: goto label_486acc;
        case 0x486ad0u: goto label_486ad0;
        case 0x486ad4u: goto label_486ad4;
        case 0x486ad8u: goto label_486ad8;
        case 0x486adcu: goto label_486adc;
        case 0x486ae0u: goto label_486ae0;
        case 0x486ae4u: goto label_486ae4;
        case 0x486ae8u: goto label_486ae8;
        case 0x486aecu: goto label_486aec;
        case 0x486af0u: goto label_486af0;
        case 0x486af4u: goto label_486af4;
        case 0x486af8u: goto label_486af8;
        case 0x486afcu: goto label_486afc;
        case 0x486b00u: goto label_486b00;
        case 0x486b04u: goto label_486b04;
        case 0x486b08u: goto label_486b08;
        case 0x486b0cu: goto label_486b0c;
        case 0x486b10u: goto label_486b10;
        case 0x486b14u: goto label_486b14;
        case 0x486b18u: goto label_486b18;
        case 0x486b1cu: goto label_486b1c;
        case 0x486b20u: goto label_486b20;
        case 0x486b24u: goto label_486b24;
        case 0x486b28u: goto label_486b28;
        case 0x486b2cu: goto label_486b2c;
        case 0x486b30u: goto label_486b30;
        case 0x486b34u: goto label_486b34;
        case 0x486b38u: goto label_486b38;
        case 0x486b3cu: goto label_486b3c;
        case 0x486b40u: goto label_486b40;
        case 0x486b44u: goto label_486b44;
        case 0x486b48u: goto label_486b48;
        case 0x486b4cu: goto label_486b4c;
        case 0x486b50u: goto label_486b50;
        case 0x486b54u: goto label_486b54;
        case 0x486b58u: goto label_486b58;
        case 0x486b5cu: goto label_486b5c;
        case 0x486b60u: goto label_486b60;
        case 0x486b64u: goto label_486b64;
        case 0x486b68u: goto label_486b68;
        case 0x486b6cu: goto label_486b6c;
        case 0x486b70u: goto label_486b70;
        case 0x486b74u: goto label_486b74;
        case 0x486b78u: goto label_486b78;
        case 0x486b7cu: goto label_486b7c;
        case 0x486b80u: goto label_486b80;
        case 0x486b84u: goto label_486b84;
        case 0x486b88u: goto label_486b88;
        case 0x486b8cu: goto label_486b8c;
        case 0x486b90u: goto label_486b90;
        case 0x486b94u: goto label_486b94;
        case 0x486b98u: goto label_486b98;
        case 0x486b9cu: goto label_486b9c;
        case 0x486ba0u: goto label_486ba0;
        case 0x486ba4u: goto label_486ba4;
        case 0x486ba8u: goto label_486ba8;
        case 0x486bacu: goto label_486bac;
        case 0x486bb0u: goto label_486bb0;
        case 0x486bb4u: goto label_486bb4;
        case 0x486bb8u: goto label_486bb8;
        case 0x486bbcu: goto label_486bbc;
        case 0x486bc0u: goto label_486bc0;
        case 0x486bc4u: goto label_486bc4;
        case 0x486bc8u: goto label_486bc8;
        case 0x486bccu: goto label_486bcc;
        case 0x486bd0u: goto label_486bd0;
        case 0x486bd4u: goto label_486bd4;
        case 0x486bd8u: goto label_486bd8;
        case 0x486bdcu: goto label_486bdc;
        case 0x486be0u: goto label_486be0;
        case 0x486be4u: goto label_486be4;
        case 0x486be8u: goto label_486be8;
        case 0x486becu: goto label_486bec;
        case 0x486bf0u: goto label_486bf0;
        case 0x486bf4u: goto label_486bf4;
        case 0x486bf8u: goto label_486bf8;
        case 0x486bfcu: goto label_486bfc;
        case 0x486c00u: goto label_486c00;
        case 0x486c04u: goto label_486c04;
        case 0x486c08u: goto label_486c08;
        case 0x486c0cu: goto label_486c0c;
        case 0x486c10u: goto label_486c10;
        case 0x486c14u: goto label_486c14;
        case 0x486c18u: goto label_486c18;
        case 0x486c1cu: goto label_486c1c;
        case 0x486c20u: goto label_486c20;
        case 0x486c24u: goto label_486c24;
        case 0x486c28u: goto label_486c28;
        case 0x486c2cu: goto label_486c2c;
        case 0x486c30u: goto label_486c30;
        case 0x486c34u: goto label_486c34;
        case 0x486c38u: goto label_486c38;
        case 0x486c3cu: goto label_486c3c;
        case 0x486c40u: goto label_486c40;
        case 0x486c44u: goto label_486c44;
        case 0x486c48u: goto label_486c48;
        case 0x486c4cu: goto label_486c4c;
        case 0x486c50u: goto label_486c50;
        case 0x486c54u: goto label_486c54;
        case 0x486c58u: goto label_486c58;
        case 0x486c5cu: goto label_486c5c;
        case 0x486c60u: goto label_486c60;
        case 0x486c64u: goto label_486c64;
        case 0x486c68u: goto label_486c68;
        case 0x486c6cu: goto label_486c6c;
        case 0x486c70u: goto label_486c70;
        case 0x486c74u: goto label_486c74;
        case 0x486c78u: goto label_486c78;
        case 0x486c7cu: goto label_486c7c;
        case 0x486c80u: goto label_486c80;
        case 0x486c84u: goto label_486c84;
        case 0x486c88u: goto label_486c88;
        case 0x486c8cu: goto label_486c8c;
        case 0x486c90u: goto label_486c90;
        case 0x486c94u: goto label_486c94;
        case 0x486c98u: goto label_486c98;
        case 0x486c9cu: goto label_486c9c;
        case 0x486ca0u: goto label_486ca0;
        case 0x486ca4u: goto label_486ca4;
        case 0x486ca8u: goto label_486ca8;
        case 0x486cacu: goto label_486cac;
        case 0x486cb0u: goto label_486cb0;
        case 0x486cb4u: goto label_486cb4;
        case 0x486cb8u: goto label_486cb8;
        case 0x486cbcu: goto label_486cbc;
        case 0x486cc0u: goto label_486cc0;
        case 0x486cc4u: goto label_486cc4;
        case 0x486cc8u: goto label_486cc8;
        case 0x486cccu: goto label_486ccc;
        case 0x486cd0u: goto label_486cd0;
        case 0x486cd4u: goto label_486cd4;
        case 0x486cd8u: goto label_486cd8;
        case 0x486cdcu: goto label_486cdc;
        case 0x486ce0u: goto label_486ce0;
        case 0x486ce4u: goto label_486ce4;
        case 0x486ce8u: goto label_486ce8;
        case 0x486cecu: goto label_486cec;
        case 0x486cf0u: goto label_486cf0;
        case 0x486cf4u: goto label_486cf4;
        case 0x486cf8u: goto label_486cf8;
        case 0x486cfcu: goto label_486cfc;
        case 0x486d00u: goto label_486d00;
        case 0x486d04u: goto label_486d04;
        case 0x486d08u: goto label_486d08;
        case 0x486d0cu: goto label_486d0c;
        case 0x486d10u: goto label_486d10;
        case 0x486d14u: goto label_486d14;
        case 0x486d18u: goto label_486d18;
        case 0x486d1cu: goto label_486d1c;
        case 0x486d20u: goto label_486d20;
        case 0x486d24u: goto label_486d24;
        case 0x486d28u: goto label_486d28;
        case 0x486d2cu: goto label_486d2c;
        case 0x486d30u: goto label_486d30;
        case 0x486d34u: goto label_486d34;
        case 0x486d38u: goto label_486d38;
        case 0x486d3cu: goto label_486d3c;
        case 0x486d40u: goto label_486d40;
        case 0x486d44u: goto label_486d44;
        case 0x486d48u: goto label_486d48;
        case 0x486d4cu: goto label_486d4c;
        case 0x486d50u: goto label_486d50;
        case 0x486d54u: goto label_486d54;
        case 0x486d58u: goto label_486d58;
        case 0x486d5cu: goto label_486d5c;
        case 0x486d60u: goto label_486d60;
        case 0x486d64u: goto label_486d64;
        case 0x486d68u: goto label_486d68;
        case 0x486d6cu: goto label_486d6c;
        case 0x486d70u: goto label_486d70;
        case 0x486d74u: goto label_486d74;
        case 0x486d78u: goto label_486d78;
        case 0x486d7cu: goto label_486d7c;
        case 0x486d80u: goto label_486d80;
        case 0x486d84u: goto label_486d84;
        case 0x486d88u: goto label_486d88;
        case 0x486d8cu: goto label_486d8c;
        case 0x486d90u: goto label_486d90;
        case 0x486d94u: goto label_486d94;
        case 0x486d98u: goto label_486d98;
        case 0x486d9cu: goto label_486d9c;
        case 0x486da0u: goto label_486da0;
        case 0x486da4u: goto label_486da4;
        case 0x486da8u: goto label_486da8;
        case 0x486dacu: goto label_486dac;
        case 0x486db0u: goto label_486db0;
        case 0x486db4u: goto label_486db4;
        case 0x486db8u: goto label_486db8;
        case 0x486dbcu: goto label_486dbc;
        case 0x486dc0u: goto label_486dc0;
        case 0x486dc4u: goto label_486dc4;
        case 0x486dc8u: goto label_486dc8;
        case 0x486dccu: goto label_486dcc;
        case 0x486dd0u: goto label_486dd0;
        case 0x486dd4u: goto label_486dd4;
        case 0x486dd8u: goto label_486dd8;
        case 0x486ddcu: goto label_486ddc;
        case 0x486de0u: goto label_486de0;
        case 0x486de4u: goto label_486de4;
        case 0x486de8u: goto label_486de8;
        case 0x486decu: goto label_486dec;
        case 0x486df0u: goto label_486df0;
        case 0x486df4u: goto label_486df4;
        case 0x486df8u: goto label_486df8;
        case 0x486dfcu: goto label_486dfc;
        case 0x486e00u: goto label_486e00;
        case 0x486e04u: goto label_486e04;
        case 0x486e08u: goto label_486e08;
        case 0x486e0cu: goto label_486e0c;
        case 0x486e10u: goto label_486e10;
        case 0x486e14u: goto label_486e14;
        case 0x486e18u: goto label_486e18;
        case 0x486e1cu: goto label_486e1c;
        case 0x486e20u: goto label_486e20;
        case 0x486e24u: goto label_486e24;
        case 0x486e28u: goto label_486e28;
        case 0x486e2cu: goto label_486e2c;
        case 0x486e30u: goto label_486e30;
        case 0x486e34u: goto label_486e34;
        case 0x486e38u: goto label_486e38;
        case 0x486e3cu: goto label_486e3c;
        case 0x486e40u: goto label_486e40;
        case 0x486e44u: goto label_486e44;
        case 0x486e48u: goto label_486e48;
        case 0x486e4cu: goto label_486e4c;
        case 0x486e50u: goto label_486e50;
        case 0x486e54u: goto label_486e54;
        case 0x486e58u: goto label_486e58;
        case 0x486e5cu: goto label_486e5c;
        case 0x486e60u: goto label_486e60;
        case 0x486e64u: goto label_486e64;
        case 0x486e68u: goto label_486e68;
        case 0x486e6cu: goto label_486e6c;
        case 0x486e70u: goto label_486e70;
        case 0x486e74u: goto label_486e74;
        case 0x486e78u: goto label_486e78;
        case 0x486e7cu: goto label_486e7c;
        case 0x486e80u: goto label_486e80;
        case 0x486e84u: goto label_486e84;
        case 0x486e88u: goto label_486e88;
        case 0x486e8cu: goto label_486e8c;
        case 0x486e90u: goto label_486e90;
        case 0x486e94u: goto label_486e94;
        case 0x486e98u: goto label_486e98;
        case 0x486e9cu: goto label_486e9c;
        case 0x486ea0u: goto label_486ea0;
        case 0x486ea4u: goto label_486ea4;
        case 0x486ea8u: goto label_486ea8;
        case 0x486eacu: goto label_486eac;
        case 0x486eb0u: goto label_486eb0;
        case 0x486eb4u: goto label_486eb4;
        case 0x486eb8u: goto label_486eb8;
        case 0x486ebcu: goto label_486ebc;
        case 0x486ec0u: goto label_486ec0;
        case 0x486ec4u: goto label_486ec4;
        case 0x486ec8u: goto label_486ec8;
        case 0x486eccu: goto label_486ecc;
        case 0x486ed0u: goto label_486ed0;
        case 0x486ed4u: goto label_486ed4;
        case 0x486ed8u: goto label_486ed8;
        case 0x486edcu: goto label_486edc;
        case 0x486ee0u: goto label_486ee0;
        case 0x486ee4u: goto label_486ee4;
        case 0x486ee8u: goto label_486ee8;
        case 0x486eecu: goto label_486eec;
        case 0x486ef0u: goto label_486ef0;
        case 0x486ef4u: goto label_486ef4;
        case 0x486ef8u: goto label_486ef8;
        case 0x486efcu: goto label_486efc;
        case 0x486f00u: goto label_486f00;
        case 0x486f04u: goto label_486f04;
        case 0x486f08u: goto label_486f08;
        case 0x486f0cu: goto label_486f0c;
        case 0x486f10u: goto label_486f10;
        case 0x486f14u: goto label_486f14;
        case 0x486f18u: goto label_486f18;
        case 0x486f1cu: goto label_486f1c;
        case 0x486f20u: goto label_486f20;
        case 0x486f24u: goto label_486f24;
        case 0x486f28u: goto label_486f28;
        case 0x486f2cu: goto label_486f2c;
        case 0x486f30u: goto label_486f30;
        case 0x486f34u: goto label_486f34;
        case 0x486f38u: goto label_486f38;
        case 0x486f3cu: goto label_486f3c;
        default: break;
    }

    ctx->pc = 0x486a30u;

label_486a30:
    // 0x486a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x486a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_486a34:
    // 0x486a34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x486a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_486a38:
    // 0x486a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_486a3c:
    // 0x486a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486a40:
    // 0x486a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x486a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486a44:
    // 0x486a44: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_486a48:
    if (ctx->pc == 0x486A48u) {
        ctx->pc = 0x486A48u;
            // 0x486a48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486A4Cu;
        goto label_486a4c;
    }
    ctx->pc = 0x486A44u;
    {
        const bool branch_taken_0x486a44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x486A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486A44u;
            // 0x486a48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486a44) {
            ctx->pc = 0x486B78u;
            goto label_486b78;
        }
    }
    ctx->pc = 0x486A4Cu;
label_486a4c:
    // 0x486a4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x486a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_486a50:
    // 0x486a50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x486a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_486a54:
    // 0x486a54: 0x2463f630  addiu       $v1, $v1, -0x9D0
    ctx->pc = 0x486a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964784));
label_486a58:
    // 0x486a58: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x486a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_486a5c:
    // 0x486a5c: 0x2442f668  addiu       $v0, $v0, -0x998
    ctx->pc = 0x486a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964840));
label_486a60:
    // 0x486a60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x486a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_486a64:
    // 0x486a64: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x486a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_486a68:
    // 0x486a68: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x486a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_486a6c:
    // 0x486a6c: 0xc0407c0  jal         func_101F00
label_486a70:
    if (ctx->pc == 0x486A70u) {
        ctx->pc = 0x486A70u;
            // 0x486a70: 0x24a56b90  addiu       $a1, $a1, 0x6B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
        ctx->pc = 0x486A74u;
        goto label_486a74;
    }
    ctx->pc = 0x486A6Cu;
    SET_GPR_U32(ctx, 31, 0x486A74u);
    ctx->pc = 0x486A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486A6Cu;
            // 0x486a70: 0x24a56b90  addiu       $a1, $a1, 0x6B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486A74u; }
        if (ctx->pc != 0x486A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486A74u; }
        if (ctx->pc != 0x486A74u) { return; }
    }
    ctx->pc = 0x486A74u;
label_486a74:
    // 0x486a74: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x486a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_486a78:
    // 0x486a78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_486a7c:
    if (ctx->pc == 0x486A7Cu) {
        ctx->pc = 0x486A7Cu;
            // 0x486a7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x486A80u;
        goto label_486a80;
    }
    ctx->pc = 0x486A78u;
    {
        const bool branch_taken_0x486a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486a78) {
            ctx->pc = 0x486A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486A78u;
            // 0x486a7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486A8Cu;
            goto label_486a8c;
        }
    }
    ctx->pc = 0x486A80u;
label_486a80:
    // 0x486a80: 0xc07507c  jal         func_1D41F0
label_486a84:
    if (ctx->pc == 0x486A84u) {
        ctx->pc = 0x486A84u;
            // 0x486a84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x486A88u;
        goto label_486a88;
    }
    ctx->pc = 0x486A80u;
    SET_GPR_U32(ctx, 31, 0x486A88u);
    ctx->pc = 0x486A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486A80u;
            // 0x486a84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486A88u; }
        if (ctx->pc != 0x486A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486A88u; }
        if (ctx->pc != 0x486A88u) { return; }
    }
    ctx->pc = 0x486A88u;
label_486a88:
    // 0x486a88: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x486a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_486a8c:
    // 0x486a8c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_486a90:
    if (ctx->pc == 0x486A90u) {
        ctx->pc = 0x486A90u;
            // 0x486a90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x486A94u;
        goto label_486a94;
    }
    ctx->pc = 0x486A8Cu;
    {
        const bool branch_taken_0x486a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486a8c) {
            ctx->pc = 0x486A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486A8Cu;
            // 0x486a90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486ABCu;
            goto label_486abc;
        }
    }
    ctx->pc = 0x486A94u;
label_486a94:
    // 0x486a94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_486a98:
    if (ctx->pc == 0x486A98u) {
        ctx->pc = 0x486A9Cu;
        goto label_486a9c;
    }
    ctx->pc = 0x486A94u;
    {
        const bool branch_taken_0x486a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486a94) {
            ctx->pc = 0x486AB8u;
            goto label_486ab8;
        }
    }
    ctx->pc = 0x486A9Cu;
label_486a9c:
    // 0x486a9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_486aa0:
    if (ctx->pc == 0x486AA0u) {
        ctx->pc = 0x486AA4u;
        goto label_486aa4;
    }
    ctx->pc = 0x486A9Cu;
    {
        const bool branch_taken_0x486a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486a9c) {
            ctx->pc = 0x486AB8u;
            goto label_486ab8;
        }
    }
    ctx->pc = 0x486AA4u;
label_486aa4:
    // 0x486aa4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x486aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_486aa8:
    // 0x486aa8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_486aac:
    if (ctx->pc == 0x486AACu) {
        ctx->pc = 0x486AB0u;
        goto label_486ab0;
    }
    ctx->pc = 0x486AA8u;
    {
        const bool branch_taken_0x486aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x486aa8) {
            ctx->pc = 0x486AB8u;
            goto label_486ab8;
        }
    }
    ctx->pc = 0x486AB0u;
label_486ab0:
    // 0x486ab0: 0xc0400a8  jal         func_1002A0
label_486ab4:
    if (ctx->pc == 0x486AB4u) {
        ctx->pc = 0x486AB8u;
        goto label_486ab8;
    }
    ctx->pc = 0x486AB0u;
    SET_GPR_U32(ctx, 31, 0x486AB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486AB8u; }
        if (ctx->pc != 0x486AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486AB8u; }
        if (ctx->pc != 0x486AB8u) { return; }
    }
    ctx->pc = 0x486AB8u;
label_486ab8:
    // 0x486ab8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x486ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_486abc:
    // 0x486abc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_486ac0:
    if (ctx->pc == 0x486AC0u) {
        ctx->pc = 0x486AC0u;
            // 0x486ac0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x486AC4u;
        goto label_486ac4;
    }
    ctx->pc = 0x486ABCu;
    {
        const bool branch_taken_0x486abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486abc) {
            ctx->pc = 0x486AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486ABCu;
            // 0x486ac0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486AECu;
            goto label_486aec;
        }
    }
    ctx->pc = 0x486AC4u;
label_486ac4:
    // 0x486ac4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_486ac8:
    if (ctx->pc == 0x486AC8u) {
        ctx->pc = 0x486ACCu;
        goto label_486acc;
    }
    ctx->pc = 0x486AC4u;
    {
        const bool branch_taken_0x486ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486ac4) {
            ctx->pc = 0x486AE8u;
            goto label_486ae8;
        }
    }
    ctx->pc = 0x486ACCu;
label_486acc:
    // 0x486acc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_486ad0:
    if (ctx->pc == 0x486AD0u) {
        ctx->pc = 0x486AD4u;
        goto label_486ad4;
    }
    ctx->pc = 0x486ACCu;
    {
        const bool branch_taken_0x486acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486acc) {
            ctx->pc = 0x486AE8u;
            goto label_486ae8;
        }
    }
    ctx->pc = 0x486AD4u;
label_486ad4:
    // 0x486ad4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x486ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_486ad8:
    // 0x486ad8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_486adc:
    if (ctx->pc == 0x486ADCu) {
        ctx->pc = 0x486AE0u;
        goto label_486ae0;
    }
    ctx->pc = 0x486AD8u;
    {
        const bool branch_taken_0x486ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x486ad8) {
            ctx->pc = 0x486AE8u;
            goto label_486ae8;
        }
    }
    ctx->pc = 0x486AE0u;
label_486ae0:
    // 0x486ae0: 0xc0400a8  jal         func_1002A0
label_486ae4:
    if (ctx->pc == 0x486AE4u) {
        ctx->pc = 0x486AE8u;
        goto label_486ae8;
    }
    ctx->pc = 0x486AE0u;
    SET_GPR_U32(ctx, 31, 0x486AE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486AE8u; }
        if (ctx->pc != 0x486AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486AE8u; }
        if (ctx->pc != 0x486AE8u) { return; }
    }
    ctx->pc = 0x486AE8u;
label_486ae8:
    // 0x486ae8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x486ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_486aec:
    // 0x486aec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_486af0:
    if (ctx->pc == 0x486AF0u) {
        ctx->pc = 0x486AF4u;
        goto label_486af4;
    }
    ctx->pc = 0x486AECu;
    {
        const bool branch_taken_0x486aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486aec) {
            ctx->pc = 0x486B08u;
            goto label_486b08;
        }
    }
    ctx->pc = 0x486AF4u;
label_486af4:
    // 0x486af4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x486af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_486af8:
    // 0x486af8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x486af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_486afc:
    // 0x486afc: 0x2463f620  addiu       $v1, $v1, -0x9E0
    ctx->pc = 0x486afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964768));
label_486b00:
    // 0x486b00: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x486b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_486b04:
    // 0x486b04: 0xac407ba8  sw          $zero, 0x7BA8($v0)
    ctx->pc = 0x486b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31656), GPR_U32(ctx, 0));
label_486b08:
    // 0x486b08: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_486b0c:
    if (ctx->pc == 0x486B0Cu) {
        ctx->pc = 0x486B0Cu;
            // 0x486b0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x486B10u;
        goto label_486b10;
    }
    ctx->pc = 0x486B08u;
    {
        const bool branch_taken_0x486b08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x486b08) {
            ctx->pc = 0x486B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486B08u;
            // 0x486b0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486B64u;
            goto label_486b64;
        }
    }
    ctx->pc = 0x486B10u;
label_486b10:
    // 0x486b10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x486b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_486b14:
    // 0x486b14: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x486b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_486b18:
    // 0x486b18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x486b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_486b1c:
    // 0x486b1c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x486b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_486b20:
    // 0x486b20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_486b24:
    if (ctx->pc == 0x486B24u) {
        ctx->pc = 0x486B24u;
            // 0x486b24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x486B28u;
        goto label_486b28;
    }
    ctx->pc = 0x486B20u;
    {
        const bool branch_taken_0x486b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x486b20) {
            ctx->pc = 0x486B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486B20u;
            // 0x486b24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486B3Cu;
            goto label_486b3c;
        }
    }
    ctx->pc = 0x486B28u;
label_486b28:
    // 0x486b28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x486b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_486b2c:
    // 0x486b2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x486b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_486b30:
    // 0x486b30: 0x320f809  jalr        $t9
label_486b34:
    if (ctx->pc == 0x486B34u) {
        ctx->pc = 0x486B34u;
            // 0x486b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x486B38u;
        goto label_486b38;
    }
    ctx->pc = 0x486B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x486B38u);
        ctx->pc = 0x486B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486B30u;
            // 0x486b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x486B38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x486B38u; }
            if (ctx->pc != 0x486B38u) { return; }
        }
        }
    }
    ctx->pc = 0x486B38u;
label_486b38:
    // 0x486b38: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x486b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_486b3c:
    // 0x486b3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_486b40:
    if (ctx->pc == 0x486B40u) {
        ctx->pc = 0x486B40u;
            // 0x486b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486B44u;
        goto label_486b44;
    }
    ctx->pc = 0x486B3Cu;
    {
        const bool branch_taken_0x486b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x486b3c) {
            ctx->pc = 0x486B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486B3Cu;
            // 0x486b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486B58u;
            goto label_486b58;
        }
    }
    ctx->pc = 0x486B44u;
label_486b44:
    // 0x486b44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x486b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_486b48:
    // 0x486b48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x486b48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_486b4c:
    // 0x486b4c: 0x320f809  jalr        $t9
label_486b50:
    if (ctx->pc == 0x486B50u) {
        ctx->pc = 0x486B50u;
            // 0x486b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x486B54u;
        goto label_486b54;
    }
    ctx->pc = 0x486B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x486B54u);
        ctx->pc = 0x486B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486B4Cu;
            // 0x486b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x486B54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x486B54u; }
            if (ctx->pc != 0x486B54u) { return; }
        }
        }
    }
    ctx->pc = 0x486B54u;
label_486b54:
    // 0x486b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x486b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_486b58:
    // 0x486b58: 0xc075bf8  jal         func_1D6FE0
label_486b5c:
    if (ctx->pc == 0x486B5Cu) {
        ctx->pc = 0x486B5Cu;
            // 0x486b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486B60u;
        goto label_486b60;
    }
    ctx->pc = 0x486B58u;
    SET_GPR_U32(ctx, 31, 0x486B60u);
    ctx->pc = 0x486B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486B58u;
            // 0x486b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486B60u; }
        if (ctx->pc != 0x486B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486B60u; }
        if (ctx->pc != 0x486B60u) { return; }
    }
    ctx->pc = 0x486B60u;
label_486b60:
    // 0x486b60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x486b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_486b64:
    // 0x486b64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x486b64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_486b68:
    // 0x486b68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_486b6c:
    if (ctx->pc == 0x486B6Cu) {
        ctx->pc = 0x486B6Cu;
            // 0x486b6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486B70u;
        goto label_486b70;
    }
    ctx->pc = 0x486B68u;
    {
        const bool branch_taken_0x486b68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x486b68) {
            ctx->pc = 0x486B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486B68u;
            // 0x486b6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486B7Cu;
            goto label_486b7c;
        }
    }
    ctx->pc = 0x486B70u;
label_486b70:
    // 0x486b70: 0xc0400a8  jal         func_1002A0
label_486b74:
    if (ctx->pc == 0x486B74u) {
        ctx->pc = 0x486B74u;
            // 0x486b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486B78u;
        goto label_486b78;
    }
    ctx->pc = 0x486B70u;
    SET_GPR_U32(ctx, 31, 0x486B78u);
    ctx->pc = 0x486B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486B70u;
            // 0x486b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486B78u; }
        if (ctx->pc != 0x486B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486B78u; }
        if (ctx->pc != 0x486B78u) { return; }
    }
    ctx->pc = 0x486B78u;
label_486b78:
    // 0x486b78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x486b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_486b7c:
    // 0x486b7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x486b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_486b80:
    // 0x486b80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486b84:
    // 0x486b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486b88:
    // 0x486b88: 0x3e00008  jr          $ra
label_486b8c:
    if (ctx->pc == 0x486B8Cu) {
        ctx->pc = 0x486B8Cu;
            // 0x486b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x486B90u;
        goto label_486b90;
    }
    ctx->pc = 0x486B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486B88u;
            // 0x486b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486B90u;
label_486b90:
    // 0x486b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x486b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_486b94:
    // 0x486b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x486b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_486b98:
    // 0x486b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_486b9c:
    // 0x486b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486ba0:
    // 0x486ba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x486ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486ba4:
    // 0x486ba4: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_486ba8:
    if (ctx->pc == 0x486BA8u) {
        ctx->pc = 0x486BA8u;
            // 0x486ba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486BACu;
        goto label_486bac;
    }
    ctx->pc = 0x486BA4u;
    {
        const bool branch_taken_0x486ba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x486BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486BA4u;
            // 0x486ba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486ba4) {
            ctx->pc = 0x486C64u;
            goto label_486c64;
        }
    }
    ctx->pc = 0x486BACu;
label_486bac:
    // 0x486bac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x486bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_486bb0:
    // 0x486bb0: 0x2442f5e0  addiu       $v0, $v0, -0xA20
    ctx->pc = 0x486bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964704));
label_486bb4:
    // 0x486bb4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x486bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_486bb8:
    // 0x486bb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x486bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_486bbc:
    // 0x486bbc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x486bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_486bc0:
    // 0x486bc0: 0x320f809  jalr        $t9
label_486bc4:
    if (ctx->pc == 0x486BC4u) {
        ctx->pc = 0x486BC8u;
        goto label_486bc8;
    }
    ctx->pc = 0x486BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x486BC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x486BC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x486BC8u; }
            if (ctx->pc != 0x486BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x486BC8u;
label_486bc8:
    // 0x486bc8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x486bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_486bcc:
    // 0x486bcc: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_486bd0:
    if (ctx->pc == 0x486BD0u) {
        ctx->pc = 0x486BD4u;
        goto label_486bd4;
    }
    ctx->pc = 0x486BCCu;
    {
        const bool branch_taken_0x486bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x486bcc) {
            ctx->pc = 0x486C28u;
            goto label_486c28;
        }
    }
    ctx->pc = 0x486BD4u;
label_486bd4:
    // 0x486bd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x486bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_486bd8:
    // 0x486bd8: 0x2442f6d0  addiu       $v0, $v0, -0x930
    ctx->pc = 0x486bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964944));
label_486bdc:
    // 0x486bdc: 0xc0d37dc  jal         func_34DF70
label_486be0:
    if (ctx->pc == 0x486BE0u) {
        ctx->pc = 0x486BE0u;
            // 0x486be0: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x486BE4u;
        goto label_486be4;
    }
    ctx->pc = 0x486BDCu;
    SET_GPR_U32(ctx, 31, 0x486BE4u);
    ctx->pc = 0x486BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486BDCu;
            // 0x486be0: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486BE4u; }
        if (ctx->pc != 0x486BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486BE4u; }
        if (ctx->pc != 0x486BE4u) { return; }
    }
    ctx->pc = 0x486BE4u;
label_486be4:
    // 0x486be4: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x486be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_486be8:
    // 0x486be8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_486bec:
    if (ctx->pc == 0x486BECu) {
        ctx->pc = 0x486BF0u;
        goto label_486bf0;
    }
    ctx->pc = 0x486BE8u;
    {
        const bool branch_taken_0x486be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x486be8) {
            ctx->pc = 0x486C28u;
            goto label_486c28;
        }
    }
    ctx->pc = 0x486BF0u;
label_486bf0:
    // 0x486bf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x486bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_486bf4:
    // 0x486bf4: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x486bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_486bf8:
    // 0x486bf8: 0xc0d37dc  jal         func_34DF70
label_486bfc:
    if (ctx->pc == 0x486BFCu) {
        ctx->pc = 0x486BFCu;
            // 0x486bfc: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x486C00u;
        goto label_486c00;
    }
    ctx->pc = 0x486BF8u;
    SET_GPR_U32(ctx, 31, 0x486C00u);
    ctx->pc = 0x486BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486BF8u;
            // 0x486bfc: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486C00u; }
        if (ctx->pc != 0x486C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486C00u; }
        if (ctx->pc != 0x486C00u) { return; }
    }
    ctx->pc = 0x486C00u;
label_486c00:
    // 0x486c00: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x486c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_486c04:
    // 0x486c04: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_486c08:
    if (ctx->pc == 0x486C08u) {
        ctx->pc = 0x486C0Cu;
        goto label_486c0c;
    }
    ctx->pc = 0x486C04u;
    {
        const bool branch_taken_0x486c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486c04) {
            ctx->pc = 0x486C28u;
            goto label_486c28;
        }
    }
    ctx->pc = 0x486C0Cu;
label_486c0c:
    // 0x486c0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x486c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_486c10:
    // 0x486c10: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x486c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_486c14:
    // 0x486c14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_486c18:
    if (ctx->pc == 0x486C18u) {
        ctx->pc = 0x486C18u;
            // 0x486c18: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x486C1Cu;
        goto label_486c1c;
    }
    ctx->pc = 0x486C14u;
    {
        const bool branch_taken_0x486c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x486C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486C14u;
            // 0x486c18: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486c14) {
            ctx->pc = 0x486C28u;
            goto label_486c28;
        }
    }
    ctx->pc = 0x486C1Cu;
label_486c1c:
    // 0x486c1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x486c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_486c20:
    // 0x486c20: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x486c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_486c24:
    // 0x486c24: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x486c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_486c28:
    // 0x486c28: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_486c2c:
    if (ctx->pc == 0x486C2Cu) {
        ctx->pc = 0x486C2Cu;
            // 0x486c2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x486C30u;
        goto label_486c30;
    }
    ctx->pc = 0x486C28u;
    {
        const bool branch_taken_0x486c28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x486c28) {
            ctx->pc = 0x486C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486C28u;
            // 0x486c2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486C50u;
            goto label_486c50;
        }
    }
    ctx->pc = 0x486C30u;
label_486c30:
    // 0x486c30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x486c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_486c34:
    // 0x486c34: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x486c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_486c38:
    // 0x486c38: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_486c3c:
    if (ctx->pc == 0x486C3Cu) {
        ctx->pc = 0x486C3Cu;
            // 0x486c3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x486C40u;
        goto label_486c40;
    }
    ctx->pc = 0x486C38u;
    {
        const bool branch_taken_0x486c38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x486C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486C38u;
            // 0x486c3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486c38) {
            ctx->pc = 0x486C4Cu;
            goto label_486c4c;
        }
    }
    ctx->pc = 0x486C40u;
label_486c40:
    // 0x486c40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x486c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_486c44:
    // 0x486c44: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x486c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_486c48:
    // 0x486c48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x486c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_486c4c:
    // 0x486c4c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x486c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_486c50:
    // 0x486c50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x486c50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_486c54:
    // 0x486c54: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_486c58:
    if (ctx->pc == 0x486C58u) {
        ctx->pc = 0x486C58u;
            // 0x486c58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486C5Cu;
        goto label_486c5c;
    }
    ctx->pc = 0x486C54u;
    {
        const bool branch_taken_0x486c54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x486c54) {
            ctx->pc = 0x486C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486C54u;
            // 0x486c58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486C68u;
            goto label_486c68;
        }
    }
    ctx->pc = 0x486C5Cu;
label_486c5c:
    // 0x486c5c: 0xc0400a8  jal         func_1002A0
label_486c60:
    if (ctx->pc == 0x486C60u) {
        ctx->pc = 0x486C60u;
            // 0x486c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486C64u;
        goto label_486c64;
    }
    ctx->pc = 0x486C5Cu;
    SET_GPR_U32(ctx, 31, 0x486C64u);
    ctx->pc = 0x486C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486C5Cu;
            // 0x486c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486C64u; }
        if (ctx->pc != 0x486C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486C64u; }
        if (ctx->pc != 0x486C64u) { return; }
    }
    ctx->pc = 0x486C64u;
label_486c64:
    // 0x486c64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x486c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_486c68:
    // 0x486c68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x486c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_486c6c:
    // 0x486c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486c70:
    // 0x486c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486c74:
    // 0x486c74: 0x3e00008  jr          $ra
label_486c78:
    if (ctx->pc == 0x486C78u) {
        ctx->pc = 0x486C78u;
            // 0x486c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x486C7Cu;
        goto label_486c7c;
    }
    ctx->pc = 0x486C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486C74u;
            // 0x486c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486C7Cu;
label_486c7c:
    // 0x486c7c: 0x0  nop
    ctx->pc = 0x486c7cu;
    // NOP
label_486c80:
    // 0x486c80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x486c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_486c84:
    // 0x486c84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x486c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_486c88:
    // 0x486c88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x486c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_486c8c:
    // 0x486c8c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x486c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_486c90:
    // 0x486c90: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x486c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_486c94:
    // 0x486c94: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x486c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_486c98:
    // 0x486c98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x486c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_486c9c:
    // 0x486c9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x486c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_486ca0:
    // 0x486ca0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x486ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_486ca4:
    // 0x486ca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x486ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_486ca8:
    // 0x486ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_486cac:
    // 0x486cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486cb0:
    // 0x486cb0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x486cb0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_486cb4:
    // 0x486cb4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_486cb8:
    if (ctx->pc == 0x486CB8u) {
        ctx->pc = 0x486CB8u;
            // 0x486cb8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486CBCu;
        goto label_486cbc;
    }
    ctx->pc = 0x486CB4u;
    {
        const bool branch_taken_0x486cb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x486CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486CB4u;
            // 0x486cb8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486cb4) {
            ctx->pc = 0x486D04u;
            goto label_486d04;
        }
    }
    ctx->pc = 0x486CBCu;
label_486cbc:
    // 0x486cbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x486cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_486cc0:
    // 0x486cc0: 0x50a30048  beql        $a1, $v1, . + 4 + (0x48 << 2)
label_486cc4:
    if (ctx->pc == 0x486CC4u) {
        ctx->pc = 0x486CC4u;
            // 0x486cc4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x486CC8u;
        goto label_486cc8;
    }
    ctx->pc = 0x486CC0u;
    {
        const bool branch_taken_0x486cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x486cc0) {
            ctx->pc = 0x486CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486CC0u;
            // 0x486cc4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486DE4u;
            goto label_486de4;
        }
    }
    ctx->pc = 0x486CC8u;
label_486cc8:
    // 0x486cc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x486cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_486ccc:
    // 0x486ccc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_486cd0:
    if (ctx->pc == 0x486CD0u) {
        ctx->pc = 0x486CD4u;
        goto label_486cd4;
    }
    ctx->pc = 0x486CCCu;
    {
        const bool branch_taken_0x486ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x486ccc) {
            ctx->pc = 0x486CDCu;
            goto label_486cdc;
        }
    }
    ctx->pc = 0x486CD4u;
label_486cd4:
    // 0x486cd4: 0x10000042  b           . + 4 + (0x42 << 2)
label_486cd8:
    if (ctx->pc == 0x486CD8u) {
        ctx->pc = 0x486CDCu;
        goto label_486cdc;
    }
    ctx->pc = 0x486CD4u;
    {
        const bool branch_taken_0x486cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486cd4) {
            ctx->pc = 0x486DE0u;
            goto label_486de0;
        }
    }
    ctx->pc = 0x486CDCu;
label_486cdc:
    // 0x486cdc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x486cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_486ce0:
    // 0x486ce0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x486ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_486ce4:
    // 0x486ce4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x486ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_486ce8:
    // 0x486ce8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x486ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_486cec:
    // 0x486cec: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x486cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_486cf0:
    // 0x486cf0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x486cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_486cf4:
    // 0x486cf4: 0x320f809  jalr        $t9
label_486cf8:
    if (ctx->pc == 0x486CF8u) {
        ctx->pc = 0x486CF8u;
            // 0x486cf8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x486CFCu;
        goto label_486cfc;
    }
    ctx->pc = 0x486CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x486CFCu);
        ctx->pc = 0x486CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486CF4u;
            // 0x486cf8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x486CFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x486CFCu; }
            if (ctx->pc != 0x486CFCu) { return; }
        }
        }
    }
    ctx->pc = 0x486CFCu;
label_486cfc:
    // 0x486cfc: 0x10000038  b           . + 4 + (0x38 << 2)
label_486d00:
    if (ctx->pc == 0x486D00u) {
        ctx->pc = 0x486D04u;
        goto label_486d04;
    }
    ctx->pc = 0x486CFCu;
    {
        const bool branch_taken_0x486cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486cfc) {
            ctx->pc = 0x486DE0u;
            goto label_486de0;
        }
    }
    ctx->pc = 0x486D04u;
label_486d04:
    // 0x486d04: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x486d04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_486d08:
    // 0x486d08: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_486d0c:
    if (ctx->pc == 0x486D0Cu) {
        ctx->pc = 0x486D10u;
        goto label_486d10;
    }
    ctx->pc = 0x486D08u;
    {
        const bool branch_taken_0x486d08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x486d08) {
            ctx->pc = 0x486DE0u;
            goto label_486de0;
        }
    }
    ctx->pc = 0x486D10u;
label_486d10:
    // 0x486d10: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x486d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_486d14:
    // 0x486d14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486d18:
    // 0x486d18: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x486d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_486d1c:
    // 0x486d1c: 0x26b00084  addiu       $s0, $s5, 0x84
    ctx->pc = 0x486d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_486d20:
    // 0x486d20: 0x8c56e378  lw          $s6, -0x1C88($v0)
    ctx->pc = 0x486d20u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_486d24:
    // 0x486d24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x486d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486d28:
    // 0x486d28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x486d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486d2c:
    // 0x486d2c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x486d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_486d30:
    // 0x486d30: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x486d30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_486d34:
    // 0x486d34: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x486d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_486d38:
    // 0x486d38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486d3c:
    // 0x486d3c: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x486d3cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_486d40:
    // 0x486d40: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x486d40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_486d44:
    // 0x486d44: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x486d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_486d48:
    // 0x486d48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x486d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_486d4c:
    // 0x486d4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486d50:
    // 0x486d50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x486d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_486d54:
    // 0x486d54: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x486d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_486d58:
    // 0x486d58: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x486d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_486d5c:
    // 0x486d5c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x486d5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_486d60:
    // 0x486d60: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x486d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_486d64:
    // 0x486d64: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x486d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_486d68:
    // 0x486d68: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x486d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_486d6c:
    // 0x486d6c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x486d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_486d70:
    // 0x486d70: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x486d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_486d74:
    // 0x486d74: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x486d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_486d78:
    // 0x486d78: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x486d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_486d7c:
    // 0x486d7c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x486d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_486d80:
    // 0x486d80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x486d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_486d84:
    // 0x486d84: 0xc122170  jal         func_4885C0
label_486d88:
    if (ctx->pc == 0x486D88u) {
        ctx->pc = 0x486D88u;
            // 0x486d88: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486D8Cu;
        goto label_486d8c;
    }
    ctx->pc = 0x486D84u;
    SET_GPR_U32(ctx, 31, 0x486D8Cu);
    ctx->pc = 0x486D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486D84u;
            // 0x486d88: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4885C0u;
    if (runtime->hasFunction(0x4885C0u)) {
        auto targetFn = runtime->lookupFunction(0x4885C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486D8Cu; }
        if (ctx->pc != 0x486D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004885C0_0x4885c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486D8Cu; }
        if (ctx->pc != 0x486D8Cu) { return; }
    }
    ctx->pc = 0x486D8Cu;
label_486d8c:
    // 0x486d8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x486d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_486d90:
    // 0x486d90: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x486d90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_486d94:
    // 0x486d94: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_486d98:
    if (ctx->pc == 0x486D98u) {
        ctx->pc = 0x486D98u;
            // 0x486d98: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x486D9Cu;
        goto label_486d9c;
    }
    ctx->pc = 0x486D94u;
    {
        const bool branch_taken_0x486d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x486D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486D94u;
            // 0x486d98: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486d94) {
            ctx->pc = 0x486D64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_486d64;
        }
    }
    ctx->pc = 0x486D9Cu;
label_486d9c:
    // 0x486d9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x486d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_486da0:
    // 0x486da0: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x486da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_486da4:
    // 0x486da4: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_486da8:
    if (ctx->pc == 0x486DA8u) {
        ctx->pc = 0x486DACu;
        goto label_486dac;
    }
    ctx->pc = 0x486DA4u;
    {
        const bool branch_taken_0x486da4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x486da4) {
            ctx->pc = 0x486DE0u;
            goto label_486de0;
        }
    }
    ctx->pc = 0x486DACu;
label_486dac:
    // 0x486dac: 0xc04e738  jal         func_139CE0
label_486db0:
    if (ctx->pc == 0x486DB0u) {
        ctx->pc = 0x486DB0u;
            // 0x486db0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x486DB4u;
        goto label_486db4;
    }
    ctx->pc = 0x486DACu;
    SET_GPR_U32(ctx, 31, 0x486DB4u);
    ctx->pc = 0x486DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486DACu;
            // 0x486db0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486DB4u; }
        if (ctx->pc != 0x486DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486DB4u; }
        if (ctx->pc != 0x486DB4u) { return; }
    }
    ctx->pc = 0x486DB4u;
label_486db4:
    // 0x486db4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486db8:
    // 0x486db8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x486db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_486dbc:
    // 0x486dbc: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x486dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_486dc0:
    // 0x486dc0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x486dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_486dc4:
    // 0x486dc4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x486dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_486dc8:
    // 0x486dc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486dcc:
    // 0x486dcc: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x486dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_486dd0:
    // 0x486dd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486dd4:
    // 0x486dd4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x486dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_486dd8:
    // 0x486dd8: 0xc055ea8  jal         func_157AA0
label_486ddc:
    if (ctx->pc == 0x486DDCu) {
        ctx->pc = 0x486DDCu;
            // 0x486ddc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486DE0u;
        goto label_486de0;
    }
    ctx->pc = 0x486DD8u;
    SET_GPR_U32(ctx, 31, 0x486DE0u);
    ctx->pc = 0x486DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486DD8u;
            // 0x486ddc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486DE0u; }
        if (ctx->pc != 0x486DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486DE0u; }
        if (ctx->pc != 0x486DE0u) { return; }
    }
    ctx->pc = 0x486DE0u;
label_486de0:
    // 0x486de0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x486de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_486de4:
    // 0x486de4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x486de4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_486de8:
    // 0x486de8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x486de8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_486dec:
    // 0x486dec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x486decu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_486df0:
    // 0x486df0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x486df0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_486df4:
    // 0x486df4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x486df4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_486df8:
    // 0x486df8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x486df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_486dfc:
    // 0x486dfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x486dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_486e00:
    // 0x486e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486e04:
    // 0x486e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486e08:
    // 0x486e08: 0x3e00008  jr          $ra
label_486e0c:
    if (ctx->pc == 0x486E0Cu) {
        ctx->pc = 0x486E0Cu;
            // 0x486e0c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x486E10u;
        goto label_486e10;
    }
    ctx->pc = 0x486E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486E08u;
            // 0x486e0c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486E10u;
label_486e10:
    // 0x486e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x486e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_486e14:
    // 0x486e14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x486e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_486e18:
    // 0x486e18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x486e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_486e1c:
    // 0x486e1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x486e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_486e20:
    // 0x486e20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x486e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_486e24:
    // 0x486e24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_486e28:
    // 0x486e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486e2c:
    // 0x486e2c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x486e2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_486e30:
    // 0x486e30: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_486e34:
    if (ctx->pc == 0x486E34u) {
        ctx->pc = 0x486E34u;
            // 0x486e34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486E38u;
        goto label_486e38;
    }
    ctx->pc = 0x486E30u;
    {
        const bool branch_taken_0x486e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x486E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486E30u;
            // 0x486e34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486e30) {
            ctx->pc = 0x486E64u;
            goto label_486e64;
        }
    }
    ctx->pc = 0x486E38u;
label_486e38:
    // 0x486e38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x486e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_486e3c:
    // 0x486e3c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_486e40:
    if (ctx->pc == 0x486E40u) {
        ctx->pc = 0x486E40u;
            // 0x486e40: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x486E44u;
        goto label_486e44;
    }
    ctx->pc = 0x486E3Cu;
    {
        const bool branch_taken_0x486e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x486e3c) {
            ctx->pc = 0x486E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486E3Cu;
            // 0x486e40: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486E58u;
            goto label_486e58;
        }
    }
    ctx->pc = 0x486E44u;
label_486e44:
    // 0x486e44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x486e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_486e48:
    // 0x486e48: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
label_486e4c:
    if (ctx->pc == 0x486E4Cu) {
        ctx->pc = 0x486E50u;
        goto label_486e50;
    }
    ctx->pc = 0x486E48u;
    {
        const bool branch_taken_0x486e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x486e48) {
            ctx->pc = 0x486EB0u;
            goto label_486eb0;
        }
    }
    ctx->pc = 0x486E50u;
label_486e50:
    // 0x486e50: 0x10000017  b           . + 4 + (0x17 << 2)
label_486e54:
    if (ctx->pc == 0x486E54u) {
        ctx->pc = 0x486E58u;
        goto label_486e58;
    }
    ctx->pc = 0x486E50u;
    {
        const bool branch_taken_0x486e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486e50) {
            ctx->pc = 0x486EB0u;
            goto label_486eb0;
        }
    }
    ctx->pc = 0x486E58u;
label_486e58:
    // 0x486e58: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x486e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_486e5c:
    // 0x486e5c: 0x320f809  jalr        $t9
label_486e60:
    if (ctx->pc == 0x486E60u) {
        ctx->pc = 0x486E64u;
        goto label_486e64;
    }
    ctx->pc = 0x486E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x486E64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x486E64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x486E64u; }
            if (ctx->pc != 0x486E64u) { return; }
        }
        }
    }
    ctx->pc = 0x486E64u;
label_486e64:
    // 0x486e64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x486e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_486e68:
    // 0x486e68: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x486e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_486e6c:
    // 0x486e6c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x486e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_486e70:
    // 0x486e70: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x486e70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_486e74:
    // 0x486e74: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_486e78:
    if (ctx->pc == 0x486E78u) {
        ctx->pc = 0x486E7Cu;
        goto label_486e7c;
    }
    ctx->pc = 0x486E74u;
    {
        const bool branch_taken_0x486e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x486e74) {
            ctx->pc = 0x486EB0u;
            goto label_486eb0;
        }
    }
    ctx->pc = 0x486E7Cu;
label_486e7c:
    // 0x486e7c: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x486e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_486e80:
    // 0x486e80: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_486e84:
    if (ctx->pc == 0x486E84u) {
        ctx->pc = 0x486E88u;
        goto label_486e88;
    }
    ctx->pc = 0x486E80u;
    {
        const bool branch_taken_0x486e80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x486e80) {
            ctx->pc = 0x486EB0u;
            goto label_486eb0;
        }
    }
    ctx->pc = 0x486E88u;
label_486e88:
    // 0x486e88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x486e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486e8c:
    // 0x486e8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x486e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486e90:
    // 0x486e90: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x486e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_486e94:
    // 0x486e94: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x486e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_486e98:
    // 0x486e98: 0xc1221a0  jal         func_488680
label_486e9c:
    if (ctx->pc == 0x486E9Cu) {
        ctx->pc = 0x486E9Cu;
            // 0x486e9c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x486EA0u;
        goto label_486ea0;
    }
    ctx->pc = 0x486E98u;
    SET_GPR_U32(ctx, 31, 0x486EA0u);
    ctx->pc = 0x486E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486E98u;
            // 0x486e9c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x488680u;
    if (runtime->hasFunction(0x488680u)) {
        auto targetFn = runtime->lookupFunction(0x488680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486EA0u; }
        if (ctx->pc != 0x486EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00488680_0x488680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486EA0u; }
        if (ctx->pc != 0x486EA0u) { return; }
    }
    ctx->pc = 0x486EA0u;
label_486ea0:
    // 0x486ea0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x486ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_486ea4:
    // 0x486ea4: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x486ea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_486ea8:
    // 0x486ea8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_486eac:
    if (ctx->pc == 0x486EACu) {
        ctx->pc = 0x486EACu;
            // 0x486eac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x486EB0u;
        goto label_486eb0;
    }
    ctx->pc = 0x486EA8u;
    {
        const bool branch_taken_0x486ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x486EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486EA8u;
            // 0x486eac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486ea8) {
            ctx->pc = 0x486E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_486e90;
        }
    }
    ctx->pc = 0x486EB0u;
label_486eb0:
    // 0x486eb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x486eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_486eb4:
    // 0x486eb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x486eb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_486eb8:
    // 0x486eb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x486eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_486ebc:
    // 0x486ebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486ec0:
    // 0x486ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486ec4:
    // 0x486ec4: 0x3e00008  jr          $ra
label_486ec8:
    if (ctx->pc == 0x486EC8u) {
        ctx->pc = 0x486EC8u;
            // 0x486ec8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x486ECCu;
        goto label_486ecc;
    }
    ctx->pc = 0x486EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486EC4u;
            // 0x486ec8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486ECCu;
label_486ecc:
    // 0x486ecc: 0x0  nop
    ctx->pc = 0x486eccu;
    // NOP
label_486ed0:
    // 0x486ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x486ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_486ed4:
    // 0x486ed4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x486ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_486ed8:
    // 0x486ed8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x486ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_486edc:
    // 0x486edc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x486edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_486ee0:
    // 0x486ee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_486ee4:
    // 0x486ee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486ee8:
    // 0x486ee8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x486ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_486eec:
    // 0x486eec: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_486ef0:
    if (ctx->pc == 0x486EF0u) {
        ctx->pc = 0x486EF0u;
            // 0x486ef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486EF4u;
        goto label_486ef4;
    }
    ctx->pc = 0x486EECu;
    {
        const bool branch_taken_0x486eec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x486EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486EECu;
            // 0x486ef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486eec) {
            ctx->pc = 0x486F20u;
            goto label_486f20;
        }
    }
    ctx->pc = 0x486EF4u;
label_486ef4:
    // 0x486ef4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x486ef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486ef8:
    // 0x486ef8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x486ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486efc:
    // 0x486efc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x486efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_486f00:
    // 0x486f00: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x486f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_486f04:
    // 0x486f04: 0xc1222bc  jal         func_488AF0
label_486f08:
    if (ctx->pc == 0x486F08u) {
        ctx->pc = 0x486F08u;
            // 0x486f08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x486F0Cu;
        goto label_486f0c;
    }
    ctx->pc = 0x486F04u;
    SET_GPR_U32(ctx, 31, 0x486F0Cu);
    ctx->pc = 0x486F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486F04u;
            // 0x486f08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x488AF0u;
    if (runtime->hasFunction(0x488AF0u)) {
        auto targetFn = runtime->lookupFunction(0x488AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486F0Cu; }
        if (ctx->pc != 0x486F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00488AF0_0x488af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486F0Cu; }
        if (ctx->pc != 0x486F0Cu) { return; }
    }
    ctx->pc = 0x486F0Cu;
label_486f0c:
    // 0x486f0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x486f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_486f10:
    // 0x486f10: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x486f10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_486f14:
    // 0x486f14: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_486f18:
    if (ctx->pc == 0x486F18u) {
        ctx->pc = 0x486F18u;
            // 0x486f18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x486F1Cu;
        goto label_486f1c;
    }
    ctx->pc = 0x486F14u;
    {
        const bool branch_taken_0x486f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x486F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486F14u;
            // 0x486f18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486f14) {
            ctx->pc = 0x486EFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_486efc;
        }
    }
    ctx->pc = 0x486F1Cu;
label_486f1c:
    // 0x486f1c: 0x0  nop
    ctx->pc = 0x486f1cu;
    // NOP
label_486f20:
    // 0x486f20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x486f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_486f24:
    // 0x486f24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x486f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_486f28:
    // 0x486f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x486f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_486f2c:
    // 0x486f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486f30:
    // 0x486f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486f34:
    // 0x486f34: 0x3e00008  jr          $ra
label_486f38:
    if (ctx->pc == 0x486F38u) {
        ctx->pc = 0x486F38u;
            // 0x486f38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x486F3Cu;
        goto label_486f3c;
    }
    ctx->pc = 0x486F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486F34u;
            // 0x486f38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486F3Cu;
label_486f3c:
    // 0x486f3c: 0x0  nop
    ctx->pc = 0x486f3cu;
    // NOP
}
