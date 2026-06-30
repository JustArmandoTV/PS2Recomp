#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136110
// Address: 0x136110 - 0x1361a0
void sub_00136110_0x136110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136110_0x136110");
#endif

    switch (ctx->pc) {
        case 0x13613cu: goto label_13613c;
        default: break;
    }

    ctx->pc = 0x136110u;

    // 0x136110: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136110u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x136114: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x136114u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136118: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x136118u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13611c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13611cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x136120: 0x0  nop
    ctx->pc = 0x136120u;
    // NOP
    // 0x136124: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x136124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x136128: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x136128u;
    {
        const bool branch_taken_0x136128 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136128u;
            // 0x13612c: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136128) {
            ctx->pc = 0x136178u;
            goto label_136178;
        }
    }
    ctx->pc = 0x136130u;
    // 0x136130: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x136130u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x136134: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x136134u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x136138: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x136138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_13613c:
    // 0x13613c: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x13613cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x136140: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x136140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x136144: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x136144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136148: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x136148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13614c: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x13614cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x136150: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136150u;
    {
        const bool branch_taken_0x136150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136150) {
            ctx->pc = 0x136160u;
            goto label_136160;
        }
    }
    ctx->pc = 0x136158u;
    // 0x136158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136158u;
    {
        const bool branch_taken_0x136158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136158u;
            // 0x13615c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136158) {
            ctx->pc = 0x136168u;
            goto label_136168;
        }
    }
    ctx->pc = 0x136160u;
label_136160:
    // 0x136160: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x136160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136164: 0x0  nop
    ctx->pc = 0x136164u;
    // NOP
label_136168:
    // 0x136168: 0xa91823  subu        $v1, $a1, $t1
    ctx->pc = 0x136168u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x13616c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x13616cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136170: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x136170u;
    {
        const bool branch_taken_0x136170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136170) {
            ctx->pc = 0x136174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136170u;
            // 0x136174: 0x1251821  addu        $v1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13613Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13613c;
        }
    }
    ctx->pc = 0x136178u;
label_136178:
    // 0x136178: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x136178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13617c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136180: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x136180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x136184: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x136184u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x136188: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x136188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13618c: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x13618cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x136190: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x136190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x136194: 0x3e00008  jr          $ra
    ctx->pc = 0x136194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136194u;
            // 0x136198: 0xa4c30004  sh          $v1, 0x4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13619Cu;
    // 0x13619c: 0x0  nop
    ctx->pc = 0x13619cu;
    // NOP
}
