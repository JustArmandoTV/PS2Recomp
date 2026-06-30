#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231BC0
// Address: 0x231bc0 - 0x231e60
void sub_00231BC0_0x231bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231BC0_0x231bc0");
#endif

    switch (ctx->pc) {
        case 0x231bc0u: goto label_231bc0;
        case 0x231bc4u: goto label_231bc4;
        case 0x231bc8u: goto label_231bc8;
        case 0x231bccu: goto label_231bcc;
        case 0x231bd0u: goto label_231bd0;
        case 0x231bd4u: goto label_231bd4;
        case 0x231bd8u: goto label_231bd8;
        case 0x231bdcu: goto label_231bdc;
        case 0x231be0u: goto label_231be0;
        case 0x231be4u: goto label_231be4;
        case 0x231be8u: goto label_231be8;
        case 0x231becu: goto label_231bec;
        case 0x231bf0u: goto label_231bf0;
        case 0x231bf4u: goto label_231bf4;
        case 0x231bf8u: goto label_231bf8;
        case 0x231bfcu: goto label_231bfc;
        case 0x231c00u: goto label_231c00;
        case 0x231c04u: goto label_231c04;
        case 0x231c08u: goto label_231c08;
        case 0x231c0cu: goto label_231c0c;
        case 0x231c10u: goto label_231c10;
        case 0x231c14u: goto label_231c14;
        case 0x231c18u: goto label_231c18;
        case 0x231c1cu: goto label_231c1c;
        case 0x231c20u: goto label_231c20;
        case 0x231c24u: goto label_231c24;
        case 0x231c28u: goto label_231c28;
        case 0x231c2cu: goto label_231c2c;
        case 0x231c30u: goto label_231c30;
        case 0x231c34u: goto label_231c34;
        case 0x231c38u: goto label_231c38;
        case 0x231c3cu: goto label_231c3c;
        case 0x231c40u: goto label_231c40;
        case 0x231c44u: goto label_231c44;
        case 0x231c48u: goto label_231c48;
        case 0x231c4cu: goto label_231c4c;
        case 0x231c50u: goto label_231c50;
        case 0x231c54u: goto label_231c54;
        case 0x231c58u: goto label_231c58;
        case 0x231c5cu: goto label_231c5c;
        case 0x231c60u: goto label_231c60;
        case 0x231c64u: goto label_231c64;
        case 0x231c68u: goto label_231c68;
        case 0x231c6cu: goto label_231c6c;
        case 0x231c70u: goto label_231c70;
        case 0x231c74u: goto label_231c74;
        case 0x231c78u: goto label_231c78;
        case 0x231c7cu: goto label_231c7c;
        case 0x231c80u: goto label_231c80;
        case 0x231c84u: goto label_231c84;
        case 0x231c88u: goto label_231c88;
        case 0x231c8cu: goto label_231c8c;
        case 0x231c90u: goto label_231c90;
        case 0x231c94u: goto label_231c94;
        case 0x231c98u: goto label_231c98;
        case 0x231c9cu: goto label_231c9c;
        case 0x231ca0u: goto label_231ca0;
        case 0x231ca4u: goto label_231ca4;
        case 0x231ca8u: goto label_231ca8;
        case 0x231cacu: goto label_231cac;
        case 0x231cb0u: goto label_231cb0;
        case 0x231cb4u: goto label_231cb4;
        case 0x231cb8u: goto label_231cb8;
        case 0x231cbcu: goto label_231cbc;
        case 0x231cc0u: goto label_231cc0;
        case 0x231cc4u: goto label_231cc4;
        case 0x231cc8u: goto label_231cc8;
        case 0x231cccu: goto label_231ccc;
        case 0x231cd0u: goto label_231cd0;
        case 0x231cd4u: goto label_231cd4;
        case 0x231cd8u: goto label_231cd8;
        case 0x231cdcu: goto label_231cdc;
        case 0x231ce0u: goto label_231ce0;
        case 0x231ce4u: goto label_231ce4;
        case 0x231ce8u: goto label_231ce8;
        case 0x231cecu: goto label_231cec;
        case 0x231cf0u: goto label_231cf0;
        case 0x231cf4u: goto label_231cf4;
        case 0x231cf8u: goto label_231cf8;
        case 0x231cfcu: goto label_231cfc;
        case 0x231d00u: goto label_231d00;
        case 0x231d04u: goto label_231d04;
        case 0x231d08u: goto label_231d08;
        case 0x231d0cu: goto label_231d0c;
        case 0x231d10u: goto label_231d10;
        case 0x231d14u: goto label_231d14;
        case 0x231d18u: goto label_231d18;
        case 0x231d1cu: goto label_231d1c;
        case 0x231d20u: goto label_231d20;
        case 0x231d24u: goto label_231d24;
        case 0x231d28u: goto label_231d28;
        case 0x231d2cu: goto label_231d2c;
        case 0x231d30u: goto label_231d30;
        case 0x231d34u: goto label_231d34;
        case 0x231d38u: goto label_231d38;
        case 0x231d3cu: goto label_231d3c;
        case 0x231d40u: goto label_231d40;
        case 0x231d44u: goto label_231d44;
        case 0x231d48u: goto label_231d48;
        case 0x231d4cu: goto label_231d4c;
        case 0x231d50u: goto label_231d50;
        case 0x231d54u: goto label_231d54;
        case 0x231d58u: goto label_231d58;
        case 0x231d5cu: goto label_231d5c;
        case 0x231d60u: goto label_231d60;
        case 0x231d64u: goto label_231d64;
        case 0x231d68u: goto label_231d68;
        case 0x231d6cu: goto label_231d6c;
        case 0x231d70u: goto label_231d70;
        case 0x231d74u: goto label_231d74;
        case 0x231d78u: goto label_231d78;
        case 0x231d7cu: goto label_231d7c;
        case 0x231d80u: goto label_231d80;
        case 0x231d84u: goto label_231d84;
        case 0x231d88u: goto label_231d88;
        case 0x231d8cu: goto label_231d8c;
        case 0x231d90u: goto label_231d90;
        case 0x231d94u: goto label_231d94;
        case 0x231d98u: goto label_231d98;
        case 0x231d9cu: goto label_231d9c;
        case 0x231da0u: goto label_231da0;
        case 0x231da4u: goto label_231da4;
        case 0x231da8u: goto label_231da8;
        case 0x231dacu: goto label_231dac;
        case 0x231db0u: goto label_231db0;
        case 0x231db4u: goto label_231db4;
        case 0x231db8u: goto label_231db8;
        case 0x231dbcu: goto label_231dbc;
        case 0x231dc0u: goto label_231dc0;
        case 0x231dc4u: goto label_231dc4;
        case 0x231dc8u: goto label_231dc8;
        case 0x231dccu: goto label_231dcc;
        case 0x231dd0u: goto label_231dd0;
        case 0x231dd4u: goto label_231dd4;
        case 0x231dd8u: goto label_231dd8;
        case 0x231ddcu: goto label_231ddc;
        case 0x231de0u: goto label_231de0;
        case 0x231de4u: goto label_231de4;
        case 0x231de8u: goto label_231de8;
        case 0x231decu: goto label_231dec;
        case 0x231df0u: goto label_231df0;
        case 0x231df4u: goto label_231df4;
        case 0x231df8u: goto label_231df8;
        case 0x231dfcu: goto label_231dfc;
        case 0x231e00u: goto label_231e00;
        case 0x231e04u: goto label_231e04;
        case 0x231e08u: goto label_231e08;
        case 0x231e0cu: goto label_231e0c;
        case 0x231e10u: goto label_231e10;
        case 0x231e14u: goto label_231e14;
        case 0x231e18u: goto label_231e18;
        case 0x231e1cu: goto label_231e1c;
        case 0x231e20u: goto label_231e20;
        case 0x231e24u: goto label_231e24;
        case 0x231e28u: goto label_231e28;
        case 0x231e2cu: goto label_231e2c;
        case 0x231e30u: goto label_231e30;
        case 0x231e34u: goto label_231e34;
        case 0x231e38u: goto label_231e38;
        case 0x231e3cu: goto label_231e3c;
        case 0x231e40u: goto label_231e40;
        case 0x231e44u: goto label_231e44;
        case 0x231e48u: goto label_231e48;
        case 0x231e4cu: goto label_231e4c;
        case 0x231e50u: goto label_231e50;
        case 0x231e54u: goto label_231e54;
        case 0x231e58u: goto label_231e58;
        case 0x231e5cu: goto label_231e5c;
        default: break;
    }

    ctx->pc = 0x231bc0u;

label_231bc0:
    // 0x231bc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x231bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_231bc4:
    // 0x231bc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x231bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_231bc8:
    // 0x231bc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x231bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_231bcc:
    // 0x231bcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x231bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_231bd0:
    // 0x231bd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x231bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231bd4:
    // 0x231bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x231bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_231bd8:
    // 0x231bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_231bdc:
    // 0x231bdc: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x231bdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_231be0:
    // 0x231be0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_231be4:
    if (ctx->pc == 0x231BE4u) {
        ctx->pc = 0x231BE4u;
            // 0x231be4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231BE8u;
        goto label_231be8;
    }
    ctx->pc = 0x231BE0u;
    {
        const bool branch_taken_0x231be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231BE0u;
            // 0x231be4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231be0) {
            ctx->pc = 0x231BF4u;
            goto label_231bf4;
        }
    }
    ctx->pc = 0x231BE8u;
label_231be8:
    // 0x231be8: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x231be8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_231bec:
    // 0x231bec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x231becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_231bf0:
    // 0x231bf0: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x231bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_231bf4:
    // 0x231bf4: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x231bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_231bf8:
    // 0x231bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x231bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231bfc:
    // 0x231bfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x231bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_231c00:
    // 0x231c00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x231c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_231c04:
    // 0x231c04: 0xc08e3d0  jal         func_238F40
label_231c08:
    if (ctx->pc == 0x231C08u) {
        ctx->pc = 0x231C08u;
            // 0x231c08: 0xae620084  sw          $v0, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x231C0Cu;
        goto label_231c0c;
    }
    ctx->pc = 0x231C04u;
    SET_GPR_U32(ctx, 31, 0x231C0Cu);
    ctx->pc = 0x231C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231C04u;
            // 0x231c08: 0xae620084  sw          $v0, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238F40u;
    if (runtime->hasFunction(0x238F40u)) {
        auto targetFn = runtime->lookupFunction(0x238F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C0Cu; }
        if (ctx->pc != 0x231C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238F40_0x238f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C0Cu; }
        if (ctx->pc != 0x231C0Cu) { return; }
    }
    ctx->pc = 0x231C0Cu;
label_231c0c:
    // 0x231c0c: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x231c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_231c10:
    // 0x231c10: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x231c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_231c14:
    // 0x231c14: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x231c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_231c18:
    // 0x231c18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_231c1c:
    // 0x231c1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x231c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_231c20:
    // 0x231c20: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x231c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_231c24:
    // 0x231c24: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x231c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_231c28:
    // 0x231c28: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x231c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_231c2c:
    // 0x231c2c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x231c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_231c30:
    // 0x231c30: 0x320f809  jalr        $t9
label_231c34:
    if (ctx->pc == 0x231C34u) {
        ctx->pc = 0x231C34u;
            // 0x231c34: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x231C38u;
        goto label_231c38;
    }
    ctx->pc = 0x231C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231C38u);
        ctx->pc = 0x231C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C30u;
            // 0x231c34: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231C38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231C38u; }
            if (ctx->pc != 0x231C38u) { return; }
        }
        }
    }
    ctx->pc = 0x231C38u;
label_231c38:
    // 0x231c38: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x231c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_231c3c:
    // 0x231c3c: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
label_231c40:
    if (ctx->pc == 0x231C40u) {
        ctx->pc = 0x231C40u;
            // 0x231c40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231C44u;
        goto label_231c44;
    }
    ctx->pc = 0x231C3Cu;
    {
        const bool branch_taken_0x231c3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x231C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C3Cu;
            // 0x231c40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c3c) {
            ctx->pc = 0x231CE0u;
            goto label_231ce0;
        }
    }
    ctx->pc = 0x231C44u;
label_231c44:
    // 0x231c44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231c48:
    // 0x231c48: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x231c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231c4c:
    // 0x231c4c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x231c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_231c50:
    // 0x231c50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x231c50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231c54:
    // 0x231c54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x231c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_231c58:
    // 0x231c58: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x231c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231c5c:
    // 0x231c5c: 0x948501ec  lhu         $a1, 0x1EC($a0)
    ctx->pc = 0x231c5cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 492)));
label_231c60:
    // 0x231c60: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
label_231c64:
    if (ctx->pc == 0x231C64u) {
        ctx->pc = 0x231C64u;
            // 0x231c64: 0x248801e8  addiu       $t0, $a0, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 488));
        ctx->pc = 0x231C68u;
        goto label_231c68;
    }
    ctx->pc = 0x231C60u;
    {
        const bool branch_taken_0x231c60 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x231C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C60u;
            // 0x231c64: 0x248801e8  addiu       $t0, $a0, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c60) {
            ctx->pc = 0x231C98u;
            goto label_231c98;
        }
    }
    ctx->pc = 0x231C68u;
label_231c68:
    // 0x231c68: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x231c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_231c6c:
    // 0x231c6c: 0x0  nop
    ctx->pc = 0x231c6cu;
    // NOP
label_231c70:
    // 0x231c70: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x231c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_231c74:
    // 0x231c74: 0x14920004  bne         $a0, $s2, . + 4 + (0x4 << 2)
label_231c78:
    if (ctx->pc == 0x231C78u) {
        ctx->pc = 0x231C7Cu;
        goto label_231c7c;
    }
    ctx->pc = 0x231C74u;
    {
        const bool branch_taken_0x231c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        if (branch_taken_0x231c74) {
            ctx->pc = 0x231C88u;
            goto label_231c88;
        }
    }
    ctx->pc = 0x231C7Cu;
label_231c7c:
    // 0x231c7c: 0x10000008  b           . + 4 + (0x8 << 2)
label_231c80:
    if (ctx->pc == 0x231C80u) {
        ctx->pc = 0x231C84u;
        goto label_231c84;
    }
    ctx->pc = 0x231C7Cu;
    {
        const bool branch_taken_0x231c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c7c) {
            ctx->pc = 0x231CA0u;
            goto label_231ca0;
        }
    }
    ctx->pc = 0x231C84u;
label_231c84:
    // 0x231c84: 0x0  nop
    ctx->pc = 0x231c84u;
    // NOP
label_231c88:
    // 0x231c88: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x231c88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_231c8c:
    // 0x231c8c: 0x125202a  slt         $a0, $t1, $a1
    ctx->pc = 0x231c8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_231c90:
    // 0x231c90: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_231c94:
    if (ctx->pc == 0x231C94u) {
        ctx->pc = 0x231C94u;
            // 0x231c94: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x231C98u;
        goto label_231c98;
    }
    ctx->pc = 0x231C90u;
    {
        const bool branch_taken_0x231c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x231C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C90u;
            // 0x231c94: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c90) {
            ctx->pc = 0x231C70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231c70;
        }
    }
    ctx->pc = 0x231C98u;
label_231c98:
    // 0x231c98: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x231c98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_231c9c:
    // 0x231c9c: 0x0  nop
    ctx->pc = 0x231c9cu;
    // NOP
label_231ca0:
    // 0x231ca0: 0x95050004  lhu         $a1, 0x4($t0)
    ctx->pc = 0x231ca0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_231ca4:
    // 0x231ca4: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x231ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_231ca8:
    // 0x231ca8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x231ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_231cac:
    // 0x231cac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x231cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_231cb0:
    // 0x231cb0: 0xa5050004  sh          $a1, 0x4($t0)
    ctx->pc = 0x231cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 5));
label_231cb4:
    // 0x231cb4: 0x95050004  lhu         $a1, 0x4($t0)
    ctx->pc = 0x231cb4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_231cb8:
    // 0x231cb8: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x231cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_231cbc:
    // 0x231cbc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x231cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_231cc0:
    // 0x231cc0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x231cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_231cc4:
    // 0x231cc4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x231cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_231cc8:
    // 0x231cc8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x231cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_231ccc:
    // 0x231ccc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x231cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_231cd0:
    // 0x231cd0: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x231cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_231cd4:
    // 0x231cd4: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x231cd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_231cd8:
    // 0x231cd8: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
label_231cdc:
    if (ctx->pc == 0x231CDCu) {
        ctx->pc = 0x231CDCu;
            // 0x231cdc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x231CE0u;
        goto label_231ce0;
    }
    ctx->pc = 0x231CD8u;
    {
        const bool branch_taken_0x231cd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x231CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231CD8u;
            // 0x231cdc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cd8) {
            ctx->pc = 0x231C4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231c4c;
        }
    }
    ctx->pc = 0x231CE0u;
label_231ce0:
    // 0x231ce0: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x231ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_231ce4:
    // 0x231ce4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x231ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_231ce8:
    // 0x231ce8: 0xc08b7a4  jal         func_22DE90
label_231cec:
    if (ctx->pc == 0x231CECu) {
        ctx->pc = 0x231CECu;
            // 0x231cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231CF0u;
        goto label_231cf0;
    }
    ctx->pc = 0x231CE8u;
    SET_GPR_U32(ctx, 31, 0x231CF0u);
    ctx->pc = 0x231CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231CE8u;
            // 0x231cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DE90u;
    if (runtime->hasFunction(0x22DE90u)) {
        auto targetFn = runtime->lookupFunction(0x22DE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231CF0u; }
        if (ctx->pc != 0x231CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DE90_0x22de90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231CF0u; }
        if (ctx->pc != 0x231CF0u) { return; }
    }
    ctx->pc = 0x231CF0u;
label_231cf0:
    // 0x231cf0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x231cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_231cf4:
    // 0x231cf4: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x231cf4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_231cf8:
    // 0x231cf8: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_231cfc:
    if (ctx->pc == 0x231CFCu) {
        ctx->pc = 0x231CFCu;
            // 0x231cfc: 0x96240022  lhu         $a0, 0x22($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
        ctx->pc = 0x231D00u;
        goto label_231d00;
    }
    ctx->pc = 0x231CF8u;
    {
        const bool branch_taken_0x231cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231cf8) {
            ctx->pc = 0x231CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231CF8u;
            // 0x231cfc: 0x96240022  lhu         $a0, 0x22($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231D3Cu;
            goto label_231d3c;
        }
    }
    ctx->pc = 0x231D00u;
label_231d00:
    // 0x231d00: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x231d00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_231d04:
    // 0x231d04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x231d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_231d08:
    // 0x231d08: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x231d08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_231d0c:
    // 0x231d0c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x231d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_231d10:
    // 0x231d10: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x231d10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_231d14:
    // 0x231d14: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_231d18:
    if (ctx->pc == 0x231D18u) {
        ctx->pc = 0x231D1Cu;
        goto label_231d1c;
    }
    ctx->pc = 0x231D14u;
    {
        const bool branch_taken_0x231d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231d14) {
            ctx->pc = 0x231D38u;
            goto label_231d38;
        }
    }
    ctx->pc = 0x231D1Cu;
label_231d1c:
    // 0x231d1c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_231d20:
    if (ctx->pc == 0x231D20u) {
        ctx->pc = 0x231D24u;
        goto label_231d24;
    }
    ctx->pc = 0x231D1Cu;
    {
        const bool branch_taken_0x231d1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x231d1c) {
            ctx->pc = 0x231D38u;
            goto label_231d38;
        }
    }
    ctx->pc = 0x231D24u;
label_231d24:
    // 0x231d24: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x231d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_231d28:
    // 0x231d28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_231d2c:
    // 0x231d2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x231d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_231d30:
    // 0x231d30: 0x320f809  jalr        $t9
label_231d34:
    if (ctx->pc == 0x231D34u) {
        ctx->pc = 0x231D34u;
            // 0x231d34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x231D38u;
        goto label_231d38;
    }
    ctx->pc = 0x231D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231D38u);
        ctx->pc = 0x231D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231D30u;
            // 0x231d34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231D38u; }
            if (ctx->pc != 0x231D38u) { return; }
        }
        }
    }
    ctx->pc = 0x231D38u;
label_231d38:
    // 0x231d38: 0x96240022  lhu         $a0, 0x22($s1)
    ctx->pc = 0x231d38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
label_231d3c:
    // 0x231d3c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x231d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_231d40:
    // 0x231d40: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_231d44:
    if (ctx->pc == 0x231D44u) {
        ctx->pc = 0x231D44u;
            // 0x231d44: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x231D48u;
        goto label_231d48;
    }
    ctx->pc = 0x231D40u;
    {
        const bool branch_taken_0x231d40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x231D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231D40u;
            // 0x231d44: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d40) {
            ctx->pc = 0x231D90u;
            goto label_231d90;
        }
    }
    ctx->pc = 0x231D48u;
label_231d48:
    // 0x231d48: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x231d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_231d4c:
    // 0x231d4c: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x231d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
label_231d50:
    // 0x231d50: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x231d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_231d54:
    // 0x231d54: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x231d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_231d58:
    // 0x231d58: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x231d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_231d5c:
    // 0x231d5c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x231d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_231d60:
    // 0x231d60: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_231d64:
    if (ctx->pc == 0x231D64u) {
        ctx->pc = 0x231D64u;
            // 0x231d64: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x231D68u;
        goto label_231d68;
    }
    ctx->pc = 0x231D60u;
    {
        const bool branch_taken_0x231d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x231d60) {
            ctx->pc = 0x231D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231D60u;
            // 0x231d64: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231D78u;
            goto label_231d78;
        }
    }
    ctx->pc = 0x231D68u;
label_231d68:
    // 0x231d68: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x231d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_231d6c:
    // 0x231d6c: 0xc0a728c  jal         func_29CA30
label_231d70:
    if (ctx->pc == 0x231D70u) {
        ctx->pc = 0x231D70u;
            // 0x231d70: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x231D74u;
        goto label_231d74;
    }
    ctx->pc = 0x231D6Cu;
    SET_GPR_U32(ctx, 31, 0x231D74u);
    ctx->pc = 0x231D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231D6Cu;
            // 0x231d70: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231D74u; }
        if (ctx->pc != 0x231D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231D74u; }
        if (ctx->pc != 0x231D74u) { return; }
    }
    ctx->pc = 0x231D74u;
label_231d74:
    // 0x231d74: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x231d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_231d78:
    // 0x231d78: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x231d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_231d7c:
    // 0x231d7c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x231d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_231d80:
    // 0x231d80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x231d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_231d84:
    // 0x231d84: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x231d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_231d88:
    // 0x231d88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x231d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_231d8c:
    // 0x231d8c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x231d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_231d90:
    // 0x231d90: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x231d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_231d94:
    // 0x231d94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x231d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_231d98:
    // 0x231d98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x231d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_231d9c:
    // 0x231d9c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_231da0:
    if (ctx->pc == 0x231DA0u) {
        ctx->pc = 0x231DA0u;
            // 0x231da0: 0x8e630084  lw          $v1, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->pc = 0x231DA4u;
        goto label_231da4;
    }
    ctx->pc = 0x231D9Cu;
    {
        const bool branch_taken_0x231d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231d9c) {
            ctx->pc = 0x231DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231D9Cu;
            // 0x231da0: 0x8e630084  lw          $v1, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231DCCu;
            goto label_231dcc;
        }
    }
    ctx->pc = 0x231DA4u;
label_231da4:
    // 0x231da4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x231da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_231da8:
    // 0x231da8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x231da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_231dac:
    // 0x231dac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x231dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_231db0:
    // 0x231db0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x231db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_231db4:
    // 0x231db4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x231db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_231db8:
    // 0x231db8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x231db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_231dbc:
    // 0x231dbc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x231dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_231dc0:
    // 0x231dc0: 0xc0a7ab4  jal         func_29EAD0
label_231dc4:
    if (ctx->pc == 0x231DC4u) {
        ctx->pc = 0x231DC4u;
            // 0x231dc4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x231DC8u;
        goto label_231dc8;
    }
    ctx->pc = 0x231DC0u;
    SET_GPR_U32(ctx, 31, 0x231DC8u);
    ctx->pc = 0x231DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231DC0u;
            // 0x231dc4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231DC8u; }
        if (ctx->pc != 0x231DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231DC8u; }
        if (ctx->pc != 0x231DC8u) { return; }
    }
    ctx->pc = 0x231DC8u;
label_231dc8:
    // 0x231dc8: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x231dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_231dcc:
    // 0x231dcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x231dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_231dd0:
    // 0x231dd0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_231dd4:
    if (ctx->pc == 0x231DD4u) {
        ctx->pc = 0x231DD4u;
            // 0x231dd4: 0xae630084  sw          $v1, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x231DD8u;
        goto label_231dd8;
    }
    ctx->pc = 0x231DD0u;
    {
        const bool branch_taken_0x231dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231DD0u;
            // 0x231dd4: 0xae630084  sw          $v1, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dd0) {
            ctx->pc = 0x231DF8u;
            goto label_231df8;
        }
    }
    ctx->pc = 0x231DD8u;
label_231dd8:
    // 0x231dd8: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x231dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_231ddc:
    // 0x231ddc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_231de0:
    if (ctx->pc == 0x231DE0u) {
        ctx->pc = 0x231DE0u;
            // 0x231de0: 0x96430004  lhu         $v1, 0x4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x231DE4u;
        goto label_231de4;
    }
    ctx->pc = 0x231DDCu;
    {
        const bool branch_taken_0x231ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231ddc) {
            ctx->pc = 0x231DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231DDCu;
            // 0x231de0: 0x96430004  lhu         $v1, 0x4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231DFCu;
            goto label_231dfc;
        }
    }
    ctx->pc = 0x231DE4u;
label_231de4:
    // 0x231de4: 0x8263008c  lb          $v1, 0x8C($s3)
    ctx->pc = 0x231de4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
label_231de8:
    // 0x231de8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_231dec:
    if (ctx->pc == 0x231DECu) {
        ctx->pc = 0x231DF0u;
        goto label_231df0;
    }
    ctx->pc = 0x231DE8u;
    {
        const bool branch_taken_0x231de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231de8) {
            ctx->pc = 0x231DF8u;
            goto label_231df8;
        }
    }
    ctx->pc = 0x231DF0u;
label_231df0:
    // 0x231df0: 0xc08d1c4  jal         func_234710
label_231df4:
    if (ctx->pc == 0x231DF4u) {
        ctx->pc = 0x231DF4u;
            // 0x231df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231DF8u;
        goto label_231df8;
    }
    ctx->pc = 0x231DF0u;
    SET_GPR_U32(ctx, 31, 0x231DF8u);
    ctx->pc = 0x231DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231DF0u;
            // 0x231df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231DF8u; }
        if (ctx->pc != 0x231DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231DF8u; }
        if (ctx->pc != 0x231DF8u) { return; }
    }
    ctx->pc = 0x231DF8u;
label_231df8:
    // 0x231df8: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x231df8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_231dfc:
    // 0x231dfc: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_231e00:
    if (ctx->pc == 0x231E00u) {
        ctx->pc = 0x231E00u;
            // 0x231e00: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x231E04u;
        goto label_231e04;
    }
    ctx->pc = 0x231DFCu;
    {
        const bool branch_taken_0x231dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231dfc) {
            ctx->pc = 0x231E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231DFCu;
            // 0x231e00: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231E40u;
            goto label_231e40;
        }
    }
    ctx->pc = 0x231E04u;
label_231e04:
    // 0x231e04: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x231e04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_231e08:
    // 0x231e08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x231e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_231e0c:
    // 0x231e0c: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x231e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_231e10:
    // 0x231e10: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x231e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_231e14:
    // 0x231e14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x231e14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_231e18:
    // 0x231e18: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_231e1c:
    if (ctx->pc == 0x231E1Cu) {
        ctx->pc = 0x231E20u;
        goto label_231e20;
    }
    ctx->pc = 0x231E18u;
    {
        const bool branch_taken_0x231e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231e18) {
            ctx->pc = 0x231E3Cu;
            goto label_231e3c;
        }
    }
    ctx->pc = 0x231E20u;
label_231e20:
    // 0x231e20: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_231e24:
    if (ctx->pc == 0x231E24u) {
        ctx->pc = 0x231E28u;
        goto label_231e28;
    }
    ctx->pc = 0x231E20u;
    {
        const bool branch_taken_0x231e20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x231e20) {
            ctx->pc = 0x231E3Cu;
            goto label_231e3c;
        }
    }
    ctx->pc = 0x231E28u;
label_231e28:
    // 0x231e28: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x231e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_231e2c:
    // 0x231e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_231e30:
    // 0x231e30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x231e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_231e34:
    // 0x231e34: 0x320f809  jalr        $t9
label_231e38:
    if (ctx->pc == 0x231E38u) {
        ctx->pc = 0x231E38u;
            // 0x231e38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x231E3Cu;
        goto label_231e3c;
    }
    ctx->pc = 0x231E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231E3Cu);
        ctx->pc = 0x231E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E34u;
            // 0x231e38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231E3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231E3Cu; }
            if (ctx->pc != 0x231E3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x231E3Cu;
label_231e3c:
    // 0x231e3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x231e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_231e40:
    // 0x231e40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x231e40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_231e44:
    // 0x231e44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x231e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_231e48:
    // 0x231e48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_231e4c:
    // 0x231e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x231e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_231e50:
    // 0x231e50: 0x3e00008  jr          $ra
label_231e54:
    if (ctx->pc == 0x231E54u) {
        ctx->pc = 0x231E54u;
            // 0x231e54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x231E58u;
        goto label_231e58;
    }
    ctx->pc = 0x231E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E50u;
            // 0x231e54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231E58u;
label_231e58:
    // 0x231e58: 0x0  nop
    ctx->pc = 0x231e58u;
    // NOP
label_231e5c:
    // 0x231e5c: 0x0  nop
    ctx->pc = 0x231e5cu;
    // NOP
}
