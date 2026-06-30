#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00328A80
// Address: 0x328a80 - 0x328e70
void sub_00328A80_0x328a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328A80_0x328a80");
#endif

    switch (ctx->pc) {
        case 0x328a80u: goto label_328a80;
        case 0x328a84u: goto label_328a84;
        case 0x328a88u: goto label_328a88;
        case 0x328a8cu: goto label_328a8c;
        case 0x328a90u: goto label_328a90;
        case 0x328a94u: goto label_328a94;
        case 0x328a98u: goto label_328a98;
        case 0x328a9cu: goto label_328a9c;
        case 0x328aa0u: goto label_328aa0;
        case 0x328aa4u: goto label_328aa4;
        case 0x328aa8u: goto label_328aa8;
        case 0x328aacu: goto label_328aac;
        case 0x328ab0u: goto label_328ab0;
        case 0x328ab4u: goto label_328ab4;
        case 0x328ab8u: goto label_328ab8;
        case 0x328abcu: goto label_328abc;
        case 0x328ac0u: goto label_328ac0;
        case 0x328ac4u: goto label_328ac4;
        case 0x328ac8u: goto label_328ac8;
        case 0x328accu: goto label_328acc;
        case 0x328ad0u: goto label_328ad0;
        case 0x328ad4u: goto label_328ad4;
        case 0x328ad8u: goto label_328ad8;
        case 0x328adcu: goto label_328adc;
        case 0x328ae0u: goto label_328ae0;
        case 0x328ae4u: goto label_328ae4;
        case 0x328ae8u: goto label_328ae8;
        case 0x328aecu: goto label_328aec;
        case 0x328af0u: goto label_328af0;
        case 0x328af4u: goto label_328af4;
        case 0x328af8u: goto label_328af8;
        case 0x328afcu: goto label_328afc;
        case 0x328b00u: goto label_328b00;
        case 0x328b04u: goto label_328b04;
        case 0x328b08u: goto label_328b08;
        case 0x328b0cu: goto label_328b0c;
        case 0x328b10u: goto label_328b10;
        case 0x328b14u: goto label_328b14;
        case 0x328b18u: goto label_328b18;
        case 0x328b1cu: goto label_328b1c;
        case 0x328b20u: goto label_328b20;
        case 0x328b24u: goto label_328b24;
        case 0x328b28u: goto label_328b28;
        case 0x328b2cu: goto label_328b2c;
        case 0x328b30u: goto label_328b30;
        case 0x328b34u: goto label_328b34;
        case 0x328b38u: goto label_328b38;
        case 0x328b3cu: goto label_328b3c;
        case 0x328b40u: goto label_328b40;
        case 0x328b44u: goto label_328b44;
        case 0x328b48u: goto label_328b48;
        case 0x328b4cu: goto label_328b4c;
        case 0x328b50u: goto label_328b50;
        case 0x328b54u: goto label_328b54;
        case 0x328b58u: goto label_328b58;
        case 0x328b5cu: goto label_328b5c;
        case 0x328b60u: goto label_328b60;
        case 0x328b64u: goto label_328b64;
        case 0x328b68u: goto label_328b68;
        case 0x328b6cu: goto label_328b6c;
        case 0x328b70u: goto label_328b70;
        case 0x328b74u: goto label_328b74;
        case 0x328b78u: goto label_328b78;
        case 0x328b7cu: goto label_328b7c;
        case 0x328b80u: goto label_328b80;
        case 0x328b84u: goto label_328b84;
        case 0x328b88u: goto label_328b88;
        case 0x328b8cu: goto label_328b8c;
        case 0x328b90u: goto label_328b90;
        case 0x328b94u: goto label_328b94;
        case 0x328b98u: goto label_328b98;
        case 0x328b9cu: goto label_328b9c;
        case 0x328ba0u: goto label_328ba0;
        case 0x328ba4u: goto label_328ba4;
        case 0x328ba8u: goto label_328ba8;
        case 0x328bacu: goto label_328bac;
        case 0x328bb0u: goto label_328bb0;
        case 0x328bb4u: goto label_328bb4;
        case 0x328bb8u: goto label_328bb8;
        case 0x328bbcu: goto label_328bbc;
        case 0x328bc0u: goto label_328bc0;
        case 0x328bc4u: goto label_328bc4;
        case 0x328bc8u: goto label_328bc8;
        case 0x328bccu: goto label_328bcc;
        case 0x328bd0u: goto label_328bd0;
        case 0x328bd4u: goto label_328bd4;
        case 0x328bd8u: goto label_328bd8;
        case 0x328bdcu: goto label_328bdc;
        case 0x328be0u: goto label_328be0;
        case 0x328be4u: goto label_328be4;
        case 0x328be8u: goto label_328be8;
        case 0x328becu: goto label_328bec;
        case 0x328bf0u: goto label_328bf0;
        case 0x328bf4u: goto label_328bf4;
        case 0x328bf8u: goto label_328bf8;
        case 0x328bfcu: goto label_328bfc;
        case 0x328c00u: goto label_328c00;
        case 0x328c04u: goto label_328c04;
        case 0x328c08u: goto label_328c08;
        case 0x328c0cu: goto label_328c0c;
        case 0x328c10u: goto label_328c10;
        case 0x328c14u: goto label_328c14;
        case 0x328c18u: goto label_328c18;
        case 0x328c1cu: goto label_328c1c;
        case 0x328c20u: goto label_328c20;
        case 0x328c24u: goto label_328c24;
        case 0x328c28u: goto label_328c28;
        case 0x328c2cu: goto label_328c2c;
        case 0x328c30u: goto label_328c30;
        case 0x328c34u: goto label_328c34;
        case 0x328c38u: goto label_328c38;
        case 0x328c3cu: goto label_328c3c;
        case 0x328c40u: goto label_328c40;
        case 0x328c44u: goto label_328c44;
        case 0x328c48u: goto label_328c48;
        case 0x328c4cu: goto label_328c4c;
        case 0x328c50u: goto label_328c50;
        case 0x328c54u: goto label_328c54;
        case 0x328c58u: goto label_328c58;
        case 0x328c5cu: goto label_328c5c;
        case 0x328c60u: goto label_328c60;
        case 0x328c64u: goto label_328c64;
        case 0x328c68u: goto label_328c68;
        case 0x328c6cu: goto label_328c6c;
        case 0x328c70u: goto label_328c70;
        case 0x328c74u: goto label_328c74;
        case 0x328c78u: goto label_328c78;
        case 0x328c7cu: goto label_328c7c;
        case 0x328c80u: goto label_328c80;
        case 0x328c84u: goto label_328c84;
        case 0x328c88u: goto label_328c88;
        case 0x328c8cu: goto label_328c8c;
        case 0x328c90u: goto label_328c90;
        case 0x328c94u: goto label_328c94;
        case 0x328c98u: goto label_328c98;
        case 0x328c9cu: goto label_328c9c;
        case 0x328ca0u: goto label_328ca0;
        case 0x328ca4u: goto label_328ca4;
        case 0x328ca8u: goto label_328ca8;
        case 0x328cacu: goto label_328cac;
        case 0x328cb0u: goto label_328cb0;
        case 0x328cb4u: goto label_328cb4;
        case 0x328cb8u: goto label_328cb8;
        case 0x328cbcu: goto label_328cbc;
        case 0x328cc0u: goto label_328cc0;
        case 0x328cc4u: goto label_328cc4;
        case 0x328cc8u: goto label_328cc8;
        case 0x328cccu: goto label_328ccc;
        case 0x328cd0u: goto label_328cd0;
        case 0x328cd4u: goto label_328cd4;
        case 0x328cd8u: goto label_328cd8;
        case 0x328cdcu: goto label_328cdc;
        case 0x328ce0u: goto label_328ce0;
        case 0x328ce4u: goto label_328ce4;
        case 0x328ce8u: goto label_328ce8;
        case 0x328cecu: goto label_328cec;
        case 0x328cf0u: goto label_328cf0;
        case 0x328cf4u: goto label_328cf4;
        case 0x328cf8u: goto label_328cf8;
        case 0x328cfcu: goto label_328cfc;
        case 0x328d00u: goto label_328d00;
        case 0x328d04u: goto label_328d04;
        case 0x328d08u: goto label_328d08;
        case 0x328d0cu: goto label_328d0c;
        case 0x328d10u: goto label_328d10;
        case 0x328d14u: goto label_328d14;
        case 0x328d18u: goto label_328d18;
        case 0x328d1cu: goto label_328d1c;
        case 0x328d20u: goto label_328d20;
        case 0x328d24u: goto label_328d24;
        case 0x328d28u: goto label_328d28;
        case 0x328d2cu: goto label_328d2c;
        case 0x328d30u: goto label_328d30;
        case 0x328d34u: goto label_328d34;
        case 0x328d38u: goto label_328d38;
        case 0x328d3cu: goto label_328d3c;
        case 0x328d40u: goto label_328d40;
        case 0x328d44u: goto label_328d44;
        case 0x328d48u: goto label_328d48;
        case 0x328d4cu: goto label_328d4c;
        case 0x328d50u: goto label_328d50;
        case 0x328d54u: goto label_328d54;
        case 0x328d58u: goto label_328d58;
        case 0x328d5cu: goto label_328d5c;
        case 0x328d60u: goto label_328d60;
        case 0x328d64u: goto label_328d64;
        case 0x328d68u: goto label_328d68;
        case 0x328d6cu: goto label_328d6c;
        case 0x328d70u: goto label_328d70;
        case 0x328d74u: goto label_328d74;
        case 0x328d78u: goto label_328d78;
        case 0x328d7cu: goto label_328d7c;
        case 0x328d80u: goto label_328d80;
        case 0x328d84u: goto label_328d84;
        case 0x328d88u: goto label_328d88;
        case 0x328d8cu: goto label_328d8c;
        case 0x328d90u: goto label_328d90;
        case 0x328d94u: goto label_328d94;
        case 0x328d98u: goto label_328d98;
        case 0x328d9cu: goto label_328d9c;
        case 0x328da0u: goto label_328da0;
        case 0x328da4u: goto label_328da4;
        case 0x328da8u: goto label_328da8;
        case 0x328dacu: goto label_328dac;
        case 0x328db0u: goto label_328db0;
        case 0x328db4u: goto label_328db4;
        case 0x328db8u: goto label_328db8;
        case 0x328dbcu: goto label_328dbc;
        case 0x328dc0u: goto label_328dc0;
        case 0x328dc4u: goto label_328dc4;
        case 0x328dc8u: goto label_328dc8;
        case 0x328dccu: goto label_328dcc;
        case 0x328dd0u: goto label_328dd0;
        case 0x328dd4u: goto label_328dd4;
        case 0x328dd8u: goto label_328dd8;
        case 0x328ddcu: goto label_328ddc;
        case 0x328de0u: goto label_328de0;
        case 0x328de4u: goto label_328de4;
        case 0x328de8u: goto label_328de8;
        case 0x328decu: goto label_328dec;
        case 0x328df0u: goto label_328df0;
        case 0x328df4u: goto label_328df4;
        case 0x328df8u: goto label_328df8;
        case 0x328dfcu: goto label_328dfc;
        case 0x328e00u: goto label_328e00;
        case 0x328e04u: goto label_328e04;
        case 0x328e08u: goto label_328e08;
        case 0x328e0cu: goto label_328e0c;
        case 0x328e10u: goto label_328e10;
        case 0x328e14u: goto label_328e14;
        case 0x328e18u: goto label_328e18;
        case 0x328e1cu: goto label_328e1c;
        case 0x328e20u: goto label_328e20;
        case 0x328e24u: goto label_328e24;
        case 0x328e28u: goto label_328e28;
        case 0x328e2cu: goto label_328e2c;
        case 0x328e30u: goto label_328e30;
        case 0x328e34u: goto label_328e34;
        case 0x328e38u: goto label_328e38;
        case 0x328e3cu: goto label_328e3c;
        case 0x328e40u: goto label_328e40;
        case 0x328e44u: goto label_328e44;
        case 0x328e48u: goto label_328e48;
        case 0x328e4cu: goto label_328e4c;
        case 0x328e50u: goto label_328e50;
        case 0x328e54u: goto label_328e54;
        case 0x328e58u: goto label_328e58;
        case 0x328e5cu: goto label_328e5c;
        case 0x328e60u: goto label_328e60;
        case 0x328e64u: goto label_328e64;
        case 0x328e68u: goto label_328e68;
        case 0x328e6cu: goto label_328e6c;
        default: break;
    }

    ctx->pc = 0x328a80u;

label_328a80:
    // 0x328a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x328a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_328a84:
    // 0x328a84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x328a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_328a88:
    // 0x328a88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x328a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_328a8c:
    // 0x328a8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_328a90:
    // 0x328a90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x328a90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328a94:
    // 0x328a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_328a98:
    // 0x328a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_328a9c:
    // 0x328a9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x328a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328aa0:
    // 0x328aa0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x328aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_328aa4:
    // 0x328aa4: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x328aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_328aa8:
    // 0x328aa8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_328aac:
    if (ctx->pc == 0x328AACu) {
        ctx->pc = 0x328AB0u;
        goto label_328ab0;
    }
    ctx->pc = 0x328AA8u;
    {
        const bool branch_taken_0x328aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328aa8) {
            ctx->pc = 0x328AC0u;
            goto label_328ac0;
        }
    }
    ctx->pc = 0x328AB0u;
label_328ab0:
    // 0x328ab0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328ab4:
    // 0x328ab4: 0xc0fe48c  jal         func_3F9230
label_328ab8:
    if (ctx->pc == 0x328AB8u) {
        ctx->pc = 0x328AB8u;
            // 0x328ab8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328ABCu;
        goto label_328abc;
    }
    ctx->pc = 0x328AB4u;
    SET_GPR_U32(ctx, 31, 0x328ABCu);
    ctx->pc = 0x328AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328AB4u;
            // 0x328ab8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328ABCu; }
        if (ctx->pc != 0x328ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328ABCu; }
        if (ctx->pc != 0x328ABCu) { return; }
    }
    ctx->pc = 0x328ABCu;
label_328abc:
    // 0x328abc: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x328abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_328ac0:
    // 0x328ac0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328ac4:
    // 0x328ac4: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x328ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_328ac8:
    // 0x328ac8: 0xc0fd080  jal         func_3F4200
label_328acc:
    if (ctx->pc == 0x328ACCu) {
        ctx->pc = 0x328ACCu;
            // 0x328acc: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x328AD0u;
        goto label_328ad0;
    }
    ctx->pc = 0x328AC8u;
    SET_GPR_U32(ctx, 31, 0x328AD0u);
    ctx->pc = 0x328ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328AC8u;
            // 0x328acc: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328AD0u; }
        if (ctx->pc != 0x328AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328AD0u; }
        if (ctx->pc != 0x328AD0u) { return; }
    }
    ctx->pc = 0x328AD0u;
label_328ad0:
    // 0x328ad0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x328ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_328ad4:
    // 0x328ad4: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x328ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_328ad8:
    // 0x328ad8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_328adc:
    if (ctx->pc == 0x328ADCu) {
        ctx->pc = 0x328ADCu;
            // 0x328adc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x328AE0u;
        goto label_328ae0;
    }
    ctx->pc = 0x328AD8u;
    {
        const bool branch_taken_0x328ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328AD8u;
            // 0x328adc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ad8) {
            ctx->pc = 0x328AA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_328aa4;
        }
    }
    ctx->pc = 0x328AE0u;
label_328ae0:
    // 0x328ae0: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x328ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_328ae4:
    // 0x328ae4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_328ae8:
    if (ctx->pc == 0x328AE8u) {
        ctx->pc = 0x328AE8u;
            // 0x328ae8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328AECu;
        goto label_328aec;
    }
    ctx->pc = 0x328AE4u;
    {
        const bool branch_taken_0x328ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ae4) {
            ctx->pc = 0x328AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328AE4u;
            // 0x328ae8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328B00u;
            goto label_328b00;
        }
    }
    ctx->pc = 0x328AECu;
label_328aec:
    // 0x328aec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328af0:
    // 0x328af0: 0xc0fe48c  jal         func_3F9230
label_328af4:
    if (ctx->pc == 0x328AF4u) {
        ctx->pc = 0x328AF4u;
            // 0x328af4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328AF8u;
        goto label_328af8;
    }
    ctx->pc = 0x328AF0u;
    SET_GPR_U32(ctx, 31, 0x328AF8u);
    ctx->pc = 0x328AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328AF0u;
            // 0x328af4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328AF8u; }
        if (ctx->pc != 0x328AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328AF8u; }
        if (ctx->pc != 0x328AF8u) { return; }
    }
    ctx->pc = 0x328AF8u;
label_328af8:
    // 0x328af8: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x328af8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_328afc:
    // 0x328afc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x328afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328b00:
    // 0x328b00: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x328b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_328b04:
    // 0x328b04: 0x8e2500e4  lw          $a1, 0xE4($s1)
    ctx->pc = 0x328b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_328b08:
    // 0x328b08: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_328b0c:
    if (ctx->pc == 0x328B0Cu) {
        ctx->pc = 0x328B10u;
        goto label_328b10;
    }
    ctx->pc = 0x328B08u;
    {
        const bool branch_taken_0x328b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328b08) {
            ctx->pc = 0x328B20u;
            goto label_328b20;
        }
    }
    ctx->pc = 0x328B10u;
label_328b10:
    // 0x328b10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328b14:
    // 0x328b14: 0xc0fe48c  jal         func_3F9230
label_328b18:
    if (ctx->pc == 0x328B18u) {
        ctx->pc = 0x328B18u;
            // 0x328b18: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328B1Cu;
        goto label_328b1c;
    }
    ctx->pc = 0x328B14u;
    SET_GPR_U32(ctx, 31, 0x328B1Cu);
    ctx->pc = 0x328B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328B14u;
            // 0x328b18: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328B1Cu; }
        if (ctx->pc != 0x328B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328B1Cu; }
        if (ctx->pc != 0x328B1Cu) { return; }
    }
    ctx->pc = 0x328B1Cu;
label_328b1c:
    // 0x328b1c: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x328b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_328b20:
    // 0x328b20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x328b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_328b24:
    // 0x328b24: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x328b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_328b28:
    // 0x328b28: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_328b2c:
    if (ctx->pc == 0x328B2Cu) {
        ctx->pc = 0x328B2Cu;
            // 0x328b2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x328B30u;
        goto label_328b30;
    }
    ctx->pc = 0x328B28u;
    {
        const bool branch_taken_0x328b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328B28u;
            // 0x328b2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b28) {
            ctx->pc = 0x328B04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_328b04;
        }
    }
    ctx->pc = 0x328B30u;
label_328b30:
    // 0x328b30: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x328b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_328b34:
    // 0x328b34: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_328b38:
    if (ctx->pc == 0x328B38u) {
        ctx->pc = 0x328B38u;
            // 0x328b38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328B3Cu;
        goto label_328b3c;
    }
    ctx->pc = 0x328B34u;
    {
        const bool branch_taken_0x328b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328b34) {
            ctx->pc = 0x328B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328B34u;
            // 0x328b38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328B50u;
            goto label_328b50;
        }
    }
    ctx->pc = 0x328B3Cu;
label_328b3c:
    // 0x328b3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328b40:
    // 0x328b40: 0xc0fe48c  jal         func_3F9230
label_328b44:
    if (ctx->pc == 0x328B44u) {
        ctx->pc = 0x328B44u;
            // 0x328b44: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328B48u;
        goto label_328b48;
    }
    ctx->pc = 0x328B40u;
    SET_GPR_U32(ctx, 31, 0x328B48u);
    ctx->pc = 0x328B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328B40u;
            // 0x328b44: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328B48u; }
        if (ctx->pc != 0x328B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328B48u; }
        if (ctx->pc != 0x328B48u) { return; }
    }
    ctx->pc = 0x328B48u;
label_328b48:
    // 0x328b48: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x328b48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_328b4c:
    // 0x328b4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x328b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328b50:
    // 0x328b50: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x328b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_328b54:
    // 0x328b54: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x328b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_328b58:
    // 0x328b58: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_328b5c:
    if (ctx->pc == 0x328B5Cu) {
        ctx->pc = 0x328B60u;
        goto label_328b60;
    }
    ctx->pc = 0x328B58u;
    {
        const bool branch_taken_0x328b58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328b58) {
            ctx->pc = 0x328B70u;
            goto label_328b70;
        }
    }
    ctx->pc = 0x328B60u;
label_328b60:
    // 0x328b60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328b64:
    // 0x328b64: 0xc0fe48c  jal         func_3F9230
label_328b68:
    if (ctx->pc == 0x328B68u) {
        ctx->pc = 0x328B68u;
            // 0x328b68: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328B6Cu;
        goto label_328b6c;
    }
    ctx->pc = 0x328B64u;
    SET_GPR_U32(ctx, 31, 0x328B6Cu);
    ctx->pc = 0x328B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328B64u;
            // 0x328b68: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328B6Cu; }
        if (ctx->pc != 0x328B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328B6Cu; }
        if (ctx->pc != 0x328B6Cu) { return; }
    }
    ctx->pc = 0x328B6Cu;
label_328b6c:
    // 0x328b6c: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x328b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
label_328b70:
    // 0x328b70: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x328b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_328b74:
    // 0x328b74: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_328b78:
    if (ctx->pc == 0x328B78u) {
        ctx->pc = 0x328B7Cu;
        goto label_328b7c;
    }
    ctx->pc = 0x328B74u;
    {
        const bool branch_taken_0x328b74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328b74) {
            ctx->pc = 0x328B90u;
            goto label_328b90;
        }
    }
    ctx->pc = 0x328B7Cu;
label_328b7c:
    // 0x328b7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328b80:
    // 0x328b80: 0xc0fe48c  jal         func_3F9230
label_328b84:
    if (ctx->pc == 0x328B84u) {
        ctx->pc = 0x328B84u;
            // 0x328b84: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328B88u;
        goto label_328b88;
    }
    ctx->pc = 0x328B80u;
    SET_GPR_U32(ctx, 31, 0x328B88u);
    ctx->pc = 0x328B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328B80u;
            // 0x328b84: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328B88u; }
        if (ctx->pc != 0x328B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328B88u; }
        if (ctx->pc != 0x328B88u) { return; }
    }
    ctx->pc = 0x328B88u;
label_328b88:
    // 0x328b88: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x328b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_328b8c:
    // 0x328b8c: 0x0  nop
    ctx->pc = 0x328b8cu;
    // NOP
label_328b90:
    // 0x328b90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x328b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_328b94:
    // 0x328b94: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x328b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_328b98:
    // 0x328b98: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_328b9c:
    if (ctx->pc == 0x328B9Cu) {
        ctx->pc = 0x328B9Cu;
            // 0x328b9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x328BA0u;
        goto label_328ba0;
    }
    ctx->pc = 0x328B98u;
    {
        const bool branch_taken_0x328b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328B98u;
            // 0x328b9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b98) {
            ctx->pc = 0x328B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_328b54;
        }
    }
    ctx->pc = 0x328BA0u;
label_328ba0:
    // 0x328ba0: 0x8e650610  lw          $a1, 0x610($s3)
    ctx->pc = 0x328ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1552)));
label_328ba4:
    // 0x328ba4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_328ba8:
    if (ctx->pc == 0x328BA8u) {
        ctx->pc = 0x328BA8u;
            // 0x328ba8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328BACu;
        goto label_328bac;
    }
    ctx->pc = 0x328BA4u;
    {
        const bool branch_taken_0x328ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ba4) {
            ctx->pc = 0x328BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328BA4u;
            // 0x328ba8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328BC0u;
            goto label_328bc0;
        }
    }
    ctx->pc = 0x328BACu;
label_328bac:
    // 0x328bac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328bb0:
    // 0x328bb0: 0xc0fe48c  jal         func_3F9230
label_328bb4:
    if (ctx->pc == 0x328BB4u) {
        ctx->pc = 0x328BB4u;
            // 0x328bb4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328BB8u;
        goto label_328bb8;
    }
    ctx->pc = 0x328BB0u;
    SET_GPR_U32(ctx, 31, 0x328BB8u);
    ctx->pc = 0x328BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328BB0u;
            // 0x328bb4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328BB8u; }
        if (ctx->pc != 0x328BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328BB8u; }
        if (ctx->pc != 0x328BB8u) { return; }
    }
    ctx->pc = 0x328BB8u;
label_328bb8:
    // 0x328bb8: 0xae600610  sw          $zero, 0x610($s3)
    ctx->pc = 0x328bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1552), GPR_U32(ctx, 0));
label_328bbc:
    // 0x328bbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x328bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328bc0:
    // 0x328bc0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x328bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_328bc4:
    // 0x328bc4: 0x8e4405dc  lw          $a0, 0x5DC($s2)
    ctx->pc = 0x328bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1500)));
label_328bc8:
    // 0x328bc8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_328bcc:
    if (ctx->pc == 0x328BCCu) {
        ctx->pc = 0x328BCCu;
            // 0x328bcc: 0x265005dc  addiu       $s0, $s2, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1500));
        ctx->pc = 0x328BD0u;
        goto label_328bd0;
    }
    ctx->pc = 0x328BC8u;
    {
        const bool branch_taken_0x328bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x328BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328BC8u;
            // 0x328bcc: 0x265005dc  addiu       $s0, $s2, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328bc8) {
            ctx->pc = 0x328BE0u;
            goto label_328be0;
        }
    }
    ctx->pc = 0x328BD0u;
label_328bd0:
    // 0x328bd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x328bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_328bd4:
    // 0x328bd4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x328bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_328bd8:
    // 0x328bd8: 0x320f809  jalr        $t9
label_328bdc:
    if (ctx->pc == 0x328BDCu) {
        ctx->pc = 0x328BDCu;
            // 0x328bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x328BE0u;
        goto label_328be0;
    }
    ctx->pc = 0x328BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x328BE0u);
        ctx->pc = 0x328BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328BD8u;
            // 0x328bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x328BE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x328BE0u; }
            if (ctx->pc != 0x328BE0u) { return; }
        }
        }
    }
    ctx->pc = 0x328BE0u;
label_328be0:
    // 0x328be0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x328be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_328be4:
    // 0x328be4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x328be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_328be8:
    // 0x328be8: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x328be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_328bec:
    // 0x328bec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x328becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_328bf0:
    // 0x328bf0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_328bf4:
    if (ctx->pc == 0x328BF4u) {
        ctx->pc = 0x328BF4u;
            // 0x328bf4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x328BF8u;
        goto label_328bf8;
    }
    ctx->pc = 0x328BF0u;
    {
        const bool branch_taken_0x328bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328BF0u;
            // 0x328bf4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328bf0) {
            ctx->pc = 0x328BC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_328bc4;
        }
    }
    ctx->pc = 0x328BF8u;
label_328bf8:
    // 0x328bf8: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x328bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_328bfc:
    // 0x328bfc: 0x26720410  addiu       $s2, $s3, 0x410
    ctx->pc = 0x328bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1040));
label_328c00:
    // 0x328c00: 0x8e6301d4  lw          $v1, 0x1D4($s3)
    ctx->pc = 0x328c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
label_328c04:
    // 0x328c04: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_328c08:
    if (ctx->pc == 0x328C08u) {
        ctx->pc = 0x328C08u;
            // 0x328c08: 0x26500164  addiu       $s0, $s2, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
        ctx->pc = 0x328C0Cu;
        goto label_328c0c;
    }
    ctx->pc = 0x328C04u;
    {
        const bool branch_taken_0x328c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328C04u;
            // 0x328c08: 0x26500164  addiu       $s0, $s2, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c04) {
            ctx->pc = 0x328C28u;
            goto label_328c28;
        }
    }
    ctx->pc = 0x328C0Cu;
label_328c0c:
    // 0x328c0c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x328c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328c10:
    // 0x328c10: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_328c14:
    if (ctx->pc == 0x328C14u) {
        ctx->pc = 0x328C18u;
        goto label_328c18;
    }
    ctx->pc = 0x328C10u;
    {
        const bool branch_taken_0x328c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x328c10) {
            ctx->pc = 0x328C28u;
            goto label_328c28;
        }
    }
    ctx->pc = 0x328C18u;
label_328c18:
    // 0x328c18: 0xc074a08  jal         func_1D2820
label_328c1c:
    if (ctx->pc == 0x328C1Cu) {
        ctx->pc = 0x328C1Cu;
            // 0x328c1c: 0x8e640674  lw          $a0, 0x674($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1652)));
        ctx->pc = 0x328C20u;
        goto label_328c20;
    }
    ctx->pc = 0x328C18u;
    SET_GPR_U32(ctx, 31, 0x328C20u);
    ctx->pc = 0x328C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328C18u;
            // 0x328c1c: 0x8e640674  lw          $a0, 0x674($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1652)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2820u;
    if (runtime->hasFunction(0x1D2820u)) {
        auto targetFn = runtime->lookupFunction(0x1D2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328C20u; }
        if (ctx->pc != 0x328C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2820_0x1d2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328C20u; }
        if (ctx->pc != 0x328C20u) { return; }
    }
    ctx->pc = 0x328C20u;
label_328c20:
    // 0x328c20: 0xae600674  sw          $zero, 0x674($s3)
    ctx->pc = 0x328c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1652), GPR_U32(ctx, 0));
label_328c24:
    // 0x328c24: 0x0  nop
    ctx->pc = 0x328c24u;
    // NOP
label_328c28:
    // 0x328c28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x328c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328c2c:
    // 0x328c2c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_328c30:
    if (ctx->pc == 0x328C30u) {
        ctx->pc = 0x328C34u;
        goto label_328c34;
    }
    ctx->pc = 0x328C2Cu;
    {
        const bool branch_taken_0x328c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c2c) {
            ctx->pc = 0x328C58u;
            goto label_328c58;
        }
    }
    ctx->pc = 0x328C34u;
label_328c34:
    // 0x328c34: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_328c38:
    if (ctx->pc == 0x328C38u) {
        ctx->pc = 0x328C3Cu;
        goto label_328c3c;
    }
    ctx->pc = 0x328C34u;
    {
        const bool branch_taken_0x328c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c34) {
            ctx->pc = 0x328C50u;
            goto label_328c50;
        }
    }
    ctx->pc = 0x328C3Cu;
label_328c3c:
    // 0x328c3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x328c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_328c40:
    // 0x328c40: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x328c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_328c44:
    // 0x328c44: 0x320f809  jalr        $t9
label_328c48:
    if (ctx->pc == 0x328C48u) {
        ctx->pc = 0x328C48u;
            // 0x328c48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x328C4Cu;
        goto label_328c4c;
    }
    ctx->pc = 0x328C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x328C4Cu);
        ctx->pc = 0x328C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328C44u;
            // 0x328c48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x328C4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x328C4Cu; }
            if (ctx->pc != 0x328C4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x328C4Cu;
label_328c4c:
    // 0x328c4c: 0x0  nop
    ctx->pc = 0x328c4cu;
    // NOP
label_328c50:
    // 0x328c50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x328c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_328c54:
    // 0x328c54: 0x0  nop
    ctx->pc = 0x328c54u;
    // NOP
label_328c58:
    // 0x328c58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x328c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_328c5c:
    // 0x328c5c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_328c60:
    if (ctx->pc == 0x328C60u) {
        ctx->pc = 0x328C64u;
        goto label_328c64;
    }
    ctx->pc = 0x328C5Cu;
    {
        const bool branch_taken_0x328c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c5c) {
            ctx->pc = 0x328C88u;
            goto label_328c88;
        }
    }
    ctx->pc = 0x328C64u;
label_328c64:
    // 0x328c64: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_328c68:
    if (ctx->pc == 0x328C68u) {
        ctx->pc = 0x328C6Cu;
        goto label_328c6c;
    }
    ctx->pc = 0x328C64u;
    {
        const bool branch_taken_0x328c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c64) {
            ctx->pc = 0x328C80u;
            goto label_328c80;
        }
    }
    ctx->pc = 0x328C6Cu;
label_328c6c:
    // 0x328c6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x328c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_328c70:
    // 0x328c70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x328c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_328c74:
    // 0x328c74: 0x320f809  jalr        $t9
label_328c78:
    if (ctx->pc == 0x328C78u) {
        ctx->pc = 0x328C78u;
            // 0x328c78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x328C7Cu;
        goto label_328c7c;
    }
    ctx->pc = 0x328C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x328C7Cu);
        ctx->pc = 0x328C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328C74u;
            // 0x328c78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x328C7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x328C7Cu; }
            if (ctx->pc != 0x328C7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x328C7Cu;
label_328c7c:
    // 0x328c7c: 0x0  nop
    ctx->pc = 0x328c7cu;
    // NOP
label_328c80:
    // 0x328c80: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x328c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_328c84:
    // 0x328c84: 0x0  nop
    ctx->pc = 0x328c84u;
    // NOP
label_328c88:
    // 0x328c88: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x328c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328c8c:
    // 0x328c8c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_328c90:
    if (ctx->pc == 0x328C90u) {
        ctx->pc = 0x328C94u;
        goto label_328c94;
    }
    ctx->pc = 0x328C8Cu;
    {
        const bool branch_taken_0x328c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c8c) {
            ctx->pc = 0x328CB8u;
            goto label_328cb8;
        }
    }
    ctx->pc = 0x328C94u;
label_328c94:
    // 0x328c94: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_328c98:
    if (ctx->pc == 0x328C98u) {
        ctx->pc = 0x328C9Cu;
        goto label_328c9c;
    }
    ctx->pc = 0x328C94u;
    {
        const bool branch_taken_0x328c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c94) {
            ctx->pc = 0x328CB0u;
            goto label_328cb0;
        }
    }
    ctx->pc = 0x328C9Cu;
label_328c9c:
    // 0x328c9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x328c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_328ca0:
    // 0x328ca0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x328ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_328ca4:
    // 0x328ca4: 0x320f809  jalr        $t9
label_328ca8:
    if (ctx->pc == 0x328CA8u) {
        ctx->pc = 0x328CA8u;
            // 0x328ca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x328CACu;
        goto label_328cac;
    }
    ctx->pc = 0x328CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x328CACu);
        ctx->pc = 0x328CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328CA4u;
            // 0x328ca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x328CACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x328CACu; }
            if (ctx->pc != 0x328CACu) { return; }
        }
        }
    }
    ctx->pc = 0x328CACu;
label_328cac:
    // 0x328cac: 0x0  nop
    ctx->pc = 0x328cacu;
    // NOP
label_328cb0:
    // 0x328cb0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x328cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_328cb4:
    // 0x328cb4: 0x0  nop
    ctx->pc = 0x328cb4u;
    // NOP
label_328cb8:
    // 0x328cb8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x328cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_328cbc:
    // 0x328cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328cc0:
    // 0x328cc0: 0xc04a576  jal         func_1295D8
label_328cc4:
    if (ctx->pc == 0x328CC4u) {
        ctx->pc = 0x328CC4u;
            // 0x328cc4: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x328CC8u;
        goto label_328cc8;
    }
    ctx->pc = 0x328CC0u;
    SET_GPR_U32(ctx, 31, 0x328CC8u);
    ctx->pc = 0x328CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328CC0u;
            // 0x328cc4: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328CC8u; }
        if (ctx->pc != 0x328CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328CC8u; }
        if (ctx->pc != 0x328CC8u) { return; }
    }
    ctx->pc = 0x328CC8u;
label_328cc8:
    // 0x328cc8: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x328cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_328ccc:
    // 0x328ccc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_328cd0:
    if (ctx->pc == 0x328CD0u) {
        ctx->pc = 0x328CD4u;
        goto label_328cd4;
    }
    ctx->pc = 0x328CCCu;
    {
        const bool branch_taken_0x328ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ccc) {
            ctx->pc = 0x328CF8u;
            goto label_328cf8;
        }
    }
    ctx->pc = 0x328CD4u;
label_328cd4:
    // 0x328cd4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_328cd8:
    if (ctx->pc == 0x328CD8u) {
        ctx->pc = 0x328CDCu;
        goto label_328cdc;
    }
    ctx->pc = 0x328CD4u;
    {
        const bool branch_taken_0x328cd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328cd4) {
            ctx->pc = 0x328CF0u;
            goto label_328cf0;
        }
    }
    ctx->pc = 0x328CDCu;
label_328cdc:
    // 0x328cdc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328ce0:
    // 0x328ce0: 0xc0fe404  jal         func_3F9010
label_328ce4:
    if (ctx->pc == 0x328CE4u) {
        ctx->pc = 0x328CE4u;
            // 0x328ce4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328CE8u;
        goto label_328ce8;
    }
    ctx->pc = 0x328CE0u;
    SET_GPR_U32(ctx, 31, 0x328CE8u);
    ctx->pc = 0x328CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328CE0u;
            // 0x328ce4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9010u;
    if (runtime->hasFunction(0x3F9010u)) {
        auto targetFn = runtime->lookupFunction(0x3F9010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328CE8u; }
        if (ctx->pc != 0x328CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9010_0x3f9010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328CE8u; }
        if (ctx->pc != 0x328CE8u) { return; }
    }
    ctx->pc = 0x328CE8u;
label_328ce8:
    // 0x328ce8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x328ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_328cec:
    // 0x328cec: 0x0  nop
    ctx->pc = 0x328cecu;
    // NOP
label_328cf0:
    // 0x328cf0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x328cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_328cf4:
    // 0x328cf4: 0x0  nop
    ctx->pc = 0x328cf4u;
    // NOP
label_328cf8:
    // 0x328cf8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x328cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_328cfc:
    // 0x328cfc: 0x621ffc0  bgez        $s1, . + 4 + (-0x40 << 2)
label_328d00:
    if (ctx->pc == 0x328D00u) {
        ctx->pc = 0x328D00u;
            // 0x328d00: 0x2652ff98  addiu       $s2, $s2, -0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967192));
        ctx->pc = 0x328D04u;
        goto label_328d04;
    }
    ctx->pc = 0x328CFCu;
    {
        const bool branch_taken_0x328cfc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x328D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328CFCu;
            // 0x328d00: 0x2652ff98  addiu       $s2, $s2, -0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328cfc) {
            ctx->pc = 0x328C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_328c00;
        }
    }
    ctx->pc = 0x328D04u;
label_328d04:
    // 0x328d04: 0x8e650128  lw          $a1, 0x128($s3)
    ctx->pc = 0x328d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
label_328d08:
    // 0x328d08: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_328d0c:
    if (ctx->pc == 0x328D0Cu) {
        ctx->pc = 0x328D0Cu;
            // 0x328d0c: 0x8e70066c  lw          $s0, 0x66C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1644)));
        ctx->pc = 0x328D10u;
        goto label_328d10;
    }
    ctx->pc = 0x328D08u;
    {
        const bool branch_taken_0x328d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328d08) {
            ctx->pc = 0x328D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328D08u;
            // 0x328d0c: 0x8e70066c  lw          $s0, 0x66C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1644)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328D24u;
            goto label_328d24;
        }
    }
    ctx->pc = 0x328D10u;
label_328d10:
    // 0x328d10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328d14:
    // 0x328d14: 0xc0fe48c  jal         func_3F9230
label_328d18:
    if (ctx->pc == 0x328D18u) {
        ctx->pc = 0x328D18u;
            // 0x328d18: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328D1Cu;
        goto label_328d1c;
    }
    ctx->pc = 0x328D14u;
    SET_GPR_U32(ctx, 31, 0x328D1Cu);
    ctx->pc = 0x328D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328D14u;
            // 0x328d18: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D1Cu; }
        if (ctx->pc != 0x328D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D1Cu; }
        if (ctx->pc != 0x328D1Cu) { return; }
    }
    ctx->pc = 0x328D1Cu;
label_328d1c:
    // 0x328d1c: 0xae600128  sw          $zero, 0x128($s3)
    ctx->pc = 0x328d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 0));
label_328d20:
    // 0x328d20: 0x8e70066c  lw          $s0, 0x66C($s3)
    ctx->pc = 0x328d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1644)));
label_328d24:
    // 0x328d24: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_328d28:
    if (ctx->pc == 0x328D28u) {
        ctx->pc = 0x328D28u;
            // 0x328d28: 0x8e700670  lw          $s0, 0x670($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
        ctx->pc = 0x328D2Cu;
        goto label_328d2c;
    }
    ctx->pc = 0x328D24u;
    {
        const bool branch_taken_0x328d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x328d24) {
            ctx->pc = 0x328D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328D24u;
            // 0x328d28: 0x8e700670  lw          $s0, 0x670($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328D4Cu;
            goto label_328d4c;
        }
    }
    ctx->pc = 0x328D2Cu;
label_328d2c:
    // 0x328d2c: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_328d30:
    if (ctx->pc == 0x328D30u) {
        ctx->pc = 0x328D30u;
            // 0x328d30: 0xae60066c  sw          $zero, 0x66C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1644), GPR_U32(ctx, 0));
        ctx->pc = 0x328D34u;
        goto label_328d34;
    }
    ctx->pc = 0x328D2Cu;
    {
        const bool branch_taken_0x328d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x328d2c) {
            ctx->pc = 0x328D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328D2Cu;
            // 0x328d30: 0xae60066c  sw          $zero, 0x66C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328D48u;
            goto label_328d48;
        }
    }
    ctx->pc = 0x328D34u;
label_328d34:
    // 0x328d34: 0xc07507c  jal         func_1D41F0
label_328d38:
    if (ctx->pc == 0x328D38u) {
        ctx->pc = 0x328D38u;
            // 0x328d38: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x328D3Cu;
        goto label_328d3c;
    }
    ctx->pc = 0x328D34u;
    SET_GPR_U32(ctx, 31, 0x328D3Cu);
    ctx->pc = 0x328D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328D34u;
            // 0x328d38: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D3Cu; }
        if (ctx->pc != 0x328D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D3Cu; }
        if (ctx->pc != 0x328D3Cu) { return; }
    }
    ctx->pc = 0x328D3Cu;
label_328d3c:
    // 0x328d3c: 0xc0400a8  jal         func_1002A0
label_328d40:
    if (ctx->pc == 0x328D40u) {
        ctx->pc = 0x328D40u;
            // 0x328d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328D44u;
        goto label_328d44;
    }
    ctx->pc = 0x328D3Cu;
    SET_GPR_U32(ctx, 31, 0x328D44u);
    ctx->pc = 0x328D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328D3Cu;
            // 0x328d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D44u; }
        if (ctx->pc != 0x328D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D44u; }
        if (ctx->pc != 0x328D44u) { return; }
    }
    ctx->pc = 0x328D44u;
label_328d44:
    // 0x328d44: 0xae60066c  sw          $zero, 0x66C($s3)
    ctx->pc = 0x328d44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1644), GPR_U32(ctx, 0));
label_328d48:
    // 0x328d48: 0x8e700670  lw          $s0, 0x670($s3)
    ctx->pc = 0x328d48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
label_328d4c:
    // 0x328d4c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_328d50:
    if (ctx->pc == 0x328D50u) {
        ctx->pc = 0x328D50u;
            // 0x328d50: 0x8e700668  lw          $s0, 0x668($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1640)));
        ctx->pc = 0x328D54u;
        goto label_328d54;
    }
    ctx->pc = 0x328D4Cu;
    {
        const bool branch_taken_0x328d4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x328d4c) {
            ctx->pc = 0x328D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328D4Cu;
            // 0x328d50: 0x8e700668  lw          $s0, 0x668($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328D74u;
            goto label_328d74;
        }
    }
    ctx->pc = 0x328D54u;
label_328d54:
    // 0x328d54: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_328d58:
    if (ctx->pc == 0x328D58u) {
        ctx->pc = 0x328D58u;
            // 0x328d58: 0xae600670  sw          $zero, 0x670($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 0));
        ctx->pc = 0x328D5Cu;
        goto label_328d5c;
    }
    ctx->pc = 0x328D54u;
    {
        const bool branch_taken_0x328d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x328d54) {
            ctx->pc = 0x328D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328D54u;
            // 0x328d58: 0xae600670  sw          $zero, 0x670($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328D70u;
            goto label_328d70;
        }
    }
    ctx->pc = 0x328D5Cu;
label_328d5c:
    // 0x328d5c: 0xc07507c  jal         func_1D41F0
label_328d60:
    if (ctx->pc == 0x328D60u) {
        ctx->pc = 0x328D60u;
            // 0x328d60: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x328D64u;
        goto label_328d64;
    }
    ctx->pc = 0x328D5Cu;
    SET_GPR_U32(ctx, 31, 0x328D64u);
    ctx->pc = 0x328D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328D5Cu;
            // 0x328d60: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D64u; }
        if (ctx->pc != 0x328D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D64u; }
        if (ctx->pc != 0x328D64u) { return; }
    }
    ctx->pc = 0x328D64u;
label_328d64:
    // 0x328d64: 0xc0400a8  jal         func_1002A0
label_328d68:
    if (ctx->pc == 0x328D68u) {
        ctx->pc = 0x328D68u;
            // 0x328d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328D6Cu;
        goto label_328d6c;
    }
    ctx->pc = 0x328D64u;
    SET_GPR_U32(ctx, 31, 0x328D6Cu);
    ctx->pc = 0x328D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328D64u;
            // 0x328d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D6Cu; }
        if (ctx->pc != 0x328D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D6Cu; }
        if (ctx->pc != 0x328D6Cu) { return; }
    }
    ctx->pc = 0x328D6Cu;
label_328d6c:
    // 0x328d6c: 0xae600670  sw          $zero, 0x670($s3)
    ctx->pc = 0x328d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 0));
label_328d70:
    // 0x328d70: 0x8e700668  lw          $s0, 0x668($s3)
    ctx->pc = 0x328d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1640)));
label_328d74:
    // 0x328d74: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_328d78:
    if (ctx->pc == 0x328D78u) {
        ctx->pc = 0x328D78u;
            // 0x328d78: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x328D7Cu;
        goto label_328d7c;
    }
    ctx->pc = 0x328D74u;
    {
        const bool branch_taken_0x328d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x328d74) {
            ctx->pc = 0x328D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328D74u;
            // 0x328d78: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328D9Cu;
            goto label_328d9c;
        }
    }
    ctx->pc = 0x328D7Cu;
label_328d7c:
    // 0x328d7c: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_328d80:
    if (ctx->pc == 0x328D80u) {
        ctx->pc = 0x328D80u;
            // 0x328d80: 0xae600668  sw          $zero, 0x668($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1640), GPR_U32(ctx, 0));
        ctx->pc = 0x328D84u;
        goto label_328d84;
    }
    ctx->pc = 0x328D7Cu;
    {
        const bool branch_taken_0x328d7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x328d7c) {
            ctx->pc = 0x328D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328D7Cu;
            // 0x328d80: 0xae600668  sw          $zero, 0x668($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328D98u;
            goto label_328d98;
        }
    }
    ctx->pc = 0x328D84u;
label_328d84:
    // 0x328d84: 0xc07507c  jal         func_1D41F0
label_328d88:
    if (ctx->pc == 0x328D88u) {
        ctx->pc = 0x328D88u;
            // 0x328d88: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x328D8Cu;
        goto label_328d8c;
    }
    ctx->pc = 0x328D84u;
    SET_GPR_U32(ctx, 31, 0x328D8Cu);
    ctx->pc = 0x328D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328D84u;
            // 0x328d88: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D8Cu; }
        if (ctx->pc != 0x328D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D8Cu; }
        if (ctx->pc != 0x328D8Cu) { return; }
    }
    ctx->pc = 0x328D8Cu;
label_328d8c:
    // 0x328d8c: 0xc0400a8  jal         func_1002A0
label_328d90:
    if (ctx->pc == 0x328D90u) {
        ctx->pc = 0x328D90u;
            // 0x328d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328D94u;
        goto label_328d94;
    }
    ctx->pc = 0x328D8Cu;
    SET_GPR_U32(ctx, 31, 0x328D94u);
    ctx->pc = 0x328D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328D8Cu;
            // 0x328d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D94u; }
        if (ctx->pc != 0x328D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328D94u; }
        if (ctx->pc != 0x328D94u) { return; }
    }
    ctx->pc = 0x328D94u;
label_328d94:
    // 0x328d94: 0xae600668  sw          $zero, 0x668($s3)
    ctx->pc = 0x328d94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1640), GPR_U32(ctx, 0));
label_328d98:
    // 0x328d98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x328d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_328d9c:
    // 0x328d9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x328d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_328da0:
    // 0x328da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_328da4:
    // 0x328da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_328da8:
    // 0x328da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_328dac:
    // 0x328dac: 0x3e00008  jr          $ra
label_328db0:
    if (ctx->pc == 0x328DB0u) {
        ctx->pc = 0x328DB0u;
            // 0x328db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x328DB4u;
        goto label_328db4;
    }
    ctx->pc = 0x328DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328DACu;
            // 0x328db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x328DB4u;
label_328db4:
    // 0x328db4: 0x0  nop
    ctx->pc = 0x328db4u;
    // NOP
label_328db8:
    // 0x328db8: 0x0  nop
    ctx->pc = 0x328db8u;
    // NOP
label_328dbc:
    // 0x328dbc: 0x0  nop
    ctx->pc = 0x328dbcu;
    // NOP
label_328dc0:
    // 0x328dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_328dc4:
    // 0x328dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x328dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_328dc8:
    // 0x328dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_328dcc:
    // 0x328dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_328dd0:
    // 0x328dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x328dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328dd4:
    // 0x328dd4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_328dd8:
    if (ctx->pc == 0x328DD8u) {
        ctx->pc = 0x328DD8u;
            // 0x328dd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328DDCu;
        goto label_328ddc;
    }
    ctx->pc = 0x328DD4u;
    {
        const bool branch_taken_0x328dd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x328DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328DD4u;
            // 0x328dd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328dd4) {
            ctx->pc = 0x328E4Cu;
            goto label_328e4c;
        }
    }
    ctx->pc = 0x328DDCu;
label_328ddc:
    // 0x328ddc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x328ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_328de0:
    // 0x328de0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x328de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_328de4:
    // 0x328de4: 0x246345d0  addiu       $v1, $v1, 0x45D0
    ctx->pc = 0x328de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17872));
label_328de8:
    // 0x328de8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x328de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_328dec:
    // 0x328dec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x328decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_328df0:
    // 0x328df0: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x328df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_328df4:
    // 0x328df4: 0xc074658  jal         func_1D1960
label_328df8:
    if (ctx->pc == 0x328DF8u) {
        ctx->pc = 0x328DF8u;
            // 0x328df8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x328DFCu;
        goto label_328dfc;
    }
    ctx->pc = 0x328DF4u;
    SET_GPR_U32(ctx, 31, 0x328DFCu);
    ctx->pc = 0x328DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328DF4u;
            // 0x328df8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1960u;
    if (runtime->hasFunction(0x1D1960u)) {
        auto targetFn = runtime->lookupFunction(0x1D1960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328DFCu; }
        if (ctx->pc != 0x328DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1960_0x1d1960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328DFCu; }
        if (ctx->pc != 0x328DFCu) { return; }
    }
    ctx->pc = 0x328DFCu;
label_328dfc:
    // 0x328dfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328e00:
    // 0x328e00: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x328e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_328e04:
    // 0x328e04: 0xc120460  jal         func_481180
label_328e08:
    if (ctx->pc == 0x328E08u) {
        ctx->pc = 0x328E08u;
            // 0x328e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328E0Cu;
        goto label_328e0c;
    }
    ctx->pc = 0x328E04u;
    SET_GPR_U32(ctx, 31, 0x328E0Cu);
    ctx->pc = 0x328E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328E04u;
            // 0x328e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481180u;
    if (runtime->hasFunction(0x481180u)) {
        auto targetFn = runtime->lookupFunction(0x481180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328E0Cu; }
        if (ctx->pc != 0x328E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481180_0x481180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328E0Cu; }
        if (ctx->pc != 0x328E0Cu) { return; }
    }
    ctx->pc = 0x328E0Cu;
label_328e0c:
    // 0x328e0c: 0xc0ca2a0  jal         func_328A80
label_328e10:
    if (ctx->pc == 0x328E10u) {
        ctx->pc = 0x328E10u;
            // 0x328e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328E14u;
        goto label_328e14;
    }
    ctx->pc = 0x328E0Cu;
    SET_GPR_U32(ctx, 31, 0x328E14u);
    ctx->pc = 0x328E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328E0Cu;
            // 0x328e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x328A80u;
    goto label_328a80;
    ctx->pc = 0x328E14u;
label_328e14:
    // 0x328e14: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_328e18:
    if (ctx->pc == 0x328E18u) {
        ctx->pc = 0x328E18u;
            // 0x328e18: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x328E1Cu;
        goto label_328e1c;
    }
    ctx->pc = 0x328E14u;
    {
        const bool branch_taken_0x328e14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e14) {
            ctx->pc = 0x328E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328E14u;
            // 0x328e18: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328E38u;
            goto label_328e38;
        }
    }
    ctx->pc = 0x328E1Cu;
label_328e1c:
    // 0x328e1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x328e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_328e20:
    // 0x328e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x328e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_328e24:
    // 0x328e24: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x328e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_328e28:
    // 0x328e28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328e2c:
    // 0x328e2c: 0xc057a68  jal         func_15E9A0
label_328e30:
    if (ctx->pc == 0x328E30u) {
        ctx->pc = 0x328E30u;
            // 0x328e30: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x328E34u;
        goto label_328e34;
    }
    ctx->pc = 0x328E2Cu;
    SET_GPR_U32(ctx, 31, 0x328E34u);
    ctx->pc = 0x328E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328E2Cu;
            // 0x328e30: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328E34u; }
        if (ctx->pc != 0x328E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328E34u; }
        if (ctx->pc != 0x328E34u) { return; }
    }
    ctx->pc = 0x328E34u;
label_328e34:
    // 0x328e34: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x328e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_328e38:
    // 0x328e38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x328e38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_328e3c:
    // 0x328e3c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_328e40:
    if (ctx->pc == 0x328E40u) {
        ctx->pc = 0x328E40u;
            // 0x328e40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328E44u;
        goto label_328e44;
    }
    ctx->pc = 0x328E3Cu;
    {
        const bool branch_taken_0x328e3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x328e3c) {
            ctx->pc = 0x328E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328E3Cu;
            // 0x328e40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328E50u;
            goto label_328e50;
        }
    }
    ctx->pc = 0x328E44u;
label_328e44:
    // 0x328e44: 0xc0400a8  jal         func_1002A0
label_328e48:
    if (ctx->pc == 0x328E48u) {
        ctx->pc = 0x328E48u;
            // 0x328e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328E4Cu;
        goto label_328e4c;
    }
    ctx->pc = 0x328E44u;
    SET_GPR_U32(ctx, 31, 0x328E4Cu);
    ctx->pc = 0x328E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328E44u;
            // 0x328e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328E4Cu; }
        if (ctx->pc != 0x328E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328E4Cu; }
        if (ctx->pc != 0x328E4Cu) { return; }
    }
    ctx->pc = 0x328E4Cu;
label_328e4c:
    // 0x328e4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x328e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_328e50:
    // 0x328e50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x328e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_328e54:
    // 0x328e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_328e58:
    // 0x328e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_328e5c:
    // 0x328e5c: 0x3e00008  jr          $ra
label_328e60:
    if (ctx->pc == 0x328E60u) {
        ctx->pc = 0x328E60u;
            // 0x328e60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x328E64u;
        goto label_328e64;
    }
    ctx->pc = 0x328E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328E5Cu;
            // 0x328e60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x328E64u;
label_328e64:
    // 0x328e64: 0x0  nop
    ctx->pc = 0x328e64u;
    // NOP
label_328e68:
    // 0x328e68: 0x0  nop
    ctx->pc = 0x328e68u;
    // NOP
label_328e6c:
    // 0x328e6c: 0x0  nop
    ctx->pc = 0x328e6cu;
    // NOP
}
