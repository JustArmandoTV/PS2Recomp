#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00354C00
// Address: 0x354c00 - 0x354ee0
void sub_00354C00_0x354c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354C00_0x354c00");
#endif

    switch (ctx->pc) {
        case 0x354c00u: goto label_354c00;
        case 0x354c04u: goto label_354c04;
        case 0x354c08u: goto label_354c08;
        case 0x354c0cu: goto label_354c0c;
        case 0x354c10u: goto label_354c10;
        case 0x354c14u: goto label_354c14;
        case 0x354c18u: goto label_354c18;
        case 0x354c1cu: goto label_354c1c;
        case 0x354c20u: goto label_354c20;
        case 0x354c24u: goto label_354c24;
        case 0x354c28u: goto label_354c28;
        case 0x354c2cu: goto label_354c2c;
        case 0x354c30u: goto label_354c30;
        case 0x354c34u: goto label_354c34;
        case 0x354c38u: goto label_354c38;
        case 0x354c3cu: goto label_354c3c;
        case 0x354c40u: goto label_354c40;
        case 0x354c44u: goto label_354c44;
        case 0x354c48u: goto label_354c48;
        case 0x354c4cu: goto label_354c4c;
        case 0x354c50u: goto label_354c50;
        case 0x354c54u: goto label_354c54;
        case 0x354c58u: goto label_354c58;
        case 0x354c5cu: goto label_354c5c;
        case 0x354c60u: goto label_354c60;
        case 0x354c64u: goto label_354c64;
        case 0x354c68u: goto label_354c68;
        case 0x354c6cu: goto label_354c6c;
        case 0x354c70u: goto label_354c70;
        case 0x354c74u: goto label_354c74;
        case 0x354c78u: goto label_354c78;
        case 0x354c7cu: goto label_354c7c;
        case 0x354c80u: goto label_354c80;
        case 0x354c84u: goto label_354c84;
        case 0x354c88u: goto label_354c88;
        case 0x354c8cu: goto label_354c8c;
        case 0x354c90u: goto label_354c90;
        case 0x354c94u: goto label_354c94;
        case 0x354c98u: goto label_354c98;
        case 0x354c9cu: goto label_354c9c;
        case 0x354ca0u: goto label_354ca0;
        case 0x354ca4u: goto label_354ca4;
        case 0x354ca8u: goto label_354ca8;
        case 0x354cacu: goto label_354cac;
        case 0x354cb0u: goto label_354cb0;
        case 0x354cb4u: goto label_354cb4;
        case 0x354cb8u: goto label_354cb8;
        case 0x354cbcu: goto label_354cbc;
        case 0x354cc0u: goto label_354cc0;
        case 0x354cc4u: goto label_354cc4;
        case 0x354cc8u: goto label_354cc8;
        case 0x354cccu: goto label_354ccc;
        case 0x354cd0u: goto label_354cd0;
        case 0x354cd4u: goto label_354cd4;
        case 0x354cd8u: goto label_354cd8;
        case 0x354cdcu: goto label_354cdc;
        case 0x354ce0u: goto label_354ce0;
        case 0x354ce4u: goto label_354ce4;
        case 0x354ce8u: goto label_354ce8;
        case 0x354cecu: goto label_354cec;
        case 0x354cf0u: goto label_354cf0;
        case 0x354cf4u: goto label_354cf4;
        case 0x354cf8u: goto label_354cf8;
        case 0x354cfcu: goto label_354cfc;
        case 0x354d00u: goto label_354d00;
        case 0x354d04u: goto label_354d04;
        case 0x354d08u: goto label_354d08;
        case 0x354d0cu: goto label_354d0c;
        case 0x354d10u: goto label_354d10;
        case 0x354d14u: goto label_354d14;
        case 0x354d18u: goto label_354d18;
        case 0x354d1cu: goto label_354d1c;
        case 0x354d20u: goto label_354d20;
        case 0x354d24u: goto label_354d24;
        case 0x354d28u: goto label_354d28;
        case 0x354d2cu: goto label_354d2c;
        case 0x354d30u: goto label_354d30;
        case 0x354d34u: goto label_354d34;
        case 0x354d38u: goto label_354d38;
        case 0x354d3cu: goto label_354d3c;
        case 0x354d40u: goto label_354d40;
        case 0x354d44u: goto label_354d44;
        case 0x354d48u: goto label_354d48;
        case 0x354d4cu: goto label_354d4c;
        case 0x354d50u: goto label_354d50;
        case 0x354d54u: goto label_354d54;
        case 0x354d58u: goto label_354d58;
        case 0x354d5cu: goto label_354d5c;
        case 0x354d60u: goto label_354d60;
        case 0x354d64u: goto label_354d64;
        case 0x354d68u: goto label_354d68;
        case 0x354d6cu: goto label_354d6c;
        case 0x354d70u: goto label_354d70;
        case 0x354d74u: goto label_354d74;
        case 0x354d78u: goto label_354d78;
        case 0x354d7cu: goto label_354d7c;
        case 0x354d80u: goto label_354d80;
        case 0x354d84u: goto label_354d84;
        case 0x354d88u: goto label_354d88;
        case 0x354d8cu: goto label_354d8c;
        case 0x354d90u: goto label_354d90;
        case 0x354d94u: goto label_354d94;
        case 0x354d98u: goto label_354d98;
        case 0x354d9cu: goto label_354d9c;
        case 0x354da0u: goto label_354da0;
        case 0x354da4u: goto label_354da4;
        case 0x354da8u: goto label_354da8;
        case 0x354dacu: goto label_354dac;
        case 0x354db0u: goto label_354db0;
        case 0x354db4u: goto label_354db4;
        case 0x354db8u: goto label_354db8;
        case 0x354dbcu: goto label_354dbc;
        case 0x354dc0u: goto label_354dc0;
        case 0x354dc4u: goto label_354dc4;
        case 0x354dc8u: goto label_354dc8;
        case 0x354dccu: goto label_354dcc;
        case 0x354dd0u: goto label_354dd0;
        case 0x354dd4u: goto label_354dd4;
        case 0x354dd8u: goto label_354dd8;
        case 0x354ddcu: goto label_354ddc;
        case 0x354de0u: goto label_354de0;
        case 0x354de4u: goto label_354de4;
        case 0x354de8u: goto label_354de8;
        case 0x354decu: goto label_354dec;
        case 0x354df0u: goto label_354df0;
        case 0x354df4u: goto label_354df4;
        case 0x354df8u: goto label_354df8;
        case 0x354dfcu: goto label_354dfc;
        case 0x354e00u: goto label_354e00;
        case 0x354e04u: goto label_354e04;
        case 0x354e08u: goto label_354e08;
        case 0x354e0cu: goto label_354e0c;
        case 0x354e10u: goto label_354e10;
        case 0x354e14u: goto label_354e14;
        case 0x354e18u: goto label_354e18;
        case 0x354e1cu: goto label_354e1c;
        case 0x354e20u: goto label_354e20;
        case 0x354e24u: goto label_354e24;
        case 0x354e28u: goto label_354e28;
        case 0x354e2cu: goto label_354e2c;
        case 0x354e30u: goto label_354e30;
        case 0x354e34u: goto label_354e34;
        case 0x354e38u: goto label_354e38;
        case 0x354e3cu: goto label_354e3c;
        case 0x354e40u: goto label_354e40;
        case 0x354e44u: goto label_354e44;
        case 0x354e48u: goto label_354e48;
        case 0x354e4cu: goto label_354e4c;
        case 0x354e50u: goto label_354e50;
        case 0x354e54u: goto label_354e54;
        case 0x354e58u: goto label_354e58;
        case 0x354e5cu: goto label_354e5c;
        case 0x354e60u: goto label_354e60;
        case 0x354e64u: goto label_354e64;
        case 0x354e68u: goto label_354e68;
        case 0x354e6cu: goto label_354e6c;
        case 0x354e70u: goto label_354e70;
        case 0x354e74u: goto label_354e74;
        case 0x354e78u: goto label_354e78;
        case 0x354e7cu: goto label_354e7c;
        case 0x354e80u: goto label_354e80;
        case 0x354e84u: goto label_354e84;
        case 0x354e88u: goto label_354e88;
        case 0x354e8cu: goto label_354e8c;
        case 0x354e90u: goto label_354e90;
        case 0x354e94u: goto label_354e94;
        case 0x354e98u: goto label_354e98;
        case 0x354e9cu: goto label_354e9c;
        case 0x354ea0u: goto label_354ea0;
        case 0x354ea4u: goto label_354ea4;
        case 0x354ea8u: goto label_354ea8;
        case 0x354eacu: goto label_354eac;
        case 0x354eb0u: goto label_354eb0;
        case 0x354eb4u: goto label_354eb4;
        case 0x354eb8u: goto label_354eb8;
        case 0x354ebcu: goto label_354ebc;
        case 0x354ec0u: goto label_354ec0;
        case 0x354ec4u: goto label_354ec4;
        case 0x354ec8u: goto label_354ec8;
        case 0x354eccu: goto label_354ecc;
        case 0x354ed0u: goto label_354ed0;
        case 0x354ed4u: goto label_354ed4;
        case 0x354ed8u: goto label_354ed8;
        case 0x354edcu: goto label_354edc;
        default: break;
    }

    ctx->pc = 0x354c00u;

label_354c00:
    // 0x354c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_354c04:
    // 0x354c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x354c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_354c08:
    // 0x354c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x354c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_354c0c:
    // 0x354c0c: 0xc074740  jal         func_1D1D00
label_354c10:
    if (ctx->pc == 0x354C10u) {
        ctx->pc = 0x354C10u;
            // 0x354c10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354C14u;
        goto label_354c14;
    }
    ctx->pc = 0x354C0Cu;
    SET_GPR_U32(ctx, 31, 0x354C14u);
    ctx->pc = 0x354C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354C0Cu;
            // 0x354c10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354C14u; }
        if (ctx->pc != 0x354C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354C14u; }
        if (ctx->pc != 0x354C14u) { return; }
    }
    ctx->pc = 0x354C14u;
label_354c14:
    // 0x354c14: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x354c14u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_354c18:
    // 0x354c18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x354c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_354c1c:
    // 0x354c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x354c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_354c20:
    // 0x354c20: 0x1010  mfhi        $v0
    ctx->pc = 0x354c20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_354c24:
    // 0x354c24: 0x3e00008  jr          $ra
label_354c28:
    if (ctx->pc == 0x354C28u) {
        ctx->pc = 0x354C28u;
            // 0x354c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x354C2Cu;
        goto label_354c2c;
    }
    ctx->pc = 0x354C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354C24u;
            // 0x354c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354C2Cu;
label_354c2c:
    // 0x354c2c: 0x0  nop
    ctx->pc = 0x354c2cu;
    // NOP
label_354c30:
    // 0x354c30: 0x8cc60d98  lw          $a2, 0xD98($a2)
    ctx->pc = 0x354c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_354c34:
    // 0x354c34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x354c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354c38:
    // 0x354c38: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x354c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_354c3c:
    // 0x354c3c: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x354c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_354c40:
    // 0x354c40: 0xa02827  not         $a1, $a1
    ctx->pc = 0x354c40u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_354c44:
    // 0x354c44: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x354c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_354c48:
    // 0x354c48: 0x3e00008  jr          $ra
label_354c4c:
    if (ctx->pc == 0x354C4Cu) {
        ctx->pc = 0x354C4Cu;
            // 0x354c4c: 0xac830094  sw          $v1, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
        ctx->pc = 0x354C50u;
        goto label_354c50;
    }
    ctx->pc = 0x354C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354C48u;
            // 0x354c4c: 0xac830094  sw          $v1, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354C50u;
label_354c50:
    // 0x354c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x354c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_354c54:
    // 0x354c54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x354c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_354c58:
    // 0x354c58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x354c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_354c5c:
    // 0x354c5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x354c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_354c60:
    // 0x354c60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x354c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_354c64:
    // 0x354c64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x354c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_354c68:
    // 0x354c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x354c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_354c6c:
    // 0x354c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x354c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_354c70:
    // 0x354c70: 0x8c850068  lw          $a1, 0x68($a0)
    ctx->pc = 0x354c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_354c74:
    // 0x354c74: 0x10a3007b  beq         $a1, $v1, . + 4 + (0x7B << 2)
label_354c78:
    if (ctx->pc == 0x354C78u) {
        ctx->pc = 0x354C78u;
            // 0x354c78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354C7Cu;
        goto label_354c7c;
    }
    ctx->pc = 0x354C74u;
    {
        const bool branch_taken_0x354c74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x354C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354C74u;
            // 0x354c78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354c74) {
            ctx->pc = 0x354E64u;
            goto label_354e64;
        }
    }
    ctx->pc = 0x354C7Cu;
label_354c7c:
    // 0x354c7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x354c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354c80:
    // 0x354c80: 0x54a40090  bnel        $a1, $a0, . + 4 + (0x90 << 2)
label_354c84:
    if (ctx->pc == 0x354C84u) {
        ctx->pc = 0x354C84u;
            // 0x354c84: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x354C88u;
        goto label_354c88;
    }
    ctx->pc = 0x354C80u;
    {
        const bool branch_taken_0x354c80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x354c80) {
            ctx->pc = 0x354C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354C80u;
            // 0x354c84: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354EC4u;
            goto label_354ec4;
        }
    }
    ctx->pc = 0x354C88u;
label_354c88:
    // 0x354c88: 0x9263004e  lbu         $v1, 0x4E($s3)
    ctx->pc = 0x354c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 78)));
label_354c8c:
    // 0x354c8c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
label_354c90:
    if (ctx->pc == 0x354C90u) {
        ctx->pc = 0x354C94u;
        goto label_354c94;
    }
    ctx->pc = 0x354C8Cu;
    {
        const bool branch_taken_0x354c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c8c) {
            ctx->pc = 0x354EC0u;
            goto label_354ec0;
        }
    }
    ctx->pc = 0x354C94u;
label_354c94:
    // 0x354c94: 0xc641121c  lwc1        $f1, 0x121C($s2)
    ctx->pc = 0x354c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354c98:
    // 0x354c98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354c9c:
    // 0x354c9c: 0x0  nop
    ctx->pc = 0x354c9cu;
    // NOP
label_354ca0:
    // 0x354ca0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x354ca0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354ca4:
    // 0x354ca4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_354ca8:
    if (ctx->pc == 0x354CA8u) {
        ctx->pc = 0x354CA8u;
            // 0x354ca8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354CACu;
        goto label_354cac;
    }
    ctx->pc = 0x354CA4u;
    {
        const bool branch_taken_0x354ca4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x354CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354CA4u;
            // 0x354ca8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354ca4) {
            ctx->pc = 0x354CB0u;
            goto label_354cb0;
        }
    }
    ctx->pc = 0x354CACu;
label_354cac:
    // 0x354cac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x354cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354cb0:
    // 0x354cb0: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x354cb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_354cb4:
    // 0x354cb4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_354cb8:
    if (ctx->pc == 0x354CB8u) {
        ctx->pc = 0x354CBCu;
        goto label_354cbc;
    }
    ctx->pc = 0x354CB4u;
    {
        const bool branch_taken_0x354cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x354cb4) {
            ctx->pc = 0x354CD8u;
            goto label_354cd8;
        }
    }
    ctx->pc = 0x354CBCu;
label_354cbc:
    // 0x354cbc: 0x8e660070  lw          $a2, 0x70($s3)
    ctx->pc = 0x354cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_354cc0:
    // 0x354cc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x354cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_354cc4:
    // 0x354cc4: 0xc0d4f58  jal         func_353D60
label_354cc8:
    if (ctx->pc == 0x354CC8u) {
        ctx->pc = 0x354CC8u;
            // 0x354cc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354CCCu;
        goto label_354ccc;
    }
    ctx->pc = 0x354CC4u;
    SET_GPR_U32(ctx, 31, 0x354CCCu);
    ctx->pc = 0x354CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354CC4u;
            // 0x354cc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353D60u;
    if (runtime->hasFunction(0x353D60u)) {
        auto targetFn = runtime->lookupFunction(0x353D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354CCCu; }
        if (ctx->pc != 0x354CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353D60_0x353d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354CCCu; }
        if (ctx->pc != 0x354CCCu) { return; }
    }
    ctx->pc = 0x354CCCu;
label_354ccc:
    // 0x354ccc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x354cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354cd0:
    // 0x354cd0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x354cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_354cd4:
    // 0x354cd4: 0xae42121c  sw          $v0, 0x121C($s2)
    ctx->pc = 0x354cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4636), GPR_U32(ctx, 2));
label_354cd8:
    // 0x354cd8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x354cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_354cdc:
    // 0x354cdc: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x354cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_354ce0:
    // 0x354ce0: 0x8c424220  lw          $v0, 0x4220($v0)
    ctx->pc = 0x354ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16928)));
label_354ce4:
    // 0x354ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354ce8:
    // 0x354ce8: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x354ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_354cec:
    // 0x354cec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x354cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_354cf0:
    // 0x354cf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x354cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_354cf4:
    // 0x354cf4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x354cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_354cf8:
    // 0x354cf8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_354cfc:
    if (ctx->pc == 0x354CFCu) {
        ctx->pc = 0x354D00u;
        goto label_354d00;
    }
    ctx->pc = 0x354CF8u;
    {
        const bool branch_taken_0x354cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354cf8) {
            ctx->pc = 0x354D44u;
            goto label_354d44;
        }
    }
    ctx->pc = 0x354D00u;
label_354d00:
    // 0x354d00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354d04:
    // 0x354d04: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x354d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_354d08:
    // 0x354d08: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x354d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_354d0c:
    // 0x354d0c: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x354d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_354d10:
    // 0x354d10: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_354d14:
    if (ctx->pc == 0x354D14u) {
        ctx->pc = 0x354D18u;
        goto label_354d18;
    }
    ctx->pc = 0x354D10u;
    {
        const bool branch_taken_0x354d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x354d10) {
            ctx->pc = 0x354D44u;
            goto label_354d44;
        }
    }
    ctx->pc = 0x354D18u;
label_354d18:
    // 0x354d18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x354d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354d1c:
    // 0x354d1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x354d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_354d20:
    // 0x354d20: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x354d20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
label_354d24:
    // 0x354d24: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x354d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_354d28:
    // 0x354d28: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x354d28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_354d2c:
    // 0x354d2c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x354d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_354d30:
    // 0x354d30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x354d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_354d34:
    // 0x354d34: 0xc08bf20  jal         func_22FC80
label_354d38:
    if (ctx->pc == 0x354D38u) {
        ctx->pc = 0x354D38u;
            // 0x354d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354D3Cu;
        goto label_354d3c;
    }
    ctx->pc = 0x354D34u;
    SET_GPR_U32(ctx, 31, 0x354D3Cu);
    ctx->pc = 0x354D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354D34u;
            // 0x354d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354D3Cu; }
        if (ctx->pc != 0x354D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354D3Cu; }
        if (ctx->pc != 0x354D3Cu) { return; }
    }
    ctx->pc = 0x354D3Cu;
label_354d3c:
    // 0x354d3c: 0x10000025  b           . + 4 + (0x25 << 2)
label_354d40:
    if (ctx->pc == 0x354D40u) {
        ctx->pc = 0x354D44u;
        goto label_354d44;
    }
    ctx->pc = 0x354D3Cu;
    {
        const bool branch_taken_0x354d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d3c) {
            ctx->pc = 0x354DD4u;
            goto label_354dd4;
        }
    }
    ctx->pc = 0x354D44u;
label_354d44:
    // 0x354d44: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
label_354d48:
    if (ctx->pc == 0x354D48u) {
        ctx->pc = 0x354D48u;
            // 0x354d48: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->pc = 0x354D4Cu;
        goto label_354d4c;
    }
    ctx->pc = 0x354D44u;
    {
        const bool branch_taken_0x354d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d44) {
            ctx->pc = 0x354D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354D44u;
            // 0x354d48: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354DACu;
            goto label_354dac;
        }
    }
    ctx->pc = 0x354D4Cu;
label_354d4c:
    // 0x354d4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x354d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_354d50:
    // 0x354d50: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
label_354d54:
    if (ctx->pc == 0x354D54u) {
        ctx->pc = 0x354D58u;
        goto label_354d58;
    }
    ctx->pc = 0x354D50u;
    {
        const bool branch_taken_0x354d50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x354d50) {
            ctx->pc = 0x354DA8u;
            goto label_354da8;
        }
    }
    ctx->pc = 0x354D58u;
label_354d58:
    // 0x354d58: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x354d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_354d5c:
    // 0x354d5c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x354d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_354d60:
    // 0x354d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354d64:
    // 0x354d64: 0xae63006c  sw          $v1, 0x6C($s3)
    ctx->pc = 0x354d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 3));
label_354d68:
    // 0x354d68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354d6c:
    // 0x354d6c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x354d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_354d70:
    // 0x354d70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x354d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_354d74:
    // 0x354d74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x354d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_354d78:
    // 0x354d78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354d7c:
    // 0x354d7c: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x354d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
label_354d80:
    // 0x354d80: 0xae64009c  sw          $a0, 0x9C($s3)
    ctx->pc = 0x354d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 4));
label_354d84:
    // 0x354d84: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x354d84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
label_354d88:
    // 0x354d88: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x354d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_354d8c:
    // 0x354d8c: 0x8c423ff0  lw          $v0, 0x3FF0($v0)
    ctx->pc = 0x354d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16368)));
label_354d90:
    // 0x354d90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x354d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_354d94:
    // 0x354d94: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x354d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_354d98:
    // 0x354d98: 0x320f809  jalr        $t9
label_354d9c:
    if (ctx->pc == 0x354D9Cu) {
        ctx->pc = 0x354D9Cu;
            // 0x354d9c: 0x8c4500d8  lw          $a1, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->pc = 0x354DA0u;
        goto label_354da0;
    }
    ctx->pc = 0x354D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354DA0u);
        ctx->pc = 0x354D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354D98u;
            // 0x354d9c: 0x8c4500d8  lw          $a1, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x354DA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354DA0u; }
            if (ctx->pc != 0x354DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x354DA0u;
label_354da0:
    // 0x354da0: 0x1000000c  b           . + 4 + (0xC << 2)
label_354da4:
    if (ctx->pc == 0x354DA4u) {
        ctx->pc = 0x354DA8u;
        goto label_354da8;
    }
    ctx->pc = 0x354DA0u;
    {
        const bool branch_taken_0x354da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354da0) {
            ctx->pc = 0x354DD4u;
            goto label_354dd4;
        }
    }
    ctx->pc = 0x354DA8u;
label_354da8:
    // 0x354da8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x354da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_354dac:
    // 0x354dac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x354dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_354db0:
    // 0x354db0: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x354db0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
label_354db4:
    // 0x354db4: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x354db4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
label_354db8:
    // 0x354db8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x354db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_354dbc:
    // 0x354dbc: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x354dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_354dc0:
    // 0x354dc0: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x354dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_354dc4:
    // 0x354dc4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x354dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_354dc8:
    // 0x354dc8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x354dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_354dcc:
    // 0x354dcc: 0xc08bf20  jal         func_22FC80
label_354dd0:
    if (ctx->pc == 0x354DD0u) {
        ctx->pc = 0x354DD0u;
            // 0x354dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354DD4u;
        goto label_354dd4;
    }
    ctx->pc = 0x354DCCu;
    SET_GPR_U32(ctx, 31, 0x354DD4u);
    ctx->pc = 0x354DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354DCCu;
            // 0x354dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354DD4u; }
        if (ctx->pc != 0x354DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354DD4u; }
        if (ctx->pc != 0x354DD4u) { return; }
    }
    ctx->pc = 0x354DD4u;
label_354dd4:
    // 0x354dd4: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
label_354dd8:
    if (ctx->pc == 0x354DD8u) {
        ctx->pc = 0x354DDCu;
        goto label_354ddc;
    }
    ctx->pc = 0x354DD4u;
    {
        const bool branch_taken_0x354dd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x354dd4) {
            ctx->pc = 0x354EC0u;
            goto label_354ec0;
        }
    }
    ctx->pc = 0x354DDCu;
label_354ddc:
    // 0x354ddc: 0x8e500d60  lw          $s0, 0xD60($s2)
    ctx->pc = 0x354ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_354de0:
    // 0x354de0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x354de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_354de4:
    // 0x354de4: 0x344501a9  ori         $a1, $v0, 0x1A9
    ctx->pc = 0x354de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
label_354de8:
    // 0x354de8: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x354de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_354dec:
    // 0x354dec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x354decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_354df0:
    // 0x354df0: 0x320f809  jalr        $t9
label_354df4:
    if (ctx->pc == 0x354DF4u) {
        ctx->pc = 0x354DF4u;
            // 0x354df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354DF8u;
        goto label_354df8;
    }
    ctx->pc = 0x354DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354DF8u);
        ctx->pc = 0x354DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354DF0u;
            // 0x354df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x354DF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354DF8u; }
            if (ctx->pc != 0x354DF8u) { return; }
        }
        }
    }
    ctx->pc = 0x354DF8u;
label_354df8:
    // 0x354df8: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x354df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_354dfc:
    // 0x354dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354e00:
    // 0x354e00: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x354e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_354e04:
    // 0x354e04: 0x320f809  jalr        $t9
label_354e08:
    if (ctx->pc == 0x354E08u) {
        ctx->pc = 0x354E08u;
            // 0x354e08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x354E0Cu;
        goto label_354e0c;
    }
    ctx->pc = 0x354E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354E0Cu);
        ctx->pc = 0x354E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354E04u;
            // 0x354e08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x354E0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354E0Cu; }
            if (ctx->pc != 0x354E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x354E0Cu;
label_354e0c:
    // 0x354e0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x354e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_354e10:
    // 0x354e10: 0x5223000d  beql        $s1, $v1, . + 4 + (0xD << 2)
label_354e14:
    if (ctx->pc == 0x354E14u) {
        ctx->pc = 0x354E14u;
            // 0x354e14: 0x8e190030  lw          $t9, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x354E18u;
        goto label_354e18;
    }
    ctx->pc = 0x354E10u;
    {
        const bool branch_taken_0x354e10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x354e10) {
            ctx->pc = 0x354E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354E10u;
            // 0x354e14: 0x8e190030  lw          $t9, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354E48u;
            goto label_354e48;
        }
    }
    ctx->pc = 0x354E18u;
label_354e18:
    // 0x354e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354e1c:
    // 0x354e1c: 0x52230003  beql        $s1, $v1, . + 4 + (0x3 << 2)
label_354e20:
    if (ctx->pc == 0x354E20u) {
        ctx->pc = 0x354E20u;
            // 0x354e20: 0x8e190030  lw          $t9, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x354E24u;
        goto label_354e24;
    }
    ctx->pc = 0x354E1Cu;
    {
        const bool branch_taken_0x354e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x354e1c) {
            ctx->pc = 0x354E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354E1Cu;
            // 0x354e20: 0x8e190030  lw          $t9, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354E2Cu;
            goto label_354e2c;
        }
    }
    ctx->pc = 0x354E24u;
label_354e24:
    // 0x354e24: 0x10000026  b           . + 4 + (0x26 << 2)
label_354e28:
    if (ctx->pc == 0x354E28u) {
        ctx->pc = 0x354E2Cu;
        goto label_354e2c;
    }
    ctx->pc = 0x354E24u;
    {
        const bool branch_taken_0x354e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354e24) {
            ctx->pc = 0x354EC0u;
            goto label_354ec0;
        }
    }
    ctx->pc = 0x354E2Cu;
label_354e2c:
    // 0x354e2c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x354e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_354e30:
    // 0x354e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354e34:
    // 0x354e34: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x354e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_354e38:
    // 0x354e38: 0x320f809  jalr        $t9
label_354e3c:
    if (ctx->pc == 0x354E3Cu) {
        ctx->pc = 0x354E3Cu;
            // 0x354e3c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x354E40u;
        goto label_354e40;
    }
    ctx->pc = 0x354E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354E40u);
        ctx->pc = 0x354E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354E38u;
            // 0x354e3c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x354E40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354E40u; }
            if (ctx->pc != 0x354E40u) { return; }
        }
        }
    }
    ctx->pc = 0x354E40u;
label_354e40:
    // 0x354e40: 0x1000001f  b           . + 4 + (0x1F << 2)
label_354e44:
    if (ctx->pc == 0x354E44u) {
        ctx->pc = 0x354E48u;
        goto label_354e48;
    }
    ctx->pc = 0x354E40u;
    {
        const bool branch_taken_0x354e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354e40) {
            ctx->pc = 0x354EC0u;
            goto label_354ec0;
        }
    }
    ctx->pc = 0x354E48u;
label_354e48:
    // 0x354e48: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x354e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
label_354e4c:
    // 0x354e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354e50:
    // 0x354e50: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x354e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_354e54:
    // 0x354e54: 0x320f809  jalr        $t9
label_354e58:
    if (ctx->pc == 0x354E58u) {
        ctx->pc = 0x354E58u;
            // 0x354e58: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x354E5Cu;
        goto label_354e5c;
    }
    ctx->pc = 0x354E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354E5Cu);
        ctx->pc = 0x354E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354E54u;
            // 0x354e58: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x354E5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354E5Cu; }
            if (ctx->pc != 0x354E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x354E5Cu;
label_354e5c:
    // 0x354e5c: 0x10000018  b           . + 4 + (0x18 << 2)
label_354e60:
    if (ctx->pc == 0x354E60u) {
        ctx->pc = 0x354E64u;
        goto label_354e64;
    }
    ctx->pc = 0x354E5Cu;
    {
        const bool branch_taken_0x354e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354e5c) {
            ctx->pc = 0x354EC0u;
            goto label_354ec0;
        }
    }
    ctx->pc = 0x354E64u;
label_354e64:
    // 0x354e64: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x354e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_354e68:
    // 0x354e68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x354e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_354e6c:
    // 0x354e6c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_354e70:
    if (ctx->pc == 0x354E70u) {
        ctx->pc = 0x354E74u;
        goto label_354e74;
    }
    ctx->pc = 0x354E6Cu;
    {
        const bool branch_taken_0x354e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354e6c) {
            ctx->pc = 0x354EC0u;
            goto label_354ec0;
        }
    }
    ctx->pc = 0x354E74u;
label_354e74:
    // 0x354e74: 0x8e450d98  lw          $a1, 0xD98($s2)
    ctx->pc = 0x354e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_354e78:
    // 0x354e78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x354e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354e7c:
    // 0x354e7c: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x354e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_354e80:
    // 0x354e80: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x354e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_354e84:
    // 0x354e84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x354e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_354e88:
    // 0x354e88: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_354e8c:
    if (ctx->pc == 0x354E8Cu) {
        ctx->pc = 0x354E90u;
        goto label_354e90;
    }
    ctx->pc = 0x354E88u;
    {
        const bool branch_taken_0x354e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354e88) {
            ctx->pc = 0x354EC0u;
            goto label_354ec0;
        }
    }
    ctx->pc = 0x354E90u;
label_354e90:
    // 0x354e90: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x354e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_354e94:
    // 0x354e94: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x354e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_354e98:
    // 0x354e98: 0xae620094  sw          $v0, 0x94($s3)
    ctx->pc = 0x354e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 2));
label_354e9c:
    // 0x354e9c: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x354e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_354ea0:
    // 0x354ea0: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x354ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_354ea4:
    // 0x354ea4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x354ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_354ea8:
    // 0x354ea8: 0x320f809  jalr        $t9
label_354eac:
    if (ctx->pc == 0x354EACu) {
        ctx->pc = 0x354EACu;
            // 0x354eac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x354EB0u;
        goto label_354eb0;
    }
    ctx->pc = 0x354EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354EB0u);
        ctx->pc = 0x354EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354EA8u;
            // 0x354eac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x354EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354EB0u; }
            if (ctx->pc != 0x354EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x354EB0u;
label_354eb0:
    // 0x354eb0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x354eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_354eb4:
    // 0x354eb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x354eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_354eb8:
    // 0x354eb8: 0xc078118  jal         func_1E0460
label_354ebc:
    if (ctx->pc == 0x354EBCu) {
        ctx->pc = 0x354EBCu;
            // 0x354ebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354EC0u;
        goto label_354ec0;
    }
    ctx->pc = 0x354EB8u;
    SET_GPR_U32(ctx, 31, 0x354EC0u);
    ctx->pc = 0x354EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354EB8u;
            // 0x354ebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0460u;
    if (runtime->hasFunction(0x1E0460u)) {
        auto targetFn = runtime->lookupFunction(0x1E0460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354EC0u; }
        if (ctx->pc != 0x354EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0460_0x1e0460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354EC0u; }
        if (ctx->pc != 0x354EC0u) { return; }
    }
    ctx->pc = 0x354EC0u;
label_354ec0:
    // 0x354ec0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x354ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_354ec4:
    // 0x354ec4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x354ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_354ec8:
    // 0x354ec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x354ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_354ecc:
    // 0x354ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x354eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_354ed0:
    // 0x354ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x354ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_354ed4:
    // 0x354ed4: 0x3e00008  jr          $ra
label_354ed8:
    if (ctx->pc == 0x354ED8u) {
        ctx->pc = 0x354ED8u;
            // 0x354ed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x354EDCu;
        goto label_354edc;
    }
    ctx->pc = 0x354ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354ED4u;
            // 0x354ed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354EDCu;
label_354edc:
    // 0x354edc: 0x0  nop
    ctx->pc = 0x354edcu;
    // NOP
}
