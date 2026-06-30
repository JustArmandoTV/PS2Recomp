#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245E00
// Address: 0x245e00 - 0x245fa0
void sub_00245E00_0x245e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245E00_0x245e00");
#endif

    switch (ctx->pc) {
        case 0x245e00u: goto label_245e00;
        case 0x245e04u: goto label_245e04;
        case 0x245e08u: goto label_245e08;
        case 0x245e0cu: goto label_245e0c;
        case 0x245e10u: goto label_245e10;
        case 0x245e14u: goto label_245e14;
        case 0x245e18u: goto label_245e18;
        case 0x245e1cu: goto label_245e1c;
        case 0x245e20u: goto label_245e20;
        case 0x245e24u: goto label_245e24;
        case 0x245e28u: goto label_245e28;
        case 0x245e2cu: goto label_245e2c;
        case 0x245e30u: goto label_245e30;
        case 0x245e34u: goto label_245e34;
        case 0x245e38u: goto label_245e38;
        case 0x245e3cu: goto label_245e3c;
        case 0x245e40u: goto label_245e40;
        case 0x245e44u: goto label_245e44;
        case 0x245e48u: goto label_245e48;
        case 0x245e4cu: goto label_245e4c;
        case 0x245e50u: goto label_245e50;
        case 0x245e54u: goto label_245e54;
        case 0x245e58u: goto label_245e58;
        case 0x245e5cu: goto label_245e5c;
        case 0x245e60u: goto label_245e60;
        case 0x245e64u: goto label_245e64;
        case 0x245e68u: goto label_245e68;
        case 0x245e6cu: goto label_245e6c;
        case 0x245e70u: goto label_245e70;
        case 0x245e74u: goto label_245e74;
        case 0x245e78u: goto label_245e78;
        case 0x245e7cu: goto label_245e7c;
        case 0x245e80u: goto label_245e80;
        case 0x245e84u: goto label_245e84;
        case 0x245e88u: goto label_245e88;
        case 0x245e8cu: goto label_245e8c;
        case 0x245e90u: goto label_245e90;
        case 0x245e94u: goto label_245e94;
        case 0x245e98u: goto label_245e98;
        case 0x245e9cu: goto label_245e9c;
        case 0x245ea0u: goto label_245ea0;
        case 0x245ea4u: goto label_245ea4;
        case 0x245ea8u: goto label_245ea8;
        case 0x245eacu: goto label_245eac;
        case 0x245eb0u: goto label_245eb0;
        case 0x245eb4u: goto label_245eb4;
        case 0x245eb8u: goto label_245eb8;
        case 0x245ebcu: goto label_245ebc;
        case 0x245ec0u: goto label_245ec0;
        case 0x245ec4u: goto label_245ec4;
        case 0x245ec8u: goto label_245ec8;
        case 0x245eccu: goto label_245ecc;
        case 0x245ed0u: goto label_245ed0;
        case 0x245ed4u: goto label_245ed4;
        case 0x245ed8u: goto label_245ed8;
        case 0x245edcu: goto label_245edc;
        case 0x245ee0u: goto label_245ee0;
        case 0x245ee4u: goto label_245ee4;
        case 0x245ee8u: goto label_245ee8;
        case 0x245eecu: goto label_245eec;
        case 0x245ef0u: goto label_245ef0;
        case 0x245ef4u: goto label_245ef4;
        case 0x245ef8u: goto label_245ef8;
        case 0x245efcu: goto label_245efc;
        case 0x245f00u: goto label_245f00;
        case 0x245f04u: goto label_245f04;
        case 0x245f08u: goto label_245f08;
        case 0x245f0cu: goto label_245f0c;
        case 0x245f10u: goto label_245f10;
        case 0x245f14u: goto label_245f14;
        case 0x245f18u: goto label_245f18;
        case 0x245f1cu: goto label_245f1c;
        case 0x245f20u: goto label_245f20;
        case 0x245f24u: goto label_245f24;
        case 0x245f28u: goto label_245f28;
        case 0x245f2cu: goto label_245f2c;
        case 0x245f30u: goto label_245f30;
        case 0x245f34u: goto label_245f34;
        case 0x245f38u: goto label_245f38;
        case 0x245f3cu: goto label_245f3c;
        case 0x245f40u: goto label_245f40;
        case 0x245f44u: goto label_245f44;
        case 0x245f48u: goto label_245f48;
        case 0x245f4cu: goto label_245f4c;
        case 0x245f50u: goto label_245f50;
        case 0x245f54u: goto label_245f54;
        case 0x245f58u: goto label_245f58;
        case 0x245f5cu: goto label_245f5c;
        case 0x245f60u: goto label_245f60;
        case 0x245f64u: goto label_245f64;
        case 0x245f68u: goto label_245f68;
        case 0x245f6cu: goto label_245f6c;
        case 0x245f70u: goto label_245f70;
        case 0x245f74u: goto label_245f74;
        case 0x245f78u: goto label_245f78;
        case 0x245f7cu: goto label_245f7c;
        case 0x245f80u: goto label_245f80;
        case 0x245f84u: goto label_245f84;
        case 0x245f88u: goto label_245f88;
        case 0x245f8cu: goto label_245f8c;
        case 0x245f90u: goto label_245f90;
        case 0x245f94u: goto label_245f94;
        case 0x245f98u: goto label_245f98;
        case 0x245f9cu: goto label_245f9c;
        default: break;
    }

    ctx->pc = 0x245e00u;

label_245e00:
    // 0x245e00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x245e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_245e04:
    // 0x245e04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x245e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_245e08:
    // 0x245e08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x245e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_245e0c:
    // 0x245e0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x245e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_245e10:
    // 0x245e10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x245e10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_245e14:
    // 0x245e14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x245e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_245e18:
    // 0x245e18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x245e18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245e1c:
    // 0x245e1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x245e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_245e20:
    // 0x245e20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x245e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_245e24:
    // 0x245e24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x245e24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_245e28:
    // 0x245e28: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x245e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_245e2c:
    // 0x245e2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x245e2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_245e30:
    // 0x245e30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x245e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245e34:
    // 0x245e34: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x245e34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_245e38:
    // 0x245e38: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x245e38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_245e3c:
    // 0x245e3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245e40:
    // 0x245e40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x245e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245e44:
    // 0x245e44: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x245e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_245e48:
    // 0x245e48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x245e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_245e4c:
    // 0x245e4c: 0x24710010  addiu       $s1, $v1, 0x10
    ctx->pc = 0x245e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_245e50:
    // 0x245e50: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x245e50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_245e54:
    // 0x245e54: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x245e54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_245e58:
    // 0x245e58: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_245e5c:
    if (ctx->pc == 0x245E5Cu) {
        ctx->pc = 0x245E5Cu;
            // 0x245e5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245E60u;
        goto label_245e60;
    }
    ctx->pc = 0x245E58u;
    {
        const bool branch_taken_0x245e58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245E58u;
            // 0x245e5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e58) {
            ctx->pc = 0x245F40u;
            goto label_245f40;
        }
    }
    ctx->pc = 0x245E60u;
label_245e60:
    // 0x245e60: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x245e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_245e64:
    // 0x245e64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_245e68:
    // 0x245e68: 0x24a5f7e0  addiu       $a1, $a1, -0x820
    ctx->pc = 0x245e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965216));
label_245e6c:
    // 0x245e6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x245e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_245e70:
    // 0x245e70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x245e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245e74:
    // 0x245e74: 0x600008  jr          $v1
label_245e78:
    if (ctx->pc == 0x245E78u) {
        ctx->pc = 0x245E7Cu;
        goto label_245e7c;
    }
    ctx->pc = 0x245E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245E80u: goto label_245e80;
            case 0x245ED0u: goto label_245ed0;
            case 0x245F38u: goto label_245f38;
            case 0x245F70u: goto label_245f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x245E7Cu;
label_245e7c:
    // 0x245e7c: 0x0  nop
    ctx->pc = 0x245e7cu;
    // NOP
label_245e80:
    // 0x245e80: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x245e80u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_245e84:
    // 0x245e84: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x245e84u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_245e88:
    // 0x245e88: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x245e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_245e8c:
    // 0x245e8c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x245e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_245e90:
    // 0x245e90: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x245e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_245e94:
    // 0x245e94: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x245e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_245e98:
    // 0x245e98: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x245e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_245e9c:
    // 0x245e9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x245e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_245ea0:
    // 0x245ea0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x245ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_245ea4:
    // 0x245ea4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x245ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_245ea8:
    // 0x245ea8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x245ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_245eac:
    // 0x245eac: 0x8c6316d0  lw          $v1, 0x16D0($v1)
    ctx->pc = 0x245eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5840)));
label_245eb0:
    // 0x245eb0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_245eb4:
    if (ctx->pc == 0x245EB4u) {
        ctx->pc = 0x245EB4u;
            // 0x245eb4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x245EB8u;
        goto label_245eb8;
    }
    ctx->pc = 0x245EB0u;
    {
        const bool branch_taken_0x245eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245EB0u;
            // 0x245eb4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245eb0) {
            ctx->pc = 0x245F40u;
            goto label_245f40;
        }
    }
    ctx->pc = 0x245EB8u;
label_245eb8:
    // 0x245eb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x245eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245ebc:
    // 0x245ebc: 0x60f809  jalr        $v1
label_245ec0:
    if (ctx->pc == 0x245EC0u) {
        ctx->pc = 0x245EC0u;
            // 0x245ec0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x245EC4u;
        goto label_245ec4;
    }
    ctx->pc = 0x245EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245EC4u);
        ctx->pc = 0x245EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245EBCu;
            // 0x245ec0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245EC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245EC4u; }
            if (ctx->pc != 0x245EC4u) { return; }
        }
        }
    }
    ctx->pc = 0x245EC4u;
label_245ec4:
    // 0x245ec4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_245ec8:
    if (ctx->pc == 0x245EC8u) {
        ctx->pc = 0x245ECCu;
        goto label_245ecc;
    }
    ctx->pc = 0x245EC4u;
    {
        const bool branch_taken_0x245ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ec4) {
            ctx->pc = 0x245F40u;
            goto label_245f40;
        }
    }
    ctx->pc = 0x245ECCu;
label_245ecc:
    // 0x245ecc: 0x0  nop
    ctx->pc = 0x245eccu;
    // NOP
label_245ed0:
    // 0x245ed0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x245ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245ed4:
    // 0x245ed4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x245ed4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_245ed8:
    // 0x245ed8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_245edc:
    if (ctx->pc == 0x245EDCu) {
        ctx->pc = 0x245EDCu;
            // 0x245edc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x245EE0u;
        goto label_245ee0;
    }
    ctx->pc = 0x245ED8u;
    {
        const bool branch_taken_0x245ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245ED8u;
            // 0x245edc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ed8) {
            ctx->pc = 0x245EE8u;
            goto label_245ee8;
        }
    }
    ctx->pc = 0x245EE0u;
label_245ee0:
    // 0x245ee0: 0x10000003  b           . + 4 + (0x3 << 2)
label_245ee4:
    if (ctx->pc == 0x245EE4u) {
        ctx->pc = 0x245EE4u;
            // 0x245ee4: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->pc = 0x245EE8u;
        goto label_245ee8;
    }
    ctx->pc = 0x245EE0u;
    {
        const bool branch_taken_0x245ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245EE0u;
            // 0x245ee4: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ee0) {
            ctx->pc = 0x245EF0u;
            goto label_245ef0;
        }
    }
    ctx->pc = 0x245EE8u;
label_245ee8:
    // 0x245ee8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x245ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_245eec:
    // 0x245eec: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x245eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_245ef0:
    // 0x245ef0: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x245ef0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_245ef4:
    // 0x245ef4: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x245ef4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_245ef8:
    // 0x245ef8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x245ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_245efc:
    // 0x245efc: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x245efcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_245f00:
    // 0x245f00: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x245f00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_245f04:
    // 0x245f04: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x245f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_245f08:
    // 0x245f08: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x245f08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_245f0c:
    // 0x245f0c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x245f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_245f10:
    // 0x245f10: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x245f10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_245f14:
    // 0x245f14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x245f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_245f18:
    // 0x245f18: 0x8c6316d0  lw          $v1, 0x16D0($v1)
    ctx->pc = 0x245f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5840)));
label_245f1c:
    // 0x245f1c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_245f20:
    if (ctx->pc == 0x245F20u) {
        ctx->pc = 0x245F20u;
            // 0x245f20: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x245F24u;
        goto label_245f24;
    }
    ctx->pc = 0x245F1Cu;
    {
        const bool branch_taken_0x245f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245F1Cu;
            // 0x245f20: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f1c) {
            ctx->pc = 0x245F40u;
            goto label_245f40;
        }
    }
    ctx->pc = 0x245F24u;
label_245f24:
    // 0x245f24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x245f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245f28:
    // 0x245f28: 0x60f809  jalr        $v1
label_245f2c:
    if (ctx->pc == 0x245F2Cu) {
        ctx->pc = 0x245F2Cu;
            // 0x245f2c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x245F30u;
        goto label_245f30;
    }
    ctx->pc = 0x245F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245F30u);
        ctx->pc = 0x245F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245F28u;
            // 0x245f2c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245F30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245F30u; }
            if (ctx->pc != 0x245F30u) { return; }
        }
        }
    }
    ctx->pc = 0x245F30u;
label_245f30:
    // 0x245f30: 0x10000003  b           . + 4 + (0x3 << 2)
label_245f34:
    if (ctx->pc == 0x245F34u) {
        ctx->pc = 0x245F38u;
        goto label_245f38;
    }
    ctx->pc = 0x245F30u;
    {
        const bool branch_taken_0x245f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f30) {
            ctx->pc = 0x245F40u;
            goto label_245f40;
        }
    }
    ctx->pc = 0x245F38u;
label_245f38:
    // 0x245f38: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x245f38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_245f3c:
    // 0x245f3c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x245f3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_245f40:
    // 0x245f40: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x245f40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_245f44:
    // 0x245f44: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_245f48:
    if (ctx->pc == 0x245F48u) {
        ctx->pc = 0x245F4Cu;
        goto label_245f4c;
    }
    ctx->pc = 0x245F44u;
    {
        const bool branch_taken_0x245f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x245f44) {
            ctx->pc = 0x245E50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245e50;
        }
    }
    ctx->pc = 0x245F4Cu;
label_245f4c:
    // 0x245f4c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x245f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_245f50:
    // 0x245f50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x245f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_245f54:
    // 0x245f54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245f58:
    // 0x245f58: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x245f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_245f5c:
    // 0x245f5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x245f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245f60:
    // 0x245f60: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x245f60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_245f64:
    // 0x245f64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x245f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_245f68:
    // 0x245f68: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
label_245f6c:
    if (ctx->pc == 0x245F6Cu) {
        ctx->pc = 0x245F6Cu;
            // 0x245f6c: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x245F70u;
        goto label_245f70;
    }
    ctx->pc = 0x245F68u;
    {
        const bool branch_taken_0x245f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245F68u;
            // 0x245f6c: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f68) {
            ctx->pc = 0x245E50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245e50;
        }
    }
    ctx->pc = 0x245F70u;
label_245f70:
    // 0x245f70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x245f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_245f74:
    // 0x245f74: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x245f74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_245f78:
    // 0x245f78: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x245f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_245f7c:
    // 0x245f7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x245f7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_245f80:
    // 0x245f80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x245f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_245f84:
    // 0x245f84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x245f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_245f88:
    // 0x245f88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x245f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_245f8c:
    // 0x245f8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x245f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245f90:
    // 0x245f90: 0x3e00008  jr          $ra
label_245f94:
    if (ctx->pc == 0x245F94u) {
        ctx->pc = 0x245F94u;
            // 0x245f94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x245F98u;
        goto label_245f98;
    }
    ctx->pc = 0x245F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245F90u;
            // 0x245f94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245F98u;
label_245f98:
    // 0x245f98: 0x0  nop
    ctx->pc = 0x245f98u;
    // NOP
label_245f9c:
    // 0x245f9c: 0x0  nop
    ctx->pc = 0x245f9cu;
    // NOP
}
