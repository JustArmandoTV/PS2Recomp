#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5C60
// Address: 0x1f5c60 - 0x1f5de0
void sub_001F5C60_0x1f5c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5C60_0x1f5c60");
#endif

    switch (ctx->pc) {
        case 0x1f5c60u: goto label_1f5c60;
        case 0x1f5c64u: goto label_1f5c64;
        case 0x1f5c68u: goto label_1f5c68;
        case 0x1f5c6cu: goto label_1f5c6c;
        case 0x1f5c70u: goto label_1f5c70;
        case 0x1f5c74u: goto label_1f5c74;
        case 0x1f5c78u: goto label_1f5c78;
        case 0x1f5c7cu: goto label_1f5c7c;
        case 0x1f5c80u: goto label_1f5c80;
        case 0x1f5c84u: goto label_1f5c84;
        case 0x1f5c88u: goto label_1f5c88;
        case 0x1f5c8cu: goto label_1f5c8c;
        case 0x1f5c90u: goto label_1f5c90;
        case 0x1f5c94u: goto label_1f5c94;
        case 0x1f5c98u: goto label_1f5c98;
        case 0x1f5c9cu: goto label_1f5c9c;
        case 0x1f5ca0u: goto label_1f5ca0;
        case 0x1f5ca4u: goto label_1f5ca4;
        case 0x1f5ca8u: goto label_1f5ca8;
        case 0x1f5cacu: goto label_1f5cac;
        case 0x1f5cb0u: goto label_1f5cb0;
        case 0x1f5cb4u: goto label_1f5cb4;
        case 0x1f5cb8u: goto label_1f5cb8;
        case 0x1f5cbcu: goto label_1f5cbc;
        case 0x1f5cc0u: goto label_1f5cc0;
        case 0x1f5cc4u: goto label_1f5cc4;
        case 0x1f5cc8u: goto label_1f5cc8;
        case 0x1f5cccu: goto label_1f5ccc;
        case 0x1f5cd0u: goto label_1f5cd0;
        case 0x1f5cd4u: goto label_1f5cd4;
        case 0x1f5cd8u: goto label_1f5cd8;
        case 0x1f5cdcu: goto label_1f5cdc;
        case 0x1f5ce0u: goto label_1f5ce0;
        case 0x1f5ce4u: goto label_1f5ce4;
        case 0x1f5ce8u: goto label_1f5ce8;
        case 0x1f5cecu: goto label_1f5cec;
        case 0x1f5cf0u: goto label_1f5cf0;
        case 0x1f5cf4u: goto label_1f5cf4;
        case 0x1f5cf8u: goto label_1f5cf8;
        case 0x1f5cfcu: goto label_1f5cfc;
        case 0x1f5d00u: goto label_1f5d00;
        case 0x1f5d04u: goto label_1f5d04;
        case 0x1f5d08u: goto label_1f5d08;
        case 0x1f5d0cu: goto label_1f5d0c;
        case 0x1f5d10u: goto label_1f5d10;
        case 0x1f5d14u: goto label_1f5d14;
        case 0x1f5d18u: goto label_1f5d18;
        case 0x1f5d1cu: goto label_1f5d1c;
        case 0x1f5d20u: goto label_1f5d20;
        case 0x1f5d24u: goto label_1f5d24;
        case 0x1f5d28u: goto label_1f5d28;
        case 0x1f5d2cu: goto label_1f5d2c;
        case 0x1f5d30u: goto label_1f5d30;
        case 0x1f5d34u: goto label_1f5d34;
        case 0x1f5d38u: goto label_1f5d38;
        case 0x1f5d3cu: goto label_1f5d3c;
        case 0x1f5d40u: goto label_1f5d40;
        case 0x1f5d44u: goto label_1f5d44;
        case 0x1f5d48u: goto label_1f5d48;
        case 0x1f5d4cu: goto label_1f5d4c;
        case 0x1f5d50u: goto label_1f5d50;
        case 0x1f5d54u: goto label_1f5d54;
        case 0x1f5d58u: goto label_1f5d58;
        case 0x1f5d5cu: goto label_1f5d5c;
        case 0x1f5d60u: goto label_1f5d60;
        case 0x1f5d64u: goto label_1f5d64;
        case 0x1f5d68u: goto label_1f5d68;
        case 0x1f5d6cu: goto label_1f5d6c;
        case 0x1f5d70u: goto label_1f5d70;
        case 0x1f5d74u: goto label_1f5d74;
        case 0x1f5d78u: goto label_1f5d78;
        case 0x1f5d7cu: goto label_1f5d7c;
        case 0x1f5d80u: goto label_1f5d80;
        case 0x1f5d84u: goto label_1f5d84;
        case 0x1f5d88u: goto label_1f5d88;
        case 0x1f5d8cu: goto label_1f5d8c;
        case 0x1f5d90u: goto label_1f5d90;
        case 0x1f5d94u: goto label_1f5d94;
        case 0x1f5d98u: goto label_1f5d98;
        case 0x1f5d9cu: goto label_1f5d9c;
        case 0x1f5da0u: goto label_1f5da0;
        case 0x1f5da4u: goto label_1f5da4;
        case 0x1f5da8u: goto label_1f5da8;
        case 0x1f5dacu: goto label_1f5dac;
        case 0x1f5db0u: goto label_1f5db0;
        case 0x1f5db4u: goto label_1f5db4;
        case 0x1f5db8u: goto label_1f5db8;
        case 0x1f5dbcu: goto label_1f5dbc;
        case 0x1f5dc0u: goto label_1f5dc0;
        case 0x1f5dc4u: goto label_1f5dc4;
        case 0x1f5dc8u: goto label_1f5dc8;
        case 0x1f5dccu: goto label_1f5dcc;
        case 0x1f5dd0u: goto label_1f5dd0;
        case 0x1f5dd4u: goto label_1f5dd4;
        case 0x1f5dd8u: goto label_1f5dd8;
        case 0x1f5ddcu: goto label_1f5ddc;
        default: break;
    }

    ctx->pc = 0x1f5c60u;

label_1f5c60:
    // 0x1f5c60: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1f5c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_1f5c64:
    // 0x1f5c64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f5c68:
    // 0x1f5c68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f5c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f5c6c:
    // 0x1f5c6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f5c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f5c70:
    // 0x1f5c70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f5c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f5c74:
    // 0x1f5c74: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f5c74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c78:
    // 0x1f5c78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f5c7c:
    // 0x1f5c7c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f5c7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c80:
    // 0x1f5c80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f5c84:
    // 0x1f5c84: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1f5c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c88:
    // 0x1f5c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f5c8c:
    // 0x1f5c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5c90:
    // 0x1f5c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f5c94:
    // 0x1f5c94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c98:
    // 0x1f5c98: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1f5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1f5c9c:
    // 0x1f5c9c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f5c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f5ca0:
    // 0x1f5ca0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ca4:
    // 0x1f5ca4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f5ca8:
    // 0x1f5ca8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f5cac:
    // 0x1f5cac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f5cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f5cb0:
    // 0x1f5cb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f5cb4:
    if (ctx->pc == 0x1F5CB4u) {
        ctx->pc = 0x1F5CB4u;
            // 0x1f5cb4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F5CB8u;
        goto label_1f5cb8;
    }
    ctx->pc = 0x1F5CB0u;
    {
        const bool branch_taken_0x1f5cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5CB0u;
            // 0x1f5cb4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cb0) {
            ctx->pc = 0x1F5CE0u;
            goto label_1f5ce0;
        }
    }
    ctx->pc = 0x1F5CB8u;
label_1f5cb8:
    // 0x1f5cb8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f5cbc:
    // 0x1f5cbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f5cc0:
    // 0x1f5cc0: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x1f5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
label_1f5cc4:
    // 0x1f5cc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f5cc8:
    // 0x1f5cc8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f5ccc:
    // 0x1f5ccc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f5cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f5cd0:
    // 0x1f5cd0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f5cd4:
    // 0x1f5cd4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f5cd8:
    // 0x1f5cd8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f5cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f5cdc:
    // 0x1f5cdc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f5cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f5ce0:
    // 0x1f5ce0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f5ce4:
    // 0x1f5ce4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f5ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5ce8:
    // 0x1f5ce8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f5ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f5cec:
    // 0x1f5cec: 0x320f809  jalr        $t9
label_1f5cf0:
    if (ctx->pc == 0x1F5CF0u) {
        ctx->pc = 0x1F5CF4u;
        goto label_1f5cf4;
    }
    ctx->pc = 0x1F5CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5CF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5CF4u; }
            if (ctx->pc != 0x1F5CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5CF4u;
label_1f5cf4:
    // 0x1f5cf4: 0xafb0028c  sw          $s0, 0x28C($sp)
    ctx->pc = 0x1f5cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 16));
label_1f5cf8:
    // 0x1f5cf8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f5cfc:
    // 0x1f5cfc: 0xafa30288  sw          $v1, 0x288($sp)
    ctx->pc = 0x1f5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 3));
label_1f5d00:
    // 0x1f5d00: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x1f5d00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f5d04:
    // 0x1f5d04: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1f5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f5d08:
    // 0x1f5d08: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1f5d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f5d0c:
    // 0x1f5d0c: 0x6200018  bltz        $s1, . + 4 + (0x18 << 2)
label_1f5d10:
    if (ctx->pc == 0x1F5D10u) {
        ctx->pc = 0x1F5D10u;
            // 0x1f5d10: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D14u;
        goto label_1f5d14;
    }
    ctx->pc = 0x1F5D0Cu;
    {
        const bool branch_taken_0x1f5d0c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F5D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D0Cu;
            // 0x1f5d10: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d0c) {
            ctx->pc = 0x1F5D70u;
            goto label_1f5d70;
        }
    }
    ctx->pc = 0x1F5D14u;
label_1f5d14:
    // 0x1f5d14: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1f5d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f5d18:
    // 0x1f5d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f5d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f5d1c:
    // 0x1f5d1c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1f5d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f5d20:
    // 0x1f5d20: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1f5d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f5d24:
    // 0x1f5d24: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f5d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f5d28:
    // 0x1f5d28: 0x320f809  jalr        $t9
label_1f5d2c:
    if (ctx->pc == 0x1F5D2Cu) {
        ctx->pc = 0x1F5D2Cu;
            // 0x1f5d2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D30u;
        goto label_1f5d30;
    }
    ctx->pc = 0x1F5D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5D30u);
        ctx->pc = 0x1F5D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D28u;
            // 0x1f5d2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5D30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D30u; }
            if (ctx->pc != 0x1F5D30u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5D30u;
label_1f5d30:
    // 0x1f5d30: 0xafb00284  sw          $s0, 0x284($sp)
    ctx->pc = 0x1f5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 16));
label_1f5d34:
    // 0x1f5d34: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x1f5d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1f5d38:
    // 0x1f5d38: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x1f5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_1f5d3c:
    // 0x1f5d3c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f5d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f5d40:
    // 0x1f5d40: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1f5d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f5d44:
    // 0x1f5d44: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f5d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f5d48:
    // 0x1f5d48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f5d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5d4c:
    // 0x1f5d4c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f5d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f5d50:
    // 0x1f5d50: 0x320f809  jalr        $t9
label_1f5d54:
    if (ctx->pc == 0x1F5D54u) {
        ctx->pc = 0x1F5D54u;
            // 0x1f5d54: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D58u;
        goto label_1f5d58;
    }
    ctx->pc = 0x1F5D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5D58u);
        ctx->pc = 0x1F5D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D50u;
            // 0x1f5d54: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5D58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D58u; }
            if (ctx->pc != 0x1F5D58u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5D58u;
label_1f5d58:
    // 0x1f5d58: 0x82830004  lb          $v1, 0x4($s4)
    ctx->pc = 0x1f5d58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_1f5d5c:
    // 0x1f5d5c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1f5d60:
    if (ctx->pc == 0x1F5D60u) {
        ctx->pc = 0x1F5D64u;
        goto label_1f5d64;
    }
    ctx->pc = 0x1F5D5Cu;
    {
        const bool branch_taken_0x1f5d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d5c) {
            ctx->pc = 0x1F5D70u;
            goto label_1f5d70;
        }
    }
    ctx->pc = 0x1F5D64u;
label_1f5d64:
    // 0x1f5d64: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f5d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f5d68:
    // 0x1f5d68: 0x621ffea  bgez        $s1, . + 4 + (-0x16 << 2)
label_1f5d6c:
    if (ctx->pc == 0x1F5D6Cu) {
        ctx->pc = 0x1F5D6Cu;
            // 0x1f5d6c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x1F5D70u;
        goto label_1f5d70;
    }
    ctx->pc = 0x1F5D68u;
    {
        const bool branch_taken_0x1f5d68 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1F5D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D68u;
            // 0x1f5d6c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d68) {
            ctx->pc = 0x1F5D14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5d14;
        }
    }
    ctx->pc = 0x1F5D70u;
label_1f5d70:
    // 0x1f5d70: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f5d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f5d74:
    // 0x1f5d74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f5d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f5d78:
    // 0x1f5d78: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1f5d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1f5d7c:
    // 0x1f5d7c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f5d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f5d80:
    // 0x1f5d80: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f5d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f5d84:
    // 0x1f5d84: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f5d84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f5d88:
    // 0x1f5d88: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f5d8c:
    if (ctx->pc == 0x1F5D8Cu) {
        ctx->pc = 0x1F5D8Cu;
            // 0x1f5d8c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F5D90u;
        goto label_1f5d90;
    }
    ctx->pc = 0x1F5D88u;
    {
        const bool branch_taken_0x1f5d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D88u;
            // 0x1f5d8c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d88) {
            ctx->pc = 0x1F5DB8u;
            goto label_1f5db8;
        }
    }
    ctx->pc = 0x1F5D90u;
label_1f5d90:
    // 0x1f5d90: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f5d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f5d94:
    // 0x1f5d94: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f5d98:
    // 0x1f5d98: 0x2463af88  addiu       $v1, $v1, -0x5078
    ctx->pc = 0x1f5d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946696));
label_1f5d9c:
    // 0x1f5d9c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f5d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f5da0:
    // 0x1f5da0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f5da4:
    // 0x1f5da4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f5da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f5da8:
    // 0x1f5da8: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f5dac:
    // 0x1f5dac: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f5db0:
    // 0x1f5db0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f5db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f5db4:
    // 0x1f5db4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f5db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f5db8:
    // 0x1f5db8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f5db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5dbc:
    // 0x1f5dbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f5dbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5dc0:
    // 0x1f5dc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f5dc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f5dc4:
    // 0x1f5dc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f5dc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5dc8:
    // 0x1f5dc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5dc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5dcc:
    // 0x1f5dcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5dd0:
    // 0x1f5dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5dd4:
    // 0x1f5dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5dd8:
    // 0x1f5dd8: 0x3e00008  jr          $ra
label_1f5ddc:
    if (ctx->pc == 0x1F5DDCu) {
        ctx->pc = 0x1F5DDCu;
            // 0x1f5ddc: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1F5DE0u;
        goto label_fallthrough_0x1f5dd8;
    }
    ctx->pc = 0x1F5DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5DD8u;
            // 0x1f5ddc: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f5dd8:
    ctx->pc = 0x1F5DE0u;
}
