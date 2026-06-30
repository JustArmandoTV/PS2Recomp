#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1E30
// Address: 0x1d1e30 - 0x1d1f40
void sub_001D1E30_0x1d1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1E30_0x1d1e30");
#endif

    switch (ctx->pc) {
        case 0x1d1e30u: goto label_1d1e30;
        case 0x1d1e34u: goto label_1d1e34;
        case 0x1d1e38u: goto label_1d1e38;
        case 0x1d1e3cu: goto label_1d1e3c;
        case 0x1d1e40u: goto label_1d1e40;
        case 0x1d1e44u: goto label_1d1e44;
        case 0x1d1e48u: goto label_1d1e48;
        case 0x1d1e4cu: goto label_1d1e4c;
        case 0x1d1e50u: goto label_1d1e50;
        case 0x1d1e54u: goto label_1d1e54;
        case 0x1d1e58u: goto label_1d1e58;
        case 0x1d1e5cu: goto label_1d1e5c;
        case 0x1d1e60u: goto label_1d1e60;
        case 0x1d1e64u: goto label_1d1e64;
        case 0x1d1e68u: goto label_1d1e68;
        case 0x1d1e6cu: goto label_1d1e6c;
        case 0x1d1e70u: goto label_1d1e70;
        case 0x1d1e74u: goto label_1d1e74;
        case 0x1d1e78u: goto label_1d1e78;
        case 0x1d1e7cu: goto label_1d1e7c;
        case 0x1d1e80u: goto label_1d1e80;
        case 0x1d1e84u: goto label_1d1e84;
        case 0x1d1e88u: goto label_1d1e88;
        case 0x1d1e8cu: goto label_1d1e8c;
        case 0x1d1e90u: goto label_1d1e90;
        case 0x1d1e94u: goto label_1d1e94;
        case 0x1d1e98u: goto label_1d1e98;
        case 0x1d1e9cu: goto label_1d1e9c;
        case 0x1d1ea0u: goto label_1d1ea0;
        case 0x1d1ea4u: goto label_1d1ea4;
        case 0x1d1ea8u: goto label_1d1ea8;
        case 0x1d1eacu: goto label_1d1eac;
        case 0x1d1eb0u: goto label_1d1eb0;
        case 0x1d1eb4u: goto label_1d1eb4;
        case 0x1d1eb8u: goto label_1d1eb8;
        case 0x1d1ebcu: goto label_1d1ebc;
        case 0x1d1ec0u: goto label_1d1ec0;
        case 0x1d1ec4u: goto label_1d1ec4;
        case 0x1d1ec8u: goto label_1d1ec8;
        case 0x1d1eccu: goto label_1d1ecc;
        case 0x1d1ed0u: goto label_1d1ed0;
        case 0x1d1ed4u: goto label_1d1ed4;
        case 0x1d1ed8u: goto label_1d1ed8;
        case 0x1d1edcu: goto label_1d1edc;
        case 0x1d1ee0u: goto label_1d1ee0;
        case 0x1d1ee4u: goto label_1d1ee4;
        case 0x1d1ee8u: goto label_1d1ee8;
        case 0x1d1eecu: goto label_1d1eec;
        case 0x1d1ef0u: goto label_1d1ef0;
        case 0x1d1ef4u: goto label_1d1ef4;
        case 0x1d1ef8u: goto label_1d1ef8;
        case 0x1d1efcu: goto label_1d1efc;
        case 0x1d1f00u: goto label_1d1f00;
        case 0x1d1f04u: goto label_1d1f04;
        case 0x1d1f08u: goto label_1d1f08;
        case 0x1d1f0cu: goto label_1d1f0c;
        case 0x1d1f10u: goto label_1d1f10;
        case 0x1d1f14u: goto label_1d1f14;
        case 0x1d1f18u: goto label_1d1f18;
        case 0x1d1f1cu: goto label_1d1f1c;
        case 0x1d1f20u: goto label_1d1f20;
        case 0x1d1f24u: goto label_1d1f24;
        case 0x1d1f28u: goto label_1d1f28;
        case 0x1d1f2cu: goto label_1d1f2c;
        case 0x1d1f30u: goto label_1d1f30;
        case 0x1d1f34u: goto label_1d1f34;
        case 0x1d1f38u: goto label_1d1f38;
        case 0x1d1f3cu: goto label_1d1f3c;
        default: break;
    }

    ctx->pc = 0x1d1e30u;

label_1d1e30:
    // 0x1d1e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d1e34:
    // 0x1d1e34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1d1e38:
    // 0x1d1e38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d1e3c:
    // 0x1d1e3c: 0x2463cdb0  addiu       $v1, $v1, -0x3250
    ctx->pc = 0x1d1e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954416));
label_1d1e40:
    // 0x1d1e40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d1e44:
    // 0x1d1e44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d1e48:
    // 0x1d1e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d1e4c:
    // 0x1d1e4c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1d1e50:
    // 0x1d1e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e54:
    // 0x1d1e54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1d1e58:
    // 0x1d1e58: 0xac50a2e0  sw          $s0, -0x5D20($v0)
    ctx->pc = 0x1d1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943456), GPR_U32(ctx, 16));
label_1d1e5c:
    // 0x1d1e5c: 0x2463cda0  addiu       $v1, $v1, -0x3260
    ctx->pc = 0x1d1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954400));
label_1d1e60:
    // 0x1d1e60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d1e64:
    // 0x1d1e64: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d1e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1d1e68:
    // 0x1d1e68: 0x8c4489f8  lw          $a0, -0x7608($v0)
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937080)));
label_1d1e6c:
    // 0x1d1e6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d1e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1e70:
    // 0x1d1e70: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1d1e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1d1e74:
    // 0x1d1e74: 0x320f809  jalr        $t9
label_1d1e78:
    if (ctx->pc == 0x1D1E78u) {
        ctx->pc = 0x1D1E7Cu;
        goto label_1d1e7c;
    }
    ctx->pc = 0x1D1E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D1E7Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1E7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E7Cu; }
            if (ctx->pc != 0x1D1E7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D1E7Cu;
label_1d1e7c:
    // 0x1d1e7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e80:
    // 0x1d1e80: 0xc04ab60  jal         func_12AD80
label_1d1e84:
    if (ctx->pc == 0x1D1E84u) {
        ctx->pc = 0x1D1E84u;
            // 0x1d1e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E88u;
        goto label_1d1e88;
    }
    ctx->pc = 0x1D1E80u;
    SET_GPR_U32(ctx, 31, 0x1D1E88u);
    ctx->pc = 0x1D1E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E80u;
            // 0x1d1e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD80u;
    if (runtime->hasFunction(0x12AD80u)) {
        auto targetFn = runtime->lookupFunction(0x12AD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E88u; }
        if (ctx->pc != 0x1D1E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD80_0x12ad80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E88u; }
        if (ctx->pc != 0x1D1E88u) { return; }
    }
    ctx->pc = 0x1D1E88u;
label_1d1e88:
    // 0x1d1e88: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1d1e8c:
    // 0x1d1e8c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1d1e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_1d1e90:
    // 0x1d1e90: 0xc04b02e  jal         func_12C0B8
label_1d1e94:
    if (ctx->pc == 0x1D1E94u) {
        ctx->pc = 0x1D1E94u;
            // 0x1d1e94: 0x2484c4a8  addiu       $a0, $a0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
        ctx->pc = 0x1D1E98u;
        goto label_1d1e98;
    }
    ctx->pc = 0x1D1E90u;
    SET_GPR_U32(ctx, 31, 0x1D1E98u);
    ctx->pc = 0x1D1E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E90u;
            // 0x1d1e94: 0x2484c4a8  addiu       $a0, $a0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E98u; }
        if (ctx->pc != 0x1D1E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E98u; }
        if (ctx->pc != 0x1D1E98u) { return; }
    }
    ctx->pc = 0x1D1E98u;
label_1d1e98:
    // 0x1d1e98: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d1e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1d1e9c:
    // 0x1d1e9c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1d1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1d1ea0:
    // 0x1d1ea0: 0x2484c4a8  addiu       $a0, $a0, -0x3B58
    ctx->pc = 0x1d1ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
label_1d1ea4:
    // 0x1d1ea4: 0x8c66c4a8  lw          $a2, -0x3B58($v1)
    ctx->pc = 0x1d1ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952104)));
label_1d1ea8:
    // 0x1d1ea8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d1eac:
    // 0x1d1eac: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x1d1eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_1d1eb0:
    // 0x1d1eb0: 0x24040e87  addiu       $a0, $zero, 0xE87
    ctx->pc = 0x1d1eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3719));
label_1d1eb4:
    // 0x1d1eb4: 0x24030743  addiu       $v1, $zero, 0x743
    ctx->pc = 0x1d1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1859));
label_1d1eb8:
    // 0x1d1eb8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1d1eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1d1ebc:
    // 0x1d1ebc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ec0:
    // 0x1d1ec0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1d1ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_1d1ec4:
    // 0x1d1ec4: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1d1ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_1d1ec8:
    // 0x1d1ec8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1d1ecc:
    // 0x1d1ecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1ed0:
    // 0x1d1ed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1ed4:
    // 0x1d1ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1ed8:
    // 0x1d1ed8: 0x3e00008  jr          $ra
label_1d1edc:
    if (ctx->pc == 0x1D1EDCu) {
        ctx->pc = 0x1D1EDCu;
            // 0x1d1edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D1EE0u;
        goto label_1d1ee0;
    }
    ctx->pc = 0x1D1ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1ED8u;
            // 0x1d1edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1EE0u;
label_1d1ee0:
    // 0x1d1ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d1ee4:
    // 0x1d1ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d1ee8:
    // 0x1d1ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d1eec:
    // 0x1d1eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ef0:
    // 0x1d1ef0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_1d1ef4:
    if (ctx->pc == 0x1D1EF4u) {
        ctx->pc = 0x1D1EF4u;
            // 0x1d1ef4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EF8u;
        goto label_1d1ef8;
    }
    ctx->pc = 0x1D1EF0u;
    {
        const bool branch_taken_0x1d1ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ef0) {
            ctx->pc = 0x1D1EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EF0u;
            // 0x1d1ef4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1F24u;
            goto label_1d1f24;
        }
    }
    ctx->pc = 0x1D1EF8u;
label_1d1ef8:
    // 0x1d1ef8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d1efc:
    // 0x1d1efc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1d1efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_1d1f00:
    // 0x1d1f00: 0x2442cdb0  addiu       $v0, $v0, -0x3250
    ctx->pc = 0x1d1f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954416));
label_1d1f04:
    // 0x1d1f04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d1f04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1d1f08:
    // 0x1d1f08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d1f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1d1f0c:
    // 0x1d1f0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d1f10:
    // 0x1d1f10: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1d1f14:
    if (ctx->pc == 0x1D1F14u) {
        ctx->pc = 0x1D1F14u;
            // 0x1d1f14: 0xac40a2e0  sw          $zero, -0x5D20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943456), GPR_U32(ctx, 0));
        ctx->pc = 0x1D1F18u;
        goto label_1d1f18;
    }
    ctx->pc = 0x1D1F10u;
    {
        const bool branch_taken_0x1d1f10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D1F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F10u;
            // 0x1d1f14: 0xac40a2e0  sw          $zero, -0x5D20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f10) {
            ctx->pc = 0x1D1F20u;
            goto label_1d1f20;
        }
    }
    ctx->pc = 0x1D1F18u;
label_1d1f18:
    // 0x1d1f18: 0xc0400a8  jal         func_1002A0
label_1d1f1c:
    if (ctx->pc == 0x1D1F1Cu) {
        ctx->pc = 0x1D1F20u;
        goto label_1d1f20;
    }
    ctx->pc = 0x1D1F18u;
    SET_GPR_U32(ctx, 31, 0x1D1F20u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F20u; }
        if (ctx->pc != 0x1D1F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F20u; }
        if (ctx->pc != 0x1D1F20u) { return; }
    }
    ctx->pc = 0x1D1F20u;
label_1d1f20:
    // 0x1d1f20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f24:
    // 0x1d1f24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1f28:
    // 0x1d1f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1f2c:
    // 0x1d1f2c: 0x3e00008  jr          $ra
label_1d1f30:
    if (ctx->pc == 0x1D1F30u) {
        ctx->pc = 0x1D1F30u;
            // 0x1d1f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D1F34u;
        goto label_1d1f34;
    }
    ctx->pc = 0x1D1F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F2Cu;
            // 0x1d1f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1F34u;
label_1d1f34:
    // 0x1d1f34: 0x0  nop
    ctx->pc = 0x1d1f34u;
    // NOP
label_1d1f38:
    // 0x1d1f38: 0x0  nop
    ctx->pc = 0x1d1f38u;
    // NOP
label_1d1f3c:
    // 0x1d1f3c: 0x0  nop
    ctx->pc = 0x1d1f3cu;
    // NOP
}
