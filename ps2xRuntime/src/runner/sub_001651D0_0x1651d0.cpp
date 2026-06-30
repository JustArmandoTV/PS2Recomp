#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001651D0
// Address: 0x1651d0 - 0x165250
void sub_001651D0_0x1651d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001651D0_0x1651d0");
#endif

    ctx->pc = 0x1651d0u;

    // 0x1651d0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1651d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651d4: 0x84e20098  lh          $v0, 0x98($a3)
    ctx->pc = 0x1651d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x1651d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1651D8u;
    {
        const bool branch_taken_0x1651d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1651DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1651D8u;
            // 0x1651dc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651d8) {
            ctx->pc = 0x165200u;
            goto label_165200;
        }
    }
    ctx->pc = 0x1651E0u;
    // 0x1651e0: 0x80e2000f  lb          $v0, 0xF($a3)
    ctx->pc = 0x1651e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
    // 0x1651e4: 0xace80048  sw          $t0, 0x48($a3)
    ctx->pc = 0x1651e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x1651e8: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1651e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1651ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1651ECu;
    {
        const bool branch_taken_0x1651ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651ec) {
            ctx->pc = 0x1651F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1651ECu;
            // 0x1651f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1651F4u;
            goto label_1651f4;
        }
    }
    ctx->pc = 0x1651F4u;
label_1651f4:
    // 0x1651f4: 0x1812  mflo        $v1
    ctx->pc = 0x1651f4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1651f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1651F8u;
    {
        const bool branch_taken_0x1651f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1651F8u;
            // 0x1651fc: 0xace00074  sw          $zero, 0x74($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651f8) {
            ctx->pc = 0x165234u;
            goto label_165234;
        }
    }
    ctx->pc = 0x165200u;
label_165200:
    // 0x165200: 0x80e2000d  lb          $v0, 0xD($a3)
    ctx->pc = 0x165200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x165204: 0x80e5000e  lb          $a1, 0xE($a3)
    ctx->pc = 0x165204u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x165208: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x165208u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16520c: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x16520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x165210: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x165210u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x165214: 0xace80048  sw          $t0, 0x48($a3)
    ctx->pc = 0x165214u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x165218: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x165218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x16521c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x16521cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x165220: 0x70c2001a  div1        $zero, $a2, $v0
    ctx->pc = 0x165220u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 6); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x165224: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x165224u;
    {
        const bool branch_taken_0x165224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165224) {
            ctx->pc = 0x165228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165224u;
            // 0x165228: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16522Cu;
            goto label_16522c;
        }
    }
    ctx->pc = 0x16522Cu;
label_16522c:
    // 0x16522c: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x16522cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x165230: 0x70001812  mflo1       $v1
    ctx->pc = 0x165230u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
label_165234:
    // 0x165234: 0xace3004c  sw          $v1, 0x4C($a3)
    ctx->pc = 0x165234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
    // 0x165238: 0xace000f4  sw          $zero, 0xF4($a3)
    ctx->pc = 0x165238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    // 0x16523c: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x16523cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x165240: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x165240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x165244: 0x3e00008  jr          $ra
    ctx->pc = 0x165244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165244u;
            // 0x165248: 0xace000f8  sw          $zero, 0xF8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16524Cu;
    // 0x16524c: 0x0  nop
    ctx->pc = 0x16524cu;
    // NOP
}
