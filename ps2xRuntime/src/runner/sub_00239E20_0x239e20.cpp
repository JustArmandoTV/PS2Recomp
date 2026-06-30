#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239E20
// Address: 0x239e20 - 0x23a090
void sub_00239E20_0x239e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239E20_0x239e20");
#endif

    switch (ctx->pc) {
        case 0x239e20u: goto label_239e20;
        case 0x239e24u: goto label_239e24;
        case 0x239e28u: goto label_239e28;
        case 0x239e2cu: goto label_239e2c;
        case 0x239e30u: goto label_239e30;
        case 0x239e34u: goto label_239e34;
        case 0x239e38u: goto label_239e38;
        case 0x239e3cu: goto label_239e3c;
        case 0x239e40u: goto label_239e40;
        case 0x239e44u: goto label_239e44;
        case 0x239e48u: goto label_239e48;
        case 0x239e4cu: goto label_239e4c;
        case 0x239e50u: goto label_239e50;
        case 0x239e54u: goto label_239e54;
        case 0x239e58u: goto label_239e58;
        case 0x239e5cu: goto label_239e5c;
        case 0x239e60u: goto label_239e60;
        case 0x239e64u: goto label_239e64;
        case 0x239e68u: goto label_239e68;
        case 0x239e6cu: goto label_239e6c;
        case 0x239e70u: goto label_239e70;
        case 0x239e74u: goto label_239e74;
        case 0x239e78u: goto label_239e78;
        case 0x239e7cu: goto label_239e7c;
        case 0x239e80u: goto label_239e80;
        case 0x239e84u: goto label_239e84;
        case 0x239e88u: goto label_239e88;
        case 0x239e8cu: goto label_239e8c;
        case 0x239e90u: goto label_239e90;
        case 0x239e94u: goto label_239e94;
        case 0x239e98u: goto label_239e98;
        case 0x239e9cu: goto label_239e9c;
        case 0x239ea0u: goto label_239ea0;
        case 0x239ea4u: goto label_239ea4;
        case 0x239ea8u: goto label_239ea8;
        case 0x239eacu: goto label_239eac;
        case 0x239eb0u: goto label_239eb0;
        case 0x239eb4u: goto label_239eb4;
        case 0x239eb8u: goto label_239eb8;
        case 0x239ebcu: goto label_239ebc;
        case 0x239ec0u: goto label_239ec0;
        case 0x239ec4u: goto label_239ec4;
        case 0x239ec8u: goto label_239ec8;
        case 0x239eccu: goto label_239ecc;
        case 0x239ed0u: goto label_239ed0;
        case 0x239ed4u: goto label_239ed4;
        case 0x239ed8u: goto label_239ed8;
        case 0x239edcu: goto label_239edc;
        case 0x239ee0u: goto label_239ee0;
        case 0x239ee4u: goto label_239ee4;
        case 0x239ee8u: goto label_239ee8;
        case 0x239eecu: goto label_239eec;
        case 0x239ef0u: goto label_239ef0;
        case 0x239ef4u: goto label_239ef4;
        case 0x239ef8u: goto label_239ef8;
        case 0x239efcu: goto label_239efc;
        case 0x239f00u: goto label_239f00;
        case 0x239f04u: goto label_239f04;
        case 0x239f08u: goto label_239f08;
        case 0x239f0cu: goto label_239f0c;
        case 0x239f10u: goto label_239f10;
        case 0x239f14u: goto label_239f14;
        case 0x239f18u: goto label_239f18;
        case 0x239f1cu: goto label_239f1c;
        case 0x239f20u: goto label_239f20;
        case 0x239f24u: goto label_239f24;
        case 0x239f28u: goto label_239f28;
        case 0x239f2cu: goto label_239f2c;
        case 0x239f30u: goto label_239f30;
        case 0x239f34u: goto label_239f34;
        case 0x239f38u: goto label_239f38;
        case 0x239f3cu: goto label_239f3c;
        case 0x239f40u: goto label_239f40;
        case 0x239f44u: goto label_239f44;
        case 0x239f48u: goto label_239f48;
        case 0x239f4cu: goto label_239f4c;
        case 0x239f50u: goto label_239f50;
        case 0x239f54u: goto label_239f54;
        case 0x239f58u: goto label_239f58;
        case 0x239f5cu: goto label_239f5c;
        case 0x239f60u: goto label_239f60;
        case 0x239f64u: goto label_239f64;
        case 0x239f68u: goto label_239f68;
        case 0x239f6cu: goto label_239f6c;
        case 0x239f70u: goto label_239f70;
        case 0x239f74u: goto label_239f74;
        case 0x239f78u: goto label_239f78;
        case 0x239f7cu: goto label_239f7c;
        case 0x239f80u: goto label_239f80;
        case 0x239f84u: goto label_239f84;
        case 0x239f88u: goto label_239f88;
        case 0x239f8cu: goto label_239f8c;
        case 0x239f90u: goto label_239f90;
        case 0x239f94u: goto label_239f94;
        case 0x239f98u: goto label_239f98;
        case 0x239f9cu: goto label_239f9c;
        case 0x239fa0u: goto label_239fa0;
        case 0x239fa4u: goto label_239fa4;
        case 0x239fa8u: goto label_239fa8;
        case 0x239facu: goto label_239fac;
        case 0x239fb0u: goto label_239fb0;
        case 0x239fb4u: goto label_239fb4;
        case 0x239fb8u: goto label_239fb8;
        case 0x239fbcu: goto label_239fbc;
        case 0x239fc0u: goto label_239fc0;
        case 0x239fc4u: goto label_239fc4;
        case 0x239fc8u: goto label_239fc8;
        case 0x239fccu: goto label_239fcc;
        case 0x239fd0u: goto label_239fd0;
        case 0x239fd4u: goto label_239fd4;
        case 0x239fd8u: goto label_239fd8;
        case 0x239fdcu: goto label_239fdc;
        case 0x239fe0u: goto label_239fe0;
        case 0x239fe4u: goto label_239fe4;
        case 0x239fe8u: goto label_239fe8;
        case 0x239fecu: goto label_239fec;
        case 0x239ff0u: goto label_239ff0;
        case 0x239ff4u: goto label_239ff4;
        case 0x239ff8u: goto label_239ff8;
        case 0x239ffcu: goto label_239ffc;
        case 0x23a000u: goto label_23a000;
        case 0x23a004u: goto label_23a004;
        case 0x23a008u: goto label_23a008;
        case 0x23a00cu: goto label_23a00c;
        case 0x23a010u: goto label_23a010;
        case 0x23a014u: goto label_23a014;
        case 0x23a018u: goto label_23a018;
        case 0x23a01cu: goto label_23a01c;
        case 0x23a020u: goto label_23a020;
        case 0x23a024u: goto label_23a024;
        case 0x23a028u: goto label_23a028;
        case 0x23a02cu: goto label_23a02c;
        case 0x23a030u: goto label_23a030;
        case 0x23a034u: goto label_23a034;
        case 0x23a038u: goto label_23a038;
        case 0x23a03cu: goto label_23a03c;
        case 0x23a040u: goto label_23a040;
        case 0x23a044u: goto label_23a044;
        case 0x23a048u: goto label_23a048;
        case 0x23a04cu: goto label_23a04c;
        case 0x23a050u: goto label_23a050;
        case 0x23a054u: goto label_23a054;
        case 0x23a058u: goto label_23a058;
        case 0x23a05cu: goto label_23a05c;
        case 0x23a060u: goto label_23a060;
        case 0x23a064u: goto label_23a064;
        case 0x23a068u: goto label_23a068;
        case 0x23a06cu: goto label_23a06c;
        case 0x23a070u: goto label_23a070;
        case 0x23a074u: goto label_23a074;
        case 0x23a078u: goto label_23a078;
        case 0x23a07cu: goto label_23a07c;
        case 0x23a080u: goto label_23a080;
        case 0x23a084u: goto label_23a084;
        case 0x23a088u: goto label_23a088;
        case 0x23a08cu: goto label_23a08c;
        default: break;
    }

    ctx->pc = 0x239e20u;

label_239e20:
    // 0x239e20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x239e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_239e24:
    // 0x239e24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x239e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_239e28:
    // 0x239e28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x239e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_239e2c:
    // 0x239e2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x239e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_239e30:
    // 0x239e30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x239e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_239e34:
    // 0x239e34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_239e38:
    // 0x239e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_239e3c:
    // 0x239e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_239e40:
    // 0x239e40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_239e44:
    // 0x239e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239e48:
    // 0x239e48: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x239e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_239e4c:
    // 0x239e4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x239e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239e50:
    // 0x239e50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x239e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_239e54:
    // 0x239e54: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x239e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_239e58:
    // 0x239e58: 0x8c830138  lw          $v1, 0x138($a0)
    ctx->pc = 0x239e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
label_239e5c:
    // 0x239e5c: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x239e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239e60:
    // 0x239e60: 0x660000f  bltz        $s3, . + 4 + (0xF << 2)
label_239e64:
    if (ctx->pc == 0x239E64u) {
        ctx->pc = 0x239E64u;
            // 0x239e64: 0x26340134  addiu       $s4, $s1, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
        ctx->pc = 0x239E68u;
        goto label_239e68;
    }
    ctx->pc = 0x239E60u;
    {
        const bool branch_taken_0x239e60 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x239E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E60u;
            // 0x239e64: 0x26340134  addiu       $s4, $s1, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e60) {
            ctx->pc = 0x239EA0u;
            goto label_239ea0;
        }
    }
    ctx->pc = 0x239E68u;
label_239e68:
    // 0x239e68: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x239e68u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_239e6c:
    // 0x239e6c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x239e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239e70:
    // 0x239e70: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x239e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_239e74:
    // 0x239e74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239e78:
    // 0x239e78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_239e7c:
    if (ctx->pc == 0x239E7Cu) {
        ctx->pc = 0x239E80u;
        goto label_239e80;
    }
    ctx->pc = 0x239E78u;
    {
        const bool branch_taken_0x239e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239e78) {
            ctx->pc = 0x239E90u;
            goto label_239e90;
        }
    }
    ctx->pc = 0x239E80u;
label_239e80:
    // 0x239e80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239e84:
    // 0x239e84: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x239e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_239e88:
    // 0x239e88: 0x320f809  jalr        $t9
label_239e8c:
    if (ctx->pc == 0x239E8Cu) {
        ctx->pc = 0x239E8Cu;
            // 0x239e8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239E90u;
        goto label_239e90;
    }
    ctx->pc = 0x239E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239E90u);
        ctx->pc = 0x239E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E88u;
            // 0x239e8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239E90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239E90u; }
            if (ctx->pc != 0x239E90u) { return; }
        }
        }
    }
    ctx->pc = 0x239E90u;
label_239e90:
    // 0x239e90: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x239e90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_239e94:
    // 0x239e94: 0x661fff5  bgez        $s3, . + 4 + (-0xB << 2)
label_239e98:
    if (ctx->pc == 0x239E98u) {
        ctx->pc = 0x239E98u;
            // 0x239e98: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x239E9Cu;
        goto label_239e9c;
    }
    ctx->pc = 0x239E94u;
    {
        const bool branch_taken_0x239e94 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x239E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E94u;
            // 0x239e98: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e94) {
            ctx->pc = 0x239E6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239e6c;
        }
    }
    ctx->pc = 0x239E9Cu;
label_239e9c:
    // 0x239e9c: 0x0  nop
    ctx->pc = 0x239e9cu;
    // NOP
label_239ea0:
    // 0x239ea0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x239ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_239ea4:
    // 0x239ea4: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x239ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239ea8:
    // 0x239ea8: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_239eac:
    if (ctx->pc == 0x239EACu) {
        ctx->pc = 0x239EB0u;
        goto label_239eb0;
    }
    ctx->pc = 0x239EA8u;
    {
        const bool branch_taken_0x239ea8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239ea8) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EB0u;
label_239eb0:
    // 0x239eb0: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239eb4:
    // 0x239eb4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x239eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239eb8:
    // 0x239eb8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239ebc:
    // 0x239ebc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239ec0:
    // 0x239ec0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_239ec4:
    if (ctx->pc == 0x239EC4u) {
        ctx->pc = 0x239EC8u;
        goto label_239ec8;
    }
    ctx->pc = 0x239EC0u;
    {
        const bool branch_taken_0x239ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239ec0) {
            ctx->pc = 0x239F10u;
            goto label_239f10;
        }
    }
    ctx->pc = 0x239EC8u;
label_239ec8:
    // 0x239ec8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x239ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_239ecc:
    // 0x239ecc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239ed0:
    // 0x239ed0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239ed4:
    // 0x239ed4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x239ed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239ed8:
    // 0x239ed8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239edc:
    if (ctx->pc == 0x239EDCu) {
        ctx->pc = 0x239EDCu;
            // 0x239edc: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239EE0u;
        goto label_239ee0;
    }
    ctx->pc = 0x239ED8u;
    {
        const bool branch_taken_0x239ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239ED8u;
            // 0x239edc: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ed8) {
            ctx->pc = 0x239F10u;
            goto label_239f10;
        }
    }
    ctx->pc = 0x239EE0u;
label_239ee0:
    // 0x239ee0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239ee4:
    // 0x239ee4: 0x0  nop
    ctx->pc = 0x239ee4u;
    // NOP
label_239ee8:
    // 0x239ee8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x239ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239eec:
    // 0x239eec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239ef0:
    // 0x239ef0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_239ef4:
    // 0x239ef4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239ef8:
    // 0x239ef8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239efc:
    // 0x239efc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x239efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_239f00:
    // 0x239f00: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239f00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239f04:
    // 0x239f04: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239f08:
    if (ctx->pc == 0x239F08u) {
        ctx->pc = 0x239F08u;
            // 0x239f08: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239F0Cu;
        goto label_239f0c;
    }
    ctx->pc = 0x239F04u;
    {
        const bool branch_taken_0x239f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239F04u;
            // 0x239f08: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f04) {
            ctx->pc = 0x239EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239ee8;
        }
    }
    ctx->pc = 0x239F0Cu;
label_239f0c:
    // 0x239f0c: 0x0  nop
    ctx->pc = 0x239f0cu;
    // NOP
label_239f10:
    // 0x239f10: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_239f14:
    // 0x239f14: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239f18:
    if (ctx->pc == 0x239F18u) {
        ctx->pc = 0x239F18u;
            // 0x239f18: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239F1Cu;
        goto label_239f1c;
    }
    ctx->pc = 0x239F14u;
    {
        const bool branch_taken_0x239f14 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239F14u;
            // 0x239f18: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f14) {
            ctx->pc = 0x239EB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239eb4;
        }
    }
    ctx->pc = 0x239F1Cu;
label_239f1c:
    // 0x239f1c: 0x0  nop
    ctx->pc = 0x239f1cu;
    // NOP
label_239f20:
    // 0x239f20: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x239f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_239f24:
    // 0x239f24: 0x18600044  blez        $v1, . + 4 + (0x44 << 2)
label_239f28:
    if (ctx->pc == 0x239F28u) {
        ctx->pc = 0x239F28u;
            // 0x239f28: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239F2Cu;
        goto label_239f2c;
    }
    ctx->pc = 0x239F24u;
    {
        const bool branch_taken_0x239f24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x239F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239F24u;
            // 0x239f28: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f24) {
            ctx->pc = 0x23A038u;
            goto label_23a038;
        }
    }
    ctx->pc = 0x239F2Cu;
label_239f2c:
    // 0x239f2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x239f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239f30:
    // 0x239f30: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x239f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_239f34:
    // 0x239f34: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x239f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_239f38:
    // 0x239f38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239f3c:
    // 0x239f3c: 0x247501d8  addiu       $s5, $v1, 0x1D8
    ctx->pc = 0x239f3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 472));
label_239f40:
    // 0x239f40: 0x946301dc  lhu         $v1, 0x1DC($v1)
    ctx->pc = 0x239f40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 476)));
label_239f44:
    // 0x239f44: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x239f44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239f48:
    // 0x239f48: 0x6800013  bltz        $s4, . + 4 + (0x13 << 2)
label_239f4c:
    if (ctx->pc == 0x239F4Cu) {
        ctx->pc = 0x239F50u;
        goto label_239f50;
    }
    ctx->pc = 0x239F48u;
    {
        const bool branch_taken_0x239f48 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x239f48) {
            ctx->pc = 0x239F98u;
            goto label_239f98;
        }
    }
    ctx->pc = 0x239F50u;
label_239f50:
    // 0x239f50: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x239f50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_239f54:
    // 0x239f54: 0x0  nop
    ctx->pc = 0x239f54u;
    // NOP
label_239f58:
    // 0x239f58: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x239f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_239f5c:
    // 0x239f5c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x239f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_239f60:
    // 0x239f60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239f64:
    // 0x239f64: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_239f68:
    if (ctx->pc == 0x239F68u) {
        ctx->pc = 0x239F6Cu;
        goto label_239f6c;
    }
    ctx->pc = 0x239F64u;
    {
        const bool branch_taken_0x239f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f64) {
            ctx->pc = 0x239F88u;
            goto label_239f88;
        }
    }
    ctx->pc = 0x239F6Cu;
label_239f6c:
    // 0x239f6c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x239f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_239f70:
    // 0x239f70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239f74:
    // 0x239f74: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x239f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_239f78:
    // 0x239f78: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x239f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_239f7c:
    // 0x239f7c: 0x320f809  jalr        $t9
label_239f80:
    if (ctx->pc == 0x239F80u) {
        ctx->pc = 0x239F80u;
            // 0x239f80: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x239F84u;
        goto label_239f84;
    }
    ctx->pc = 0x239F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239F84u);
        ctx->pc = 0x239F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239F7Cu;
            // 0x239f80: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239F84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239F84u; }
            if (ctx->pc != 0x239F84u) { return; }
        }
        }
    }
    ctx->pc = 0x239F84u;
label_239f84:
    // 0x239f84: 0x0  nop
    ctx->pc = 0x239f84u;
    // NOP
label_239f88:
    // 0x239f88: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x239f88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_239f8c:
    // 0x239f8c: 0x681fff2  bgez        $s4, . + 4 + (-0xE << 2)
label_239f90:
    if (ctx->pc == 0x239F90u) {
        ctx->pc = 0x239F90u;
            // 0x239f90: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x239F94u;
        goto label_239f94;
    }
    ctx->pc = 0x239F8Cu;
    {
        const bool branch_taken_0x239f8c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x239F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239F8Cu;
            // 0x239f90: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f8c) {
            ctx->pc = 0x239F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239f58;
        }
    }
    ctx->pc = 0x239F94u;
label_239f94:
    // 0x239f94: 0x0  nop
    ctx->pc = 0x239f94u;
    // NOP
label_239f98:
    // 0x239f98: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x239f98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_239f9c:
    // 0x239f9c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x239f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239fa0:
    // 0x239fa0: 0x500001f  bltz        $t0, . + 4 + (0x1F << 2)
label_239fa4:
    if (ctx->pc == 0x239FA4u) {
        ctx->pc = 0x239FA8u;
        goto label_239fa8;
    }
    ctx->pc = 0x239FA0u;
    {
        const bool branch_taken_0x239fa0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239fa0) {
            ctx->pc = 0x23A020u;
            goto label_23a020;
        }
    }
    ctx->pc = 0x239FA8u;
label_239fa8:
    // 0x239fa8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239fac:
    // 0x239fac: 0x0  nop
    ctx->pc = 0x239facu;
    // NOP
label_239fb0:
    // 0x239fb0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x239fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_239fb4:
    // 0x239fb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239fb8:
    // 0x239fb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239fbc:
    // 0x239fbc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_239fc0:
    if (ctx->pc == 0x239FC0u) {
        ctx->pc = 0x239FC4u;
        goto label_239fc4;
    }
    ctx->pc = 0x239FBCu;
    {
        const bool branch_taken_0x239fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239fbc) {
            ctx->pc = 0x23A010u;
            goto label_23a010;
        }
    }
    ctx->pc = 0x239FC4u;
label_239fc4:
    // 0x239fc4: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x239fc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_239fc8:
    // 0x239fc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239fcc:
    // 0x239fcc: 0xa6a30004  sh          $v1, 0x4($s5)
    ctx->pc = 0x239fccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 3));
label_239fd0:
    // 0x239fd0: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x239fd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_239fd4:
    // 0x239fd4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x239fd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239fd8:
    // 0x239fd8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239fdc:
    if (ctx->pc == 0x239FDCu) {
        ctx->pc = 0x239FDCu;
            // 0x239fdc: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239FE0u;
        goto label_239fe0;
    }
    ctx->pc = 0x239FD8u;
    {
        const bool branch_taken_0x239fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FD8u;
            // 0x239fdc: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fd8) {
            ctx->pc = 0x23A010u;
            goto label_23a010;
        }
    }
    ctx->pc = 0x239FE0u;
label_239fe0:
    // 0x239fe0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239fe4:
    // 0x239fe4: 0x0  nop
    ctx->pc = 0x239fe4u;
    // NOP
label_239fe8:
    // 0x239fe8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x239fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_239fec:
    // 0x239fec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239ff0:
    // 0x239ff0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_239ff4:
    // 0x239ff4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239ff8:
    // 0x239ff8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239ffc:
    // 0x239ffc: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x239ffcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_23a000:
    // 0x23a000: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x23a000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a004:
    // 0x23a004: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_23a008:
    if (ctx->pc == 0x23A008u) {
        ctx->pc = 0x23A008u;
            // 0x23a008: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23A00Cu;
        goto label_23a00c;
    }
    ctx->pc = 0x23A004u;
    {
        const bool branch_taken_0x23a004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A004u;
            // 0x23a008: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a004) {
            ctx->pc = 0x239FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239fe8;
        }
    }
    ctx->pc = 0x23A00Cu;
label_23a00c:
    // 0x23a00c: 0x0  nop
    ctx->pc = 0x23a00cu;
    // NOP
label_23a010:
    // 0x23a010: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x23a010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23a014:
    // 0x23a014: 0x501ffe6  bgez        $t0, . + 4 + (-0x1A << 2)
label_23a018:
    if (ctx->pc == 0x23A018u) {
        ctx->pc = 0x23A018u;
            // 0x23a018: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x23A01Cu;
        goto label_23a01c;
    }
    ctx->pc = 0x23A014u;
    {
        const bool branch_taken_0x23a014 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x23A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A014u;
            // 0x23a018: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a014) {
            ctx->pc = 0x239FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239fb0;
        }
    }
    ctx->pc = 0x23A01Cu;
label_23a01c:
    // 0x23a01c: 0x0  nop
    ctx->pc = 0x23a01cu;
    // NOP
label_23a020:
    // 0x23a020: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x23a020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_23a024:
    // 0x23a024: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x23a024u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_23a028:
    // 0x23a028: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x23a028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a02c:
    // 0x23a02c: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_23a030:
    if (ctx->pc == 0x23A030u) {
        ctx->pc = 0x23A030u;
            // 0x23a030: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x23A034u;
        goto label_23a034;
    }
    ctx->pc = 0x23A02Cu;
    {
        const bool branch_taken_0x23a02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A02Cu;
            // 0x23a030: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a02c) {
            ctx->pc = 0x239F30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239f30;
        }
    }
    ctx->pc = 0x23A034u;
label_23a034:
    // 0x23a034: 0x0  nop
    ctx->pc = 0x23a034u;
    // NOP
label_23a038:
    // 0x23a038: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x23a038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_23a03c:
    // 0x23a03c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a040:
    // 0x23a040: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_23a044:
    if (ctx->pc == 0x23A044u) {
        ctx->pc = 0x23A044u;
            // 0x23a044: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x23A048u;
        goto label_23a048;
    }
    ctx->pc = 0x23A040u;
    {
        const bool branch_taken_0x23a040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A040u;
            // 0x23a044: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a040) {
            ctx->pc = 0x23A068u;
            goto label_23a068;
        }
    }
    ctx->pc = 0x23A048u;
label_23a048:
    // 0x23a048: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x23a048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_23a04c:
    // 0x23a04c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_23a050:
    if (ctx->pc == 0x23A050u) {
        ctx->pc = 0x23A050u;
            // 0x23a050: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x23A054u;
        goto label_23a054;
    }
    ctx->pc = 0x23A04Cu;
    {
        const bool branch_taken_0x23a04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a04c) {
            ctx->pc = 0x23A050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23A04Cu;
            // 0x23a050: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23A06Cu;
            goto label_23a06c;
        }
    }
    ctx->pc = 0x23A054u;
label_23a054:
    // 0x23a054: 0x8223008c  lb          $v1, 0x8C($s1)
    ctx->pc = 0x23a054u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_23a058:
    // 0x23a058: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_23a05c:
    if (ctx->pc == 0x23A05Cu) {
        ctx->pc = 0x23A060u;
        goto label_23a060;
    }
    ctx->pc = 0x23A058u;
    {
        const bool branch_taken_0x23a058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a058) {
            ctx->pc = 0x23A068u;
            goto label_23a068;
        }
    }
    ctx->pc = 0x23A060u;
label_23a060:
    // 0x23a060: 0xc08d1c4  jal         func_234710
label_23a064:
    if (ctx->pc == 0x23A064u) {
        ctx->pc = 0x23A064u;
            // 0x23a064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A068u;
        goto label_23a068;
    }
    ctx->pc = 0x23A060u;
    SET_GPR_U32(ctx, 31, 0x23A068u);
    ctx->pc = 0x23A064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A060u;
            // 0x23a064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A068u; }
        if (ctx->pc != 0x23A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A068u; }
        if (ctx->pc != 0x23A068u) { return; }
    }
    ctx->pc = 0x23A068u;
label_23a068:
    // 0x23a068: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23a068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23a06c:
    // 0x23a06c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23a06cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23a070:
    // 0x23a070: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23a070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23a074:
    // 0x23a074: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23a074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23a078:
    // 0x23a078: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23a07c:
    // 0x23a07c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a07cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a080:
    // 0x23a080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23a084:
    // 0x23a084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23a088:
    // 0x23a088: 0x3e00008  jr          $ra
label_23a08c:
    if (ctx->pc == 0x23A08Cu) {
        ctx->pc = 0x23A08Cu;
            // 0x23a08c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x23A090u;
        goto label_fallthrough_0x23a088;
    }
    ctx->pc = 0x23A088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A088u;
            // 0x23a08c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23a088:
    ctx->pc = 0x23A090u;
}
