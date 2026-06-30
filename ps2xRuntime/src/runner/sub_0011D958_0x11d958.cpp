#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D958
// Address: 0x11d958 - 0x11dc28
void sub_0011D958_0x11d958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D958_0x11d958");
#endif

    switch (ctx->pc) {
        case 0x11d9a8u: goto label_11d9a8;
        case 0x11da10u: goto label_11da10;
        case 0x11da14u: goto label_11da14;
        case 0x11db50u: goto label_11db50;
        case 0x11dba0u: goto label_11dba0;
        default: break;
    }

    ctx->pc = 0x11d958u;

    // 0x11d958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d95c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d960: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11d960u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11d964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d968: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11d968u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11d96c: 0x44116000  mfc1        $s1, $f12
    ctx->pc = 0x11d96cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x11d970: 0x3c0f507f  lui         $t7, 0x507F
    ctx->pc = 0x11d970u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)20607 << 16));
    // 0x11d974: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d974u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d97c: 0x22e8024  and         $s0, $s1, $t6
    ctx->pc = 0x11d97cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 14));
    // 0x11d980: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11d980u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d984: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11D984u;
    {
        const bool branch_taken_0x11d984 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D984u;
            // 0x11d988: 0x46006186  mov.s       $f6, $f12 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d984) {
            ctx->pc = 0x11D9C0u;
            goto label_11d9c0;
        }
    }
    ctx->pc = 0x11D98Cu;
    // 0x11d98c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d98cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d990: 0x25ef00bc  addiu       $t7, $t7, 0xBC
    ctx->pc = 0x11d990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 188));
    // 0x11d994: 0x1e200004  bgtz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D994u;
    {
        const bool branch_taken_0x11d994 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x11D998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D994u;
            // 0x11d998: 0xc5e40000  lwc1        $f4, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d994) {
            ctx->pc = 0x11D9A8u;
            goto label_11d9a8;
        }
    }
    ctx->pc = 0x11D99Cu;
    // 0x11d99c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d99cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d9a0: 0x25ef00c0  addiu       $t7, $t7, 0xC0
    ctx->pc = 0x11d9a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 192));
    // 0x11d9a4: 0xc5e40000  lwc1        $f4, 0x0($t7)
    ctx->pc = 0x11d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11d9a8:
    // 0x11d9a8: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x11d9a8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x11d9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d9b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d9b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x11D9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D9B8u;
            // 0x11d9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D9C0u;
label_11d9c0:
    // 0x11d9c0: 0x3c0f3edf  lui         $t7, 0x3EDF
    ctx->pc = 0x11d9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16095 << 16));
    // 0x11d9c4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d9c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d9c8: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11d9c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d9cc: 0x15e0005e  bnez        $t7, . + 4 + (0x5E << 2)
    ctx->pc = 0x11D9CCu;
    {
        const bool branch_taken_0x11d9cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D9CCu;
            // 0x11d9d0: 0x3c0f30ff  lui         $t7, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9cc) {
            ctx->pc = 0x11DB48u;
            goto label_11db48;
        }
    }
    ctx->pc = 0x11D9D4u;
    // 0x11d9d4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d9d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d9d8: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11d9d8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d9dc: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11D9DCu;
    {
        const bool branch_taken_0x11d9dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D9DCu;
            // 0x11d9e0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9dc) {
            ctx->pc = 0x11DA10u;
            goto label_11da10;
        }
    }
    ctx->pc = 0x11D9E4u;
    // 0x11d9e4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d9e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d9e8: 0x25ef00c4  addiu       $t7, $t7, 0xC4
    ctx->pc = 0x11d9e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 196));
    // 0x11d9ec: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d9f0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d9f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d9f4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11d9f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11d9f8: 0x25ef00c8  addiu       $t7, $t7, 0xC8
    ctx->pc = 0x11d9f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 200));
    // 0x11d9fc: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11d9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11da00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11da00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11da04: 0x4501ffe8  bc1t        . + 4 + (-0x18 << 2)
    ctx->pc = 0x11DA04u;
    {
        const bool branch_taken_0x11da04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11DA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA04u;
            // 0x11da08: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da04) {
            ctx->pc = 0x11D9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d9a8;
        }
    }
    ctx->pc = 0x11DA0Cu;
    // 0x11da0c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11da0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11da10:
    // 0x11da10: 0x46063142  mul.s       $f5, $f6, $f6
    ctx->pc = 0x11da10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_11da14:
    // 0x11da14: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11da14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11da18: 0x25ef00d8  addiu       $t7, $t7, 0xD8
    ctx->pc = 0x11da18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 216));
    // 0x11da1c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11da1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11da20: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x11da20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x11da24: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11da24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11da28: 0x25ef00dc  addiu       $t7, $t7, 0xDC
    ctx->pc = 0x11da28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 220));
    // 0x11da2c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11da2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11da30: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11da30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11da34: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11da34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11da38: 0x25ef00e0  addiu       $t7, $t7, 0xE0
    ctx->pc = 0x11da38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 224));
    // 0x11da3c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11da3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11da40: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11da40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11da44: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11da44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11da48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11da48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11da4c: 0x25ef00e4  addiu       $t7, $t7, 0xE4
    ctx->pc = 0x11da4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 228));
    // 0x11da50: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11da50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11da54: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11da54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11da58: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11da58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11da5c: 0x25ef00e8  addiu       $t7, $t7, 0xE8
    ctx->pc = 0x11da5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 232));
    // 0x11da60: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11da60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11da64: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11da64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11da68: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11da68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11da6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11da6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11da70: 0x25ef00ec  addiu       $t7, $t7, 0xEC
    ctx->pc = 0x11da70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 236));
    // 0x11da74: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11da74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11da78: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11da7c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11da7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11da80: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11da80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11da84: 0x25ef00f0  addiu       $t7, $t7, 0xF0
    ctx->pc = 0x11da84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 240));
    // 0x11da88: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11da88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11da8c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11da90: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11da90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11da94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11da94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11da98: 0x25ef00f4  addiu       $t7, $t7, 0xF4
    ctx->pc = 0x11da98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 244));
    // 0x11da9c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11da9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11daa0: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11daa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11daa4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11daa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11daa8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11daa8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11daac: 0x25ef00f8  addiu       $t7, $t7, 0xF8
    ctx->pc = 0x11daacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 248));
    // 0x11dab0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11dab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11dab4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11dab8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11dab8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11dabc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11dabcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11dac0: 0x25ef00fc  addiu       $t7, $t7, 0xFC
    ctx->pc = 0x11dac0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 252));
    // 0x11dac4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11dac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11dac8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11dacc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11daccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11dad0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11dad0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11dad4: 0x25ef0100  addiu       $t7, $t7, 0x100
    ctx->pc = 0x11dad4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
    // 0x11dad8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11dad8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11dadc: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11dadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11dae0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11dae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11dae4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x11dae4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11dae8: 0x5c10005  bgez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DAE8u;
    {
        const bool branch_taken_0x11dae8 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x11DAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DAE8u;
            // 0x11daec: 0x46002802  mul.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dae8) {
            ctx->pc = 0x11DB00u;
            goto label_11db00;
        }
    }
    ctx->pc = 0x11DAF0u;
    // 0x11daf0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11daf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11daf4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11daf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11daf8: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x11DAF8u;
    {
        const bool branch_taken_0x11daf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DAF8u;
            // 0x11dafc: 0x46003101  sub.s       $f4, $f6, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11daf8) {
            ctx->pc = 0x11D9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d9a8;
        }
    }
    ctx->pc = 0x11DB00u;
label_11db00:
    // 0x11db00: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11db00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11db04: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11db04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11db08: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x11db08u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x11db0c: 0x25ef0078  addiu       $t7, $t7, 0x78
    ctx->pc = 0x11db0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 120));
    // 0x11db10: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x11db10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11db14: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11db14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11db18: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11db18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11db1c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11db1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11db20: 0x25ef0068  addiu       $t7, $t7, 0x68
    ctx->pc = 0x11db20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 104));
    // 0x11db24: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x11db24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11db28: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11db28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11db2c: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11db2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11db30: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x11db30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x11db34: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11DB34u;
    {
        const bool branch_taken_0x11db34 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11DB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DB34u;
            // 0x11db38: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db34) {
            ctx->pc = 0x11DB40u;
            goto label_11db40;
        }
    }
    ctx->pc = 0x11DB3Cu;
    // 0x11db3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11db3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11db40:
    // 0x11db40: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x11DB40u;
    {
        const bool branch_taken_0x11db40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DB40u;
            // 0x11db44: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db40) {
            ctx->pc = 0x11D9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d9a8;
        }
    }
    ctx->pc = 0x11DB48u;
label_11db48:
    // 0x11db48: 0xc047740  jal         func_11DD00
    ctx->pc = 0x11DB48u;
    SET_GPR_U32(ctx, 31, 0x11DB50u);
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DB50u; }
        if (ctx->pc != 0x11DB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DB50u; }
        if (ctx->pc != 0x11DB50u) { return; }
    }
    ctx->pc = 0x11DB50u;
label_11db50:
    // 0x11db50: 0x3c0f3f97  lui         $t7, 0x3F97
    ctx->pc = 0x11db50u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16279 << 16));
    // 0x11db54: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11db54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11db58: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11db58u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11db5c: 0x15e0001b  bnez        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x11DB5Cu;
    {
        const bool branch_taken_0x11db5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DB5Cu;
            // 0x11db60: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db5c) {
            ctx->pc = 0x11DBCCu;
            goto label_11dbcc;
        }
    }
    ctx->pc = 0x11DB64u;
    // 0x11db64: 0x3c0f3f2f  lui         $t7, 0x3F2F
    ctx->pc = 0x11db64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16175 << 16));
    // 0x11db68: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11db68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11db6c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11db6cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11db70: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x11DB70u;
    {
        const bool branch_taken_0x11db70 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DB70u;
            // 0x11db74: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db70) {
            ctx->pc = 0x11DBB4u;
            goto label_11dbb4;
        }
    }
    ctx->pc = 0x11DB78u;
    // 0x11db78: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11db78u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11db7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11db7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11db80: 0x25ef00cc  addiu       $t7, $t7, 0xCC
    ctx->pc = 0x11db80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 204));
    // 0x11db84: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x11db84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db88: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11db8c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11db8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11db90: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x11db90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x11db94: 0x25ef00c8  addiu       $t7, $t7, 0xC8
    ctx->pc = 0x11db94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 200));
    // 0x11db98: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11db98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11db9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11db9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_11dba0:
    // 0x11dba0: 0x0  nop
    ctx->pc = 0x11dba0u;
    // NOP
    // 0x11dba4: 0x0  nop
    ctx->pc = 0x11dba4u;
    // NOP
    // 0x11dba8: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x11dba8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[6] = ctx->f[0] / ctx->f[1];
    // 0x11dbac: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x11DBACu;
    {
        const bool branch_taken_0x11dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DBACu;
            // 0x11dbb0: 0x46063142  mul.s       $f5, $f6, $f6 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbac) {
            ctx->pc = 0x11DA14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11da14;
        }
    }
    ctx->pc = 0x11DBB4u;
label_11dbb4:
    // 0x11dbb4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x11dbb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dbb8: 0x25ef00c8  addiu       $t7, $t7, 0xC8
    ctx->pc = 0x11dbb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 200));
    // 0x11dbbc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dbc0: 0x46003040  add.s       $f1, $f6, $f0
    ctx->pc = 0x11dbc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x11dbc4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11DBC4u;
    {
        const bool branch_taken_0x11dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DBC4u;
            // 0x11dbc8: 0x46003001  sub.s       $f0, $f6, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbc4) {
            ctx->pc = 0x11DBA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dba0;
        }
    }
    ctx->pc = 0x11DBCCu;
label_11dbcc:
    // 0x11dbcc: 0x3c0f401b  lui         $t7, 0x401B
    ctx->pc = 0x11dbccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16411 << 16));
    // 0x11dbd0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11dbd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11dbd4: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11dbd4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11dbd8: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11DBD8u;
    {
        const bool branch_taken_0x11dbd8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DBD8u;
            // 0x11dbdc: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbd8) {
            ctx->pc = 0x11DC0Cu;
            goto label_11dc0c;
        }
    }
    ctx->pc = 0x11DBE0u;
    // 0x11dbe0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11dbe0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11dbe4: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x11dbe4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11dbe8: 0x25ef00d0  addiu       $t7, $t7, 0xD0
    ctx->pc = 0x11dbe8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 208));
    // 0x11dbec: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dbf0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11dbf0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11dbf4: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x11dbf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11dbf8: 0x25ef00c8  addiu       $t7, $t7, 0xC8
    ctx->pc = 0x11dbf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 200));
    // 0x11dbfc: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11dc00: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x11dc00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x11dc04: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x11DC04u;
    {
        const bool branch_taken_0x11dc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC04u;
            // 0x11dc08: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc04) {
            ctx->pc = 0x11DBA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dba0;
        }
    }
    ctx->pc = 0x11DC0Cu;
label_11dc0c:
    // 0x11dc0c: 0x25ef00d4  addiu       $t7, $t7, 0xD4
    ctx->pc = 0x11dc0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 212));
    // 0x11dc10: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dc14: 0x0  nop
    ctx->pc = 0x11dc14u;
    // NOP
    // 0x11dc18: 0x0  nop
    ctx->pc = 0x11dc18u;
    // NOP
    // 0x11dc1c: 0x46060183  div.s       $f6, $f0, $f6
    ctx->pc = 0x11dc1cu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[6] = ctx->f[0] / ctx->f[6];
    // 0x11dc20: 0x1000ff7b  b           . + 4 + (-0x85 << 2)
    ctx->pc = 0x11DC20u;
    {
        const bool branch_taken_0x11dc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC20u;
            // 0x11dc24: 0x240e0003  addiu       $t6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc20) {
            ctx->pc = 0x11DA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11da10;
        }
    }
    ctx->pc = 0x11DC28u;
}
