#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00399A80
// Address: 0x399a80 - 0x399ed0
void sub_00399A80_0x399a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399A80_0x399a80");
#endif

    switch (ctx->pc) {
        case 0x399a80u: goto label_399a80;
        case 0x399a84u: goto label_399a84;
        case 0x399a88u: goto label_399a88;
        case 0x399a8cu: goto label_399a8c;
        case 0x399a90u: goto label_399a90;
        case 0x399a94u: goto label_399a94;
        case 0x399a98u: goto label_399a98;
        case 0x399a9cu: goto label_399a9c;
        case 0x399aa0u: goto label_399aa0;
        case 0x399aa4u: goto label_399aa4;
        case 0x399aa8u: goto label_399aa8;
        case 0x399aacu: goto label_399aac;
        case 0x399ab0u: goto label_399ab0;
        case 0x399ab4u: goto label_399ab4;
        case 0x399ab8u: goto label_399ab8;
        case 0x399abcu: goto label_399abc;
        case 0x399ac0u: goto label_399ac0;
        case 0x399ac4u: goto label_399ac4;
        case 0x399ac8u: goto label_399ac8;
        case 0x399accu: goto label_399acc;
        case 0x399ad0u: goto label_399ad0;
        case 0x399ad4u: goto label_399ad4;
        case 0x399ad8u: goto label_399ad8;
        case 0x399adcu: goto label_399adc;
        case 0x399ae0u: goto label_399ae0;
        case 0x399ae4u: goto label_399ae4;
        case 0x399ae8u: goto label_399ae8;
        case 0x399aecu: goto label_399aec;
        case 0x399af0u: goto label_399af0;
        case 0x399af4u: goto label_399af4;
        case 0x399af8u: goto label_399af8;
        case 0x399afcu: goto label_399afc;
        case 0x399b00u: goto label_399b00;
        case 0x399b04u: goto label_399b04;
        case 0x399b08u: goto label_399b08;
        case 0x399b0cu: goto label_399b0c;
        case 0x399b10u: goto label_399b10;
        case 0x399b14u: goto label_399b14;
        case 0x399b18u: goto label_399b18;
        case 0x399b1cu: goto label_399b1c;
        case 0x399b20u: goto label_399b20;
        case 0x399b24u: goto label_399b24;
        case 0x399b28u: goto label_399b28;
        case 0x399b2cu: goto label_399b2c;
        case 0x399b30u: goto label_399b30;
        case 0x399b34u: goto label_399b34;
        case 0x399b38u: goto label_399b38;
        case 0x399b3cu: goto label_399b3c;
        case 0x399b40u: goto label_399b40;
        case 0x399b44u: goto label_399b44;
        case 0x399b48u: goto label_399b48;
        case 0x399b4cu: goto label_399b4c;
        case 0x399b50u: goto label_399b50;
        case 0x399b54u: goto label_399b54;
        case 0x399b58u: goto label_399b58;
        case 0x399b5cu: goto label_399b5c;
        case 0x399b60u: goto label_399b60;
        case 0x399b64u: goto label_399b64;
        case 0x399b68u: goto label_399b68;
        case 0x399b6cu: goto label_399b6c;
        case 0x399b70u: goto label_399b70;
        case 0x399b74u: goto label_399b74;
        case 0x399b78u: goto label_399b78;
        case 0x399b7cu: goto label_399b7c;
        case 0x399b80u: goto label_399b80;
        case 0x399b84u: goto label_399b84;
        case 0x399b88u: goto label_399b88;
        case 0x399b8cu: goto label_399b8c;
        case 0x399b90u: goto label_399b90;
        case 0x399b94u: goto label_399b94;
        case 0x399b98u: goto label_399b98;
        case 0x399b9cu: goto label_399b9c;
        case 0x399ba0u: goto label_399ba0;
        case 0x399ba4u: goto label_399ba4;
        case 0x399ba8u: goto label_399ba8;
        case 0x399bacu: goto label_399bac;
        case 0x399bb0u: goto label_399bb0;
        case 0x399bb4u: goto label_399bb4;
        case 0x399bb8u: goto label_399bb8;
        case 0x399bbcu: goto label_399bbc;
        case 0x399bc0u: goto label_399bc0;
        case 0x399bc4u: goto label_399bc4;
        case 0x399bc8u: goto label_399bc8;
        case 0x399bccu: goto label_399bcc;
        case 0x399bd0u: goto label_399bd0;
        case 0x399bd4u: goto label_399bd4;
        case 0x399bd8u: goto label_399bd8;
        case 0x399bdcu: goto label_399bdc;
        case 0x399be0u: goto label_399be0;
        case 0x399be4u: goto label_399be4;
        case 0x399be8u: goto label_399be8;
        case 0x399becu: goto label_399bec;
        case 0x399bf0u: goto label_399bf0;
        case 0x399bf4u: goto label_399bf4;
        case 0x399bf8u: goto label_399bf8;
        case 0x399bfcu: goto label_399bfc;
        case 0x399c00u: goto label_399c00;
        case 0x399c04u: goto label_399c04;
        case 0x399c08u: goto label_399c08;
        case 0x399c0cu: goto label_399c0c;
        case 0x399c10u: goto label_399c10;
        case 0x399c14u: goto label_399c14;
        case 0x399c18u: goto label_399c18;
        case 0x399c1cu: goto label_399c1c;
        case 0x399c20u: goto label_399c20;
        case 0x399c24u: goto label_399c24;
        case 0x399c28u: goto label_399c28;
        case 0x399c2cu: goto label_399c2c;
        case 0x399c30u: goto label_399c30;
        case 0x399c34u: goto label_399c34;
        case 0x399c38u: goto label_399c38;
        case 0x399c3cu: goto label_399c3c;
        case 0x399c40u: goto label_399c40;
        case 0x399c44u: goto label_399c44;
        case 0x399c48u: goto label_399c48;
        case 0x399c4cu: goto label_399c4c;
        case 0x399c50u: goto label_399c50;
        case 0x399c54u: goto label_399c54;
        case 0x399c58u: goto label_399c58;
        case 0x399c5cu: goto label_399c5c;
        case 0x399c60u: goto label_399c60;
        case 0x399c64u: goto label_399c64;
        case 0x399c68u: goto label_399c68;
        case 0x399c6cu: goto label_399c6c;
        case 0x399c70u: goto label_399c70;
        case 0x399c74u: goto label_399c74;
        case 0x399c78u: goto label_399c78;
        case 0x399c7cu: goto label_399c7c;
        case 0x399c80u: goto label_399c80;
        case 0x399c84u: goto label_399c84;
        case 0x399c88u: goto label_399c88;
        case 0x399c8cu: goto label_399c8c;
        case 0x399c90u: goto label_399c90;
        case 0x399c94u: goto label_399c94;
        case 0x399c98u: goto label_399c98;
        case 0x399c9cu: goto label_399c9c;
        case 0x399ca0u: goto label_399ca0;
        case 0x399ca4u: goto label_399ca4;
        case 0x399ca8u: goto label_399ca8;
        case 0x399cacu: goto label_399cac;
        case 0x399cb0u: goto label_399cb0;
        case 0x399cb4u: goto label_399cb4;
        case 0x399cb8u: goto label_399cb8;
        case 0x399cbcu: goto label_399cbc;
        case 0x399cc0u: goto label_399cc0;
        case 0x399cc4u: goto label_399cc4;
        case 0x399cc8u: goto label_399cc8;
        case 0x399cccu: goto label_399ccc;
        case 0x399cd0u: goto label_399cd0;
        case 0x399cd4u: goto label_399cd4;
        case 0x399cd8u: goto label_399cd8;
        case 0x399cdcu: goto label_399cdc;
        case 0x399ce0u: goto label_399ce0;
        case 0x399ce4u: goto label_399ce4;
        case 0x399ce8u: goto label_399ce8;
        case 0x399cecu: goto label_399cec;
        case 0x399cf0u: goto label_399cf0;
        case 0x399cf4u: goto label_399cf4;
        case 0x399cf8u: goto label_399cf8;
        case 0x399cfcu: goto label_399cfc;
        case 0x399d00u: goto label_399d00;
        case 0x399d04u: goto label_399d04;
        case 0x399d08u: goto label_399d08;
        case 0x399d0cu: goto label_399d0c;
        case 0x399d10u: goto label_399d10;
        case 0x399d14u: goto label_399d14;
        case 0x399d18u: goto label_399d18;
        case 0x399d1cu: goto label_399d1c;
        case 0x399d20u: goto label_399d20;
        case 0x399d24u: goto label_399d24;
        case 0x399d28u: goto label_399d28;
        case 0x399d2cu: goto label_399d2c;
        case 0x399d30u: goto label_399d30;
        case 0x399d34u: goto label_399d34;
        case 0x399d38u: goto label_399d38;
        case 0x399d3cu: goto label_399d3c;
        case 0x399d40u: goto label_399d40;
        case 0x399d44u: goto label_399d44;
        case 0x399d48u: goto label_399d48;
        case 0x399d4cu: goto label_399d4c;
        case 0x399d50u: goto label_399d50;
        case 0x399d54u: goto label_399d54;
        case 0x399d58u: goto label_399d58;
        case 0x399d5cu: goto label_399d5c;
        case 0x399d60u: goto label_399d60;
        case 0x399d64u: goto label_399d64;
        case 0x399d68u: goto label_399d68;
        case 0x399d6cu: goto label_399d6c;
        case 0x399d70u: goto label_399d70;
        case 0x399d74u: goto label_399d74;
        case 0x399d78u: goto label_399d78;
        case 0x399d7cu: goto label_399d7c;
        case 0x399d80u: goto label_399d80;
        case 0x399d84u: goto label_399d84;
        case 0x399d88u: goto label_399d88;
        case 0x399d8cu: goto label_399d8c;
        case 0x399d90u: goto label_399d90;
        case 0x399d94u: goto label_399d94;
        case 0x399d98u: goto label_399d98;
        case 0x399d9cu: goto label_399d9c;
        case 0x399da0u: goto label_399da0;
        case 0x399da4u: goto label_399da4;
        case 0x399da8u: goto label_399da8;
        case 0x399dacu: goto label_399dac;
        case 0x399db0u: goto label_399db0;
        case 0x399db4u: goto label_399db4;
        case 0x399db8u: goto label_399db8;
        case 0x399dbcu: goto label_399dbc;
        case 0x399dc0u: goto label_399dc0;
        case 0x399dc4u: goto label_399dc4;
        case 0x399dc8u: goto label_399dc8;
        case 0x399dccu: goto label_399dcc;
        case 0x399dd0u: goto label_399dd0;
        case 0x399dd4u: goto label_399dd4;
        case 0x399dd8u: goto label_399dd8;
        case 0x399ddcu: goto label_399ddc;
        case 0x399de0u: goto label_399de0;
        case 0x399de4u: goto label_399de4;
        case 0x399de8u: goto label_399de8;
        case 0x399decu: goto label_399dec;
        case 0x399df0u: goto label_399df0;
        case 0x399df4u: goto label_399df4;
        case 0x399df8u: goto label_399df8;
        case 0x399dfcu: goto label_399dfc;
        case 0x399e00u: goto label_399e00;
        case 0x399e04u: goto label_399e04;
        case 0x399e08u: goto label_399e08;
        case 0x399e0cu: goto label_399e0c;
        case 0x399e10u: goto label_399e10;
        case 0x399e14u: goto label_399e14;
        case 0x399e18u: goto label_399e18;
        case 0x399e1cu: goto label_399e1c;
        case 0x399e20u: goto label_399e20;
        case 0x399e24u: goto label_399e24;
        case 0x399e28u: goto label_399e28;
        case 0x399e2cu: goto label_399e2c;
        case 0x399e30u: goto label_399e30;
        case 0x399e34u: goto label_399e34;
        case 0x399e38u: goto label_399e38;
        case 0x399e3cu: goto label_399e3c;
        case 0x399e40u: goto label_399e40;
        case 0x399e44u: goto label_399e44;
        case 0x399e48u: goto label_399e48;
        case 0x399e4cu: goto label_399e4c;
        case 0x399e50u: goto label_399e50;
        case 0x399e54u: goto label_399e54;
        case 0x399e58u: goto label_399e58;
        case 0x399e5cu: goto label_399e5c;
        case 0x399e60u: goto label_399e60;
        case 0x399e64u: goto label_399e64;
        case 0x399e68u: goto label_399e68;
        case 0x399e6cu: goto label_399e6c;
        case 0x399e70u: goto label_399e70;
        case 0x399e74u: goto label_399e74;
        case 0x399e78u: goto label_399e78;
        case 0x399e7cu: goto label_399e7c;
        case 0x399e80u: goto label_399e80;
        case 0x399e84u: goto label_399e84;
        case 0x399e88u: goto label_399e88;
        case 0x399e8cu: goto label_399e8c;
        case 0x399e90u: goto label_399e90;
        case 0x399e94u: goto label_399e94;
        case 0x399e98u: goto label_399e98;
        case 0x399e9cu: goto label_399e9c;
        case 0x399ea0u: goto label_399ea0;
        case 0x399ea4u: goto label_399ea4;
        case 0x399ea8u: goto label_399ea8;
        case 0x399eacu: goto label_399eac;
        case 0x399eb0u: goto label_399eb0;
        case 0x399eb4u: goto label_399eb4;
        case 0x399eb8u: goto label_399eb8;
        case 0x399ebcu: goto label_399ebc;
        case 0x399ec0u: goto label_399ec0;
        case 0x399ec4u: goto label_399ec4;
        case 0x399ec8u: goto label_399ec8;
        case 0x399eccu: goto label_399ecc;
        default: break;
    }

    ctx->pc = 0x399a80u;

label_399a80:
    // 0x399a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x399a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_399a84:
    // 0x399a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x399a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_399a88:
    // 0x399a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x399a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_399a8c:
    // 0x399a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x399a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_399a90:
    // 0x399a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x399a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399a94:
    // 0x399a94: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x399a94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_399a98:
    // 0x399a98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x399a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_399a9c:
    // 0x399a9c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x399a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_399aa0:
    // 0x399aa0: 0x320f809  jalr        $t9
label_399aa4:
    if (ctx->pc == 0x399AA4u) {
        ctx->pc = 0x399AA4u;
            // 0x399aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399AA8u;
        goto label_399aa8;
    }
    ctx->pc = 0x399AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x399AA8u);
        ctx->pc = 0x399AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399AA0u;
            // 0x399aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x399AA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x399AA8u; }
            if (ctx->pc != 0x399AA8u) { return; }
        }
        }
    }
    ctx->pc = 0x399AA8u;
label_399aa8:
    // 0x399aa8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x399aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_399aac:
    // 0x399aac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x399aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_399ab0:
    // 0x399ab0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x399ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_399ab4:
    // 0x399ab4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x399ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_399ab8:
    // 0x399ab8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x399ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_399abc:
    // 0x399abc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x399abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_399ac0:
    // 0x399ac0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x399ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_399ac4:
    // 0x399ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_399ac8:
    // 0x399ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x399ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399acc:
    // 0x399acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x399accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_399ad0:
    // 0x399ad0: 0x3e00008  jr          $ra
label_399ad4:
    if (ctx->pc == 0x399AD4u) {
        ctx->pc = 0x399AD4u;
            // 0x399ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x399AD8u;
        goto label_399ad8;
    }
    ctx->pc = 0x399AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399AD0u;
            // 0x399ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x399AD8u;
label_399ad8:
    // 0x399ad8: 0x0  nop
    ctx->pc = 0x399ad8u;
    // NOP
label_399adc:
    // 0x399adc: 0x0  nop
    ctx->pc = 0x399adcu;
    // NOP
label_399ae0:
    // 0x399ae0: 0x80e5bc4  j           func_396F10
label_399ae4:
    if (ctx->pc == 0x399AE4u) {
        ctx->pc = 0x399AE4u;
            // 0x399ae4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x399AE8u;
        goto label_399ae8;
    }
    ctx->pc = 0x399AE0u;
    ctx->pc = 0x399AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399AE0u;
            // 0x399ae4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x396F10u;
    {
        auto targetFn = runtime->lookupFunction(0x396F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x399AE8u;
label_399ae8:
    // 0x399ae8: 0x0  nop
    ctx->pc = 0x399ae8u;
    // NOP
label_399aec:
    // 0x399aec: 0x0  nop
    ctx->pc = 0x399aecu;
    // NOP
label_399af0:
    // 0x399af0: 0x80e60b4  j           func_3982D0
label_399af4:
    if (ctx->pc == 0x399AF4u) {
        ctx->pc = 0x399AF4u;
            // 0x399af4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x399AF8u;
        goto label_399af8;
    }
    ctx->pc = 0x399AF0u;
    ctx->pc = 0x399AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399AF0u;
            // 0x399af4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3982D0u;
    {
        auto targetFn = runtime->lookupFunction(0x3982D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x399AF8u;
label_399af8:
    // 0x399af8: 0x0  nop
    ctx->pc = 0x399af8u;
    // NOP
label_399afc:
    // 0x399afc: 0x0  nop
    ctx->pc = 0x399afcu;
    // NOP
label_399b00:
    // 0x399b00: 0x80e5b40  j           func_396D00
label_399b04:
    if (ctx->pc == 0x399B04u) {
        ctx->pc = 0x399B04u;
            // 0x399b04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x399B08u;
        goto label_399b08;
    }
    ctx->pc = 0x399B00u;
    ctx->pc = 0x399B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399B00u;
            // 0x399b04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x396D00u;
    {
        auto targetFn = runtime->lookupFunction(0x396D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x399B08u;
label_399b08:
    // 0x399b08: 0x0  nop
    ctx->pc = 0x399b08u;
    // NOP
label_399b0c:
    // 0x399b0c: 0x0  nop
    ctx->pc = 0x399b0cu;
    // NOP
label_399b10:
    // 0x399b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x399b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_399b14:
    // 0x399b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x399b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_399b18:
    // 0x399b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x399b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_399b1c:
    // 0x399b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x399b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_399b20:
    // 0x399b20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399b24:
    // 0x399b24: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_399b28:
    if (ctx->pc == 0x399B28u) {
        ctx->pc = 0x399B28u;
            // 0x399b28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399B2Cu;
        goto label_399b2c;
    }
    ctx->pc = 0x399B24u;
    {
        const bool branch_taken_0x399b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x399B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399B24u;
            // 0x399b28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b24) {
            ctx->pc = 0x399B90u;
            goto label_399b90;
        }
    }
    ctx->pc = 0x399B2Cu;
label_399b2c:
    // 0x399b2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x399b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_399b30:
    // 0x399b30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x399b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_399b34:
    // 0x399b34: 0x24638270  addiu       $v1, $v1, -0x7D90
    ctx->pc = 0x399b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935152));
label_399b38:
    // 0x399b38: 0x244282a8  addiu       $v0, $v0, -0x7D58
    ctx->pc = 0x399b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935208));
label_399b3c:
    // 0x399b3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x399b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_399b40:
    // 0x399b40: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_399b44:
    if (ctx->pc == 0x399B44u) {
        ctx->pc = 0x399B44u;
            // 0x399b44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x399B48u;
        goto label_399b48;
    }
    ctx->pc = 0x399B40u;
    {
        const bool branch_taken_0x399b40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x399B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399B40u;
            // 0x399b44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b40) {
            ctx->pc = 0x399B78u;
            goto label_399b78;
        }
    }
    ctx->pc = 0x399B48u;
label_399b48:
    // 0x399b48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x399b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_399b4c:
    // 0x399b4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x399b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_399b50:
    // 0x399b50: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x399b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
label_399b54:
    // 0x399b54: 0x24420738  addiu       $v0, $v0, 0x738
    ctx->pc = 0x399b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1848));
label_399b58:
    // 0x399b58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x399b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_399b5c:
    // 0x399b5c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x399b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_399b60:
    // 0x399b60: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x399b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_399b64:
    // 0x399b64: 0xc0aed1c  jal         func_2BB470
label_399b68:
    if (ctx->pc == 0x399B68u) {
        ctx->pc = 0x399B68u;
            // 0x399b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399B6Cu;
        goto label_399b6c;
    }
    ctx->pc = 0x399B64u;
    SET_GPR_U32(ctx, 31, 0x399B6Cu);
    ctx->pc = 0x399B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399B64u;
            // 0x399b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399B6Cu; }
        if (ctx->pc != 0x399B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399B6Cu; }
        if (ctx->pc != 0x399B6Cu) { return; }
    }
    ctx->pc = 0x399B6Cu;
label_399b6c:
    // 0x399b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399b70:
    // 0x399b70: 0xc0b2214  jal         func_2C8850
label_399b74:
    if (ctx->pc == 0x399B74u) {
        ctx->pc = 0x399B74u;
            // 0x399b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399B78u;
        goto label_399b78;
    }
    ctx->pc = 0x399B70u;
    SET_GPR_U32(ctx, 31, 0x399B78u);
    ctx->pc = 0x399B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399B70u;
            // 0x399b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (runtime->hasFunction(0x2C8850u)) {
        auto targetFn = runtime->lookupFunction(0x2C8850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399B78u; }
        if (ctx->pc != 0x399B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8850_0x2c8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399B78u; }
        if (ctx->pc != 0x399B78u) { return; }
    }
    ctx->pc = 0x399B78u;
label_399b78:
    // 0x399b78: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x399b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_399b7c:
    // 0x399b7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x399b7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_399b80:
    // 0x399b80: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_399b84:
    if (ctx->pc == 0x399B84u) {
        ctx->pc = 0x399B84u;
            // 0x399b84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399B88u;
        goto label_399b88;
    }
    ctx->pc = 0x399B80u;
    {
        const bool branch_taken_0x399b80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x399b80) {
            ctx->pc = 0x399B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x399B80u;
            // 0x399b84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x399B94u;
            goto label_399b94;
        }
    }
    ctx->pc = 0x399B88u;
label_399b88:
    // 0x399b88: 0xc0400a8  jal         func_1002A0
label_399b8c:
    if (ctx->pc == 0x399B8Cu) {
        ctx->pc = 0x399B8Cu;
            // 0x399b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399B90u;
        goto label_399b90;
    }
    ctx->pc = 0x399B88u;
    SET_GPR_U32(ctx, 31, 0x399B90u);
    ctx->pc = 0x399B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399B88u;
            // 0x399b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399B90u; }
        if (ctx->pc != 0x399B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399B90u; }
        if (ctx->pc != 0x399B90u) { return; }
    }
    ctx->pc = 0x399B90u;
label_399b90:
    // 0x399b90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399b94:
    // 0x399b94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_399b98:
    // 0x399b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x399b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399b9c:
    // 0x399b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x399b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_399ba0:
    // 0x399ba0: 0x3e00008  jr          $ra
label_399ba4:
    if (ctx->pc == 0x399BA4u) {
        ctx->pc = 0x399BA4u;
            // 0x399ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x399BA8u;
        goto label_399ba8;
    }
    ctx->pc = 0x399BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399BA0u;
            // 0x399ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x399BA8u;
label_399ba8:
    // 0x399ba8: 0x0  nop
    ctx->pc = 0x399ba8u;
    // NOP
label_399bac:
    // 0x399bac: 0x0  nop
    ctx->pc = 0x399bacu;
    // NOP
label_399bb0:
    // 0x399bb0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x399bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_399bb4:
    // 0x399bb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x399bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_399bb8:
    // 0x399bb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x399bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_399bbc:
    // 0x399bbc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x399bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_399bc0:
    // 0x399bc0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x399bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_399bc4:
    // 0x399bc4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x399bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_399bc8:
    // 0x399bc8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x399bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_399bcc:
    // 0x399bcc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x399bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_399bd0:
    // 0x399bd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x399bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_399bd4:
    // 0x399bd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x399bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_399bd8:
    // 0x399bd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x399bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_399bdc:
    // 0x399bdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x399bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_399be0:
    // 0x399be0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x399be0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_399be4:
    // 0x399be4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x399be4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_399be8:
    // 0x399be8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_399bec:
    if (ctx->pc == 0x399BECu) {
        ctx->pc = 0x399BECu;
            // 0x399bec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399BF0u;
        goto label_399bf0;
    }
    ctx->pc = 0x399BE8u;
    {
        const bool branch_taken_0x399be8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x399BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399BE8u;
            // 0x399bec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399be8) {
            ctx->pc = 0x399C38u;
            goto label_399c38;
        }
    }
    ctx->pc = 0x399BF0u;
label_399bf0:
    // 0x399bf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x399bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_399bf4:
    // 0x399bf4: 0x50a300a7  beql        $a1, $v1, . + 4 + (0xA7 << 2)
label_399bf8:
    if (ctx->pc == 0x399BF8u) {
        ctx->pc = 0x399BF8u;
            // 0x399bf8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x399BFCu;
        goto label_399bfc;
    }
    ctx->pc = 0x399BF4u;
    {
        const bool branch_taken_0x399bf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x399bf4) {
            ctx->pc = 0x399BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x399BF4u;
            // 0x399bf8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x399E94u;
            goto label_399e94;
        }
    }
    ctx->pc = 0x399BFCu;
label_399bfc:
    // 0x399bfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x399bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_399c00:
    // 0x399c00: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_399c04:
    if (ctx->pc == 0x399C04u) {
        ctx->pc = 0x399C08u;
        goto label_399c08;
    }
    ctx->pc = 0x399C00u;
    {
        const bool branch_taken_0x399c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x399c00) {
            ctx->pc = 0x399C10u;
            goto label_399c10;
        }
    }
    ctx->pc = 0x399C08u;
label_399c08:
    // 0x399c08: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_399c0c:
    if (ctx->pc == 0x399C0Cu) {
        ctx->pc = 0x399C10u;
        goto label_399c10;
    }
    ctx->pc = 0x399C08u;
    {
        const bool branch_taken_0x399c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x399c08) {
            ctx->pc = 0x399E90u;
            goto label_399e90;
        }
    }
    ctx->pc = 0x399C10u;
label_399c10:
    // 0x399c10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x399c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_399c14:
    // 0x399c14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x399c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_399c18:
    // 0x399c18: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x399c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_399c1c:
    // 0x399c1c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x399c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_399c20:
    // 0x399c20: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x399c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_399c24:
    // 0x399c24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x399c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_399c28:
    // 0x399c28: 0x320f809  jalr        $t9
label_399c2c:
    if (ctx->pc == 0x399C2Cu) {
        ctx->pc = 0x399C2Cu;
            // 0x399c2c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x399C30u;
        goto label_399c30;
    }
    ctx->pc = 0x399C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x399C30u);
        ctx->pc = 0x399C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399C28u;
            // 0x399c2c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x399C30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x399C30u; }
            if (ctx->pc != 0x399C30u) { return; }
        }
        }
    }
    ctx->pc = 0x399C30u;
label_399c30:
    // 0x399c30: 0x10000097  b           . + 4 + (0x97 << 2)
label_399c34:
    if (ctx->pc == 0x399C34u) {
        ctx->pc = 0x399C38u;
        goto label_399c38;
    }
    ctx->pc = 0x399C30u;
    {
        const bool branch_taken_0x399c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x399c30) {
            ctx->pc = 0x399E90u;
            goto label_399e90;
        }
    }
    ctx->pc = 0x399C38u;
label_399c38:
    // 0x399c38: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x399c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_399c3c:
    // 0x399c3c: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_399c40:
    if (ctx->pc == 0x399C40u) {
        ctx->pc = 0x399C40u;
            // 0x399c40: 0x7fa300f0  sq          $v1, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
        ctx->pc = 0x399C44u;
        goto label_399c44;
    }
    ctx->pc = 0x399C3Cu;
    {
        const bool branch_taken_0x399c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x399C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399C3Cu;
            // 0x399c40: 0x7fa300f0  sq          $v1, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c3c) {
            ctx->pc = 0x399E90u;
            goto label_399e90;
        }
    }
    ctx->pc = 0x399C44u;
label_399c44:
    // 0x399c44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x399c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_399c48:
    // 0x399c48: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x399c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_399c4c:
    // 0x399c4c: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x399c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_399c50:
    // 0x399c50: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x399c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_399c54:
    // 0x399c54: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x399c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_399c58:
    // 0x399c58: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x399c58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399c5c:
    // 0x399c5c: 0x8eb70088  lw          $s7, 0x88($s5)
    ctx->pc = 0x399c5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_399c60:
    // 0x399c60: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x399c60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399c64:
    // 0x399c64: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x399c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_399c68:
    // 0x399c68: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x399c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_399c6c:
    // 0x399c6c: 0x8cde0130  lw          $fp, 0x130($a2)
    ctx->pc = 0x399c6cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_399c70:
    // 0x399c70: 0x8c45d120  lw          $a1, -0x2EE0($v0)
    ctx->pc = 0x399c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_399c74:
    // 0x399c74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_399c78:
    // 0x399c78: 0x1e3080  sll         $a2, $fp, 2
    ctx->pc = 0x399c78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_399c7c:
    // 0x399c7c: 0x26a20090  addiu       $v0, $s5, 0x90
    ctx->pc = 0x399c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_399c80:
    // 0x399c80: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x399c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_399c84:
    // 0x399c84: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x399c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_399c88:
    // 0x399c88: 0x8c62e370  lw          $v0, -0x1C90($v1)
    ctx->pc = 0x399c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_399c8c:
    // 0x399c8c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x399c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_399c90:
    // 0x399c90: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x399c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_399c94:
    // 0x399c94: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x399c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_399c98:
    // 0x399c98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_399c9c:
    // 0x399c9c: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x399c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_399ca0:
    // 0x399ca0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x399ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_399ca4:
    // 0x399ca4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x399ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_399ca8:
    // 0x399ca8: 0xc4546f40  lwc1        $f20, 0x6F40($v0)
    ctx->pc = 0x399ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_399cac:
    // 0x399cac: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x399cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_399cb0:
    // 0x399cb0: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x399cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_399cb4:
    // 0x399cb4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x399cb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_399cb8:
    // 0x399cb8: 0xaea20090  sw          $v0, 0x90($s5)
    ctx->pc = 0x399cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 2));
label_399cbc:
    // 0x399cbc: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x399cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_399cc0:
    // 0x399cc0: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x399cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_399cc4:
    // 0x399cc4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x399cc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_399cc8:
    // 0x399cc8: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x399cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_399ccc:
    // 0x399ccc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x399cccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_399cd0:
    // 0x399cd0: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x399cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_399cd4:
    // 0x399cd4: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x399cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_399cd8:
    // 0x399cd8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x399cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_399cdc:
    // 0x399cdc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x399cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_399ce0:
    // 0x399ce0: 0xc0d1c14  jal         func_347050
label_399ce4:
    if (ctx->pc == 0x399CE4u) {
        ctx->pc = 0x399CE4u;
            // 0x399ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399CE8u;
        goto label_399ce8;
    }
    ctx->pc = 0x399CE0u;
    SET_GPR_U32(ctx, 31, 0x399CE8u);
    ctx->pc = 0x399CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399CE0u;
            // 0x399ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399CE8u; }
        if (ctx->pc != 0x399CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399CE8u; }
        if (ctx->pc != 0x399CE8u) { return; }
    }
    ctx->pc = 0x399CE8u;
label_399ce8:
    // 0x399ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x399ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399cec:
    // 0x399cec: 0xc04f278  jal         func_13C9E0
label_399cf0:
    if (ctx->pc == 0x399CF0u) {
        ctx->pc = 0x399CF0u;
            // 0x399cf0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x399CF4u;
        goto label_399cf4;
    }
    ctx->pc = 0x399CECu;
    SET_GPR_U32(ctx, 31, 0x399CF4u);
    ctx->pc = 0x399CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399CECu;
            // 0x399cf0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399CF4u; }
        if (ctx->pc != 0x399CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399CF4u; }
        if (ctx->pc != 0x399CF4u) { return; }
    }
    ctx->pc = 0x399CF4u;
label_399cf4:
    // 0x399cf4: 0xc0d1dc8  jal         func_347720
label_399cf8:
    if (ctx->pc == 0x399CF8u) {
        ctx->pc = 0x399CF8u;
            // 0x399cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399CFCu;
        goto label_399cfc;
    }
    ctx->pc = 0x399CF4u;
    SET_GPR_U32(ctx, 31, 0x399CFCu);
    ctx->pc = 0x399CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399CF4u;
            // 0x399cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399CFCu; }
        if (ctx->pc != 0x399CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399CFCu; }
        if (ctx->pc != 0x399CFCu) { return; }
    }
    ctx->pc = 0x399CFCu;
label_399cfc:
    // 0x399cfc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x399cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_399d00:
    // 0x399d00: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x399d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_399d04:
    // 0x399d04: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x399d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_399d08:
    // 0x399d08: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x399d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_399d0c:
    // 0x399d0c: 0xc04ce50  jal         func_133940
label_399d10:
    if (ctx->pc == 0x399D10u) {
        ctx->pc = 0x399D10u;
            // 0x399d10: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x399D14u;
        goto label_399d14;
    }
    ctx->pc = 0x399D0Cu;
    SET_GPR_U32(ctx, 31, 0x399D14u);
    ctx->pc = 0x399D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399D0Cu;
            // 0x399d10: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D14u; }
        if (ctx->pc != 0x399D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D14u; }
        if (ctx->pc != 0x399D14u) { return; }
    }
    ctx->pc = 0x399D14u;
label_399d14:
    // 0x399d14: 0xc0d1c10  jal         func_347040
label_399d18:
    if (ctx->pc == 0x399D18u) {
        ctx->pc = 0x399D18u;
            // 0x399d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399D1Cu;
        goto label_399d1c;
    }
    ctx->pc = 0x399D14u;
    SET_GPR_U32(ctx, 31, 0x399D1Cu);
    ctx->pc = 0x399D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399D14u;
            // 0x399d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D1Cu; }
        if (ctx->pc != 0x399D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D1Cu; }
        if (ctx->pc != 0x399D1Cu) { return; }
    }
    ctx->pc = 0x399D1Cu;
label_399d1c:
    // 0x399d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x399d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399d20:
    // 0x399d20: 0xc04ce80  jal         func_133A00
label_399d24:
    if (ctx->pc == 0x399D24u) {
        ctx->pc = 0x399D24u;
            // 0x399d24: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x399D28u;
        goto label_399d28;
    }
    ctx->pc = 0x399D20u;
    SET_GPR_U32(ctx, 31, 0x399D28u);
    ctx->pc = 0x399D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399D20u;
            // 0x399d24: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D28u; }
        if (ctx->pc != 0x399D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D28u; }
        if (ctx->pc != 0x399D28u) { return; }
    }
    ctx->pc = 0x399D28u;
label_399d28:
    // 0x399d28: 0xc0d63d8  jal         func_358F60
label_399d2c:
    if (ctx->pc == 0x399D2Cu) {
        ctx->pc = 0x399D2Cu;
            // 0x399d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399D30u;
        goto label_399d30;
    }
    ctx->pc = 0x399D28u;
    SET_GPR_U32(ctx, 31, 0x399D30u);
    ctx->pc = 0x399D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399D28u;
            // 0x399d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F60u;
    if (runtime->hasFunction(0x358F60u)) {
        auto targetFn = runtime->lookupFunction(0x358F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D30u; }
        if (ctx->pc != 0x399D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F60_0x358f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D30u; }
        if (ctx->pc != 0x399D30u) { return; }
    }
    ctx->pc = 0x399D30u;
label_399d30:
    // 0x399d30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x399d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399d34:
    // 0x399d34: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x399d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_399d38:
    // 0x399d38: 0xc0d4108  jal         func_350420
label_399d3c:
    if (ctx->pc == 0x399D3Cu) {
        ctx->pc = 0x399D3Cu;
            // 0x399d3c: 0x2e29021  addu        $s2, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->pc = 0x399D40u;
        goto label_399d40;
    }
    ctx->pc = 0x399D38u;
    SET_GPR_U32(ctx, 31, 0x399D40u);
    ctx->pc = 0x399D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399D38u;
            // 0x399d3c: 0x2e29021  addu        $s2, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D40u; }
        if (ctx->pc != 0x399D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D40u; }
        if (ctx->pc != 0x399D40u) { return; }
    }
    ctx->pc = 0x399D40u;
label_399d40:
    // 0x399d40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x399d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399d44:
    // 0x399d44: 0xc0d4104  jal         func_350410
label_399d48:
    if (ctx->pc == 0x399D48u) {
        ctx->pc = 0x399D48u;
            // 0x399d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399D4Cu;
        goto label_399d4c;
    }
    ctx->pc = 0x399D44u;
    SET_GPR_U32(ctx, 31, 0x399D4Cu);
    ctx->pc = 0x399D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399D44u;
            // 0x399d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D4Cu; }
        if (ctx->pc != 0x399D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D4Cu; }
        if (ctx->pc != 0x399D4Cu) { return; }
    }
    ctx->pc = 0x399D4Cu;
label_399d4c:
    // 0x399d4c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x399d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_399d50:
    // 0x399d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399d54:
    // 0x399d54: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x399d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_399d58:
    // 0x399d58: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x399d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_399d5c:
    // 0x399d5c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x399d5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399d60:
    // 0x399d60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x399d60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399d64:
    // 0x399d64: 0xc0d40ac  jal         func_3502B0
label_399d68:
    if (ctx->pc == 0x399D68u) {
        ctx->pc = 0x399D68u;
            // 0x399d68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x399D6Cu;
        goto label_399d6c;
    }
    ctx->pc = 0x399D64u;
    SET_GPR_U32(ctx, 31, 0x399D6Cu);
    ctx->pc = 0x399D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399D64u;
            // 0x399d68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D6Cu; }
        if (ctx->pc != 0x399D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D6Cu; }
        if (ctx->pc != 0x399D6Cu) { return; }
    }
    ctx->pc = 0x399D6Cu;
label_399d6c:
    // 0x399d6c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x399d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_399d70:
    // 0x399d70: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_399d74:
    if (ctx->pc == 0x399D74u) {
        ctx->pc = 0x399D74u;
            // 0x399d74: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x399D78u;
        goto label_399d78;
    }
    ctx->pc = 0x399D70u;
    {
        const bool branch_taken_0x399d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x399D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399D70u;
            // 0x399d74: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d70) {
            ctx->pc = 0x399E30u;
            goto label_399e30;
        }
    }
    ctx->pc = 0x399D78u;
label_399d78:
    // 0x399d78: 0xc0d63d0  jal         func_358F40
label_399d7c:
    if (ctx->pc == 0x399D7Cu) {
        ctx->pc = 0x399D7Cu;
            // 0x399d7c: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x399D80u;
        goto label_399d80;
    }
    ctx->pc = 0x399D78u;
    SET_GPR_U32(ctx, 31, 0x399D80u);
    ctx->pc = 0x399D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399D78u;
            // 0x399d7c: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F40u;
    if (runtime->hasFunction(0x358F40u)) {
        auto targetFn = runtime->lookupFunction(0x358F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D80u; }
        if (ctx->pc != 0x399D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F40_0x358f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D80u; }
        if (ctx->pc != 0x399D80u) { return; }
    }
    ctx->pc = 0x399D80u;
label_399d80:
    // 0x399d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x399d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399d84:
    // 0x399d84: 0x12130014  beq         $s0, $s3, . + 4 + (0x14 << 2)
label_399d88:
    if (ctx->pc == 0x399D88u) {
        ctx->pc = 0x399D8Cu;
        goto label_399d8c;
    }
    ctx->pc = 0x399D84u;
    {
        const bool branch_taken_0x399d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x399d84) {
            ctx->pc = 0x399DD8u;
            goto label_399dd8;
        }
    }
    ctx->pc = 0x399D8Cu;
label_399d8c:
    // 0x399d8c: 0xc0e67fc  jal         func_399FF0
label_399d90:
    if (ctx->pc == 0x399D90u) {
        ctx->pc = 0x399D90u;
            // 0x399d90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399D94u;
        goto label_399d94;
    }
    ctx->pc = 0x399D8Cu;
    SET_GPR_U32(ctx, 31, 0x399D94u);
    ctx->pc = 0x399D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399D8Cu;
            // 0x399d90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399FF0u;
    if (runtime->hasFunction(0x399FF0u)) {
        auto targetFn = runtime->lookupFunction(0x399FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D94u; }
        if (ctx->pc != 0x399D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399FF0_0x399ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399D94u; }
        if (ctx->pc != 0x399D94u) { return; }
    }
    ctx->pc = 0x399D94u;
label_399d94:
    // 0x399d94: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x399d94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_399d98:
    // 0x399d98: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_399d9c:
    if (ctx->pc == 0x399D9Cu) {
        ctx->pc = 0x399DA0u;
        goto label_399da0;
    }
    ctx->pc = 0x399D98u;
    {
        const bool branch_taken_0x399d98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x399d98) {
            ctx->pc = 0x399DB8u;
            goto label_399db8;
        }
    }
    ctx->pc = 0x399DA0u;
label_399da0:
    // 0x399da0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x399da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_399da4:
    // 0x399da4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x399da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_399da8:
    // 0x399da8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x399da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_399dac:
    // 0x399dac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x399dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_399db0:
    // 0x399db0: 0xc0e67e4  jal         func_399F90
label_399db4:
    if (ctx->pc == 0x399DB4u) {
        ctx->pc = 0x399DB4u;
            // 0x399db4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x399DB8u;
        goto label_399db8;
    }
    ctx->pc = 0x399DB0u;
    SET_GPR_U32(ctx, 31, 0x399DB8u);
    ctx->pc = 0x399DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399DB0u;
            // 0x399db4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399F90u;
    if (runtime->hasFunction(0x399F90u)) {
        auto targetFn = runtime->lookupFunction(0x399F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DB8u; }
        if (ctx->pc != 0x399DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399F90_0x399f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DB8u; }
        if (ctx->pc != 0x399DB8u) { return; }
    }
    ctx->pc = 0x399DB8u;
label_399db8:
    // 0x399db8: 0xc0e67dc  jal         func_399F70
label_399dbc:
    if (ctx->pc == 0x399DBCu) {
        ctx->pc = 0x399DC0u;
        goto label_399dc0;
    }
    ctx->pc = 0x399DB8u;
    SET_GPR_U32(ctx, 31, 0x399DC0u);
    ctx->pc = 0x399F70u;
    if (runtime->hasFunction(0x399F70u)) {
        auto targetFn = runtime->lookupFunction(0x399F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DC0u; }
        if (ctx->pc != 0x399DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399F70_0x399f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DC0u; }
        if (ctx->pc != 0x399DC0u) { return; }
    }
    ctx->pc = 0x399DC0u;
label_399dc0:
    // 0x399dc0: 0xc04e738  jal         func_139CE0
label_399dc4:
    if (ctx->pc == 0x399DC4u) {
        ctx->pc = 0x399DC4u;
            // 0x399dc4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x399DC8u;
        goto label_399dc8;
    }
    ctx->pc = 0x399DC0u;
    SET_GPR_U32(ctx, 31, 0x399DC8u);
    ctx->pc = 0x399DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399DC0u;
            // 0x399dc4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DC8u; }
        if (ctx->pc != 0x399DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DC8u; }
        if (ctx->pc != 0x399DC8u) { return; }
    }
    ctx->pc = 0x399DC8u;
label_399dc8:
    // 0x399dc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x399dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_399dcc:
    // 0x399dcc: 0xc0d63a8  jal         func_358EA0
label_399dd0:
    if (ctx->pc == 0x399DD0u) {
        ctx->pc = 0x399DD0u;
            // 0x399dd0: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x399DD4u;
        goto label_399dd4;
    }
    ctx->pc = 0x399DCCu;
    SET_GPR_U32(ctx, 31, 0x399DD4u);
    ctx->pc = 0x399DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399DCCu;
            // 0x399dd0: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358EA0u;
    if (runtime->hasFunction(0x358EA0u)) {
        auto targetFn = runtime->lookupFunction(0x358EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DD4u; }
        if (ctx->pc != 0x399DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358EA0_0x358ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DD4u; }
        if (ctx->pc != 0x399DD4u) { return; }
    }
    ctx->pc = 0x399DD4u;
label_399dd4:
    // 0x399dd4: 0x0  nop
    ctx->pc = 0x399dd4u;
    // NOP
label_399dd8:
    // 0x399dd8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x399dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_399ddc:
    // 0x399ddc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x399ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_399de0:
    // 0x399de0: 0xc0e67b4  jal         func_399ED0
label_399de4:
    if (ctx->pc == 0x399DE4u) {
        ctx->pc = 0x399DE4u;
            // 0x399de4: 0x27a601ac  addiu       $a2, $sp, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
        ctx->pc = 0x399DE8u;
        goto label_399de8;
    }
    ctx->pc = 0x399DE0u;
    SET_GPR_U32(ctx, 31, 0x399DE8u);
    ctx->pc = 0x399DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399DE0u;
            // 0x399de4: 0x27a601ac  addiu       $a2, $sp, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399ED0u;
    if (runtime->hasFunction(0x399ED0u)) {
        auto targetFn = runtime->lookupFunction(0x399ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DE8u; }
        if (ctx->pc != 0x399DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399ED0_0x399ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DE8u; }
        if (ctx->pc != 0x399DE8u) { return; }
    }
    ctx->pc = 0x399DE8u;
label_399de8:
    // 0x399de8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x399de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_399dec:
    // 0x399dec: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x399decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_399df0:
    // 0x399df0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x399df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_399df4:
    // 0x399df4: 0xc04e4a4  jal         func_139290
label_399df8:
    if (ctx->pc == 0x399DF8u) {
        ctx->pc = 0x399DF8u;
            // 0x399df8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399DFCu;
        goto label_399dfc;
    }
    ctx->pc = 0x399DF4u;
    SET_GPR_U32(ctx, 31, 0x399DFCu);
    ctx->pc = 0x399DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399DF4u;
            // 0x399df8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DFCu; }
        if (ctx->pc != 0x399DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399DFCu; }
        if (ctx->pc != 0x399DFCu) { return; }
    }
    ctx->pc = 0x399DFCu;
label_399dfc:
    // 0x399dfc: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x399dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_399e00:
    // 0x399e00: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x399e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_399e04:
    // 0x399e04: 0xc04cd60  jal         func_133580
label_399e08:
    if (ctx->pc == 0x399E08u) {
        ctx->pc = 0x399E08u;
            // 0x399e08: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x399E0Cu;
        goto label_399e0c;
    }
    ctx->pc = 0x399E04u;
    SET_GPR_U32(ctx, 31, 0x399E0Cu);
    ctx->pc = 0x399E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399E04u;
            // 0x399e08: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399E0Cu; }
        if (ctx->pc != 0x399E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399E0Cu; }
        if (ctx->pc != 0x399E0Cu) { return; }
    }
    ctx->pc = 0x399E0Cu;
label_399e0c:
    // 0x399e0c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x399e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_399e10:
    // 0x399e10: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x399e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_399e14:
    // 0x399e14: 0x320f809  jalr        $t9
label_399e18:
    if (ctx->pc == 0x399E18u) {
        ctx->pc = 0x399E18u;
            // 0x399e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399E1Cu;
        goto label_399e1c;
    }
    ctx->pc = 0x399E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x399E1Cu);
        ctx->pc = 0x399E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399E14u;
            // 0x399e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x399E1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x399E1Cu; }
            if (ctx->pc != 0x399E1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x399E1Cu;
label_399e1c:
    // 0x399e1c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x399e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_399e20:
    // 0x399e20: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x399e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_399e24:
    // 0x399e24: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x399e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_399e28:
    // 0x399e28: 0xc054fd4  jal         func_153F50
label_399e2c:
    if (ctx->pc == 0x399E2Cu) {
        ctx->pc = 0x399E2Cu;
            // 0x399e2c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399E30u;
        goto label_399e30;
    }
    ctx->pc = 0x399E28u;
    SET_GPR_U32(ctx, 31, 0x399E30u);
    ctx->pc = 0x399E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399E28u;
            // 0x399e2c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399E30u; }
        if (ctx->pc != 0x399E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399E30u; }
        if (ctx->pc != 0x399E30u) { return; }
    }
    ctx->pc = 0x399E30u;
label_399e30:
    // 0x399e30: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x399e30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_399e34:
    // 0x399e34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x399e34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_399e38:
    // 0x399e38: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x399e38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_399e3c:
    // 0x399e3c: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
label_399e40:
    if (ctx->pc == 0x399E40u) {
        ctx->pc = 0x399E40u;
            // 0x399e40: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x399E44u;
        goto label_399e44;
    }
    ctx->pc = 0x399E3Cu;
    {
        const bool branch_taken_0x399e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x399E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399E3Cu;
            // 0x399e40: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399e3c) {
            ctx->pc = 0x399CC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_399cc4;
        }
    }
    ctx->pc = 0x399E44u;
label_399e44:
    // 0x399e44: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x399e44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_399e48:
    // 0x399e48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x399e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_399e4c:
    // 0x399e4c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x399e4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_399e50:
    // 0x399e50: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_399e54:
    if (ctx->pc == 0x399E54u) {
        ctx->pc = 0x399E58u;
        goto label_399e58;
    }
    ctx->pc = 0x399E50u;
    {
        const bool branch_taken_0x399e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x399e50) {
            ctx->pc = 0x399E90u;
            goto label_399e90;
        }
    }
    ctx->pc = 0x399E58u;
label_399e58:
    // 0x399e58: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x399e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_399e5c:
    // 0x399e5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_399e60:
    // 0x399e60: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x399e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_399e64:
    // 0x399e64: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x399e64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_399e68:
    // 0x399e68: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_399e6c:
    if (ctx->pc == 0x399E6Cu) {
        ctx->pc = 0x399E6Cu;
            // 0x399e6c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x399E70u;
        goto label_399e70;
    }
    ctx->pc = 0x399E68u;
    {
        const bool branch_taken_0x399e68 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x399E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399E68u;
            // 0x399e6c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399e68) {
            ctx->pc = 0x399E90u;
            goto label_399e90;
        }
    }
    ctx->pc = 0x399E70u;
label_399e70:
    // 0x399e70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_399e74:
    // 0x399e74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x399e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_399e78:
    // 0x399e78: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x399e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_399e7c:
    // 0x399e7c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x399e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_399e80:
    // 0x399e80: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x399e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_399e84:
    // 0x399e84: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x399e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_399e88:
    // 0x399e88: 0xc055ea8  jal         func_157AA0
label_399e8c:
    if (ctx->pc == 0x399E8Cu) {
        ctx->pc = 0x399E8Cu;
            // 0x399e8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399E90u;
        goto label_399e90;
    }
    ctx->pc = 0x399E88u;
    SET_GPR_U32(ctx, 31, 0x399E90u);
    ctx->pc = 0x399E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399E88u;
            // 0x399e8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399E90u; }
        if (ctx->pc != 0x399E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399E90u; }
        if (ctx->pc != 0x399E90u) { return; }
    }
    ctx->pc = 0x399E90u;
label_399e90:
    // 0x399e90: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x399e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_399e94:
    // 0x399e94: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x399e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_399e98:
    // 0x399e98: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x399e98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_399e9c:
    // 0x399e9c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x399e9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_399ea0:
    // 0x399ea0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x399ea0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_399ea4:
    // 0x399ea4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x399ea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_399ea8:
    // 0x399ea8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x399ea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_399eac:
    // 0x399eac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x399eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_399eb0:
    // 0x399eb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x399eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_399eb4:
    // 0x399eb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x399eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_399eb8:
    // 0x399eb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x399eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399ebc:
    // 0x399ebc: 0x3e00008  jr          $ra
label_399ec0:
    if (ctx->pc == 0x399EC0u) {
        ctx->pc = 0x399EC0u;
            // 0x399ec0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x399EC4u;
        goto label_399ec4;
    }
    ctx->pc = 0x399EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399EBCu;
            // 0x399ec0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x399EC4u;
label_399ec4:
    // 0x399ec4: 0x0  nop
    ctx->pc = 0x399ec4u;
    // NOP
label_399ec8:
    // 0x399ec8: 0x0  nop
    ctx->pc = 0x399ec8u;
    // NOP
label_399ecc:
    // 0x399ecc: 0x0  nop
    ctx->pc = 0x399eccu;
    // NOP
}
