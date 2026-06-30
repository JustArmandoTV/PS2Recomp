#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00328020
// Address: 0x328020 - 0x328640
void sub_00328020_0x328020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328020_0x328020");
#endif

    switch (ctx->pc) {
        case 0x3280b8u: goto label_3280b8;
        case 0x3280d0u: goto label_3280d0;
        case 0x3280fcu: goto label_3280fc;
        case 0x328114u: goto label_328114;
        case 0x328140u: goto label_328140;
        case 0x328158u: goto label_328158;
        case 0x328184u: goto label_328184;
        case 0x3281a8u: goto label_3281a8;
        case 0x3281f8u: goto label_3281f8;
        case 0x328210u: goto label_328210;
        case 0x328240u: goto label_328240;
        case 0x32827cu: goto label_32827c;
        case 0x3282a4u: goto label_3282a4;
        case 0x3282ccu: goto label_3282cc;
        case 0x3282f4u: goto label_3282f4;
        case 0x328370u: goto label_328370;
        case 0x328388u: goto label_328388;
        case 0x3283b4u: goto label_3283b4;
        case 0x3283ccu: goto label_3283cc;
        case 0x328434u: goto label_328434;
        case 0x32844cu: goto label_32844c;
        case 0x328464u: goto label_328464;
        case 0x32847cu: goto label_32847c;
        case 0x328494u: goto label_328494;
        case 0x3284acu: goto label_3284ac;
        case 0x3284d0u: goto label_3284d0;
        case 0x3284f4u: goto label_3284f4;
        case 0x328518u: goto label_328518;
        case 0x328574u: goto label_328574;
        case 0x32858cu: goto label_32858c;
        case 0x3285b8u: goto label_3285b8;
        case 0x3285d0u: goto label_3285d0;
        case 0x3285fcu: goto label_3285fc;
        case 0x328620u: goto label_328620;
        default: break;
    }

    ctx->pc = 0x328020u;

    // 0x328020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328024: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x328024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x328028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32802c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32802cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328034: 0x10a7013a  beq         $a1, $a3, . + 4 + (0x13A << 2)
    ctx->pc = 0x328034u;
    {
        const bool branch_taken_0x328034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x328038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328034u;
            // 0x328038: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328034) {
            ctx->pc = 0x328520u;
            goto label_328520;
        }
    }
    ctx->pc = 0x32803Cu;
    // 0x32803c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x328040: 0x50a300b3  beql        $a1, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x328040u;
    {
        const bool branch_taken_0x328040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x328040) {
            ctx->pc = 0x328044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328040u;
            // 0x328044: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328310u;
            goto label_328310;
        }
    }
    ctx->pc = 0x328048u;
    // 0x328048: 0x50a00059  beql        $a1, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x328048u;
    {
        const bool branch_taken_0x328048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328048) {
            ctx->pc = 0x32804Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328048u;
            // 0x32804c: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3281B0u;
            goto label_3281b0;
        }
    }
    ctx->pc = 0x328050u;
    // 0x328050: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x328050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328054: 0x50a70003  beql        $a1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x328054u;
    {
        const bool branch_taken_0x328054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x328054) {
            ctx->pc = 0x328058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328054u;
            // 0x328058: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328064u;
            goto label_328064;
        }
    }
    ctx->pc = 0x32805Cu;
    // 0x32805c: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x32805Cu;
    {
        const bool branch_taken_0x32805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32805Cu;
            // 0x328060: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32805c) {
            ctx->pc = 0x328628u;
            goto label_328628;
        }
    }
    ctx->pc = 0x328064u;
label_328064:
    // 0x328064: 0x50830049  beql        $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x328064u;
    {
        const bool branch_taken_0x328064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328064) {
            ctx->pc = 0x328068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328064u;
            // 0x328068: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32818Cu;
            goto label_32818c;
        }
    }
    ctx->pc = 0x32806Cu;
    // 0x32806c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x328070: 0x5083003d  beql        $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x328070u;
    {
        const bool branch_taken_0x328070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328070) {
            ctx->pc = 0x328074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328070u;
            // 0x328074: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328168u;
            goto label_328168;
        }
    }
    ctx->pc = 0x328078u;
    // 0x328078: 0x5087002a  beql        $a0, $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x328078u;
    {
        const bool branch_taken_0x328078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x328078) {
            ctx->pc = 0x32807Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328078u;
            // 0x32807c: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328124u;
            goto label_328124;
        }
    }
    ctx->pc = 0x328080u;
    // 0x328080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x328080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328084: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x328084u;
    {
        const bool branch_taken_0x328084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328084) {
            ctx->pc = 0x328088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328084u;
            // 0x328088: 0x8e0500ec  lw          $a1, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3280E0u;
            goto label_3280e0;
        }
    }
    ctx->pc = 0x32808Cu;
    // 0x32808c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32808Cu;
    {
        const bool branch_taken_0x32808c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32808c) {
            ctx->pc = 0x328090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32808Cu;
            // 0x328090: 0x8e0500e8  lw          $a1, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32809Cu;
            goto label_32809c;
        }
    }
    ctx->pc = 0x328094u;
    // 0x328094: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x328094u;
    {
        const bool branch_taken_0x328094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328094) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x32809Cu;
label_32809c:
    // 0x32809c: 0x10a00161  beqz        $a1, . + 4 + (0x161 << 2)
    ctx->pc = 0x32809Cu;
    {
        const bool branch_taken_0x32809c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32809c) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3280A4u;
    // 0x3280a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3280a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3280a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3280a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280ac: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x3280acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3280b0: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3280B0u;
    SET_GPR_U32(ctx, 31, 0x3280B8u);
    ctx->pc = 0x3280B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3280B0u;
            // 0x3280b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3280B8u; }
        if (ctx->pc != 0x3280B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3280B8u; }
        if (ctx->pc != 0x3280B8u) { return; }
    }
    ctx->pc = 0x3280B8u;
label_3280b8:
    // 0x3280b8: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x3280b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x3280bc: 0x50a00159  beql        $a1, $zero, . + 4 + (0x159 << 2)
    ctx->pc = 0x3280BCu;
    {
        const bool branch_taken_0x3280bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3280bc) {
            ctx->pc = 0x3280C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3280BCu;
            // 0x3280c0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3280C4u;
    // 0x3280c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3280c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3280c8: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x3280C8u;
    SET_GPR_U32(ctx, 31, 0x3280D0u);
    ctx->pc = 0x3280CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3280C8u;
            // 0x3280cc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3280D0u; }
        if (ctx->pc != 0x3280D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3280D0u; }
        if (ctx->pc != 0x3280D0u) { return; }
    }
    ctx->pc = 0x3280D0u;
label_3280d0:
    // 0x3280d0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x3280d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x3280d4: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3280d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3280d8: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x3280D8u;
    {
        const bool branch_taken_0x3280d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3280d8) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3280E0u;
label_3280e0:
    // 0x3280e0: 0x10a00150  beqz        $a1, . + 4 + (0x150 << 2)
    ctx->pc = 0x3280E0u;
    {
        const bool branch_taken_0x3280e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3280e0) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3280E8u;
    // 0x3280e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3280e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3280ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3280ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280f0: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x3280f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3280f4: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3280F4u;
    SET_GPR_U32(ctx, 31, 0x3280FCu);
    ctx->pc = 0x3280F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3280F4u;
            // 0x3280f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3280FCu; }
        if (ctx->pc != 0x3280FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3280FCu; }
        if (ctx->pc != 0x3280FCu) { return; }
    }
    ctx->pc = 0x3280FCu;
label_3280fc:
    // 0x3280fc: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x3280fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x328100: 0x50a00148  beql        $a1, $zero, . + 4 + (0x148 << 2)
    ctx->pc = 0x328100u;
    {
        const bool branch_taken_0x328100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328100) {
            ctx->pc = 0x328104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328100u;
            // 0x328104: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328108u;
    // 0x328108: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x32810c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x32810Cu;
    SET_GPR_U32(ctx, 31, 0x328114u);
    ctx->pc = 0x328110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32810Cu;
            // 0x328110: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328114u; }
        if (ctx->pc != 0x328114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328114u; }
        if (ctx->pc != 0x328114u) { return; }
    }
    ctx->pc = 0x328114u;
label_328114:
    // 0x328114: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x328114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x328118: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x328118u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x32811c: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x32811Cu;
    {
        const bool branch_taken_0x32811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32811c) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328124u;
label_328124:
    // 0x328124: 0x10a0013f  beqz        $a1, . + 4 + (0x13F << 2)
    ctx->pc = 0x328124u;
    {
        const bool branch_taken_0x328124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328124) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x32812Cu;
    // 0x32812c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32812cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328134: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x328138: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x328138u;
    SET_GPR_U32(ctx, 31, 0x328140u);
    ctx->pc = 0x32813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328138u;
            // 0x32813c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328140u; }
        if (ctx->pc != 0x328140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328140u; }
        if (ctx->pc != 0x328140u) { return; }
    }
    ctx->pc = 0x328140u;
label_328140:
    // 0x328140: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x328140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x328144: 0x50a00137  beql        $a1, $zero, . + 4 + (0x137 << 2)
    ctx->pc = 0x328144u;
    {
        const bool branch_taken_0x328144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328144) {
            ctx->pc = 0x328148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328144u;
            // 0x328148: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x32814Cu;
    // 0x32814c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328150: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x328150u;
    SET_GPR_U32(ctx, 31, 0x328158u);
    ctx->pc = 0x328154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328150u;
            // 0x328154: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328158u; }
        if (ctx->pc != 0x328158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328158u; }
        if (ctx->pc != 0x328158u) { return; }
    }
    ctx->pc = 0x328158u;
label_328158:
    // 0x328158: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x328158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x32815c: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x32815cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x328160: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x328160u;
    {
        const bool branch_taken_0x328160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328160) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328168u;
label_328168:
    // 0x328168: 0x10a0012e  beqz        $a1, . + 4 + (0x12E << 2)
    ctx->pc = 0x328168u;
    {
        const bool branch_taken_0x328168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328168) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328170u;
    // 0x328170: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328174: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x328174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328178: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x32817c: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x32817Cu;
    SET_GPR_U32(ctx, 31, 0x328184u);
    ctx->pc = 0x328180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32817Cu;
            // 0x328180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328184u; }
        if (ctx->pc != 0x328184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328184u; }
        if (ctx->pc != 0x328184u) { return; }
    }
    ctx->pc = 0x328184u;
label_328184:
    // 0x328184: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x328184u;
    {
        const bool branch_taken_0x328184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328184u;
            // 0x328188: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328184) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x32818Cu;
label_32818c:
    // 0x32818c: 0x10a00125  beqz        $a1, . + 4 + (0x125 << 2)
    ctx->pc = 0x32818Cu;
    {
        const bool branch_taken_0x32818c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32818c) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328194u;
    // 0x328194: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328198: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x328198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32819c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x32819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3281a0: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3281A0u;
    SET_GPR_U32(ctx, 31, 0x3281A8u);
    ctx->pc = 0x3281A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3281A0u;
            // 0x3281a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3281A8u; }
        if (ctx->pc != 0x3281A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3281A8u; }
        if (ctx->pc != 0x3281A8u) { return; }
    }
    ctx->pc = 0x3281A8u;
label_3281a8:
    // 0x3281a8: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x3281A8u;
    {
        const bool branch_taken_0x3281a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3281ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3281A8u;
            // 0x3281ac: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281a8) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3281B0u;
label_3281b0:
    // 0x3281b0: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3281b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3281b4: 0x1020011b  beqz        $at, . + 4 + (0x11B << 2)
    ctx->pc = 0x3281B4u;
    {
        const bool branch_taken_0x3281b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3281b4) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3281BCu;
    // 0x3281bc: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3281bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x3281c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3281c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3281c4: 0x2484cfb0  addiu       $a0, $a0, -0x3050
    ctx->pc = 0x3281c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954928));
    // 0x3281c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3281c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3281cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3281ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3281d0: 0x600008  jr          $v1
    ctx->pc = 0x3281D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3281D8u: goto label_3281d8;
            case 0x328220u: goto label_328220;
            case 0x328248u: goto label_328248;
            case 0x328284u: goto label_328284;
            case 0x3282ACu: goto label_3282ac;
            case 0x3282D4u: goto label_3282d4;
            case 0x3282FCu: goto label_3282fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3281D8u;
label_3281d8:
    // 0x3281d8: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x3281d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x3281dc: 0x10a00111  beqz        $a1, . + 4 + (0x111 << 2)
    ctx->pc = 0x3281DCu;
    {
        const bool branch_taken_0x3281dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3281dc) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3281E4u;
    // 0x3281e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3281e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3281e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3281e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3281ec: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x3281ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3281f0: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3281F0u;
    SET_GPR_U32(ctx, 31, 0x3281F8u);
    ctx->pc = 0x3281F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3281F0u;
            // 0x3281f4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3281F8u; }
        if (ctx->pc != 0x3281F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3281F8u; }
        if (ctx->pc != 0x3281F8u) { return; }
    }
    ctx->pc = 0x3281F8u;
label_3281f8:
    // 0x3281f8: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x3281f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x3281fc: 0x50a00109  beql        $a1, $zero, . + 4 + (0x109 << 2)
    ctx->pc = 0x3281FCu;
    {
        const bool branch_taken_0x3281fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3281fc) {
            ctx->pc = 0x328200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3281FCu;
            // 0x328200: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328204u;
    // 0x328204: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328208: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x328208u;
    SET_GPR_U32(ctx, 31, 0x328210u);
    ctx->pc = 0x32820Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328208u;
            // 0x32820c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328210u; }
        if (ctx->pc != 0x328210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328210u; }
        if (ctx->pc != 0x328210u) { return; }
    }
    ctx->pc = 0x328210u;
label_328210:
    // 0x328210: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x328210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x328214: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x328214u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x328218: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x328218u;
    {
        const bool branch_taken_0x328218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328218) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328220u;
label_328220:
    // 0x328220: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x328220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x328224: 0x10a000ff  beqz        $a1, . + 4 + (0xFF << 2)
    ctx->pc = 0x328224u;
    {
        const bool branch_taken_0x328224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328224) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x32822Cu;
    // 0x32822c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32822cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328230: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x328230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328234: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x328238: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x328238u;
    SET_GPR_U32(ctx, 31, 0x328240u);
    ctx->pc = 0x32823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328238u;
            // 0x32823c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328240u; }
        if (ctx->pc != 0x328240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328240u; }
        if (ctx->pc != 0x328240u) { return; }
    }
    ctx->pc = 0x328240u;
label_328240:
    // 0x328240: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x328240u;
    {
        const bool branch_taken_0x328240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328240u;
            // 0x328244: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328240) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328248u;
label_328248:
    // 0x328248: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x328248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x32824c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x32824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x328250: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x328250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x328254: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x328254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x328258: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x328258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32825c: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x32825cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x328260: 0x10a000f0  beqz        $a1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x328260u;
    {
        const bool branch_taken_0x328260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328260) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328268u;
    // 0x328268: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x32826c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x32826cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328270: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x328274: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x328274u;
    SET_GPR_U32(ctx, 31, 0x32827Cu);
    ctx->pc = 0x328278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328274u;
            // 0x328278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32827Cu; }
        if (ctx->pc != 0x32827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32827Cu; }
        if (ctx->pc != 0x32827Cu) { return; }
    }
    ctx->pc = 0x32827Cu;
label_32827c:
    // 0x32827c: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x32827Cu;
    {
        const bool branch_taken_0x32827c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32827Cu;
            // 0x328280: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32827c) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328284u;
label_328284:
    // 0x328284: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x328284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x328288: 0x10a000e6  beqz        $a1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x328288u;
    {
        const bool branch_taken_0x328288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328288) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328290u;
    // 0x328290: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328294: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x328294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328298: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x32829c: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x32829Cu;
    SET_GPR_U32(ctx, 31, 0x3282A4u);
    ctx->pc = 0x3282A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32829Cu;
            // 0x3282a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3282A4u; }
        if (ctx->pc != 0x3282A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3282A4u; }
        if (ctx->pc != 0x3282A4u) { return; }
    }
    ctx->pc = 0x3282A4u;
label_3282a4:
    // 0x3282a4: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x3282A4u;
    {
        const bool branch_taken_0x3282a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3282A4u;
            // 0x3282a8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282a4) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3282ACu;
label_3282ac:
    // 0x3282ac: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x3282acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x3282b0: 0x10a000dc  beqz        $a1, . + 4 + (0xDC << 2)
    ctx->pc = 0x3282B0u;
    {
        const bool branch_taken_0x3282b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3282b0) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3282B8u;
    // 0x3282b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3282b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3282bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3282bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282c0: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x3282c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3282c4: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3282C4u;
    SET_GPR_U32(ctx, 31, 0x3282CCu);
    ctx->pc = 0x3282C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3282C4u;
            // 0x3282c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3282CCu; }
        if (ctx->pc != 0x3282CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3282CCu; }
        if (ctx->pc != 0x3282CCu) { return; }
    }
    ctx->pc = 0x3282CCu;
label_3282cc:
    // 0x3282cc: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x3282CCu;
    {
        const bool branch_taken_0x3282cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3282CCu;
            // 0x3282d0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282cc) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3282D4u;
label_3282d4:
    // 0x3282d4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x3282d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3282d8: 0x10a000d2  beqz        $a1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x3282D8u;
    {
        const bool branch_taken_0x3282d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3282d8) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3282E0u;
    // 0x3282e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3282e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3282e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3282e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282e8: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x3282e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3282ec: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3282ECu;
    SET_GPR_U32(ctx, 31, 0x3282F4u);
    ctx->pc = 0x3282F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3282ECu;
            // 0x3282f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3282F4u; }
        if (ctx->pc != 0x3282F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3282F4u; }
        if (ctx->pc != 0x3282F4u) { return; }
    }
    ctx->pc = 0x3282F4u;
label_3282f4:
    // 0x3282f4: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x3282F4u;
    {
        const bool branch_taken_0x3282f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3282F4u;
            // 0x3282f8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282f4) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3282FCu;
label_3282fc:
    // 0x3282fc: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x3282fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x328300: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x328300u;
    {
        const bool branch_taken_0x328300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x328300) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328308u;
    // 0x328308: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x328308u;
    {
        const bool branch_taken_0x328308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328308u;
            // 0x32830c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328308) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328310u;
label_328310:
    // 0x328310: 0x5087007a  beql        $a0, $a3, . + 4 + (0x7A << 2)
    ctx->pc = 0x328310u;
    {
        const bool branch_taken_0x328310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x328310) {
            ctx->pc = 0x328314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328310u;
            // 0x328314: 0x8e0500a0  lw          $a1, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3284FCu;
            goto label_3284fc;
        }
    }
    ctx->pc = 0x328318u;
    // 0x328318: 0x5083006f  beql        $a0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x328318u;
    {
        const bool branch_taken_0x328318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328318) {
            ctx->pc = 0x32831Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328318u;
            // 0x32831c: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3284D8u;
            goto label_3284d8;
        }
    }
    ctx->pc = 0x328320u;
    // 0x328320: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x328320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x328324: 0x50830063  beql        $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x328324u;
    {
        const bool branch_taken_0x328324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328324) {
            ctx->pc = 0x328328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328324u;
            // 0x328328: 0x8e050128  lw          $a1, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3284B4u;
            goto label_3284b4;
        }
    }
    ctx->pc = 0x32832Cu;
    // 0x32832c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328330: 0x5083002a  beql        $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x328330u;
    {
        const bool branch_taken_0x328330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328330) {
            ctx->pc = 0x328334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328330u;
            // 0x328334: 0x8e0500a4  lw          $a1, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3283DCu;
            goto label_3283dc;
        }
    }
    ctx->pc = 0x328338u;
    // 0x328338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x328338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32833c: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x32833Cu;
    {
        const bool branch_taken_0x32833c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32833c) {
            ctx->pc = 0x328340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32833Cu;
            // 0x328340: 0x8e0500f4  lw          $a1, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328398u;
            goto label_328398;
        }
    }
    ctx->pc = 0x328344u;
    // 0x328344: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x328344u;
    {
        const bool branch_taken_0x328344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328344) {
            ctx->pc = 0x328348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328344u;
            // 0x328348: 0x8e0500e8  lw          $a1, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328354u;
            goto label_328354;
        }
    }
    ctx->pc = 0x32834Cu;
    // 0x32834c: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x32834Cu;
    {
        const bool branch_taken_0x32834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32834c) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328354u;
label_328354:
    // 0x328354: 0x10a000b3  beqz        $a1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x328354u;
    {
        const bool branch_taken_0x328354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328354) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x32835Cu;
    // 0x32835c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328364: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x328368: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x328368u;
    SET_GPR_U32(ctx, 31, 0x328370u);
    ctx->pc = 0x32836Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328368u;
            // 0x32836c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328370u; }
        if (ctx->pc != 0x328370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328370u; }
        if (ctx->pc != 0x328370u) { return; }
    }
    ctx->pc = 0x328370u;
label_328370:
    // 0x328370: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x328370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x328374: 0x50a000ab  beql        $a1, $zero, . + 4 + (0xAB << 2)
    ctx->pc = 0x328374u;
    {
        const bool branch_taken_0x328374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328374) {
            ctx->pc = 0x328378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328374u;
            // 0x328378: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x32837Cu;
    // 0x32837c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32837cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328380: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x328380u;
    SET_GPR_U32(ctx, 31, 0x328388u);
    ctx->pc = 0x328384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328380u;
            // 0x328384: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328388u; }
        if (ctx->pc != 0x328388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328388u; }
        if (ctx->pc != 0x328388u) { return; }
    }
    ctx->pc = 0x328388u;
label_328388:
    // 0x328388: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x328388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x32838c: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x32838cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x328390: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x328390u;
    {
        const bool branch_taken_0x328390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328390) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328398u;
label_328398:
    // 0x328398: 0x10a000a2  beqz        $a1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x328398u;
    {
        const bool branch_taken_0x328398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328398) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3283A0u;
    // 0x3283a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3283a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3283a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3283a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283a8: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x3283a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3283ac: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3283ACu;
    SET_GPR_U32(ctx, 31, 0x3283B4u);
    ctx->pc = 0x3283B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3283ACu;
            // 0x3283b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3283B4u; }
        if (ctx->pc != 0x3283B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3283B4u; }
        if (ctx->pc != 0x3283B4u) { return; }
    }
    ctx->pc = 0x3283B4u;
label_3283b4:
    // 0x3283b4: 0x8e0500f4  lw          $a1, 0xF4($s0)
    ctx->pc = 0x3283b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x3283b8: 0x50a0009a  beql        $a1, $zero, . + 4 + (0x9A << 2)
    ctx->pc = 0x3283B8u;
    {
        const bool branch_taken_0x3283b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3283b8) {
            ctx->pc = 0x3283BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3283B8u;
            // 0x3283bc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3283C0u;
    // 0x3283c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3283c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3283c4: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x3283C4u;
    SET_GPR_U32(ctx, 31, 0x3283CCu);
    ctx->pc = 0x3283C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3283C4u;
            // 0x3283c8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3283CCu; }
        if (ctx->pc != 0x3283CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3283CCu; }
        if (ctx->pc != 0x3283CCu) { return; }
    }
    ctx->pc = 0x3283CCu;
label_3283cc:
    // 0x3283cc: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x3283ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x3283d0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3283d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3283d4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3283D4u;
    {
        const bool branch_taken_0x3283d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3283d4) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3283DCu;
label_3283dc:
    // 0x3283dc: 0x10a00091  beqz        $a1, . + 4 + (0x91 << 2)
    ctx->pc = 0x3283DCu;
    {
        const bool branch_taken_0x3283dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3283dc) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3283E4u;
    // 0x3283e4: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x3283e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x3283e8: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x3283E8u;
    {
        const bool branch_taken_0x3283e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3283e8) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3283F0u;
    // 0x3283f0: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x3283f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x3283f4: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x3283F4u;
    {
        const bool branch_taken_0x3283f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3283f4) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3283FCu;
    // 0x3283fc: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x3283fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x328400: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x328400u;
    {
        const bool branch_taken_0x328400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x328400) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328408u;
    // 0x328408: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x328408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x32840c: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x32840Cu;
    {
        const bool branch_taken_0x32840c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32840c) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328414u;
    // 0x328414: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x328414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x328418: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x328418u;
    {
        const bool branch_taken_0x328418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x328418) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328420u;
    // 0x328420: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328428: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x32842c: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x32842Cu;
    SET_GPR_U32(ctx, 31, 0x328434u);
    ctx->pc = 0x328430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32842Cu;
            // 0x328430: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328434u; }
        if (ctx->pc != 0x328434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328434u; }
        if (ctx->pc != 0x328434u) { return; }
    }
    ctx->pc = 0x328434u;
label_328434:
    // 0x328434: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328438: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x328438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x32843c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x32843cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x328440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328444: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x328444u;
    SET_GPR_U32(ctx, 31, 0x32844Cu);
    ctx->pc = 0x328448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328444u;
            // 0x328448: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32844Cu; }
        if (ctx->pc != 0x32844Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32844Cu; }
        if (ctx->pc != 0x32844Cu) { return; }
    }
    ctx->pc = 0x32844Cu;
label_32844c:
    // 0x32844c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32844cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328450: 0x8e0500ac  lw          $a1, 0xAC($s0)
    ctx->pc = 0x328450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x328454: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x328458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32845c: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x32845Cu;
    SET_GPR_U32(ctx, 31, 0x328464u);
    ctx->pc = 0x328460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32845Cu;
            // 0x328460: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328464u; }
        if (ctx->pc != 0x328464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328464u; }
        if (ctx->pc != 0x328464u) { return; }
    }
    ctx->pc = 0x328464u;
label_328464:
    // 0x328464: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328468: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x328468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x32846c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x32846cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x328470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328474: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x328474u;
    SET_GPR_U32(ctx, 31, 0x32847Cu);
    ctx->pc = 0x328478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328474u;
            // 0x328478: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32847Cu; }
        if (ctx->pc != 0x32847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32847Cu; }
        if (ctx->pc != 0x32847Cu) { return; }
    }
    ctx->pc = 0x32847Cu;
label_32847c:
    // 0x32847c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328480: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x328480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x328484: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x328488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32848c: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x32848Cu;
    SET_GPR_U32(ctx, 31, 0x328494u);
    ctx->pc = 0x328490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32848Cu;
            // 0x328490: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328494u; }
        if (ctx->pc != 0x328494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328494u; }
        if (ctx->pc != 0x328494u) { return; }
    }
    ctx->pc = 0x328494u;
label_328494:
    // 0x328494: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328498: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x328498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x32849c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x32849cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3284a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3284a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284a4: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3284A4u;
    SET_GPR_U32(ctx, 31, 0x3284ACu);
    ctx->pc = 0x3284A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3284A4u;
            // 0x3284a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3284ACu; }
        if (ctx->pc != 0x3284ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3284ACu; }
        if (ctx->pc != 0x3284ACu) { return; }
    }
    ctx->pc = 0x3284ACu;
label_3284ac:
    // 0x3284ac: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3284ACu;
    {
        const bool branch_taken_0x3284ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3284B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3284ACu;
            // 0x3284b0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3284ac) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3284B4u;
label_3284b4:
    // 0x3284b4: 0x10a0005b  beqz        $a1, . + 4 + (0x5B << 2)
    ctx->pc = 0x3284B4u;
    {
        const bool branch_taken_0x3284b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3284b4) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3284BCu;
    // 0x3284bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3284bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3284c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3284c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284c4: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x3284c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3284c8: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3284C8u;
    SET_GPR_U32(ctx, 31, 0x3284D0u);
    ctx->pc = 0x3284CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3284C8u;
            // 0x3284cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3284D0u; }
        if (ctx->pc != 0x3284D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3284D0u; }
        if (ctx->pc != 0x3284D0u) { return; }
    }
    ctx->pc = 0x3284D0u;
label_3284d0:
    // 0x3284d0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3284D0u;
    {
        const bool branch_taken_0x3284d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3284D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3284D0u;
            // 0x3284d4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3284d0) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3284D8u;
label_3284d8:
    // 0x3284d8: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x3284D8u;
    {
        const bool branch_taken_0x3284d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3284d8) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3284E0u;
    // 0x3284e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3284e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3284e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3284e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284e8: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x3284e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3284ec: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3284ECu;
    SET_GPR_U32(ctx, 31, 0x3284F4u);
    ctx->pc = 0x3284F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3284ECu;
            // 0x3284f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3284F4u; }
        if (ctx->pc != 0x3284F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3284F4u; }
        if (ctx->pc != 0x3284F4u) { return; }
    }
    ctx->pc = 0x3284F4u;
label_3284f4:
    // 0x3284f4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3284F4u;
    {
        const bool branch_taken_0x3284f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3284F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3284F4u;
            // 0x3284f8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3284f4) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3284FCu;
label_3284fc:
    // 0x3284fc: 0x10a00049  beqz        $a1, . + 4 + (0x49 << 2)
    ctx->pc = 0x3284FCu;
    {
        const bool branch_taken_0x3284fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3284fc) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328504u;
    // 0x328504: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328508: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x328508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32850c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x32850cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x328510: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x328510u;
    SET_GPR_U32(ctx, 31, 0x328518u);
    ctx->pc = 0x328514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328510u;
            // 0x328514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328518u; }
        if (ctx->pc != 0x328518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328518u; }
        if (ctx->pc != 0x328518u) { return; }
    }
    ctx->pc = 0x328518u;
label_328518:
    // 0x328518: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x328518u;
    {
        const bool branch_taken_0x328518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32851Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328518u;
            // 0x32851c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328518) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328520u;
label_328520:
    // 0x328520: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x328520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x328524: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x328524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x328528: 0x50830036  beql        $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x328528u;
    {
        const bool branch_taken_0x328528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328528) {
            ctx->pc = 0x32852Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328528u;
            // 0x32852c: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328604u;
            goto label_328604;
        }
    }
    ctx->pc = 0x328530u;
    // 0x328530: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x328530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328534: 0x5083002a  beql        $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x328534u;
    {
        const bool branch_taken_0x328534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328534) {
            ctx->pc = 0x328538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328534u;
            // 0x328538: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3285E0u;
            goto label_3285e0;
        }
    }
    ctx->pc = 0x32853Cu;
    // 0x32853c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328540: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x328540u;
    {
        const bool branch_taken_0x328540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328540) {
            ctx->pc = 0x328544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328540u;
            // 0x328544: 0x8e05010c  lw          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32859Cu;
            goto label_32859c;
        }
    }
    ctx->pc = 0x328548u;
    // 0x328548: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x328548u;
    {
        const bool branch_taken_0x328548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328548) {
            ctx->pc = 0x32854Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328548u;
            // 0x32854c: 0x8e0500e8  lw          $a1, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328558u;
            goto label_328558;
        }
    }
    ctx->pc = 0x328550u;
    // 0x328550: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x328550u;
    {
        const bool branch_taken_0x328550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328550) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328558u;
label_328558:
    // 0x328558: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x328558u;
    {
        const bool branch_taken_0x328558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328558) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328560u;
    // 0x328560: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328568: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x32856c: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x32856Cu;
    SET_GPR_U32(ctx, 31, 0x328574u);
    ctx->pc = 0x328570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32856Cu;
            // 0x328570: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328574u; }
        if (ctx->pc != 0x328574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328574u; }
        if (ctx->pc != 0x328574u) { return; }
    }
    ctx->pc = 0x328574u;
label_328574:
    // 0x328574: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x328574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x328578: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x328578u;
    {
        const bool branch_taken_0x328578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328578) {
            ctx->pc = 0x32857Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328578u;
            // 0x32857c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328580u;
    // 0x328580: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328584: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x328584u;
    SET_GPR_U32(ctx, 31, 0x32858Cu);
    ctx->pc = 0x328588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328584u;
            // 0x328588: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32858Cu; }
        if (ctx->pc != 0x32858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32858Cu; }
        if (ctx->pc != 0x32858Cu) { return; }
    }
    ctx->pc = 0x32858Cu;
label_32858c:
    // 0x32858c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x32858cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x328590: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x328590u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x328594: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x328594u;
    {
        const bool branch_taken_0x328594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328594) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x32859Cu;
label_32859c:
    // 0x32859c: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x32859Cu;
    {
        const bool branch_taken_0x32859c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32859c) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3285A4u;
    // 0x3285a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3285a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3285a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3285a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285ac: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x3285acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3285b0: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3285B0u;
    SET_GPR_U32(ctx, 31, 0x3285B8u);
    ctx->pc = 0x3285B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3285B0u;
            // 0x3285b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3285B8u; }
        if (ctx->pc != 0x3285B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3285B8u; }
        if (ctx->pc != 0x3285B8u) { return; }
    }
    ctx->pc = 0x3285B8u;
label_3285b8:
    // 0x3285b8: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x3285b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x3285bc: 0x50a00019  beql        $a1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3285BCu;
    {
        const bool branch_taken_0x3285bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3285bc) {
            ctx->pc = 0x3285C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3285BCu;
            // 0x3285c0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3285C4u;
    // 0x3285c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3285c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3285c8: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x3285C8u;
    SET_GPR_U32(ctx, 31, 0x3285D0u);
    ctx->pc = 0x3285CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3285C8u;
            // 0x3285cc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3285D0u; }
        if (ctx->pc != 0x3285D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3285D0u; }
        if (ctx->pc != 0x3285D0u) { return; }
    }
    ctx->pc = 0x3285D0u;
label_3285d0:
    // 0x3285d0: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x3285d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x3285d4: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3285d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3285d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3285D8u;
    {
        const bool branch_taken_0x3285d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3285d8) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3285E0u;
label_3285e0:
    // 0x3285e0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3285E0u;
    {
        const bool branch_taken_0x3285e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3285e0) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x3285E8u;
    // 0x3285e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3285e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3285ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3285ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285f0: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x3285f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x3285f4: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x3285F4u;
    SET_GPR_U32(ctx, 31, 0x3285FCu);
    ctx->pc = 0x3285F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3285F4u;
            // 0x3285f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3285FCu; }
        if (ctx->pc != 0x3285FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3285FCu; }
        if (ctx->pc != 0x3285FCu) { return; }
    }
    ctx->pc = 0x3285FCu;
label_3285fc:
    // 0x3285fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3285FCu;
    {
        const bool branch_taken_0x3285fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3285FCu;
            // 0x328600: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3285fc) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x328604u;
label_328604:
    // 0x328604: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x328604u;
    {
        const bool branch_taken_0x328604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328604) {
            ctx->pc = 0x328624u;
            goto label_328624;
        }
    }
    ctx->pc = 0x32860Cu;
    // 0x32860c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328610: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x328610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328614: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x328614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x328618: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x328618u;
    SET_GPR_U32(ctx, 31, 0x328620u);
    ctx->pc = 0x32861Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328618u;
            // 0x32861c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328620u; }
        if (ctx->pc != 0x328620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328620u; }
        if (ctx->pc != 0x328620u) { return; }
    }
    ctx->pc = 0x328620u;
label_328620:
    // 0x328620: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x328620u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_328624:
    // 0x328624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_328628:
    // 0x328628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32862c: 0x3e00008  jr          $ra
    ctx->pc = 0x32862Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32862Cu;
            // 0x328630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x328634u;
    // 0x328634: 0x0  nop
    ctx->pc = 0x328634u;
    // NOP
    // 0x328638: 0x0  nop
    ctx->pc = 0x328638u;
    // NOP
    // 0x32863c: 0x0  nop
    ctx->pc = 0x32863cu;
    // NOP
}
