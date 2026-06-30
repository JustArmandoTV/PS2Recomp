#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502220
// Address: 0x502220 - 0x502340
void sub_00502220_0x502220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502220_0x502220");
#endif

    switch (ctx->pc) {
        case 0x502264u: goto label_502264;
        case 0x502298u: goto label_502298;
        default: break;
    }

    ctx->pc = 0x502220u;

    // 0x502220: 0x851826  xor         $v1, $a0, $a1
    ctx->pc = 0x502220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x502224: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x502224u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x502228: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x502228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x50222c: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x50222Cu;
    {
        const bool branch_taken_0x50222c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50222c) {
            ctx->pc = 0x502338u;
            goto label_502338;
        }
    }
    ctx->pc = 0x502234u;
    // 0x502234: 0x24a6fffc  addiu       $a2, $a1, -0x4
    ctx->pc = 0x502234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x502238: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x502238u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x50223c: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x50223Cu;
    {
        const bool branch_taken_0x50223c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50223c) {
            ctx->pc = 0x502338u;
            goto label_502338;
        }
    }
    ctx->pc = 0x502244u;
    // 0x502244: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x502244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x502248: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x502248u;
    {
        const bool branch_taken_0x502248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x502248) {
            ctx->pc = 0x502338u;
            goto label_502338;
        }
    }
    ctx->pc = 0x502250u;
    // 0x502250: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x502250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x502254: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x502254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x502258: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x502258u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x50225c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x50225cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x502260: 0x4503c  dsll32      $t2, $a0, 0
    ctx->pc = 0x502260u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
label_502264:
    // 0x502264: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x502264u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x502268: 0x1432826  xor         $a1, $t2, $v1
    ctx->pc = 0x502268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x50226c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x50226cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x502270: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x502270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x502274: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x502274u;
    {
        const bool branch_taken_0x502274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x502274) {
            ctx->pc = 0x5022E8u;
            goto label_5022e8;
        }
    }
    ctx->pc = 0x50227Cu;
    // 0x50227c: 0x25490004  addiu       $t1, $t2, 0x4
    ctx->pc = 0x50227cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x502280: 0x1232826  xor         $a1, $t1, $v1
    ctx->pc = 0x502280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x502284: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x502284u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x502288: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x502288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x50228c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x50228Cu;
    {
        const bool branch_taken_0x50228c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x50228c) {
            ctx->pc = 0x5022E8u;
            goto label_5022e8;
        }
    }
    ctx->pc = 0x502294u;
    // 0x502294: 0x0  nop
    ctx->pc = 0x502294u;
    // NOP
label_502298:
    // 0x502298: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x502298u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x50229c: 0xa283c  dsll32      $a1, $t2, 0
    ctx->pc = 0x50229cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 0));
    // 0x5022a0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x5022a0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x5022a4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x5022a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x5022a8: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x5022a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5022ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x5022acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5022b0: 0x80e701c0  lb          $a3, 0x1C0($a3)
    ctx->pc = 0x5022b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 448)));
    // 0x5022b4: 0x80a501c0  lb          $a1, 0x1C0($a1)
    ctx->pc = 0x5022b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 448)));
    // 0x5022b8: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x5022b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x5022bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x5022BCu;
    {
        const bool branch_taken_0x5022bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5022bc) {
            ctx->pc = 0x5022C8u;
            goto label_5022c8;
        }
    }
    ctx->pc = 0x5022C4u;
    // 0x5022c4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x5022c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_5022c8:
    // 0x5022c8: 0x9283c  dsll32      $a1, $t1, 0
    ctx->pc = 0x5022c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) << (32 + 0));
    // 0x5022cc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x5022ccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x5022d0: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x5022d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x5022d4: 0x1232826  xor         $a1, $t1, $v1
    ctx->pc = 0x5022d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x5022d8: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x5022d8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x5022dc: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x5022dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x5022e0: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x5022E0u;
    {
        const bool branch_taken_0x5022e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x5022e0) {
            ctx->pc = 0x502298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_502298;
        }
    }
    ctx->pc = 0x5022E8u;
label_5022e8:
    // 0x5022e8: 0xa483c  dsll32      $t1, $t2, 0
    ctx->pc = 0x5022e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 0));
    // 0x5022ec: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x5022ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x5022f0: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x5022f0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x5022f4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x5022f4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x5022f8: 0x1282826  xor         $a1, $t1, $t0
    ctx->pc = 0x5022f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x5022fc: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x5022fcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x502300: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x502300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x502304: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x502304u;
    {
        const bool branch_taken_0x502304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x502304) {
            ctx->pc = 0x502320u;
            goto label_502320;
        }
    }
    ctx->pc = 0x50230Cu;
    // 0x50230c: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x50230cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x502310: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x502310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x502314: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x502314u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x502318: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x502318u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x50231c: 0x0  nop
    ctx->pc = 0x50231cu;
    // NOP
label_502320:
    // 0x502320: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x502320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x502324: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x502324u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x502328: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x502328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x50232c: 0x86282b  sltu        $a1, $a0, $a2
    ctx->pc = 0x50232cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x502330: 0x54a0ffcc  bnel        $a1, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x502330u;
    {
        const bool branch_taken_0x502330 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x502330) {
            ctx->pc = 0x502334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502330u;
            // 0x502334: 0x4503c  dsll32      $t2, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_502264;
        }
    }
    ctx->pc = 0x502338u;
label_502338:
    // 0x502338: 0x3e00008  jr          $ra
    ctx->pc = 0x502338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502340u;
}
