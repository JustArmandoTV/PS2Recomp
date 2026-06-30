#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136090
// Address: 0x136090 - 0x136110
void sub_00136090_0x136090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136090_0x136090");
#endif

    switch (ctx->pc) {
        case 0x1360bcu: goto label_1360bc;
        default: break;
    }

    ctx->pc = 0x136090u;

    // 0x136090: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136090u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x136094: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x136094u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136098: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x136098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13609c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13609cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1360a0: 0x0  nop
    ctx->pc = 0x1360a0u;
    // NOP
    // 0x1360a4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1360a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1360a8: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1360A8u;
    {
        const bool branch_taken_0x1360a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1360ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1360A8u;
            // 0x1360ac: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360a8) {
            ctx->pc = 0x1360F8u;
            goto label_1360f8;
        }
    }
    ctx->pc = 0x1360B0u;
    // 0x1360b0: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x1360b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1360b4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1360b4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1360b8: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x1360b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_1360bc:
    // 0x1360bc: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x1360bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1360c0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1360c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1360c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1360c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1360c8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1360c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1360cc: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x1360ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1360d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1360D0u;
    {
        const bool branch_taken_0x1360d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1360d0) {
            ctx->pc = 0x1360E0u;
            goto label_1360e0;
        }
    }
    ctx->pc = 0x1360D8u;
    // 0x1360d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1360D8u;
    {
        const bool branch_taken_0x1360d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1360D8u;
            // 0x1360dc: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360d8) {
            ctx->pc = 0x1360E8u;
            goto label_1360e8;
        }
    }
    ctx->pc = 0x1360E0u;
label_1360e0:
    // 0x1360e0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1360e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360e4: 0x0  nop
    ctx->pc = 0x1360e4u;
    // NOP
label_1360e8:
    // 0x1360e8: 0xa91823  subu        $v1, $a1, $t1
    ctx->pc = 0x1360e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1360ec: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1360ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1360f0: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1360F0u;
    {
        const bool branch_taken_0x1360f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1360f0) {
            ctx->pc = 0x1360F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1360F0u;
            // 0x1360f4: 0x1251821  addu        $v1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1360BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1360bc;
        }
    }
    ctx->pc = 0x1360F8u;
label_1360f8:
    // 0x1360f8: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1360f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1360fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1360fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136100: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x136100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x136104: 0x3e00008  jr          $ra
    ctx->pc = 0x136104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136104u;
            // 0x136108: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13610Cu;
    // 0x13610c: 0x0  nop
    ctx->pc = 0x13610cu;
    // NOP
}
