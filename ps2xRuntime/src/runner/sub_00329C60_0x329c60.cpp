#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00329C60
// Address: 0x329c60 - 0x329ec0
void sub_00329C60_0x329c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329C60_0x329c60");
#endif

    switch (ctx->pc) {
        case 0x329c60u: goto label_329c60;
        case 0x329c64u: goto label_329c64;
        case 0x329c68u: goto label_329c68;
        case 0x329c6cu: goto label_329c6c;
        case 0x329c70u: goto label_329c70;
        case 0x329c74u: goto label_329c74;
        case 0x329c78u: goto label_329c78;
        case 0x329c7cu: goto label_329c7c;
        case 0x329c80u: goto label_329c80;
        case 0x329c84u: goto label_329c84;
        case 0x329c88u: goto label_329c88;
        case 0x329c8cu: goto label_329c8c;
        case 0x329c90u: goto label_329c90;
        case 0x329c94u: goto label_329c94;
        case 0x329c98u: goto label_329c98;
        case 0x329c9cu: goto label_329c9c;
        case 0x329ca0u: goto label_329ca0;
        case 0x329ca4u: goto label_329ca4;
        case 0x329ca8u: goto label_329ca8;
        case 0x329cacu: goto label_329cac;
        case 0x329cb0u: goto label_329cb0;
        case 0x329cb4u: goto label_329cb4;
        case 0x329cb8u: goto label_329cb8;
        case 0x329cbcu: goto label_329cbc;
        case 0x329cc0u: goto label_329cc0;
        case 0x329cc4u: goto label_329cc4;
        case 0x329cc8u: goto label_329cc8;
        case 0x329cccu: goto label_329ccc;
        case 0x329cd0u: goto label_329cd0;
        case 0x329cd4u: goto label_329cd4;
        case 0x329cd8u: goto label_329cd8;
        case 0x329cdcu: goto label_329cdc;
        case 0x329ce0u: goto label_329ce0;
        case 0x329ce4u: goto label_329ce4;
        case 0x329ce8u: goto label_329ce8;
        case 0x329cecu: goto label_329cec;
        case 0x329cf0u: goto label_329cf0;
        case 0x329cf4u: goto label_329cf4;
        case 0x329cf8u: goto label_329cf8;
        case 0x329cfcu: goto label_329cfc;
        case 0x329d00u: goto label_329d00;
        case 0x329d04u: goto label_329d04;
        case 0x329d08u: goto label_329d08;
        case 0x329d0cu: goto label_329d0c;
        case 0x329d10u: goto label_329d10;
        case 0x329d14u: goto label_329d14;
        case 0x329d18u: goto label_329d18;
        case 0x329d1cu: goto label_329d1c;
        case 0x329d20u: goto label_329d20;
        case 0x329d24u: goto label_329d24;
        case 0x329d28u: goto label_329d28;
        case 0x329d2cu: goto label_329d2c;
        case 0x329d30u: goto label_329d30;
        case 0x329d34u: goto label_329d34;
        case 0x329d38u: goto label_329d38;
        case 0x329d3cu: goto label_329d3c;
        case 0x329d40u: goto label_329d40;
        case 0x329d44u: goto label_329d44;
        case 0x329d48u: goto label_329d48;
        case 0x329d4cu: goto label_329d4c;
        case 0x329d50u: goto label_329d50;
        case 0x329d54u: goto label_329d54;
        case 0x329d58u: goto label_329d58;
        case 0x329d5cu: goto label_329d5c;
        case 0x329d60u: goto label_329d60;
        case 0x329d64u: goto label_329d64;
        case 0x329d68u: goto label_329d68;
        case 0x329d6cu: goto label_329d6c;
        case 0x329d70u: goto label_329d70;
        case 0x329d74u: goto label_329d74;
        case 0x329d78u: goto label_329d78;
        case 0x329d7cu: goto label_329d7c;
        case 0x329d80u: goto label_329d80;
        case 0x329d84u: goto label_329d84;
        case 0x329d88u: goto label_329d88;
        case 0x329d8cu: goto label_329d8c;
        case 0x329d90u: goto label_329d90;
        case 0x329d94u: goto label_329d94;
        case 0x329d98u: goto label_329d98;
        case 0x329d9cu: goto label_329d9c;
        case 0x329da0u: goto label_329da0;
        case 0x329da4u: goto label_329da4;
        case 0x329da8u: goto label_329da8;
        case 0x329dacu: goto label_329dac;
        case 0x329db0u: goto label_329db0;
        case 0x329db4u: goto label_329db4;
        case 0x329db8u: goto label_329db8;
        case 0x329dbcu: goto label_329dbc;
        case 0x329dc0u: goto label_329dc0;
        case 0x329dc4u: goto label_329dc4;
        case 0x329dc8u: goto label_329dc8;
        case 0x329dccu: goto label_329dcc;
        case 0x329dd0u: goto label_329dd0;
        case 0x329dd4u: goto label_329dd4;
        case 0x329dd8u: goto label_329dd8;
        case 0x329ddcu: goto label_329ddc;
        case 0x329de0u: goto label_329de0;
        case 0x329de4u: goto label_329de4;
        case 0x329de8u: goto label_329de8;
        case 0x329decu: goto label_329dec;
        case 0x329df0u: goto label_329df0;
        case 0x329df4u: goto label_329df4;
        case 0x329df8u: goto label_329df8;
        case 0x329dfcu: goto label_329dfc;
        case 0x329e00u: goto label_329e00;
        case 0x329e04u: goto label_329e04;
        case 0x329e08u: goto label_329e08;
        case 0x329e0cu: goto label_329e0c;
        case 0x329e10u: goto label_329e10;
        case 0x329e14u: goto label_329e14;
        case 0x329e18u: goto label_329e18;
        case 0x329e1cu: goto label_329e1c;
        case 0x329e20u: goto label_329e20;
        case 0x329e24u: goto label_329e24;
        case 0x329e28u: goto label_329e28;
        case 0x329e2cu: goto label_329e2c;
        case 0x329e30u: goto label_329e30;
        case 0x329e34u: goto label_329e34;
        case 0x329e38u: goto label_329e38;
        case 0x329e3cu: goto label_329e3c;
        case 0x329e40u: goto label_329e40;
        case 0x329e44u: goto label_329e44;
        case 0x329e48u: goto label_329e48;
        case 0x329e4cu: goto label_329e4c;
        case 0x329e50u: goto label_329e50;
        case 0x329e54u: goto label_329e54;
        case 0x329e58u: goto label_329e58;
        case 0x329e5cu: goto label_329e5c;
        case 0x329e60u: goto label_329e60;
        case 0x329e64u: goto label_329e64;
        case 0x329e68u: goto label_329e68;
        case 0x329e6cu: goto label_329e6c;
        case 0x329e70u: goto label_329e70;
        case 0x329e74u: goto label_329e74;
        case 0x329e78u: goto label_329e78;
        case 0x329e7cu: goto label_329e7c;
        case 0x329e80u: goto label_329e80;
        case 0x329e84u: goto label_329e84;
        case 0x329e88u: goto label_329e88;
        case 0x329e8cu: goto label_329e8c;
        case 0x329e90u: goto label_329e90;
        case 0x329e94u: goto label_329e94;
        case 0x329e98u: goto label_329e98;
        case 0x329e9cu: goto label_329e9c;
        case 0x329ea0u: goto label_329ea0;
        case 0x329ea4u: goto label_329ea4;
        case 0x329ea8u: goto label_329ea8;
        case 0x329eacu: goto label_329eac;
        case 0x329eb0u: goto label_329eb0;
        case 0x329eb4u: goto label_329eb4;
        case 0x329eb8u: goto label_329eb8;
        case 0x329ebcu: goto label_329ebc;
        default: break;
    }

    ctx->pc = 0x329c60u;

label_329c60:
    // 0x329c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x329c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_329c64:
    // 0x329c64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x329c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_329c68:
    // 0x329c68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x329c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_329c6c:
    // 0x329c6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x329c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_329c70:
    // 0x329c70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_329c74:
    // 0x329c74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_329c78:
    // 0x329c78: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x329c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_329c7c:
    // 0x329c7c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x329c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_329c80:
    // 0x329c80: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x329c80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_329c84:
    // 0x329c84: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
label_329c88:
    if (ctx->pc == 0x329C88u) {
        ctx->pc = 0x329C88u;
            // 0x329c88: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329C8Cu;
        goto label_329c8c;
    }
    ctx->pc = 0x329C84u;
    {
        const bool branch_taken_0x329c84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329C84u;
            // 0x329c88: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c84) {
            ctx->pc = 0x329DFCu;
            goto label_329dfc;
        }
    }
    ctx->pc = 0x329C8Cu;
label_329c8c:
    // 0x329c8c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x329c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_329c90:
    // 0x329c90: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x329c90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_329c94:
    // 0x329c94: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x329c94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_329c98:
    // 0x329c98: 0xae45003c  sw          $a1, 0x3C($s2)
    ctx->pc = 0x329c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 5));
label_329c9c:
    // 0x329c9c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x329c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_329ca0:
    // 0x329ca0: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x329ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_329ca4:
    // 0x329ca4: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_329ca8:
    if (ctx->pc == 0x329CA8u) {
        ctx->pc = 0x329CA8u;
            // 0x329ca8: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x329CACu;
        goto label_329cac;
    }
    ctx->pc = 0x329CA4u;
    {
        const bool branch_taken_0x329ca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329ca4) {
            ctx->pc = 0x329CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329CA4u;
            // 0x329ca8: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329CC8u;
            goto label_329cc8;
        }
    }
    ctx->pc = 0x329CACu;
label_329cac:
    // 0x329cac: 0x8e230e30  lw          $v1, 0xE30($s1)
    ctx->pc = 0x329cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
label_329cb0:
    // 0x329cb0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x329cb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_329cb4:
    // 0x329cb4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_329cb8:
    if (ctx->pc == 0x329CB8u) {
        ctx->pc = 0x329CBCu;
        goto label_329cbc;
    }
    ctx->pc = 0x329CB4u;
    {
        const bool branch_taken_0x329cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x329cb4) {
            ctx->pc = 0x329CC4u;
            goto label_329cc4;
        }
    }
    ctx->pc = 0x329CBCu;
label_329cbc:
    // 0x329cbc: 0xc0c1c38  jal         func_3070E0
label_329cc0:
    if (ctx->pc == 0x329CC0u) {
        ctx->pc = 0x329CC0u;
            // 0x329cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329CC4u;
        goto label_329cc4;
    }
    ctx->pc = 0x329CBCu;
    SET_GPR_U32(ctx, 31, 0x329CC4u);
    ctx->pc = 0x329CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329CBCu;
            // 0x329cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3070E0u;
    if (runtime->hasFunction(0x3070E0u)) {
        auto targetFn = runtime->lookupFunction(0x3070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329CC4u; }
        if (ctx->pc != 0x329CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003070E0_0x3070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329CC4u; }
        if (ctx->pc != 0x329CC4u) { return; }
    }
    ctx->pc = 0x329CC4u;
label_329cc4:
    // 0x329cc4: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x329cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_329cc8:
    // 0x329cc8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x329cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_329ccc:
    // 0x329ccc: 0x5460004c  bnel        $v1, $zero, . + 4 + (0x4C << 2)
label_329cd0:
    if (ctx->pc == 0x329CD0u) {
        ctx->pc = 0x329CD0u;
            // 0x329cd0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x329CD4u;
        goto label_329cd4;
    }
    ctx->pc = 0x329CCCu;
    {
        const bool branch_taken_0x329ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329ccc) {
            ctx->pc = 0x329CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329CCCu;
            // 0x329cd0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329E00u;
            goto label_329e00;
        }
    }
    ctx->pc = 0x329CD4u;
label_329cd4:
    // 0x329cd4: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x329cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_329cd8:
    // 0x329cd8: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x329cd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_329cdc:
    // 0x329cdc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_329ce0:
    if (ctx->pc == 0x329CE0u) {
        ctx->pc = 0x329CE4u;
        goto label_329ce4;
    }
    ctx->pc = 0x329CDCu;
    {
        const bool branch_taken_0x329cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329cdc) {
            ctx->pc = 0x329CF8u;
            goto label_329cf8;
        }
    }
    ctx->pc = 0x329CE4u;
label_329ce4:
    // 0x329ce4: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x329ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_329ce8:
    // 0x329ce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329cec:
    // 0x329cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329cf0:
    // 0x329cf0: 0xc0ca610  jal         func_329840
label_329cf4:
    if (ctx->pc == 0x329CF4u) {
        ctx->pc = 0x329CF4u;
            // 0x329cf4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x329CF8u;
        goto label_329cf8;
    }
    ctx->pc = 0x329CF0u;
    SET_GPR_U32(ctx, 31, 0x329CF8u);
    ctx->pc = 0x329CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329CF0u;
            // 0x329cf4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x329840u;
    if (runtime->hasFunction(0x329840u)) {
        auto targetFn = runtime->lookupFunction(0x329840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329CF8u; }
        if (ctx->pc != 0x329CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329840_0x329840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329CF8u; }
        if (ctx->pc != 0x329CF8u) { return; }
    }
    ctx->pc = 0x329CF8u;
label_329cf8:
    // 0x329cf8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x329cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_329cfc:
    // 0x329cfc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x329cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_329d00:
    // 0x329d00: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x329d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_329d04:
    // 0x329d04: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x329d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_329d08:
    // 0x329d08: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_329d0c:
    if (ctx->pc == 0x329D0Cu) {
        ctx->pc = 0x329D10u;
        goto label_329d10;
    }
    ctx->pc = 0x329D08u;
    {
        const bool branch_taken_0x329d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329d08) {
            ctx->pc = 0x329DFCu;
            goto label_329dfc;
        }
    }
    ctx->pc = 0x329D10u;
label_329d10:
    // 0x329d10: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x329d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_329d14:
    // 0x329d14: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x329d14u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_329d18:
    // 0x329d18: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_329d1c:
    if (ctx->pc == 0x329D1Cu) {
        ctx->pc = 0x329D1Cu;
            // 0x329d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329D20u;
        goto label_329d20;
    }
    ctx->pc = 0x329D18u;
    {
        const bool branch_taken_0x329d18 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x329D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329D18u;
            // 0x329d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d18) {
            ctx->pc = 0x329D30u;
            goto label_329d30;
        }
    }
    ctx->pc = 0x329D20u;
label_329d20:
    // 0x329d20: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x329d20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_329d24:
    // 0x329d24: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_329d28:
    if (ctx->pc == 0x329D28u) {
        ctx->pc = 0x329D2Cu;
        goto label_329d2c;
    }
    ctx->pc = 0x329D24u;
    {
        const bool branch_taken_0x329d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x329d24) {
            ctx->pc = 0x329D30u;
            goto label_329d30;
        }
    }
    ctx->pc = 0x329D2Cu;
label_329d2c:
    // 0x329d2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x329d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_329d30:
    // 0x329d30: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_329d34:
    if (ctx->pc == 0x329D34u) {
        ctx->pc = 0x329D38u;
        goto label_329d38;
    }
    ctx->pc = 0x329D30u;
    {
        const bool branch_taken_0x329d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x329d30) {
            ctx->pc = 0x329D4Cu;
            goto label_329d4c;
        }
    }
    ctx->pc = 0x329D38u;
label_329d38:
    // 0x329d38: 0xc075eb4  jal         func_1D7AD0
label_329d3c:
    if (ctx->pc == 0x329D3Cu) {
        ctx->pc = 0x329D3Cu;
            // 0x329d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329D40u;
        goto label_329d40;
    }
    ctx->pc = 0x329D38u;
    SET_GPR_U32(ctx, 31, 0x329D40u);
    ctx->pc = 0x329D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329D38u;
            // 0x329d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D40u; }
        if (ctx->pc != 0x329D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D40u; }
        if (ctx->pc != 0x329D40u) { return; }
    }
    ctx->pc = 0x329D40u;
label_329d40:
    // 0x329d40: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_329d44:
    if (ctx->pc == 0x329D44u) {
        ctx->pc = 0x329D48u;
        goto label_329d48;
    }
    ctx->pc = 0x329D40u;
    {
        const bool branch_taken_0x329d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329d40) {
            ctx->pc = 0x329D4Cu;
            goto label_329d4c;
        }
    }
    ctx->pc = 0x329D48u;
label_329d48:
    // 0x329d48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x329d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329d4c:
    // 0x329d4c: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_329d50:
    if (ctx->pc == 0x329D50u) {
        ctx->pc = 0x329D50u;
            // 0x329d50: 0x8e44003c  lw          $a0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->pc = 0x329D54u;
        goto label_329d54;
    }
    ctx->pc = 0x329D4Cu;
    {
        const bool branch_taken_0x329d4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x329d4c) {
            ctx->pc = 0x329D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329D4Cu;
            // 0x329d50: 0x8e44003c  lw          $a0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329D68u;
            goto label_329d68;
        }
    }
    ctx->pc = 0x329D54u;
label_329d54:
    // 0x329d54: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x329d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_329d58:
    // 0x329d58: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x329d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_329d5c:
    // 0x329d5c: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
label_329d60:
    if (ctx->pc == 0x329D60u) {
        ctx->pc = 0x329D64u;
        goto label_329d64;
    }
    ctx->pc = 0x329D5Cu;
    {
        const bool branch_taken_0x329d5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329d5c) {
            ctx->pc = 0x329DFCu;
            goto label_329dfc;
        }
    }
    ctx->pc = 0x329D64u;
label_329d64:
    // 0x329d64: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x329d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_329d68:
    // 0x329d68: 0x8e03078c  lw          $v1, 0x78C($s0)
    ctx->pc = 0x329d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1932)));
label_329d6c:
    // 0x329d6c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x329d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_329d70:
    // 0x329d70: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_329d74:
    if (ctx->pc == 0x329D74u) {
        ctx->pc = 0x329D78u;
        goto label_329d78;
    }
    ctx->pc = 0x329D70u;
    {
        const bool branch_taken_0x329d70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x329d70) {
            ctx->pc = 0x329DA0u;
            goto label_329da0;
        }
    }
    ctx->pc = 0x329D78u;
label_329d78:
    // 0x329d78: 0xc040180  jal         func_100600
label_329d7c:
    if (ctx->pc == 0x329D7Cu) {
        ctx->pc = 0x329D7Cu;
            // 0x329d7c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x329D80u;
        goto label_329d80;
    }
    ctx->pc = 0x329D78u;
    SET_GPR_U32(ctx, 31, 0x329D80u);
    ctx->pc = 0x329D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329D78u;
            // 0x329d7c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D80u; }
        if (ctx->pc != 0x329D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D80u; }
        if (ctx->pc != 0x329D80u) { return; }
    }
    ctx->pc = 0x329D80u;
label_329d80:
    // 0x329d80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x329d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329d84:
    // 0x329d84: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_329d88:
    if (ctx->pc == 0x329D88u) {
        ctx->pc = 0x329D8Cu;
        goto label_329d8c;
    }
    ctx->pc = 0x329D84u;
    {
        const bool branch_taken_0x329d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329d84) {
            ctx->pc = 0x329DFCu;
            goto label_329dfc;
        }
    }
    ctx->pc = 0x329D8Cu;
label_329d8c:
    // 0x329d8c: 0x8e46003c  lw          $a2, 0x3C($s2)
    ctx->pc = 0x329d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_329d90:
    // 0x329d90: 0xc0ee97c  jal         func_3BA5F0
label_329d94:
    if (ctx->pc == 0x329D94u) {
        ctx->pc = 0x329D94u;
            // 0x329d94: 0x822511ab  lb          $a1, 0x11AB($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4523)));
        ctx->pc = 0x329D98u;
        goto label_329d98;
    }
    ctx->pc = 0x329D90u;
    SET_GPR_U32(ctx, 31, 0x329D98u);
    ctx->pc = 0x329D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329D90u;
            // 0x329d94: 0x822511ab  lb          $a1, 0x11AB($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4523)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA5F0u;
    if (runtime->hasFunction(0x3BA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D98u; }
        if (ctx->pc != 0x329D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA5F0_0x3ba5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D98u; }
        if (ctx->pc != 0x329D98u) { return; }
    }
    ctx->pc = 0x329D98u;
label_329d98:
    // 0x329d98: 0x10000018  b           . + 4 + (0x18 << 2)
label_329d9c:
    if (ctx->pc == 0x329D9Cu) {
        ctx->pc = 0x329DA0u;
        goto label_329da0;
    }
    ctx->pc = 0x329D98u;
    {
        const bool branch_taken_0x329d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329d98) {
            ctx->pc = 0x329DFCu;
            goto label_329dfc;
        }
    }
    ctx->pc = 0x329DA0u;
label_329da0:
    // 0x329da0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x329da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_329da4:
    // 0x329da4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x329da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_329da8:
    // 0x329da8: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x329da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_329dac:
    // 0x329dac: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x329dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_329db0:
    // 0x329db0: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
label_329db4:
    if (ctx->pc == 0x329DB4u) {
        ctx->pc = 0x329DB8u;
        goto label_329db8;
    }
    ctx->pc = 0x329DB0u;
    {
        const bool branch_taken_0x329db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x329db0) {
            ctx->pc = 0x329DFCu;
            goto label_329dfc;
        }
    }
    ctx->pc = 0x329DB8u;
label_329db8:
    // 0x329db8: 0x8e04095c  lw          $a0, 0x95C($s0)
    ctx->pc = 0x329db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2396)));
label_329dbc:
    // 0x329dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329dc0:
    // 0x329dc0: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_329dc4:
    if (ctx->pc == 0x329DC4u) {
        ctx->pc = 0x329DC4u;
            // 0x329dc4: 0x240400c4  addiu       $a0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->pc = 0x329DC8u;
        goto label_329dc8;
    }
    ctx->pc = 0x329DC0u;
    {
        const bool branch_taken_0x329dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329dc0) {
            ctx->pc = 0x329DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329DC0u;
            // 0x329dc4: 0x240400c4  addiu       $a0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329DDCu;
            goto label_329ddc;
        }
    }
    ctx->pc = 0x329DC8u;
label_329dc8:
    // 0x329dc8: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x329dc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_329dcc:
    // 0x329dcc: 0x2c610019  sltiu       $at, $v1, 0x19
    ctx->pc = 0x329dccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_329dd0:
    // 0x329dd0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_329dd4:
    if (ctx->pc == 0x329DD4u) {
        ctx->pc = 0x329DD8u;
        goto label_329dd8;
    }
    ctx->pc = 0x329DD0u;
    {
        const bool branch_taken_0x329dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x329dd0) {
            ctx->pc = 0x329DFCu;
            goto label_329dfc;
        }
    }
    ctx->pc = 0x329DD8u;
label_329dd8:
    // 0x329dd8: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x329dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_329ddc:
    // 0x329ddc: 0xc040180  jal         func_100600
label_329de0:
    if (ctx->pc == 0x329DE0u) {
        ctx->pc = 0x329DE4u;
        goto label_329de4;
    }
    ctx->pc = 0x329DDCu;
    SET_GPR_U32(ctx, 31, 0x329DE4u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329DE4u; }
        if (ctx->pc != 0x329DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329DE4u; }
        if (ctx->pc != 0x329DE4u) { return; }
    }
    ctx->pc = 0x329DE4u;
label_329de4:
    // 0x329de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x329de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329de8:
    // 0x329de8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_329dec:
    if (ctx->pc == 0x329DECu) {
        ctx->pc = 0x329DF0u;
        goto label_329df0;
    }
    ctx->pc = 0x329DE8u;
    {
        const bool branch_taken_0x329de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329de8) {
            ctx->pc = 0x329DFCu;
            goto label_329dfc;
        }
    }
    ctx->pc = 0x329DF0u;
label_329df0:
    // 0x329df0: 0x8e250d98  lw          $a1, 0xD98($s1)
    ctx->pc = 0x329df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_329df4:
    // 0x329df4: 0xc0f19fc  jal         func_3C67F0
label_329df8:
    if (ctx->pc == 0x329DF8u) {
        ctx->pc = 0x329DF8u;
            // 0x329df8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x329DFCu;
        goto label_329dfc;
    }
    ctx->pc = 0x329DF4u;
    SET_GPR_U32(ctx, 31, 0x329DFCu);
    ctx->pc = 0x329DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329DF4u;
            // 0x329df8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C67F0u;
    if (runtime->hasFunction(0x3C67F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C67F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329DFCu; }
        if (ctx->pc != 0x329DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C67F0_0x3c67f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329DFCu; }
        if (ctx->pc != 0x329DFCu) { return; }
    }
    ctx->pc = 0x329DFCu;
label_329dfc:
    // 0x329dfc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x329dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_329e00:
    // 0x329e00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x329e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_329e04:
    // 0x329e04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_329e08:
    // 0x329e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_329e0c:
    // 0x329e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_329e10:
    // 0x329e10: 0x3e00008  jr          $ra
label_329e14:
    if (ctx->pc == 0x329E14u) {
        ctx->pc = 0x329E14u;
            // 0x329e14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x329E18u;
        goto label_329e18;
    }
    ctx->pc = 0x329E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329E10u;
            // 0x329e14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329E18u;
label_329e18:
    // 0x329e18: 0x0  nop
    ctx->pc = 0x329e18u;
    // NOP
label_329e1c:
    // 0x329e1c: 0x0  nop
    ctx->pc = 0x329e1cu;
    // NOP
label_329e20:
    // 0x329e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x329e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_329e24:
    // 0x329e24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x329e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_329e28:
    // 0x329e28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x329e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_329e2c:
    // 0x329e2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x329e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_329e30:
    // 0x329e30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_329e34:
    // 0x329e34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_329e38:
    // 0x329e38: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x329e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_329e3c:
    // 0x329e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329e40:
    // 0x329e40: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x329e40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_329e44:
    // 0x329e44: 0x8c51012c  lw          $s1, 0x12C($v0)
    ctx->pc = 0x329e44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_329e48:
    // 0x329e48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x329e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329e4c:
    // 0x329e4c: 0xc0c5eec  jal         func_317BB0
label_329e50:
    if (ctx->pc == 0x329E50u) {
        ctx->pc = 0x329E50u;
            // 0x329e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329E54u;
        goto label_329e54;
    }
    ctx->pc = 0x329E4Cu;
    SET_GPR_U32(ctx, 31, 0x329E54u);
    ctx->pc = 0x329E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329E4Cu;
            // 0x329e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317BB0u;
    if (runtime->hasFunction(0x317BB0u)) {
        auto targetFn = runtime->lookupFunction(0x317BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E54u; }
        if (ctx->pc != 0x329E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317BB0_0x317bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E54u; }
        if (ctx->pc != 0x329E54u) { return; }
    }
    ctx->pc = 0x329E54u;
label_329e54:
    // 0x329e54: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x329e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_329e58:
    // 0x329e58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x329e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329e5c:
    // 0x329e5c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x329e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_329e60:
    // 0x329e60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329e64:
    // 0x329e64: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x329e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_329e68:
    // 0x329e68: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x329e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_329e6c:
    // 0x329e6c: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x329e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_329e70:
    // 0x329e70: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x329e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_329e74:
    // 0x329e74: 0x320f809  jalr        $t9
label_329e78:
    if (ctx->pc == 0x329E78u) {
        ctx->pc = 0x329E78u;
            // 0x329e78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329E7Cu;
        goto label_329e7c;
    }
    ctx->pc = 0x329E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x329E7Cu);
        ctx->pc = 0x329E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329E74u;
            // 0x329e78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x329E7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x329E7Cu; }
            if (ctx->pc != 0x329E7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x329E7Cu;
label_329e7c:
    // 0x329e7c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x329e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_329e80:
    // 0x329e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329e84:
    // 0x329e84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x329e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_329e88:
    // 0x329e88: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x329e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_329e8c:
    // 0x329e8c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x329e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_329e90:
    // 0x329e90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x329e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_329e94:
    // 0x329e94: 0xc0ca718  jal         func_329C60
label_329e98:
    if (ctx->pc == 0x329E98u) {
        ctx->pc = 0x329E98u;
            // 0x329e98: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x329E9Cu;
        goto label_329e9c;
    }
    ctx->pc = 0x329E94u;
    SET_GPR_U32(ctx, 31, 0x329E9Cu);
    ctx->pc = 0x329E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329E94u;
            // 0x329e98: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329C60u;
    goto label_329c60;
    ctx->pc = 0x329E9Cu;
label_329e9c:
    // 0x329e9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x329e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_329ea0:
    // 0x329ea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_329ea4:
    // 0x329ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_329ea8:
    // 0x329ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_329eac:
    // 0x329eac: 0x3e00008  jr          $ra
label_329eb0:
    if (ctx->pc == 0x329EB0u) {
        ctx->pc = 0x329EB0u;
            // 0x329eb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x329EB4u;
        goto label_329eb4;
    }
    ctx->pc = 0x329EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329EACu;
            // 0x329eb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329EB4u;
label_329eb4:
    // 0x329eb4: 0x0  nop
    ctx->pc = 0x329eb4u;
    // NOP
label_329eb8:
    // 0x329eb8: 0x0  nop
    ctx->pc = 0x329eb8u;
    // NOP
label_329ebc:
    // 0x329ebc: 0x0  nop
    ctx->pc = 0x329ebcu;
    // NOP
}
