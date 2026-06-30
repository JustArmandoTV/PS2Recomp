#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00517C60
// Address: 0x517c60 - 0x517ec0
void sub_00517C60_0x517c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00517C60_0x517c60");
#endif

    switch (ctx->pc) {
        case 0x517c60u: goto label_517c60;
        case 0x517c64u: goto label_517c64;
        case 0x517c68u: goto label_517c68;
        case 0x517c6cu: goto label_517c6c;
        case 0x517c70u: goto label_517c70;
        case 0x517c74u: goto label_517c74;
        case 0x517c78u: goto label_517c78;
        case 0x517c7cu: goto label_517c7c;
        case 0x517c80u: goto label_517c80;
        case 0x517c84u: goto label_517c84;
        case 0x517c88u: goto label_517c88;
        case 0x517c8cu: goto label_517c8c;
        case 0x517c90u: goto label_517c90;
        case 0x517c94u: goto label_517c94;
        case 0x517c98u: goto label_517c98;
        case 0x517c9cu: goto label_517c9c;
        case 0x517ca0u: goto label_517ca0;
        case 0x517ca4u: goto label_517ca4;
        case 0x517ca8u: goto label_517ca8;
        case 0x517cacu: goto label_517cac;
        case 0x517cb0u: goto label_517cb0;
        case 0x517cb4u: goto label_517cb4;
        case 0x517cb8u: goto label_517cb8;
        case 0x517cbcu: goto label_517cbc;
        case 0x517cc0u: goto label_517cc0;
        case 0x517cc4u: goto label_517cc4;
        case 0x517cc8u: goto label_517cc8;
        case 0x517cccu: goto label_517ccc;
        case 0x517cd0u: goto label_517cd0;
        case 0x517cd4u: goto label_517cd4;
        case 0x517cd8u: goto label_517cd8;
        case 0x517cdcu: goto label_517cdc;
        case 0x517ce0u: goto label_517ce0;
        case 0x517ce4u: goto label_517ce4;
        case 0x517ce8u: goto label_517ce8;
        case 0x517cecu: goto label_517cec;
        case 0x517cf0u: goto label_517cf0;
        case 0x517cf4u: goto label_517cf4;
        case 0x517cf8u: goto label_517cf8;
        case 0x517cfcu: goto label_517cfc;
        case 0x517d00u: goto label_517d00;
        case 0x517d04u: goto label_517d04;
        case 0x517d08u: goto label_517d08;
        case 0x517d0cu: goto label_517d0c;
        case 0x517d10u: goto label_517d10;
        case 0x517d14u: goto label_517d14;
        case 0x517d18u: goto label_517d18;
        case 0x517d1cu: goto label_517d1c;
        case 0x517d20u: goto label_517d20;
        case 0x517d24u: goto label_517d24;
        case 0x517d28u: goto label_517d28;
        case 0x517d2cu: goto label_517d2c;
        case 0x517d30u: goto label_517d30;
        case 0x517d34u: goto label_517d34;
        case 0x517d38u: goto label_517d38;
        case 0x517d3cu: goto label_517d3c;
        case 0x517d40u: goto label_517d40;
        case 0x517d44u: goto label_517d44;
        case 0x517d48u: goto label_517d48;
        case 0x517d4cu: goto label_517d4c;
        case 0x517d50u: goto label_517d50;
        case 0x517d54u: goto label_517d54;
        case 0x517d58u: goto label_517d58;
        case 0x517d5cu: goto label_517d5c;
        case 0x517d60u: goto label_517d60;
        case 0x517d64u: goto label_517d64;
        case 0x517d68u: goto label_517d68;
        case 0x517d6cu: goto label_517d6c;
        case 0x517d70u: goto label_517d70;
        case 0x517d74u: goto label_517d74;
        case 0x517d78u: goto label_517d78;
        case 0x517d7cu: goto label_517d7c;
        case 0x517d80u: goto label_517d80;
        case 0x517d84u: goto label_517d84;
        case 0x517d88u: goto label_517d88;
        case 0x517d8cu: goto label_517d8c;
        case 0x517d90u: goto label_517d90;
        case 0x517d94u: goto label_517d94;
        case 0x517d98u: goto label_517d98;
        case 0x517d9cu: goto label_517d9c;
        case 0x517da0u: goto label_517da0;
        case 0x517da4u: goto label_517da4;
        case 0x517da8u: goto label_517da8;
        case 0x517dacu: goto label_517dac;
        case 0x517db0u: goto label_517db0;
        case 0x517db4u: goto label_517db4;
        case 0x517db8u: goto label_517db8;
        case 0x517dbcu: goto label_517dbc;
        case 0x517dc0u: goto label_517dc0;
        case 0x517dc4u: goto label_517dc4;
        case 0x517dc8u: goto label_517dc8;
        case 0x517dccu: goto label_517dcc;
        case 0x517dd0u: goto label_517dd0;
        case 0x517dd4u: goto label_517dd4;
        case 0x517dd8u: goto label_517dd8;
        case 0x517ddcu: goto label_517ddc;
        case 0x517de0u: goto label_517de0;
        case 0x517de4u: goto label_517de4;
        case 0x517de8u: goto label_517de8;
        case 0x517decu: goto label_517dec;
        case 0x517df0u: goto label_517df0;
        case 0x517df4u: goto label_517df4;
        case 0x517df8u: goto label_517df8;
        case 0x517dfcu: goto label_517dfc;
        case 0x517e00u: goto label_517e00;
        case 0x517e04u: goto label_517e04;
        case 0x517e08u: goto label_517e08;
        case 0x517e0cu: goto label_517e0c;
        case 0x517e10u: goto label_517e10;
        case 0x517e14u: goto label_517e14;
        case 0x517e18u: goto label_517e18;
        case 0x517e1cu: goto label_517e1c;
        case 0x517e20u: goto label_517e20;
        case 0x517e24u: goto label_517e24;
        case 0x517e28u: goto label_517e28;
        case 0x517e2cu: goto label_517e2c;
        case 0x517e30u: goto label_517e30;
        case 0x517e34u: goto label_517e34;
        case 0x517e38u: goto label_517e38;
        case 0x517e3cu: goto label_517e3c;
        case 0x517e40u: goto label_517e40;
        case 0x517e44u: goto label_517e44;
        case 0x517e48u: goto label_517e48;
        case 0x517e4cu: goto label_517e4c;
        case 0x517e50u: goto label_517e50;
        case 0x517e54u: goto label_517e54;
        case 0x517e58u: goto label_517e58;
        case 0x517e5cu: goto label_517e5c;
        case 0x517e60u: goto label_517e60;
        case 0x517e64u: goto label_517e64;
        case 0x517e68u: goto label_517e68;
        case 0x517e6cu: goto label_517e6c;
        case 0x517e70u: goto label_517e70;
        case 0x517e74u: goto label_517e74;
        case 0x517e78u: goto label_517e78;
        case 0x517e7cu: goto label_517e7c;
        case 0x517e80u: goto label_517e80;
        case 0x517e84u: goto label_517e84;
        case 0x517e88u: goto label_517e88;
        case 0x517e8cu: goto label_517e8c;
        case 0x517e90u: goto label_517e90;
        case 0x517e94u: goto label_517e94;
        case 0x517e98u: goto label_517e98;
        case 0x517e9cu: goto label_517e9c;
        case 0x517ea0u: goto label_517ea0;
        case 0x517ea4u: goto label_517ea4;
        case 0x517ea8u: goto label_517ea8;
        case 0x517eacu: goto label_517eac;
        case 0x517eb0u: goto label_517eb0;
        case 0x517eb4u: goto label_517eb4;
        case 0x517eb8u: goto label_517eb8;
        case 0x517ebcu: goto label_517ebc;
        default: break;
    }

    ctx->pc = 0x517c60u;

label_517c60:
    // 0x517c60: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x517c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_517c64:
    // 0x517c64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x517c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_517c68:
    // 0x517c68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x517c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_517c6c:
    // 0x517c6c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x517c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_517c70:
    // 0x517c70: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x517c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_517c74:
    // 0x517c74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x517c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_517c78:
    // 0x517c78: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x517c78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_517c7c:
    // 0x517c7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x517c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_517c80:
    // 0x517c80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x517c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_517c84:
    // 0x517c84: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x517c84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_517c88:
    // 0x517c88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x517c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_517c8c:
    // 0x517c8c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x517c8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_517c90:
    // 0x517c90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x517c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_517c94:
    // 0x517c94: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x517c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_517c98:
    // 0x517c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x517c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_517c9c:
    // 0x517c9c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x517c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_517ca0:
    // 0x517ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x517ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_517ca4:
    // 0x517ca4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x517ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_517ca8:
    // 0x517ca8: 0x8c850134  lw          $a1, 0x134($a0)
    ctx->pc = 0x517ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
label_517cac:
    // 0x517cac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x517cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_517cb0:
    // 0x517cb0: 0x8fb600f0  lw          $s6, 0xF0($sp)
    ctx->pc = 0x517cb0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_517cb4:
    // 0x517cb4: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x517cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_517cb8:
    // 0x517cb8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x517cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_517cbc:
    // 0x517cbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x517cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_517cc0:
    // 0x517cc0: 0x8c630cec  lw          $v1, 0xCEC($v1)
    ctx->pc = 0x517cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3308)));
label_517cc4:
    // 0x517cc4: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_517cc8:
    if (ctx->pc == 0x517CC8u) {
        ctx->pc = 0x517CC8u;
            // 0x517cc8: 0xafa800ac  sw          $t0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
        ctx->pc = 0x517CCCu;
        goto label_517ccc;
    }
    ctx->pc = 0x517CC4u;
    {
        const bool branch_taken_0x517cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x517CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517CC4u;
            // 0x517cc8: 0xafa800ac  sw          $t0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517cc4) {
            ctx->pc = 0x517E8Cu;
            goto label_517e8c;
        }
    }
    ctx->pc = 0x517CCCu;
label_517ccc:
    // 0x517ccc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x517cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_517cd0:
    // 0x517cd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517cd4:
    // 0x517cd4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x517cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_517cd8:
    // 0x517cd8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x517cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_517cdc:
    // 0x517cdc: 0x320f809  jalr        $t9
label_517ce0:
    if (ctx->pc == 0x517CE0u) {
        ctx->pc = 0x517CE0u;
            // 0x517ce0: 0x8c5e0130  lw          $fp, 0x130($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
        ctx->pc = 0x517CE4u;
        goto label_517ce4;
    }
    ctx->pc = 0x517CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517CE4u);
        ctx->pc = 0x517CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517CDCu;
            // 0x517ce0: 0x8c5e0130  lw          $fp, 0x130($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x517CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517CE4u; }
            if (ctx->pc != 0x517CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x517CE4u;
label_517ce4:
    // 0x517ce4: 0x545e006a  bnel        $v0, $fp, . + 4 + (0x6A << 2)
label_517ce8:
    if (ctx->pc == 0x517CE8u) {
        ctx->pc = 0x517CE8u;
            // 0x517ce8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x517CECu;
        goto label_517cec;
    }
    ctx->pc = 0x517CE4u;
    {
        const bool branch_taken_0x517ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x517ce4) {
            ctx->pc = 0x517CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x517CE4u;
            // 0x517ce8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x517E90u;
            goto label_517e90;
        }
    }
    ctx->pc = 0x517CECu;
label_517cec:
    // 0x517cec: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_517cf0:
    if (ctx->pc == 0x517CF0u) {
        ctx->pc = 0x517CF0u;
            // 0x517cf0: 0x8e3e0000  lw          $fp, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x517CF4u;
        goto label_517cf4;
    }
    ctx->pc = 0x517CECu;
    {
        const bool branch_taken_0x517cec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x517CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517CECu;
            // 0x517cf0: 0x8e3e0000  lw          $fp, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517cec) {
            ctx->pc = 0x517D04u;
            goto label_517d04;
        }
    }
    ctx->pc = 0x517CF4u;
label_517cf4:
    // 0x517cf4: 0xc04e738  jal         func_139CE0
label_517cf8:
    if (ctx->pc == 0x517CF8u) {
        ctx->pc = 0x517CF8u;
            // 0x517cf8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517CFCu;
        goto label_517cfc;
    }
    ctx->pc = 0x517CF4u;
    SET_GPR_U32(ctx, 31, 0x517CFCu);
    ctx->pc = 0x517CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517CF4u;
            // 0x517cf8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517CFCu; }
        if (ctx->pc != 0x517CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517CFCu; }
        if (ctx->pc != 0x517CFCu) { return; }
    }
    ctx->pc = 0x517CFCu;
label_517cfc:
    // 0x517cfc: 0x10000004  b           . + 4 + (0x4 << 2)
label_517d00:
    if (ctx->pc == 0x517D00u) {
        ctx->pc = 0x517D00u;
            // 0x517d00: 0x8fc50028  lw          $a1, 0x28($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
        ctx->pc = 0x517D04u;
        goto label_517d04;
    }
    ctx->pc = 0x517CFCu;
    {
        const bool branch_taken_0x517cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x517D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517CFCu;
            // 0x517d00: 0x8fc50028  lw          $a1, 0x28($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517cfc) {
            ctx->pc = 0x517D10u;
            goto label_517d10;
        }
    }
    ctx->pc = 0x517D04u;
label_517d04:
    // 0x517d04: 0xc04e738  jal         func_139CE0
label_517d08:
    if (ctx->pc == 0x517D08u) {
        ctx->pc = 0x517D08u;
            // 0x517d08: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x517D0Cu;
        goto label_517d0c;
    }
    ctx->pc = 0x517D04u;
    SET_GPR_U32(ctx, 31, 0x517D0Cu);
    ctx->pc = 0x517D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517D04u;
            // 0x517d08: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D0Cu; }
        if (ctx->pc != 0x517D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D0Cu; }
        if (ctx->pc != 0x517D0Cu) { return; }
    }
    ctx->pc = 0x517D0Cu;
label_517d0c:
    // 0x517d0c: 0x8fc50028  lw          $a1, 0x28($fp)
    ctx->pc = 0x517d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_517d10:
    // 0x517d10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x517d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_517d14:
    // 0x517d14: 0xc04e4a4  jal         func_139290
label_517d18:
    if (ctx->pc == 0x517D18u) {
        ctx->pc = 0x517D18u;
            // 0x517d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517D1Cu;
        goto label_517d1c;
    }
    ctx->pc = 0x517D14u;
    SET_GPR_U32(ctx, 31, 0x517D1Cu);
    ctx->pc = 0x517D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517D14u;
            // 0x517d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D1Cu; }
        if (ctx->pc != 0x517D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D1Cu; }
        if (ctx->pc != 0x517D1Cu) { return; }
    }
    ctx->pc = 0x517D1Cu;
label_517d1c:
    // 0x517d1c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x517d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_517d20:
    // 0x517d20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x517d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_517d24:
    // 0x517d24: 0xc04cd60  jal         func_133580
label_517d28:
    if (ctx->pc == 0x517D28u) {
        ctx->pc = 0x517D28u;
            // 0x517d28: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x517D2Cu;
        goto label_517d2c;
    }
    ctx->pc = 0x517D24u;
    SET_GPR_U32(ctx, 31, 0x517D2Cu);
    ctx->pc = 0x517D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517D24u;
            // 0x517d28: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D2Cu; }
        if (ctx->pc != 0x517D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D2Cu; }
        if (ctx->pc != 0x517D2Cu) { return; }
    }
    ctx->pc = 0x517D2Cu;
label_517d2c:
    // 0x517d2c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x517d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_517d30:
    // 0x517d30: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x517d30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_517d34:
    // 0x517d34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x517d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_517d38:
    // 0x517d38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x517d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_517d3c:
    // 0x517d3c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x517d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_517d40:
    // 0x517d40: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x517d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_517d44:
    // 0x517d44: 0xc04cfcc  jal         func_133F30
label_517d48:
    if (ctx->pc == 0x517D48u) {
        ctx->pc = 0x517D48u;
            // 0x517d48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517D4Cu;
        goto label_517d4c;
    }
    ctx->pc = 0x517D44u;
    SET_GPR_U32(ctx, 31, 0x517D4Cu);
    ctx->pc = 0x517D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517D44u;
            // 0x517d48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D4Cu; }
        if (ctx->pc != 0x517D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D4Cu; }
        if (ctx->pc != 0x517D4Cu) { return; }
    }
    ctx->pc = 0x517D4Cu;
label_517d4c:
    // 0x517d4c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x517d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_517d50:
    // 0x517d50: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x517d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_517d54:
    // 0x517d54: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x517d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_517d58:
    // 0x517d58: 0xc054bbc  jal         func_152EF0
label_517d5c:
    if (ctx->pc == 0x517D5Cu) {
        ctx->pc = 0x517D5Cu;
            // 0x517d5c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517D60u;
        goto label_517d60;
    }
    ctx->pc = 0x517D58u;
    SET_GPR_U32(ctx, 31, 0x517D60u);
    ctx->pc = 0x517D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517D58u;
            // 0x517d5c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D60u; }
        if (ctx->pc != 0x517D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D60u; }
        if (ctx->pc != 0x517D60u) { return; }
    }
    ctx->pc = 0x517D60u;
label_517d60:
    // 0x517d60: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x517d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_517d64:
    // 0x517d64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x517d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_517d68:
    // 0x517d68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x517d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_517d6c:
    // 0x517d6c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x517d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_517d70:
    // 0x517d70: 0xc054c2c  jal         func_1530B0
label_517d74:
    if (ctx->pc == 0x517D74u) {
        ctx->pc = 0x517D74u;
            // 0x517d74: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x517D78u;
        goto label_517d78;
    }
    ctx->pc = 0x517D70u;
    SET_GPR_U32(ctx, 31, 0x517D78u);
    ctx->pc = 0x517D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517D70u;
            // 0x517d74: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D78u; }
        if (ctx->pc != 0x517D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D78u; }
        if (ctx->pc != 0x517D78u) { return; }
    }
    ctx->pc = 0x517D78u;
label_517d78:
    // 0x517d78: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x517d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_517d7c:
    // 0x517d7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_517d80:
    if (ctx->pc == 0x517D80u) {
        ctx->pc = 0x517D80u;
            // 0x517d80: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x517D84u;
        goto label_517d84;
    }
    ctx->pc = 0x517D7Cu;
    {
        const bool branch_taken_0x517d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x517D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517D7Cu;
            // 0x517d80: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517d7c) {
            ctx->pc = 0x517D94u;
            goto label_517d94;
        }
    }
    ctx->pc = 0x517D84u;
label_517d84:
    // 0x517d84: 0xc04e738  jal         func_139CE0
label_517d88:
    if (ctx->pc == 0x517D88u) {
        ctx->pc = 0x517D88u;
            // 0x517d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517D8Cu;
        goto label_517d8c;
    }
    ctx->pc = 0x517D84u;
    SET_GPR_U32(ctx, 31, 0x517D8Cu);
    ctx->pc = 0x517D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517D84u;
            // 0x517d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D8Cu; }
        if (ctx->pc != 0x517D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D8Cu; }
        if (ctx->pc != 0x517D8Cu) { return; }
    }
    ctx->pc = 0x517D8Cu;
label_517d8c:
    // 0x517d8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_517d90:
    if (ctx->pc == 0x517D90u) {
        ctx->pc = 0x517D90u;
            // 0x517d90: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x517D94u;
        goto label_517d94;
    }
    ctx->pc = 0x517D8Cu;
    {
        const bool branch_taken_0x517d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x517D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517D8Cu;
            // 0x517d90: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517d8c) {
            ctx->pc = 0x517DA0u;
            goto label_517da0;
        }
    }
    ctx->pc = 0x517D94u;
label_517d94:
    // 0x517d94: 0xc04e738  jal         func_139CE0
label_517d98:
    if (ctx->pc == 0x517D98u) {
        ctx->pc = 0x517D98u;
            // 0x517d98: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x517D9Cu;
        goto label_517d9c;
    }
    ctx->pc = 0x517D94u;
    SET_GPR_U32(ctx, 31, 0x517D9Cu);
    ctx->pc = 0x517D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517D94u;
            // 0x517d98: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D9Cu; }
        if (ctx->pc != 0x517D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517D9Cu; }
        if (ctx->pc != 0x517D9Cu) { return; }
    }
    ctx->pc = 0x517D9Cu;
label_517d9c:
    // 0x517d9c: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x517d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_517da0:
    // 0x517da0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x517da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_517da4:
    // 0x517da4: 0xc04e4a4  jal         func_139290
label_517da8:
    if (ctx->pc == 0x517DA8u) {
        ctx->pc = 0x517DA8u;
            // 0x517da8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517DACu;
        goto label_517dac;
    }
    ctx->pc = 0x517DA4u;
    SET_GPR_U32(ctx, 31, 0x517DACu);
    ctx->pc = 0x517DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517DA4u;
            // 0x517da8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517DACu; }
        if (ctx->pc != 0x517DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517DACu; }
        if (ctx->pc != 0x517DACu) { return; }
    }
    ctx->pc = 0x517DACu;
label_517dac:
    // 0x517dac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x517dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_517db0:
    // 0x517db0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x517db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_517db4:
    // 0x517db4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x517db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_517db8:
    // 0x517db8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x517db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_517dbc:
    // 0x517dbc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x517dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_517dc0:
    // 0x517dc0: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x517dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_517dc4:
    // 0x517dc4: 0xc04ce50  jal         func_133940
label_517dc8:
    if (ctx->pc == 0x517DC8u) {
        ctx->pc = 0x517DC8u;
            // 0x517dc8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x517DCCu;
        goto label_517dcc;
    }
    ctx->pc = 0x517DC4u;
    SET_GPR_U32(ctx, 31, 0x517DCCu);
    ctx->pc = 0x517DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517DC4u;
            // 0x517dc8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517DCCu; }
        if (ctx->pc != 0x517DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517DCCu; }
        if (ctx->pc != 0x517DCCu) { return; }
    }
    ctx->pc = 0x517DCCu;
label_517dcc:
    // 0x517dcc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x517dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_517dd0:
    // 0x517dd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x517dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_517dd4:
    // 0x517dd4: 0xc04cd60  jal         func_133580
label_517dd8:
    if (ctx->pc == 0x517DD8u) {
        ctx->pc = 0x517DD8u;
            // 0x517dd8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517DDCu;
        goto label_517ddc;
    }
    ctx->pc = 0x517DD4u;
    SET_GPR_U32(ctx, 31, 0x517DDCu);
    ctx->pc = 0x517DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517DD4u;
            // 0x517dd8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517DDCu; }
        if (ctx->pc != 0x517DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517DDCu; }
        if (ctx->pc != 0x517DDCu) { return; }
    }
    ctx->pc = 0x517DDCu;
label_517ddc:
    // 0x517ddc: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x517ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_517de0:
    // 0x517de0: 0xc6ac000c  lwc1        $f12, 0xC($s5)
    ctx->pc = 0x517de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_517de4:
    // 0x517de4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x517de4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_517de8:
    // 0x517de8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x517de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_517dec:
    // 0x517dec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x517decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_517df0:
    // 0x517df0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x517df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_517df4:
    // 0x517df4: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x517df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_517df8:
    // 0x517df8: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x517df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_517dfc:
    // 0x517dfc: 0xc04cff4  jal         func_133FD0
label_517e00:
    if (ctx->pc == 0x517E00u) {
        ctx->pc = 0x517E00u;
            // 0x517e00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517E04u;
        goto label_517e04;
    }
    ctx->pc = 0x517DFCu;
    SET_GPR_U32(ctx, 31, 0x517E04u);
    ctx->pc = 0x517E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517DFCu;
            // 0x517e00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E04u; }
        if (ctx->pc != 0x517E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E04u; }
        if (ctx->pc != 0x517E04u) { return; }
    }
    ctx->pc = 0x517E04u;
label_517e04:
    // 0x517e04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x517e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_517e08:
    // 0x517e08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x517e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_517e0c:
    // 0x517e0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x517e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_517e10:
    // 0x517e10: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x517e10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_517e14:
    // 0x517e14: 0xc0538d8  jal         func_14E360
label_517e18:
    if (ctx->pc == 0x517E18u) {
        ctx->pc = 0x517E18u;
            // 0x517e18: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x517E1Cu;
        goto label_517e1c;
    }
    ctx->pc = 0x517E14u;
    SET_GPR_U32(ctx, 31, 0x517E1Cu);
    ctx->pc = 0x517E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517E14u;
            // 0x517e18: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E1Cu; }
        if (ctx->pc != 0x517E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E1Cu; }
        if (ctx->pc != 0x517E1Cu) { return; }
    }
    ctx->pc = 0x517E1Cu;
label_517e1c:
    // 0x517e1c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x517e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_517e20:
    // 0x517e20: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x517e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_517e24:
    // 0x517e24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x517e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_517e28:
    // 0x517e28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x517e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_517e2c:
    // 0x517e2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x517e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_517e30:
    // 0x517e30: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x517e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_517e34:
    // 0x517e34: 0xc04ce50  jal         func_133940
label_517e38:
    if (ctx->pc == 0x517E38u) {
        ctx->pc = 0x517E38u;
            // 0x517e38: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x517E3Cu;
        goto label_517e3c;
    }
    ctx->pc = 0x517E34u;
    SET_GPR_U32(ctx, 31, 0x517E3Cu);
    ctx->pc = 0x517E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517E34u;
            // 0x517e38: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E3Cu; }
        if (ctx->pc != 0x517E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E3Cu; }
        if (ctx->pc != 0x517E3Cu) { return; }
    }
    ctx->pc = 0x517E3Cu;
label_517e3c:
    // 0x517e3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x517e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_517e40:
    // 0x517e40: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x517e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_517e44:
    // 0x517e44: 0xc04cd60  jal         func_133580
label_517e48:
    if (ctx->pc == 0x517E48u) {
        ctx->pc = 0x517E48u;
            // 0x517e48: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x517E4Cu;
        goto label_517e4c;
    }
    ctx->pc = 0x517E44u;
    SET_GPR_U32(ctx, 31, 0x517E4Cu);
    ctx->pc = 0x517E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517E44u;
            // 0x517e48: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E4Cu; }
        if (ctx->pc != 0x517E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E4Cu; }
        if (ctx->pc != 0x517E4Cu) { return; }
    }
    ctx->pc = 0x517E4Cu;
label_517e4c:
    // 0x517e4c: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x517e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_517e50:
    // 0x517e50: 0xc6ac000c  lwc1        $f12, 0xC($s5)
    ctx->pc = 0x517e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_517e54:
    // 0x517e54: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x517e54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_517e58:
    // 0x517e58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x517e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_517e5c:
    // 0x517e5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x517e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_517e60:
    // 0x517e60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x517e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_517e64:
    // 0x517e64: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x517e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_517e68:
    // 0x517e68: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x517e68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_517e6c:
    // 0x517e6c: 0xc04cff4  jal         func_133FD0
label_517e70:
    if (ctx->pc == 0x517E70u) {
        ctx->pc = 0x517E70u;
            // 0x517e70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517E74u;
        goto label_517e74;
    }
    ctx->pc = 0x517E6Cu;
    SET_GPR_U32(ctx, 31, 0x517E74u);
    ctx->pc = 0x517E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517E6Cu;
            // 0x517e70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E74u; }
        if (ctx->pc != 0x517E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E74u; }
        if (ctx->pc != 0x517E74u) { return; }
    }
    ctx->pc = 0x517E74u;
label_517e74:
    // 0x517e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x517e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_517e78:
    // 0x517e78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x517e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_517e7c:
    // 0x517e7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x517e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_517e80:
    // 0x517e80: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x517e80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_517e84:
    // 0x517e84: 0xc0538d8  jal         func_14E360
label_517e88:
    if (ctx->pc == 0x517E88u) {
        ctx->pc = 0x517E88u;
            // 0x517e88: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x517E8Cu;
        goto label_517e8c;
    }
    ctx->pc = 0x517E84u;
    SET_GPR_U32(ctx, 31, 0x517E8Cu);
    ctx->pc = 0x517E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517E84u;
            // 0x517e88: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E8Cu; }
        if (ctx->pc != 0x517E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517E8Cu; }
        if (ctx->pc != 0x517E8Cu) { return; }
    }
    ctx->pc = 0x517E8Cu;
label_517e8c:
    // 0x517e8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x517e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_517e90:
    // 0x517e90: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x517e90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_517e94:
    // 0x517e94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x517e94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_517e98:
    // 0x517e98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x517e98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_517e9c:
    // 0x517e9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x517e9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_517ea0:
    // 0x517ea0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x517ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_517ea4:
    // 0x517ea4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x517ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_517ea8:
    // 0x517ea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x517ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_517eac:
    // 0x517eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x517eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_517eb0:
    // 0x517eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x517eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_517eb4:
    // 0x517eb4: 0x3e00008  jr          $ra
label_517eb8:
    if (ctx->pc == 0x517EB8u) {
        ctx->pc = 0x517EB8u;
            // 0x517eb8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x517EBCu;
        goto label_517ebc;
    }
    ctx->pc = 0x517EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x517EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517EB4u;
            // 0x517eb8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x517EBCu;
label_517ebc:
    // 0x517ebc: 0x0  nop
    ctx->pc = 0x517ebcu;
    // NOP
}
