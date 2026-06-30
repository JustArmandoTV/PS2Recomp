#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00206B60
// Address: 0x206b60 - 0x206e50
void sub_00206B60_0x206b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206B60_0x206b60");
#endif

    switch (ctx->pc) {
        case 0x206b60u: goto label_206b60;
        case 0x206b64u: goto label_206b64;
        case 0x206b68u: goto label_206b68;
        case 0x206b6cu: goto label_206b6c;
        case 0x206b70u: goto label_206b70;
        case 0x206b74u: goto label_206b74;
        case 0x206b78u: goto label_206b78;
        case 0x206b7cu: goto label_206b7c;
        case 0x206b80u: goto label_206b80;
        case 0x206b84u: goto label_206b84;
        case 0x206b88u: goto label_206b88;
        case 0x206b8cu: goto label_206b8c;
        case 0x206b90u: goto label_206b90;
        case 0x206b94u: goto label_206b94;
        case 0x206b98u: goto label_206b98;
        case 0x206b9cu: goto label_206b9c;
        case 0x206ba0u: goto label_206ba0;
        case 0x206ba4u: goto label_206ba4;
        case 0x206ba8u: goto label_206ba8;
        case 0x206bacu: goto label_206bac;
        case 0x206bb0u: goto label_206bb0;
        case 0x206bb4u: goto label_206bb4;
        case 0x206bb8u: goto label_206bb8;
        case 0x206bbcu: goto label_206bbc;
        case 0x206bc0u: goto label_206bc0;
        case 0x206bc4u: goto label_206bc4;
        case 0x206bc8u: goto label_206bc8;
        case 0x206bccu: goto label_206bcc;
        case 0x206bd0u: goto label_206bd0;
        case 0x206bd4u: goto label_206bd4;
        case 0x206bd8u: goto label_206bd8;
        case 0x206bdcu: goto label_206bdc;
        case 0x206be0u: goto label_206be0;
        case 0x206be4u: goto label_206be4;
        case 0x206be8u: goto label_206be8;
        case 0x206becu: goto label_206bec;
        case 0x206bf0u: goto label_206bf0;
        case 0x206bf4u: goto label_206bf4;
        case 0x206bf8u: goto label_206bf8;
        case 0x206bfcu: goto label_206bfc;
        case 0x206c00u: goto label_206c00;
        case 0x206c04u: goto label_206c04;
        case 0x206c08u: goto label_206c08;
        case 0x206c0cu: goto label_206c0c;
        case 0x206c10u: goto label_206c10;
        case 0x206c14u: goto label_206c14;
        case 0x206c18u: goto label_206c18;
        case 0x206c1cu: goto label_206c1c;
        case 0x206c20u: goto label_206c20;
        case 0x206c24u: goto label_206c24;
        case 0x206c28u: goto label_206c28;
        case 0x206c2cu: goto label_206c2c;
        case 0x206c30u: goto label_206c30;
        case 0x206c34u: goto label_206c34;
        case 0x206c38u: goto label_206c38;
        case 0x206c3cu: goto label_206c3c;
        case 0x206c40u: goto label_206c40;
        case 0x206c44u: goto label_206c44;
        case 0x206c48u: goto label_206c48;
        case 0x206c4cu: goto label_206c4c;
        case 0x206c50u: goto label_206c50;
        case 0x206c54u: goto label_206c54;
        case 0x206c58u: goto label_206c58;
        case 0x206c5cu: goto label_206c5c;
        case 0x206c60u: goto label_206c60;
        case 0x206c64u: goto label_206c64;
        case 0x206c68u: goto label_206c68;
        case 0x206c6cu: goto label_206c6c;
        case 0x206c70u: goto label_206c70;
        case 0x206c74u: goto label_206c74;
        case 0x206c78u: goto label_206c78;
        case 0x206c7cu: goto label_206c7c;
        case 0x206c80u: goto label_206c80;
        case 0x206c84u: goto label_206c84;
        case 0x206c88u: goto label_206c88;
        case 0x206c8cu: goto label_206c8c;
        case 0x206c90u: goto label_206c90;
        case 0x206c94u: goto label_206c94;
        case 0x206c98u: goto label_206c98;
        case 0x206c9cu: goto label_206c9c;
        case 0x206ca0u: goto label_206ca0;
        case 0x206ca4u: goto label_206ca4;
        case 0x206ca8u: goto label_206ca8;
        case 0x206cacu: goto label_206cac;
        case 0x206cb0u: goto label_206cb0;
        case 0x206cb4u: goto label_206cb4;
        case 0x206cb8u: goto label_206cb8;
        case 0x206cbcu: goto label_206cbc;
        case 0x206cc0u: goto label_206cc0;
        case 0x206cc4u: goto label_206cc4;
        case 0x206cc8u: goto label_206cc8;
        case 0x206cccu: goto label_206ccc;
        case 0x206cd0u: goto label_206cd0;
        case 0x206cd4u: goto label_206cd4;
        case 0x206cd8u: goto label_206cd8;
        case 0x206cdcu: goto label_206cdc;
        case 0x206ce0u: goto label_206ce0;
        case 0x206ce4u: goto label_206ce4;
        case 0x206ce8u: goto label_206ce8;
        case 0x206cecu: goto label_206cec;
        case 0x206cf0u: goto label_206cf0;
        case 0x206cf4u: goto label_206cf4;
        case 0x206cf8u: goto label_206cf8;
        case 0x206cfcu: goto label_206cfc;
        case 0x206d00u: goto label_206d00;
        case 0x206d04u: goto label_206d04;
        case 0x206d08u: goto label_206d08;
        case 0x206d0cu: goto label_206d0c;
        case 0x206d10u: goto label_206d10;
        case 0x206d14u: goto label_206d14;
        case 0x206d18u: goto label_206d18;
        case 0x206d1cu: goto label_206d1c;
        case 0x206d20u: goto label_206d20;
        case 0x206d24u: goto label_206d24;
        case 0x206d28u: goto label_206d28;
        case 0x206d2cu: goto label_206d2c;
        case 0x206d30u: goto label_206d30;
        case 0x206d34u: goto label_206d34;
        case 0x206d38u: goto label_206d38;
        case 0x206d3cu: goto label_206d3c;
        case 0x206d40u: goto label_206d40;
        case 0x206d44u: goto label_206d44;
        case 0x206d48u: goto label_206d48;
        case 0x206d4cu: goto label_206d4c;
        case 0x206d50u: goto label_206d50;
        case 0x206d54u: goto label_206d54;
        case 0x206d58u: goto label_206d58;
        case 0x206d5cu: goto label_206d5c;
        case 0x206d60u: goto label_206d60;
        case 0x206d64u: goto label_206d64;
        case 0x206d68u: goto label_206d68;
        case 0x206d6cu: goto label_206d6c;
        case 0x206d70u: goto label_206d70;
        case 0x206d74u: goto label_206d74;
        case 0x206d78u: goto label_206d78;
        case 0x206d7cu: goto label_206d7c;
        case 0x206d80u: goto label_206d80;
        case 0x206d84u: goto label_206d84;
        case 0x206d88u: goto label_206d88;
        case 0x206d8cu: goto label_206d8c;
        case 0x206d90u: goto label_206d90;
        case 0x206d94u: goto label_206d94;
        case 0x206d98u: goto label_206d98;
        case 0x206d9cu: goto label_206d9c;
        case 0x206da0u: goto label_206da0;
        case 0x206da4u: goto label_206da4;
        case 0x206da8u: goto label_206da8;
        case 0x206dacu: goto label_206dac;
        case 0x206db0u: goto label_206db0;
        case 0x206db4u: goto label_206db4;
        case 0x206db8u: goto label_206db8;
        case 0x206dbcu: goto label_206dbc;
        case 0x206dc0u: goto label_206dc0;
        case 0x206dc4u: goto label_206dc4;
        case 0x206dc8u: goto label_206dc8;
        case 0x206dccu: goto label_206dcc;
        case 0x206dd0u: goto label_206dd0;
        case 0x206dd4u: goto label_206dd4;
        case 0x206dd8u: goto label_206dd8;
        case 0x206ddcu: goto label_206ddc;
        case 0x206de0u: goto label_206de0;
        case 0x206de4u: goto label_206de4;
        case 0x206de8u: goto label_206de8;
        case 0x206decu: goto label_206dec;
        case 0x206df0u: goto label_206df0;
        case 0x206df4u: goto label_206df4;
        case 0x206df8u: goto label_206df8;
        case 0x206dfcu: goto label_206dfc;
        case 0x206e00u: goto label_206e00;
        case 0x206e04u: goto label_206e04;
        case 0x206e08u: goto label_206e08;
        case 0x206e0cu: goto label_206e0c;
        case 0x206e10u: goto label_206e10;
        case 0x206e14u: goto label_206e14;
        case 0x206e18u: goto label_206e18;
        case 0x206e1cu: goto label_206e1c;
        case 0x206e20u: goto label_206e20;
        case 0x206e24u: goto label_206e24;
        case 0x206e28u: goto label_206e28;
        case 0x206e2cu: goto label_206e2c;
        case 0x206e30u: goto label_206e30;
        case 0x206e34u: goto label_206e34;
        case 0x206e38u: goto label_206e38;
        case 0x206e3cu: goto label_206e3c;
        case 0x206e40u: goto label_206e40;
        case 0x206e44u: goto label_206e44;
        case 0x206e48u: goto label_206e48;
        case 0x206e4cu: goto label_206e4c;
        default: break;
    }

    ctx->pc = 0x206b60u;

label_206b60:
    // 0x206b60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x206b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_206b64:
    // 0x206b64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x206b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_206b68:
    // 0x206b68: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_206b6c:
    if (ctx->pc == 0x206B6Cu) {
        ctx->pc = 0x206B6Cu;
            // 0x206b6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x206B70u;
        goto label_206b70;
    }
    ctx->pc = 0x206B68u;
    {
        const bool branch_taken_0x206b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206B68u;
            // 0x206b6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b68) {
            ctx->pc = 0x206B98u;
            goto label_206b98;
        }
    }
    ctx->pc = 0x206B70u;
label_206b70:
    // 0x206b70: 0xc081fd0  jal         func_207F40
label_206b74:
    if (ctx->pc == 0x206B74u) {
        ctx->pc = 0x206B74u;
            // 0x206b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206B78u;
        goto label_206b78;
    }
    ctx->pc = 0x206B70u;
    SET_GPR_U32(ctx, 31, 0x206B78u);
    ctx->pc = 0x206B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206B70u;
            // 0x206b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207F40u;
    if (runtime->hasFunction(0x207F40u)) {
        auto targetFn = runtime->lookupFunction(0x207F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B78u; }
        if (ctx->pc != 0x206B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207F40_0x207f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B78u; }
        if (ctx->pc != 0x206B78u) { return; }
    }
    ctx->pc = 0x206B78u;
label_206b78:
    // 0x206b78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x206b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_206b7c:
    // 0x206b7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x206b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_206b80:
    // 0x206b80: 0x2442e300  addiu       $v0, $v0, -0x1D00
    ctx->pc = 0x206b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
label_206b84:
    // 0x206b84: 0x2463e328  addiu       $v1, $v1, -0x1CD8
    ctx->pc = 0x206b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959912));
label_206b88:
    // 0x206b88: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x206b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_206b8c:
    // 0x206b8c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x206b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_206b90:
    // 0x206b90: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x206b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_206b94:
    // 0x206b94: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x206b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_206b98:
    // 0x206b98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x206b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_206b9c:
    // 0x206b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206ba0:
    // 0x206ba0: 0x3e00008  jr          $ra
label_206ba4:
    if (ctx->pc == 0x206BA4u) {
        ctx->pc = 0x206BA4u;
            // 0x206ba4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x206BA8u;
        goto label_206ba8;
    }
    ctx->pc = 0x206BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206BA0u;
            // 0x206ba4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206BA8u;
label_206ba8:
    // 0x206ba8: 0x0  nop
    ctx->pc = 0x206ba8u;
    // NOP
label_206bac:
    // 0x206bac: 0x0  nop
    ctx->pc = 0x206bacu;
    // NOP
label_206bb0:
    // 0x206bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206bb4:
    // 0x206bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206bb8:
    // 0x206bb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x206bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_206bbc:
    // 0x206bbc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x206bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_206bc0:
    // 0x206bc0: 0x320f809  jalr        $t9
label_206bc4:
    if (ctx->pc == 0x206BC4u) {
        ctx->pc = 0x206BC4u;
            // 0x206bc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x206BC8u;
        goto label_206bc8;
    }
    ctx->pc = 0x206BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x206BC8u);
        ctx->pc = 0x206BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206BC0u;
            // 0x206bc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206BC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206BC8u; }
            if (ctx->pc != 0x206BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x206BC8u;
label_206bc8:
    // 0x206bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206bcc:
    // 0x206bcc: 0x3e00008  jr          $ra
label_206bd0:
    if (ctx->pc == 0x206BD0u) {
        ctx->pc = 0x206BD0u;
            // 0x206bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x206BD4u;
        goto label_206bd4;
    }
    ctx->pc = 0x206BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206BCCu;
            // 0x206bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206BD4u;
label_206bd4:
    // 0x206bd4: 0x0  nop
    ctx->pc = 0x206bd4u;
    // NOP
label_206bd8:
    // 0x206bd8: 0x0  nop
    ctx->pc = 0x206bd8u;
    // NOP
label_206bdc:
    // 0x206bdc: 0x0  nop
    ctx->pc = 0x206bdcu;
    // NOP
label_206be0:
    // 0x206be0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x206be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_206be4:
    // 0x206be4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x206be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_206be8:
    // 0x206be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_206bec:
    // 0x206bec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x206becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_206bf0:
    // 0x206bf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x206bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_206bf4:
    // 0x206bf4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x206bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_206bf8:
    // 0x206bf8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x206bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_206bfc:
    // 0x206bfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x206bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206c00:
    // 0x206c00: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x206c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_206c04:
    // 0x206c04: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x206c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_206c08:
    // 0x206c08: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x206c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_206c0c:
    // 0x206c0c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x206c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_206c10:
    // 0x206c10: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x206c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_206c14:
    // 0x206c14: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x206c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_206c18:
    // 0x206c18: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x206c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_206c1c:
    // 0x206c1c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x206c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_206c20:
    // 0x206c20: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x206c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_206c24:
    // 0x206c24: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x206c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_206c28:
    // 0x206c28: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x206c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_206c2c:
    // 0x206c2c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x206c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_206c30:
    // 0x206c30: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x206c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_206c34:
    // 0x206c34: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x206c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_206c38:
    // 0x206c38: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x206c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_206c3c:
    // 0x206c3c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x206c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_206c40:
    // 0x206c40: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x206c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_206c44:
    // 0x206c44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x206c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_206c48:
    // 0x206c48: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x206c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_206c4c:
    // 0x206c4c: 0x320f809  jalr        $t9
label_206c50:
    if (ctx->pc == 0x206C50u) {
        ctx->pc = 0x206C50u;
            // 0x206c50: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x206C54u;
        goto label_206c54;
    }
    ctx->pc = 0x206C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x206C54u);
        ctx->pc = 0x206C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206C4Cu;
            // 0x206c50: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206C54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206C54u; }
            if (ctx->pc != 0x206C54u) { return; }
        }
        }
    }
    ctx->pc = 0x206C54u;
label_206c54:
    // 0x206c54: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x206c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_206c58:
    // 0x206c58: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x206c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_206c5c:
    // 0x206c5c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x206c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206c60:
    // 0x206c60: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x206c60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_206c64:
    // 0x206c64: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x206c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_206c68:
    // 0x206c68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x206c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206c6c:
    // 0x206c6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x206c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_206c70:
    // 0x206c70: 0xc7aa0034  lwc1        $f10, 0x34($sp)
    ctx->pc = 0x206c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_206c74:
    // 0x206c74: 0x46003041  sub.s       $f1, $f6, $f0
    ctx->pc = 0x206c74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_206c78:
    // 0x206c78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x206c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_206c7c:
    // 0x206c7c: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x206c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_206c80:
    // 0x206c80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_206c84:
    // 0x206c84: 0x472824  and         $a1, $v0, $a3
    ctx->pc = 0x206c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_206c88:
    // 0x206c88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x206c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_206c8c:
    // 0x206c8c: 0x672024  and         $a0, $v1, $a3
    ctx->pc = 0x206c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_206c90:
    // 0x206c90: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x206c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_206c94:
    // 0x206c94: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x206c94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_206c98:
    // 0x206c98: 0x471824  and         $v1, $v0, $a3
    ctx->pc = 0x206c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_206c9c:
    // 0x206c9c: 0xc7a90044  lwc1        $f9, 0x44($sp)
    ctx->pc = 0x206c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_206ca0:
    // 0x206ca0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x206ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_206ca4:
    // 0x206ca4: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x206ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_206ca8:
    // 0x206ca8: 0x460a4841  sub.s       $f1, $f9, $f10
    ctx->pc = 0x206ca8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[10]);
label_206cac:
    // 0x206cac: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x206cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_206cb0:
    // 0x206cb0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x206cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_206cb4:
    // 0x206cb4: 0xc7a80038  lwc1        $f8, 0x38($sp)
    ctx->pc = 0x206cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_206cb8:
    // 0x206cb8: 0xc7a70048  lwc1        $f7, 0x48($sp)
    ctx->pc = 0x206cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_206cbc:
    // 0x206cbc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x206cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_206cc0:
    // 0x206cc0: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x206cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_206cc4:
    // 0x206cc4: 0x46083841  sub.s       $f1, $f7, $f8
    ctx->pc = 0x206cc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
label_206cc8:
    // 0x206cc8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x206cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_206ccc:
    // 0x206ccc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x206cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_206cd0:
    // 0x206cd0: 0x46030182  mul.s       $f6, $f0, $f3
    ctx->pc = 0x206cd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_206cd4:
    // 0x206cd4: 0x460a4800  add.s       $f0, $f9, $f10
    ctx->pc = 0x206cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
label_206cd8:
    // 0x206cd8: 0x46030242  mul.s       $f9, $f0, $f3
    ctx->pc = 0x206cd8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_206cdc:
    // 0x206cdc: 0x46083800  add.s       $f0, $f7, $f8
    ctx->pc = 0x206cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
label_206ce0:
    // 0x206ce0: 0xc7a4004c  lwc1        $f4, 0x4C($sp)
    ctx->pc = 0x206ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_206ce4:
    // 0x206ce4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x206ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_206ce8:
    // 0x206ce8: 0x46030202  mul.s       $f8, $f0, $f3
    ctx->pc = 0x206ce8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_206cec:
    // 0x206cec: 0x46052041  sub.s       $f1, $f4, $f5
    ctx->pc = 0x206cecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_206cf0:
    // 0x206cf0: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x206cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_206cf4:
    // 0x206cf4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x206cf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_206cf8:
    // 0x206cf8: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x206cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_206cfc:
    // 0x206cfc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x206cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_206d00:
    // 0x206d00: 0x46052000  add.s       $f0, $f4, $f5
    ctx->pc = 0x206d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_206d04:
    // 0x206d04: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x206d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
label_206d08:
    // 0x206d08: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x206d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_206d0c:
    // 0x206d0c: 0x460301c2  mul.s       $f7, $f0, $f3
    ctx->pc = 0x206d0cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_206d10:
    // 0x206d10: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x206d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_206d14:
    // 0x206d14: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x206d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_206d18:
    // 0x206d18: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x206d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_206d1c:
    // 0x206d1c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x206d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206d20:
    // 0x206d20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x206d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_206d24:
    // 0x206d24: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x206d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_206d28:
    // 0x206d28: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x206d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_206d2c:
    // 0x206d2c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x206d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_206d30:
    // 0x206d30: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x206d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_206d34:
    // 0x206d34: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x206d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_206d38:
    // 0x206d38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_206d3c:
    // 0x206d3c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x206d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_206d40:
    // 0x206d40: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x206d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_206d44:
    // 0x206d44: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x206d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_206d48:
    // 0x206d48: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x206d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_206d4c:
    // 0x206d4c: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x206d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_206d50:
    // 0x206d50: 0x46061980  add.s       $f6, $f3, $f6
    ctx->pc = 0x206d50u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_206d54:
    // 0x206d54: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x206d54u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
label_206d58:
    // 0x206d58: 0x4600281a  mula.s      $f5, $f0
    ctx->pc = 0x206d58u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_206d5c:
    // 0x206d5c: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x206d5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
label_206d60:
    // 0x206d60: 0x4601301e  madda.s     $f6, $f1
    ctx->pc = 0x206d60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
label_206d64:
    // 0x206d64: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x206d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_206d68:
    // 0x206d68: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x206d68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_206d6c:
    // 0x206d6c: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x206d6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_206d70:
    // 0x206d70: 0x46071840  add.s       $f1, $f3, $f7
    ctx->pc = 0x206d70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_206d74:
    // 0x206d74: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x206d74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_206d78:
    // 0x206d78: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x206d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_206d7c:
    // 0x206d7c: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x206d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_206d80:
    // 0x206d80: 0x3e00008  jr          $ra
label_206d84:
    if (ctx->pc == 0x206D84u) {
        ctx->pc = 0x206D84u;
            // 0x206d84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x206D88u;
        goto label_206d88;
    }
    ctx->pc = 0x206D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206D80u;
            // 0x206d84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206D88u;
label_206d88:
    // 0x206d88: 0x0  nop
    ctx->pc = 0x206d88u;
    // NOP
label_206d8c:
    // 0x206d8c: 0x0  nop
    ctx->pc = 0x206d8cu;
    // NOP
label_206d90:
    // 0x206d90: 0x3e00008  jr          $ra
label_206d94:
    if (ctx->pc == 0x206D94u) {
        ctx->pc = 0x206D94u;
            // 0x206d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206D98u;
        goto label_206d98;
    }
    ctx->pc = 0x206D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206D90u;
            // 0x206d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206D98u;
label_206d98:
    // 0x206d98: 0x0  nop
    ctx->pc = 0x206d98u;
    // NOP
label_206d9c:
    // 0x206d9c: 0x0  nop
    ctx->pc = 0x206d9cu;
    // NOP
label_206da0:
    // 0x206da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_206da4:
    // 0x206da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x206da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_206da8:
    // 0x206da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_206dac:
    // 0x206dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x206dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_206db0:
    // 0x206db0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206db4:
    // 0x206db4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x206db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_206db8:
    // 0x206db8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x206db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_206dbc:
    // 0x206dbc: 0x320f809  jalr        $t9
label_206dc0:
    if (ctx->pc == 0x206DC0u) {
        ctx->pc = 0x206DC0u;
            // 0x206dc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206DC4u;
        goto label_206dc4;
    }
    ctx->pc = 0x206DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x206DC4u);
        ctx->pc = 0x206DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206DBCu;
            // 0x206dc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206DC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206DC4u; }
            if (ctx->pc != 0x206DC4u) { return; }
        }
        }
    }
    ctx->pc = 0x206DC4u;
label_206dc4:
    // 0x206dc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x206dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_206dc8:
    // 0x206dc8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_206dcc:
    if (ctx->pc == 0x206DCCu) {
        ctx->pc = 0x206DD0u;
        goto label_206dd0;
    }
    ctx->pc = 0x206DC8u;
    {
        const bool branch_taken_0x206dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x206dc8) {
            ctx->pc = 0x206DF8u;
            goto label_206df8;
        }
    }
    ctx->pc = 0x206DD0u;
label_206dd0:
    // 0x206dd0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x206dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_206dd4:
    // 0x206dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206dd8:
    // 0x206dd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206ddc:
    // 0x206ddc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x206ddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_206de0:
    // 0x206de0: 0x320f809  jalr        $t9
label_206de4:
    if (ctx->pc == 0x206DE4u) {
        ctx->pc = 0x206DE4u;
            // 0x206de4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x206DE8u;
        goto label_206de8;
    }
    ctx->pc = 0x206DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x206DE8u);
        ctx->pc = 0x206DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206DE0u;
            // 0x206de4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206DE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206DE8u; }
            if (ctx->pc != 0x206DE8u) { return; }
        }
        }
    }
    ctx->pc = 0x206DE8u;
label_206de8:
    // 0x206de8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x206de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_206dec:
    // 0x206dec: 0x5443fff9  bnel        $v0, $v1, . + 4 + (-0x7 << 2)
label_206df0:
    if (ctx->pc == 0x206DF0u) {
        ctx->pc = 0x206DF0u;
            // 0x206df0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x206DF4u;
        goto label_206df4;
    }
    ctx->pc = 0x206DECu;
    {
        const bool branch_taken_0x206dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x206dec) {
            ctx->pc = 0x206DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206DECu;
            // 0x206df0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206DD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_206dd4;
        }
    }
    ctx->pc = 0x206DF4u;
label_206df4:
    // 0x206df4: 0x0  nop
    ctx->pc = 0x206df4u;
    // NOP
label_206df8:
    // 0x206df8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x206df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206dfc:
    // 0x206dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_206e00:
    // 0x206e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206e04:
    // 0x206e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_206e08:
    // 0x206e08: 0x3e00008  jr          $ra
label_206e0c:
    if (ctx->pc == 0x206E0Cu) {
        ctx->pc = 0x206E0Cu;
            // 0x206e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x206E10u;
        goto label_206e10;
    }
    ctx->pc = 0x206E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E08u;
            // 0x206e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206E10u;
label_206e10:
    // 0x206e10: 0x3e00008  jr          $ra
label_206e14:
    if (ctx->pc == 0x206E14u) {
        ctx->pc = 0x206E14u;
            // 0x206e14: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x206E18u;
        goto label_206e18;
    }
    ctx->pc = 0x206E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E10u;
            // 0x206e14: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206E18u;
label_206e18:
    // 0x206e18: 0x0  nop
    ctx->pc = 0x206e18u;
    // NOP
label_206e1c:
    // 0x206e1c: 0x0  nop
    ctx->pc = 0x206e1cu;
    // NOP
label_206e20:
    // 0x206e20: 0x3e00008  jr          $ra
label_206e24:
    if (ctx->pc == 0x206E24u) {
        ctx->pc = 0x206E24u;
            // 0x206e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x206E28u;
        goto label_206e28;
    }
    ctx->pc = 0x206E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E20u;
            // 0x206e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206E28u;
label_206e28:
    // 0x206e28: 0x0  nop
    ctx->pc = 0x206e28u;
    // NOP
label_206e2c:
    // 0x206e2c: 0x0  nop
    ctx->pc = 0x206e2cu;
    // NOP
label_206e30:
    // 0x206e30: 0x3e00008  jr          $ra
label_206e34:
    if (ctx->pc == 0x206E34u) {
        ctx->pc = 0x206E34u;
            // 0x206e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206E38u;
        goto label_206e38;
    }
    ctx->pc = 0x206E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E30u;
            // 0x206e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206E38u;
label_206e38:
    // 0x206e38: 0x0  nop
    ctx->pc = 0x206e38u;
    // NOP
label_206e3c:
    // 0x206e3c: 0x0  nop
    ctx->pc = 0x206e3cu;
    // NOP
label_206e40:
    // 0x206e40: 0x3e00008  jr          $ra
label_206e44:
    if (ctx->pc == 0x206E44u) {
        ctx->pc = 0x206E44u;
            // 0x206e44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x206E48u;
        goto label_206e48;
    }
    ctx->pc = 0x206E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E40u;
            // 0x206e44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206E48u;
label_206e48:
    // 0x206e48: 0x0  nop
    ctx->pc = 0x206e48u;
    // NOP
label_206e4c:
    // 0x206e4c: 0x0  nop
    ctx->pc = 0x206e4cu;
    // NOP
}
