#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1D48
// Address: 0x1a1d48 - 0x1a1f60
void sub_001A1D48_0x1a1d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1D48_0x1a1d48");
#endif

    switch (ctx->pc) {
        case 0x1a1d48u: goto label_1a1d48;
        case 0x1a1d4cu: goto label_1a1d4c;
        case 0x1a1d50u: goto label_1a1d50;
        case 0x1a1d54u: goto label_1a1d54;
        case 0x1a1d58u: goto label_1a1d58;
        case 0x1a1d5cu: goto label_1a1d5c;
        case 0x1a1d60u: goto label_1a1d60;
        case 0x1a1d64u: goto label_1a1d64;
        case 0x1a1d68u: goto label_1a1d68;
        case 0x1a1d6cu: goto label_1a1d6c;
        case 0x1a1d70u: goto label_1a1d70;
        case 0x1a1d74u: goto label_1a1d74;
        case 0x1a1d78u: goto label_1a1d78;
        case 0x1a1d7cu: goto label_1a1d7c;
        case 0x1a1d80u: goto label_1a1d80;
        case 0x1a1d84u: goto label_1a1d84;
        case 0x1a1d88u: goto label_1a1d88;
        case 0x1a1d8cu: goto label_1a1d8c;
        case 0x1a1d90u: goto label_1a1d90;
        case 0x1a1d94u: goto label_1a1d94;
        case 0x1a1d98u: goto label_1a1d98;
        case 0x1a1d9cu: goto label_1a1d9c;
        case 0x1a1da0u: goto label_1a1da0;
        case 0x1a1da4u: goto label_1a1da4;
        case 0x1a1da8u: goto label_1a1da8;
        case 0x1a1dacu: goto label_1a1dac;
        case 0x1a1db0u: goto label_1a1db0;
        case 0x1a1db4u: goto label_1a1db4;
        case 0x1a1db8u: goto label_1a1db8;
        case 0x1a1dbcu: goto label_1a1dbc;
        case 0x1a1dc0u: goto label_1a1dc0;
        case 0x1a1dc4u: goto label_1a1dc4;
        case 0x1a1dc8u: goto label_1a1dc8;
        case 0x1a1dccu: goto label_1a1dcc;
        case 0x1a1dd0u: goto label_1a1dd0;
        case 0x1a1dd4u: goto label_1a1dd4;
        case 0x1a1dd8u: goto label_1a1dd8;
        case 0x1a1ddcu: goto label_1a1ddc;
        case 0x1a1de0u: goto label_1a1de0;
        case 0x1a1de4u: goto label_1a1de4;
        case 0x1a1de8u: goto label_1a1de8;
        case 0x1a1decu: goto label_1a1dec;
        case 0x1a1df0u: goto label_1a1df0;
        case 0x1a1df4u: goto label_1a1df4;
        case 0x1a1df8u: goto label_1a1df8;
        case 0x1a1dfcu: goto label_1a1dfc;
        case 0x1a1e00u: goto label_1a1e00;
        case 0x1a1e04u: goto label_1a1e04;
        case 0x1a1e08u: goto label_1a1e08;
        case 0x1a1e0cu: goto label_1a1e0c;
        case 0x1a1e10u: goto label_1a1e10;
        case 0x1a1e14u: goto label_1a1e14;
        case 0x1a1e18u: goto label_1a1e18;
        case 0x1a1e1cu: goto label_1a1e1c;
        case 0x1a1e20u: goto label_1a1e20;
        case 0x1a1e24u: goto label_1a1e24;
        case 0x1a1e28u: goto label_1a1e28;
        case 0x1a1e2cu: goto label_1a1e2c;
        case 0x1a1e30u: goto label_1a1e30;
        case 0x1a1e34u: goto label_1a1e34;
        case 0x1a1e38u: goto label_1a1e38;
        case 0x1a1e3cu: goto label_1a1e3c;
        case 0x1a1e40u: goto label_1a1e40;
        case 0x1a1e44u: goto label_1a1e44;
        case 0x1a1e48u: goto label_1a1e48;
        case 0x1a1e4cu: goto label_1a1e4c;
        case 0x1a1e50u: goto label_1a1e50;
        case 0x1a1e54u: goto label_1a1e54;
        case 0x1a1e58u: goto label_1a1e58;
        case 0x1a1e5cu: goto label_1a1e5c;
        case 0x1a1e60u: goto label_1a1e60;
        case 0x1a1e64u: goto label_1a1e64;
        case 0x1a1e68u: goto label_1a1e68;
        case 0x1a1e6cu: goto label_1a1e6c;
        case 0x1a1e70u: goto label_1a1e70;
        case 0x1a1e74u: goto label_1a1e74;
        case 0x1a1e78u: goto label_1a1e78;
        case 0x1a1e7cu: goto label_1a1e7c;
        case 0x1a1e80u: goto label_1a1e80;
        case 0x1a1e84u: goto label_1a1e84;
        case 0x1a1e88u: goto label_1a1e88;
        case 0x1a1e8cu: goto label_1a1e8c;
        case 0x1a1e90u: goto label_1a1e90;
        case 0x1a1e94u: goto label_1a1e94;
        case 0x1a1e98u: goto label_1a1e98;
        case 0x1a1e9cu: goto label_1a1e9c;
        case 0x1a1ea0u: goto label_1a1ea0;
        case 0x1a1ea4u: goto label_1a1ea4;
        case 0x1a1ea8u: goto label_1a1ea8;
        case 0x1a1eacu: goto label_1a1eac;
        case 0x1a1eb0u: goto label_1a1eb0;
        case 0x1a1eb4u: goto label_1a1eb4;
        case 0x1a1eb8u: goto label_1a1eb8;
        case 0x1a1ebcu: goto label_1a1ebc;
        case 0x1a1ec0u: goto label_1a1ec0;
        case 0x1a1ec4u: goto label_1a1ec4;
        case 0x1a1ec8u: goto label_1a1ec8;
        case 0x1a1eccu: goto label_1a1ecc;
        case 0x1a1ed0u: goto label_1a1ed0;
        case 0x1a1ed4u: goto label_1a1ed4;
        case 0x1a1ed8u: goto label_1a1ed8;
        case 0x1a1edcu: goto label_1a1edc;
        case 0x1a1ee0u: goto label_1a1ee0;
        case 0x1a1ee4u: goto label_1a1ee4;
        case 0x1a1ee8u: goto label_1a1ee8;
        case 0x1a1eecu: goto label_1a1eec;
        case 0x1a1ef0u: goto label_1a1ef0;
        case 0x1a1ef4u: goto label_1a1ef4;
        case 0x1a1ef8u: goto label_1a1ef8;
        case 0x1a1efcu: goto label_1a1efc;
        case 0x1a1f00u: goto label_1a1f00;
        case 0x1a1f04u: goto label_1a1f04;
        case 0x1a1f08u: goto label_1a1f08;
        case 0x1a1f0cu: goto label_1a1f0c;
        case 0x1a1f10u: goto label_1a1f10;
        case 0x1a1f14u: goto label_1a1f14;
        case 0x1a1f18u: goto label_1a1f18;
        case 0x1a1f1cu: goto label_1a1f1c;
        case 0x1a1f20u: goto label_1a1f20;
        case 0x1a1f24u: goto label_1a1f24;
        case 0x1a1f28u: goto label_1a1f28;
        case 0x1a1f2cu: goto label_1a1f2c;
        case 0x1a1f30u: goto label_1a1f30;
        case 0x1a1f34u: goto label_1a1f34;
        case 0x1a1f38u: goto label_1a1f38;
        case 0x1a1f3cu: goto label_1a1f3c;
        case 0x1a1f40u: goto label_1a1f40;
        case 0x1a1f44u: goto label_1a1f44;
        case 0x1a1f48u: goto label_1a1f48;
        case 0x1a1f4cu: goto label_1a1f4c;
        case 0x1a1f50u: goto label_1a1f50;
        case 0x1a1f54u: goto label_1a1f54;
        case 0x1a1f58u: goto label_1a1f58;
        case 0x1a1f5cu: goto label_1a1f5c;
        default: break;
    }

    ctx->pc = 0x1a1d48u;

label_1a1d48:
    // 0x1a1d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a1d4c:
    // 0x1a1d4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a1d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d50:
    // 0x1a1d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a1d54:
    // 0x1a1d54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1d58:
    // 0x1a1d58: 0x8c4304f8  lw          $v1, 0x4F8($v0)
    ctx->pc = 0x1a1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1272)));
label_1a1d5c:
    // 0x1a1d5c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
label_1a1d60:
    if (ctx->pc == 0x1A1D60u) {
        ctx->pc = 0x1A1D60u;
            // 0x1a1d60: 0x2442051c  addiu       $v0, $v0, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1308));
        ctx->pc = 0x1A1D64u;
        goto label_1a1d64;
    }
    ctx->pc = 0x1A1D5Cu;
    {
        const bool branch_taken_0x1a1d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A1D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D5Cu;
            // 0x1a1d60: 0x2442051c  addiu       $v0, $v0, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d5c) {
            ctx->pc = 0x1A1D70u;
            goto label_1a1d70;
        }
    }
    ctx->pc = 0x1A1D64u;
label_1a1d64:
    // 0x1a1d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1d68:
    // 0x1a1d68: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_1a1d6c:
    if (ctx->pc == 0x1A1D6Cu) {
        ctx->pc = 0x1A1D6Cu;
            // 0x1a1d6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1D70u;
        goto label_1a1d70;
    }
    ctx->pc = 0x1A1D68u;
    {
        const bool branch_taken_0x1a1d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A1D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D68u;
            // 0x1a1d6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d68) {
            ctx->pc = 0x1A1D80u;
            goto label_1a1d80;
        }
    }
    ctx->pc = 0x1A1D70u;
label_1a1d70:
    // 0x1a1d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1d74:
    // 0x1a1d74: 0x8068762  j           func_1A1D88
label_1a1d78:
    if (ctx->pc == 0x1A1D78u) {
        ctx->pc = 0x1A1D78u;
            // 0x1a1d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A1D7Cu;
        goto label_1a1d7c;
    }
    ctx->pc = 0x1A1D74u;
    ctx->pc = 0x1A1D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D74u;
            // 0x1a1d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1D88u;
    goto label_1a1d88;
    ctx->pc = 0x1A1D7Cu;
label_1a1d7c:
    // 0x1a1d7c: 0x0  nop
    ctx->pc = 0x1a1d7cu;
    // NOP
label_1a1d80:
    // 0x1a1d80: 0x80687b6  j           func_1A1ED8
label_1a1d84:
    if (ctx->pc == 0x1A1D84u) {
        ctx->pc = 0x1A1D84u;
            // 0x1a1d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A1D88u;
        goto label_1a1d88;
    }
    ctx->pc = 0x1A1D80u;
    ctx->pc = 0x1A1D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D80u;
            // 0x1a1d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1ED8u;
    goto label_1a1ed8;
    ctx->pc = 0x1A1D88u;
label_1a1d88:
    // 0x1a1d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a1d8c:
    // 0x1a1d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a1d90:
    // 0x1a1d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d94:
    // 0x1a1d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1d98:
    // 0x1a1d98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a1d9c:
    // 0x1a1d9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a1d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a1da0:
    // 0x1a1da0: 0xc06d74a  jal         func_1B5D28
label_1a1da4:
    if (ctx->pc == 0x1A1DA4u) {
        ctx->pc = 0x1A1DA4u;
            // 0x1a1da4: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x1A1DA8u;
        goto label_1a1da8;
    }
    ctx->pc = 0x1A1DA0u;
    SET_GPR_U32(ctx, 31, 0x1A1DA8u);
    ctx->pc = 0x1A1DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DA0u;
            // 0x1a1da4: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D28u;
    if (runtime->hasFunction(0x1B5D28u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DA8u; }
        if (ctx->pc != 0x1A1DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D28_0x1b5d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DA8u; }
        if (ctx->pc != 0x1A1DA8u) { return; }
    }
    ctx->pc = 0x1A1DA8u;
label_1a1da8:
    // 0x1a1da8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a1dac:
    // 0x1a1dac: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
label_1a1db0:
    if (ctx->pc == 0x1A1DB0u) {
        ctx->pc = 0x1A1DB0u;
            // 0x1a1db0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1DB4u;
        goto label_1a1db4;
    }
    ctx->pc = 0x1A1DACu;
    {
        const bool branch_taken_0x1a1dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DACu;
            // 0x1a1db0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1dac) {
            ctx->pc = 0x1A1EC0u;
            goto label_1a1ec0;
        }
    }
    ctx->pc = 0x1A1DB4u;
label_1a1db4:
    // 0x1a1db4: 0x263004f8  addiu       $s0, $s1, 0x4F8
    ctx->pc = 0x1a1db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1272));
label_1a1db8:
    // 0x1a1db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1dbc:
    // 0x1a1dbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1dc0:
    // 0x1a1dc0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1a1dc4:
    if (ctx->pc == 0x1A1DC4u) {
        ctx->pc = 0x1A1DC4u;
            // 0x1a1dc4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DC8u;
        goto label_1a1dc8;
    }
    ctx->pc = 0x1A1DC0u;
    {
        const bool branch_taken_0x1a1dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DC0u;
            // 0x1a1dc4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1dc0) {
            ctx->pc = 0x1A1DF8u;
            goto label_1a1df8;
        }
    }
    ctx->pc = 0x1A1DC8u;
label_1a1dc8:
    // 0x1a1dc8: 0xc06849e  jal         func_1A1278
label_1a1dcc:
    if (ctx->pc == 0x1A1DCCu) {
        ctx->pc = 0x1A1DCCu;
            // 0x1a1dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DD0u;
        goto label_1a1dd0;
    }
    ctx->pc = 0x1A1DC8u;
    SET_GPR_U32(ctx, 31, 0x1A1DD0u);
    ctx->pc = 0x1A1DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DC8u;
            // 0x1a1dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1278u;
    if (runtime->hasFunction(0x1A1278u)) {
        auto targetFn = runtime->lookupFunction(0x1A1278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DD0u; }
        if (ctx->pc != 0x1A1DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1278_0x1a1278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DD0u; }
        if (ctx->pc != 0x1A1DD0u) { return; }
    }
    ctx->pc = 0x1A1DD0u;
label_1a1dd0:
    // 0x1a1dd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a1dd4:
    // 0x1a1dd4: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
label_1a1dd8:
    if (ctx->pc == 0x1A1DD8u) {
        ctx->pc = 0x1A1DD8u;
            // 0x1a1dd8: 0x2630051c  addiu       $s0, $s1, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1308));
        ctx->pc = 0x1A1DDCu;
        goto label_1a1ddc;
    }
    ctx->pc = 0x1A1DD4u;
    {
        const bool branch_taken_0x1a1dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1dd4) {
            ctx->pc = 0x1A1DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DD4u;
            // 0x1a1dd8: 0x2630051c  addiu       $s0, $s1, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1308));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1DFCu;
            goto label_1a1dfc;
        }
    }
    ctx->pc = 0x1A1DDCu;
label_1a1ddc:
    // 0x1a1ddc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1a1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a1de0:
    // 0x1a1de0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1de4:
    // 0x1a1de4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a1de8:
    // 0x1a1de8: 0x40f809  jalr        $v0
label_1a1dec:
    if (ctx->pc == 0x1A1DECu) {
        ctx->pc = 0x1A1DECu;
            // 0x1a1dec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A1DF0u;
        goto label_1a1df0;
    }
    ctx->pc = 0x1A1DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1DF0u);
        ctx->pc = 0x1A1DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DE8u;
            // 0x1a1dec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1DF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DF0u; }
            if (ctx->pc != 0x1A1DF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1DF0u;
label_1a1df0:
    // 0x1a1df0: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1a1df4:
    if (ctx->pc == 0x1A1DF4u) {
        ctx->pc = 0x1A1DF4u;
            // 0x1a1df4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1DF8u;
        goto label_1a1df8;
    }
    ctx->pc = 0x1A1DF0u;
    {
        const bool branch_taken_0x1a1df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DF0u;
            // 0x1a1df4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1df0) {
            ctx->pc = 0x1A1EC0u;
            goto label_1a1ec0;
        }
    }
    ctx->pc = 0x1A1DF8u;
label_1a1df8:
    // 0x1a1df8: 0x2630051c  addiu       $s0, $s1, 0x51C
    ctx->pc = 0x1a1df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1308));
label_1a1dfc:
    // 0x1a1dfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1e00:
    // 0x1a1e00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1e04:
    // 0x1a1e04: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1a1e08:
    if (ctx->pc == 0x1A1E08u) {
        ctx->pc = 0x1A1E0Cu;
        goto label_1a1e0c;
    }
    ctx->pc = 0x1A1E04u;
    {
        const bool branch_taken_0x1a1e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1e04) {
            ctx->pc = 0x1A1E3Cu;
            goto label_1a1e3c;
        }
    }
    ctx->pc = 0x1A1E0Cu;
label_1a1e0c:
    // 0x1a1e0c: 0xc06849e  jal         func_1A1278
label_1a1e10:
    if (ctx->pc == 0x1A1E10u) {
        ctx->pc = 0x1A1E10u;
            // 0x1a1e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E14u;
        goto label_1a1e14;
    }
    ctx->pc = 0x1A1E0Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E14u);
    ctx->pc = 0x1A1E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E0Cu;
            // 0x1a1e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1278u;
    if (runtime->hasFunction(0x1A1278u)) {
        auto targetFn = runtime->lookupFunction(0x1A1278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E14u; }
        if (ctx->pc != 0x1A1E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1278_0x1a1278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E14u; }
        if (ctx->pc != 0x1A1E14u) { return; }
    }
    ctx->pc = 0x1A1E14u;
label_1a1e14:
    // 0x1a1e14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a1e18:
    // 0x1a1e18: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_1a1e1c:
    if (ctx->pc == 0x1A1E1Cu) {
        ctx->pc = 0x1A1E20u;
        goto label_1a1e20;
    }
    ctx->pc = 0x1A1E18u;
    {
        const bool branch_taken_0x1a1e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1e18) {
            ctx->pc = 0x1A1E3Cu;
            goto label_1a1e3c;
        }
    }
    ctx->pc = 0x1A1E20u;
label_1a1e20:
    // 0x1a1e20: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1a1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a1e24:
    // 0x1a1e24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1e28:
    // 0x1a1e28: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a1e2c:
    // 0x1a1e2c: 0x40f809  jalr        $v0
label_1a1e30:
    if (ctx->pc == 0x1A1E30u) {
        ctx->pc = 0x1A1E30u;
            // 0x1a1e30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A1E34u;
        goto label_1a1e34;
    }
    ctx->pc = 0x1A1E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1E34u);
        ctx->pc = 0x1A1E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E2Cu;
            // 0x1a1e30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1E34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E34u; }
            if (ctx->pc != 0x1A1E34u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1E34u;
label_1a1e34:
    // 0x1a1e34: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_1a1e38:
    if (ctx->pc == 0x1A1E38u) {
        ctx->pc = 0x1A1E38u;
            // 0x1a1e38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1E3Cu;
        goto label_1a1e3c;
    }
    ctx->pc = 0x1A1E34u;
    {
        const bool branch_taken_0x1a1e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e34) {
            ctx->pc = 0x1A1E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E34u;
            // 0x1a1e38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1EC0u;
            goto label_1a1ec0;
        }
    }
    ctx->pc = 0x1A1E3Cu;
label_1a1e3c:
    // 0x1a1e3c: 0xc066f0c  jal         func_19BC30
label_1a1e40:
    if (ctx->pc == 0x1A1E40u) {
        ctx->pc = 0x1A1E40u;
            // 0x1a1e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E44u;
        goto label_1a1e44;
    }
    ctx->pc = 0x1A1E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E44u);
    ctx->pc = 0x1A1E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E3Cu;
            // 0x1a1e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BC30u;
    if (runtime->hasFunction(0x19BC30u)) {
        auto targetFn = runtime->lookupFunction(0x19BC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E44u; }
        if (ctx->pc != 0x1A1E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BC30_0x19bc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E44u; }
        if (ctx->pc != 0x1A1E44u) { return; }
    }
    ctx->pc = 0x1A1E44u;
label_1a1e44:
    // 0x1a1e44: 0x82230082  lb          $v1, 0x82($s1)
    ctx->pc = 0x1a1e44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
label_1a1e48:
    // 0x1a1e48: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1a1e4c:
    if (ctx->pc == 0x1A1E4Cu) {
        ctx->pc = 0x1A1E4Cu;
            // 0x1a1e4c: 0x82230080  lb          $v1, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x1A1E50u;
        goto label_1a1e50;
    }
    ctx->pc = 0x1A1E48u;
    {
        const bool branch_taken_0x1a1e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e48) {
            ctx->pc = 0x1A1E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E48u;
            // 0x1a1e4c: 0x82230080  lb          $v1, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1E60u;
            goto label_1a1e60;
        }
    }
    ctx->pc = 0x1A1E50u;
label_1a1e50:
    // 0x1a1e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e54:
    // 0x1a1e54: 0xc0670f8  jal         func_19C3E0
label_1a1e58:
    if (ctx->pc == 0x1A1E58u) {
        ctx->pc = 0x1A1E58u;
            // 0x1a1e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E5Cu;
        goto label_1a1e5c;
    }
    ctx->pc = 0x1A1E54u;
    SET_GPR_U32(ctx, 31, 0x1A1E5Cu);
    ctx->pc = 0x1A1E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E54u;
            // 0x1a1e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3E0u;
    if (runtime->hasFunction(0x19C3E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E5Cu; }
        if (ctx->pc != 0x1A1E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C3E0_0x19c3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E5Cu; }
        if (ctx->pc != 0x1A1E5Cu) { return; }
    }
    ctx->pc = 0x1A1E5Cu;
label_1a1e5c:
    // 0x1a1e5c: 0x82230080  lb          $v1, 0x80($s1)
    ctx->pc = 0x1a1e5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
label_1a1e60:
    // 0x1a1e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1e64:
    // 0x1a1e64: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1a1e68:
    if (ctx->pc == 0x1A1E68u) {
        ctx->pc = 0x1A1E68u;
            // 0x1a1e68: 0x82220082  lb          $v0, 0x82($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
        ctx->pc = 0x1A1E6Cu;
        goto label_1a1e6c;
    }
    ctx->pc = 0x1A1E64u;
    {
        const bool branch_taken_0x1a1e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1e64) {
            ctx->pc = 0x1A1E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E64u;
            // 0x1a1e68: 0x82220082  lb          $v0, 0x82($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1E8Cu;
            goto label_1a1e8c;
        }
    }
    ctx->pc = 0x1A1E6Cu;
label_1a1e6c:
    // 0x1a1e6c: 0xc069a00  jal         func_1A6800
label_1a1e70:
    if (ctx->pc == 0x1A1E70u) {
        ctx->pc = 0x1A1E70u;
            // 0x1a1e70: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x1A1E74u;
        goto label_1a1e74;
    }
    ctx->pc = 0x1A1E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E74u);
    ctx->pc = 0x1A1E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E6Cu;
            // 0x1a1e70: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6800u;
    if (runtime->hasFunction(0x1A6800u)) {
        auto targetFn = runtime->lookupFunction(0x1A6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E74u; }
        if (ctx->pc != 0x1A1E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6800_0x1a6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E74u; }
        if (ctx->pc != 0x1A1E74u) { return; }
    }
    ctx->pc = 0x1A1E74u;
label_1a1e74:
    // 0x1a1e74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a1e78:
    if (ctx->pc == 0x1A1E78u) {
        ctx->pc = 0x1A1E78u;
            // 0x1a1e78: 0x82220082  lb          $v0, 0x82($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
        ctx->pc = 0x1A1E7Cu;
        goto label_1a1e7c;
    }
    ctx->pc = 0x1A1E74u;
    {
        const bool branch_taken_0x1a1e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e74) {
            ctx->pc = 0x1A1E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E74u;
            // 0x1a1e78: 0x82220082  lb          $v0, 0x82($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1E8Cu;
            goto label_1a1e8c;
        }
    }
    ctx->pc = 0x1A1E7Cu;
label_1a1e7c:
    // 0x1a1e7c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1a1e80:
    // 0x1a1e80: 0xc0686c6  jal         func_1A1B18
label_1a1e84:
    if (ctx->pc == 0x1A1E84u) {
        ctx->pc = 0x1A1E84u;
            // 0x1a1e84: 0x2484a820  addiu       $a0, $a0, -0x57E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944800));
        ctx->pc = 0x1A1E88u;
        goto label_1a1e88;
    }
    ctx->pc = 0x1A1E80u;
    SET_GPR_U32(ctx, 31, 0x1A1E88u);
    ctx->pc = 0x1A1E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E80u;
            // 0x1a1e84: 0x2484a820  addiu       $a0, $a0, -0x57E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E88u; }
        if (ctx->pc != 0x1A1E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E88u; }
        if (ctx->pc != 0x1A1E88u) { return; }
    }
    ctx->pc = 0x1A1E88u;
label_1a1e88:
    // 0x1a1e88: 0x82220082  lb          $v0, 0x82($s1)
    ctx->pc = 0x1a1e88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
label_1a1e8c:
    // 0x1a1e8c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1a1e90:
    if (ctx->pc == 0x1A1E90u) {
        ctx->pc = 0x1A1E90u;
            // 0x1a1e90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1E94u;
        goto label_1a1e94;
    }
    ctx->pc = 0x1A1E8Cu;
    {
        const bool branch_taken_0x1a1e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e8c) {
            ctx->pc = 0x1A1E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E8Cu;
            // 0x1a1e90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1EC0u;
            goto label_1a1ec0;
        }
    }
    ctx->pc = 0x1A1E94u;
label_1a1e94:
    // 0x1a1e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a1e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e98:
    // 0x1a1e98: 0xc0684d0  jal         func_1A1340
label_1a1e9c:
    if (ctx->pc == 0x1A1E9Cu) {
        ctx->pc = 0x1A1E9Cu;
            // 0x1a1e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1EA0u;
        goto label_1a1ea0;
    }
    ctx->pc = 0x1A1E98u;
    SET_GPR_U32(ctx, 31, 0x1A1EA0u);
    ctx->pc = 0x1A1E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E98u;
            // 0x1a1e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1340u;
    if (runtime->hasFunction(0x1A1340u)) {
        auto targetFn = runtime->lookupFunction(0x1A1340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EA0u; }
        if (ctx->pc != 0x1A1EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1340_0x1a1340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EA0u; }
        if (ctx->pc != 0x1A1EA0u) { return; }
    }
    ctx->pc = 0x1A1EA0u;
label_1a1ea0:
    // 0x1a1ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ea4:
    // 0x1a1ea4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1ea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1ea8:
    // 0x1a1ea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1eac:
    // 0x1a1eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1eb0:
    // 0x1a1eb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1eb4:
    // 0x1a1eb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a1eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a1eb8:
    // 0x1a1eb8: 0x80684d0  j           func_1A1340
label_1a1ebc:
    if (ctx->pc == 0x1A1EBCu) {
        ctx->pc = 0x1A1EBCu;
            // 0x1a1ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A1EC0u;
        goto label_1a1ec0;
    }
    ctx->pc = 0x1A1EB8u;
    ctx->pc = 0x1A1EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1EB8u;
            // 0x1a1ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1340u;
    if (runtime->hasFunction(0x1A1340u)) {
        auto targetFn = runtime->lookupFunction(0x1A1340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1340_0x1a1340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A1EC0u;
label_1a1ec0:
    // 0x1a1ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1ec4:
    // 0x1a1ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1ec8:
    // 0x1a1ec8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a1ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a1ecc:
    // 0x1a1ecc: 0x3e00008  jr          $ra
label_1a1ed0:
    if (ctx->pc == 0x1A1ED0u) {
        ctx->pc = 0x1A1ED0u;
            // 0x1a1ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A1ED4u;
        goto label_1a1ed4;
    }
    ctx->pc = 0x1A1ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1ECCu;
            // 0x1a1ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1ED4u;
label_1a1ed4:
    // 0x1a1ed4: 0x0  nop
    ctx->pc = 0x1a1ed4u;
    // NOP
label_1a1ed8:
    // 0x1a1ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a1edc:
    // 0x1a1edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1ee0:
    // 0x1a1ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ee4:
    // 0x1a1ee4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a1ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a1ee8:
    // 0x1a1ee8: 0xc06d74a  jal         func_1B5D28
label_1a1eec:
    if (ctx->pc == 0x1A1EECu) {
        ctx->pc = 0x1A1EECu;
            // 0x1a1eec: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->pc = 0x1A1EF0u;
        goto label_1a1ef0;
    }
    ctx->pc = 0x1A1EE8u;
    SET_GPR_U32(ctx, 31, 0x1A1EF0u);
    ctx->pc = 0x1A1EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1EE8u;
            // 0x1a1eec: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D28u;
    if (runtime->hasFunction(0x1B5D28u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EF0u; }
        if (ctx->pc != 0x1A1EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D28_0x1b5d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EF0u; }
        if (ctx->pc != 0x1A1EF0u) { return; }
    }
    ctx->pc = 0x1A1EF0u;
label_1a1ef0:
    // 0x1a1ef0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a1ef4:
    // 0x1a1ef4: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_1a1ef8:
    if (ctx->pc == 0x1A1EF8u) {
        ctx->pc = 0x1A1EF8u;
            // 0x1a1ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1EFCu;
        goto label_1a1efc;
    }
    ctx->pc = 0x1A1EF4u;
    {
        const bool branch_taken_0x1a1ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1EF4u;
            // 0x1a1ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ef4) {
            ctx->pc = 0x1A1F50u;
            goto label_1a1f50;
        }
    }
    ctx->pc = 0x1A1EFCu;
label_1a1efc:
    // 0x1a1efc: 0xc066f0c  jal         func_19BC30
label_1a1f00:
    if (ctx->pc == 0x1A1F00u) {
        ctx->pc = 0x1A1F04u;
        goto label_1a1f04;
    }
    ctx->pc = 0x1A1EFCu;
    SET_GPR_U32(ctx, 31, 0x1A1F04u);
    ctx->pc = 0x19BC30u;
    if (runtime->hasFunction(0x19BC30u)) {
        auto targetFn = runtime->lookupFunction(0x19BC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F04u; }
        if (ctx->pc != 0x1A1F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BC30_0x19bc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F04u; }
        if (ctx->pc != 0x1A1F04u) { return; }
    }
    ctx->pc = 0x1A1F04u;
label_1a1f04:
    // 0x1a1f04: 0x82030082  lb          $v1, 0x82($s0)
    ctx->pc = 0x1a1f04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
label_1a1f08:
    // 0x1a1f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f0c:
    // 0x1a1f0c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a1f10:
    if (ctx->pc == 0x1A1F10u) {
        ctx->pc = 0x1A1F10u;
            // 0x1a1f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F14u;
        goto label_1a1f14;
    }
    ctx->pc = 0x1A1F0Cu;
    {
        const bool branch_taken_0x1a1f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F0Cu;
            // 0x1a1f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f0c) {
            ctx->pc = 0x1A1F1Cu;
            goto label_1a1f1c;
        }
    }
    ctx->pc = 0x1A1F14u;
label_1a1f14:
    // 0x1a1f14: 0xc0670f8  jal         func_19C3E0
label_1a1f18:
    if (ctx->pc == 0x1A1F18u) {
        ctx->pc = 0x1A1F1Cu;
        goto label_1a1f1c;
    }
    ctx->pc = 0x1A1F14u;
    SET_GPR_U32(ctx, 31, 0x1A1F1Cu);
    ctx->pc = 0x19C3E0u;
    if (runtime->hasFunction(0x19C3E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F1Cu; }
        if (ctx->pc != 0x1A1F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C3E0_0x19c3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F1Cu; }
        if (ctx->pc != 0x1A1F1Cu) { return; }
    }
    ctx->pc = 0x1A1F1Cu;
label_1a1f1c:
    // 0x1a1f1c: 0x82030080  lb          $v1, 0x80($s0)
    ctx->pc = 0x1a1f1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
label_1a1f20:
    // 0x1a1f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1f24:
    // 0x1a1f24: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_1a1f28:
    if (ctx->pc == 0x1A1F28u) {
        ctx->pc = 0x1A1F28u;
            // 0x1a1f28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1F2Cu;
        goto label_1a1f2c;
    }
    ctx->pc = 0x1A1F24u;
    {
        const bool branch_taken_0x1a1f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1f24) {
            ctx->pc = 0x1A1F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F24u;
            // 0x1a1f28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1F54u;
            goto label_1a1f54;
        }
    }
    ctx->pc = 0x1A1F2Cu;
label_1a1f2c:
    // 0x1a1f2c: 0xc069a00  jal         func_1A6800
label_1a1f30:
    if (ctx->pc == 0x1A1F30u) {
        ctx->pc = 0x1A1F30u;
            // 0x1a1f30: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->pc = 0x1A1F34u;
        goto label_1a1f34;
    }
    ctx->pc = 0x1A1F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A1F34u);
    ctx->pc = 0x1A1F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F2Cu;
            // 0x1a1f30: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6800u;
    if (runtime->hasFunction(0x1A6800u)) {
        auto targetFn = runtime->lookupFunction(0x1A6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F34u; }
        if (ctx->pc != 0x1A1F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6800_0x1a6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F34u; }
        if (ctx->pc != 0x1A1F34u) { return; }
    }
    ctx->pc = 0x1A1F34u;
label_1a1f34:
    // 0x1a1f34: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a1f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1a1f38:
    // 0x1a1f38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a1f3c:
    if (ctx->pc == 0x1A1F3Cu) {
        ctx->pc = 0x1A1F3Cu;
            // 0x1a1f3c: 0x2484a820  addiu       $a0, $a0, -0x57E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944800));
        ctx->pc = 0x1A1F40u;
        goto label_1a1f40;
    }
    ctx->pc = 0x1A1F38u;
    {
        const bool branch_taken_0x1a1f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F38u;
            // 0x1a1f3c: 0x2484a820  addiu       $a0, $a0, -0x57E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f38) {
            ctx->pc = 0x1A1F50u;
            goto label_1a1f50;
        }
    }
    ctx->pc = 0x1A1F40u;
label_1a1f40:
    // 0x1a1f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1f44:
    // 0x1a1f44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a1f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1f48:
    // 0x1a1f48: 0x80686c6  j           func_1A1B18
label_1a1f4c:
    if (ctx->pc == 0x1A1F4Cu) {
        ctx->pc = 0x1A1F4Cu;
            // 0x1a1f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A1F50u;
        goto label_1a1f50;
    }
    ctx->pc = 0x1A1F48u;
    ctx->pc = 0x1A1F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F48u;
            // 0x1a1f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A1F50u;
label_1a1f50:
    // 0x1a1f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1f54:
    // 0x1a1f54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a1f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1f58:
    // 0x1a1f58: 0x3e00008  jr          $ra
label_1a1f5c:
    if (ctx->pc == 0x1A1F5Cu) {
        ctx->pc = 0x1A1F5Cu;
            // 0x1a1f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A1F60u;
        goto label_fallthrough_0x1a1f58;
    }
    ctx->pc = 0x1A1F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F58u;
            // 0x1a1f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a1f58:
    ctx->pc = 0x1A1F60u;
}
